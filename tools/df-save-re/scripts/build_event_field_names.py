#!/usr/bin/env python3
"""Map event layout mem_offsets to df-structures field names.

Computes the in-memory MSVC x64 layout of every ``history_event_*st`` class
(vtable pointer at 0, inherited fields first) and matches the decompile-derived
save-field ``mem_offset``s to field names. Writes
``ghidra_decompiles/event_field_names.json``:

    {"<tag>": {"symbol": ..., "names": {"<mem_offset>": "field_name"}}}
"""
from __future__ import annotations

import json
from pathlib import Path

from df_save_re.structures.xml_fields import (
    FieldDef,
    load_struct,
    resolve_fields,
    _load_enum_bases,  # noqa: PLC2701 - build script reuses parser internals
    _scalar_width,
)

ROOT = Path(__file__).resolve().parent.parent
XML_DIR = ROOT.parent.parent / "data" / "df-structures"
LAYOUTS = ROOT / "ghidra_decompiles" / "event_layouts.json"
OUT = ROOT / "ghidra_decompiles" / "event_field_names.json"

# Compounds defined C++-side (not in the vendored XML subset): size + member names.
_EXTERN_COMPOUNDS: dict[str, tuple[int, list[str]]] = {
    "punishmentst": (12, ["hammerstrikes", "prison_time", "give_beating"]),
}

_SCALARS = {
    "int8_t": 1, "uint8_t": 1, "bool": 1,
    "int16_t": 2, "uint16_t": 2,
    "int32_t": 4, "uint32_t": 4, "s-float": 4,
    "int64_t": 8, "uint64_t": 8, "d-float": 8, "size_t": 8, "long": 4,
}


def _enum_width(fd: FieldDef) -> int:
    if fd.base_type:
        w = _scalar_width(fd.base_type)
        if w:
            return w
    if fd.type_name:
        base = _load_enum_bases(XML_DIR).get(fd.type_name)
        if base:
            w = _scalar_width(base)
            if w:
                return w
    return 4


def _size_align(fd: FieldDef) -> tuple[int, int]:
    """(size, alignment) of a field in memory (MSVC x64)."""
    k = fd.kind
    if k in _SCALARS:
        w = _SCALARS[k]
        return w, w
    if k in ("enum", "bitfield"):
        w = _enum_width(fd)
        return w, w
    if k in ("pointer", "ptr-string"):
        return 8, 8
    if k == "stl-string":
        return 32, 8
    if k in ("stl-vector", "stl-deque", "stl-set", "df-array"):
        # std::vector = 24; deque/set differ but none appear in events
        return {"stl-vector": 24, "stl-deque": 40, "stl-set": 16, "df-array": 12}[k], 8
    if k == "stl-bit-vector":
        return 40, 8
    if k in ("df-flagarray", "df-static-flagarray"):
        return 16, 8
    if k == "static-string":
        return fd.array_count or 0, 1
    if k == "static-array":
        esz, eal = _elem_size_align(fd)
        return esz * (fd.array_count or 0), eal
    if k == "compound":
        if fd.type_name:
            known = _EXTERN_COMPOUNDS.get(fd.type_name)
            if known is not None:
                return known[0], 4
            sub = load_struct(fd.type_name, XML_DIR)
            if sub is not None:
                fields = resolve_fields(sub, XML_DIR)
                sz, al, _ = _lay_out(fields, 0, union=sub.is_union)
                return sz, al
            # id unions (circumstance_id, history_event_reason_id, ...) are
            # C++-side unions of int32 ids not present in the vendored XML.
            return 4, 4
        sz, al, _ = _lay_out(fd.children, 0, union=fd.is_union)
        return sz, al
    if k == "flag-bit":
        return 0, 1
    if k == "padding":
        return fd.array_count or 0, 1
    raise ValueError(f"unhandled kind {k} for {fd.name}")


def _elem_size_align(fd: FieldDef) -> tuple[int, int]:
    if fd.type_name:
        w = _SCALARS.get(fd.type_name)
        if w:
            return w, w
        sub = load_struct(fd.type_name, XML_DIR)
        if sub is not None:
            fields = resolve_fields(sub, XML_DIR)
            sz, al, _ = _lay_out(fields, 0)
            return sz, al
    if fd.children:
        child = fd.children[0]
        return _size_align(child)
    return 4, 4


