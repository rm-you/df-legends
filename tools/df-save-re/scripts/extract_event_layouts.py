#!/usr/bin/env python3
"""Extract on-disk event layouts from decompiled history_event read_file functions.

Reads ghidra_decompiles/event_vtables.json, opens each slot_0x120 (read_file)
decompile, and emits ghidra_decompiles/event_layouts.json with the ordered
field list per event tag.

Recognized read primitives (source order preserved):
  FUN_1405bba90(param_2, param_1 + OFF, N)   -> scalar field {mem_offset, size}
  FUN_1405bba90(param_2, &local_X, N)        -> temp read (vector count etc.)
  FUN_140002380(param_1 + OFF, param_2)      -> byte vector (count + bytes)
  FUN_140002250(param_2, param_1 + OFF)      -> int32 vector (count + count*4)
  FUN_140002140(param_2, param_1 + OFF)      -> int16 vector (count + count*2)
  FUN_1405bbb80(...)                          -> string
  FUN_140315ac0(...)                          -> language_name

Version gates: fields inside `if (0xNNN < param_3) {` get "version_gt".
The common base prefix (+8 year, +0xc seconds, flags vec @+0x10, +0x20 id)
is emitted with "base": true so consumers can skip or verify it.
"""
from __future__ import annotations

import json
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
DECOMPILES = ROOT / "ghidra_decompiles"

SCALAR = re.compile(
    r"FUN_1405bba90\s*\(\s*param_2\s*,\s*param_1\s*\+\s*(0x[0-9a-fA-F]+|\d+)\s*,\s*(0x[0-9a-fA-F]+|\d+)\s*\)"
)
TEMP = re.compile(
    r"FUN_1405bba90\s*\(\s*param_2\s*,\s*&?(\w+)\s*,\s*(0x[0-9a-fA-F]+|\d+)\s*\)"
)
BYTE_VEC = re.compile(
    r"FUN_140002380\s*\(\s*param_1\s*\+\s*(0x[0-9a-fA-F]+|\d+)\s*,\s*param_2\s*\)"
)
I32_VEC = re.compile(
    r"FUN_140002250\s*\(\s*param_2\s*,\s*param_1\s*\+\s*(0x[0-9a-fA-F]+|\d+)\s*\)"
)
I16_VEC = re.compile(
    r"FUN_140002140\s*\(\s*param_2\s*,\s*param_1\s*\+\s*(0x[0-9a-fA-F]+|\d+)\s*\)"
)
STRING = re.compile(r"FUN_1405bbb80\s*\(\s*param_2\s*,\s*param_1\s*\+\s*(0x[0-9a-fA-F]+|\d+)")
LANG_NAME = re.compile(r"FUN_140315ac0\s*\(\s*param_2\s*,\s*param_1\s*\+\s*(0x[0-9a-fA-F]+|\d+)")
GATE_OPEN = re.compile(r"if\s*\(\s*(0x[0-9a-fA-F]+|\d+)\s*<\s*param_3\s*\)\s*\{")
UNKNOWN_CALL = re.compile(r"(FUN_14[0-9a-f]{7})\s*\(")

KNOWN_HELPERS = {
    "FUN_1405bba90",  # scalar read
    "FUN_1405bb7c0",  # scalar write (writer files only)
    "FUN_140002380",  # byte vector
    "FUN_140002250",  # i32 vector
    "FUN_140002140",  # i16 vector
    "FUN_1405bbb80",  # string
    "FUN_140315ac0",  # language_name
    "FUN_14000b9d0",  # vector resize (called inside helpers)
    "FUN_14000bd10",
    "FUN_14000bed0",
}

BASE_PREFIX = [
    (0x08, "scalar", 4),
    (0x0C, "scalar", 4),
    (0x10, "byte_vector", None),
    (0x20, "scalar", 4),
]

SIZE_KIND = {1: "u8", 2: "i16", 4: "i32", 8: "i64"}


def _int(s: str) -> int:
    return int(s, 16 if s.lower().startswith("0x") else 10)