def _lay_out(
    fields: list[FieldDef],
    start: int,
    *,
    union: bool = False,
    prefix: str = "",
) -> tuple[int, int, dict[int, str]]:
    """Lay out fields from ``start``; return (end_size, max_align, offset->name)."""
    names: dict[int, str] = {}
    off = start
    max_align = 1
    max_end = start
    for fd in fields:
        sz, al = _size_align(fd)
        if sz == 0:
            continue
        max_align = max(max_align, al)
        pos = start if union else (off + al - 1) // al * al
        names[pos] = prefix + fd.name
        if fd.kind == "compound":
            if fd.is_union and fd.children:
                # Flatten the largest union member (covers all written slots).
                biggest = max(fd.children, key=lambda c: _size_align(c)[0])
                members = biggest.children or [biggest]
                _, _, sub = _lay_out(members, pos, prefix=prefix + fd.name + ".")
                for o, nm in sub.items():
                    names.setdefault(o, nm)
            elif fd.type_name and fd.type_name in _EXTERN_COMPOUNDS:
                member_names = _EXTERN_COMPOUNDS[fd.type_name][1]
                for i, nm in enumerate(member_names):
                    names.setdefault(pos + 4 * i, f"{prefix}{fd.name}.{nm}")
            else:
                children = fd.children
                if fd.type_name:
                    sub_struct = load_struct(fd.type_name, XML_DIR)
                    if sub_struct is not None and not sub_struct.is_union:
                        children = resolve_fields(sub_struct, XML_DIR)
                    else:
                        children = []
                if children:
                    _, _, sub = _lay_out(children, pos, prefix=prefix + fd.name + ".")
                    names.update(sub)
        end = pos + sz
        max_end = max(max_end, end)
        if not union:
            off = end
    total = (max_end - start + max_align - 1) // max_align * max_align
    return total, max_align, names


def _own_fields(struct) -> list[FieldDef]:
    out = []
    for fd in struct.fields:
        if fd.kind == "virtual-methods":
            break
        out.append(fd)
    from df_save_re.structures.xml_fields import field_active

    return [fd for fd in out if field_active(fd)]


def compute_names(symbol: str) -> dict[int, str] | None:
    """In-memory offsets, honoring MSVC class-boundary padding (align 8)."""
    chain = []
    name = symbol
    while name:
        s = load_struct(name, XML_DIR)
        if s is None:
            return None if name == symbol else _finish(chain)
        chain.append(s)
        name = s.inherits
    return _finish(chain)


def _finish(chain) -> dict[int, str]:
    names: dict[int, str] = {}
    off = 8  # vtable pointer
    for s in reversed(chain):
        size, _, sub = _lay_out(_own_fields(s), off)
        names.update(sub)
        off = (off + size + 7) // 8 * 8  # derived fields start at padded base size
    return names


def main() -> None:
    layouts = json.loads(LAYOUTS.read_text(encoding="utf-8"))
    out: dict[str, dict] = {}
    total_fields = 0
    matched = 0
    misses: list[str] = []
    for e in layouts:
        names = compute_names(e["symbol"]) or {}
        entry_names: dict[str, str] = {}
        for f in e["fields"]:
            mo = f.get("mem_offset")
            if mo is None:
                continue
            total_fields += 1
            name = names.get(mo)
            if name is None:
                misses.append(f"tag {e['tag']} {e['symbol']} mem_offset {mo} kind {f['kind']}")
            else:
                matched += 1
                entry_names[str(mo)] = name
        # Base-call expansion fields (masterpiece events): base 8/12/16/32 + 40..52
        for mo, nm in names.items():
            entry_names.setdefault(str(mo), nm)
        out[str(e["tag"])] = {"symbol": e["symbol"], "names": entry_names}
    OUT.write_text(json.dumps(out, indent=1) + "\n", encoding="utf-8")
    print(f"matched {matched}/{total_fields} layout fields to names")
    for m in misses[:40]:
        print("  MISS", m)
    if len(misses) > 40:
        print(f"  ... {len(misses) - 40} more")
    print(f"wrote {OUT}")


if __name__ == "__main__":
    main()