def extract_fields(text: str, self_addr: str | None = None) -> tuple[list[dict], list[str]]:
    """Return (fields, unknown_calls) for one read_file decompile body."""
    fields: list[dict] = []
    unknowns: list[str] = []
    # gate_stack holds (version_gt, brace_depth_at_open)
    gate_stack: list[tuple[int, int]] = []
    depth = 0

    for line in text.splitlines():
        if line.lstrip().startswith("//"):
            continue
        # track version gates before counting braces on this line
        gate = GATE_OPEN.search(line)
        active_gate = gate_stack[-1][0] if gate_stack else None

        def add(kind: str, off: int | None, size: int | None = None) -> None:
            fields.append(
                {
                    "mem_offset": off,
                    "kind": kind,
                    "size": size,
                    "version_gt": hex(active_gate) if active_gate is not None else None,
                }
            )

        m = SCALAR.search(line)
        if m:
            add(SIZE_KIND.get(_int(m.group(2)), f"bytes({_int(m.group(2))})"), _int(m.group(1)), _int(m.group(2)))
        elif BYTE_VEC.search(line):
            add("byte_vector", _int(BYTE_VEC.search(line).group(1)))
        elif I32_VEC.search(line):
            add("i32_vector", _int(I32_VEC.search(line).group(1)))
        elif I16_VEC.search(line):
            add("i16_vector", _int(I16_VEC.search(line).group(1)))
        elif STRING.search(line):
            add("string", _int(STRING.search(line).group(1)))
        elif LANG_NAME.search(line):
            add("language_name", _int(LANG_NAME.search(line).group(1)))
        else:
            tm = TEMP.search(line)
            if tm and tm.group(1).startswith("local"):
                add("temp", None, _int(tm.group(2)))
            else:
                for call in UNKNOWN_CALL.findall(line):
                    if call in KNOWN_HELPERS:
                        continue
                    addr = call.removeprefix("FUN_")
                    if self_addr is not None and addr == self_addr:
                        continue  # own signature line
                    if (DECOMPILES / f"{addr}.c").exists():
                        # shared base/sibling reader — expand at fold time
                        fields.append(
                            {
                                "mem_offset": None,
                                "kind": "call",
                                "target": addr,
                                "size": None,
                                "version_gt": hex(active_gate) if active_gate is not None else None,
                            }
                        )
                    else:
                        unknowns.append(call)

        # brace bookkeeping (after field capture; gate applies from next line)
        depth += line.count("{") - line.count("}")
        if gate:
            gate_stack.append((_int(gate.group(1)), depth))
        while gate_stack and depth < gate_stack[-1][1]:
            gate_stack.pop()

    return fields, sorted(set(unknowns))


def mark_base_prefix(fields: list[dict]) -> None:
    """Tag the standard event-base fields (year, seconds, flags, id)."""
    expected = iter(BASE_PREFIX)
    exp = next(expected, None)
    for f in fields:
        if exp is None:
            break
        off, kind, size = exp
        matches = f["mem_offset"] == off and (
            (kind == "scalar" and f["size"] == size) or f["kind"] == kind
        )
        if matches:
            f["base"] = True
            exp = next(expected, None)
        else:
            break


def main() -> None:
    vtables = json.loads((DECOMPILES / "event_vtables.json").read_text())
    registry = json.loads((DECOMPILES / "event_registry.json").read_text())
    registry_tags = {e["tag"] for e in registry}

    out: list[dict] = []
    missing: list[int] = []
    all_unknowns: dict[str, list[int]] = {}

    for e in vtables:
        tag = e["tag"]
        read_addr = e.get("slot_0x120")
        entry: dict = {
            "tag": tag,
            "symbol": e["symbol"],
            "inst_size": e.get("inst_size"),
            "read_file": read_addr,
            "write_file": e.get("slot_0x118"),
        }
        cpath = DECOMPILES / f"{read_addr}.c" if read_addr else None
        if cpath is None or not cpath.exists():
            entry["error"] = "read_file decompile missing"
            missing.append(tag)
            out.append(entry)
            continue
        fields, unknowns = extract_fields(
            cpath.read_text(encoding="utf-8", errors="replace"), self_addr=read_addr
        )
        mark_base_prefix(fields)
        entry["fields"] = fields
        if not fields:
            entry["empty_body"] = True
        if unknowns:
            entry["unknown_calls"] = unknowns
            for u in unknowns:
                all_unknowns.setdefault(u, []).append(tag)
        out.append(entry)

    (DECOMPILES / "event_layouts.json").write_text(json.dumps(out, indent=1))
    with_fields = sum(1 for e in out if e.get("fields"))
    print(f"wrote event_layouts.json: {len(out)} entries, {with_fields} with fields, {len(missing)} missing decompile")
    if missing:
        print("missing:", missing)
    covered = {e["tag"] for e in out}
    gap = registry_tags - covered
    if gap:
        print("registry tags without layout:", sorted(gap))
    if all_unknowns:
        print("unknown helper calls:")
        for k, tags in sorted(all_unknowns.items()):
            print(f"  {k}: tags {tags}")


if __name__ == "__main__":
    main()
