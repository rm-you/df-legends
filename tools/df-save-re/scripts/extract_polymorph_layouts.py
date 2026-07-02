#!/usr/bin/env python3
"""Extract on-disk layouts from factory vtables + read_file decompiles.

Usage:
  python scripts/extract_polymorph_layouts.py \\
    --vtables collection_vtables.json \\
    --out collection_layouts.json \\
    --read-slot slot_0x18 \\
    --base-call 140083d80

Also used for link vtables (no base-call) and can regenerate event layouts.
"""
from __future__ import annotations

import argparse
import json
import re
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
STL_STRING = re.compile(
    r"FUN_1405bb6d0\s*\(\s*param_2\s*,\s*param_1\s*\+\s*(0x[0-9a-fA-F]+|\d+)\s*\)"
)
LANG_NAME = re.compile(r"FUN_140315ac0\s*\(\s*param_2\s*,\s*param_1\s*\+\s*(0x[0-9a-fA-F]+|\d+)")
GATE_OPEN = re.compile(r"if\s*\(\s*(0x[0-9a-fA-F]+|\d+)\s*<\s*param_3\s*\)\s*\{")
UNKNOWN_CALL = re.compile(r"(FUN_14[0-9a-f]{7})\s*\(")

KNOWN_HELPERS = {
    "FUN_1405bba90",
    "FUN_1405bb7c0",
    "FUN_140002380",
    "FUN_140002250",
    "FUN_140002140",
    "FUN_1405bbb80",
    "FUN_1405bb6d0",
    "FUN_140315ac0",
    "FUN_14000b9d0",
    "FUN_14000bd10",
    "FUN_14000bed0",
}

EVENT_BASE_PREFIX = [
    (0x08, "scalar", 4),
    (0x0C, "scalar", 4),
    (0x10, "byte_vector", None),
    (0x20, "scalar", 4),
]

SIZE_KIND = {1: "u8", 2: "i16", 4: "i32", 8: "i64"}


def _int(s: str) -> int:
    return int(s, 16 if s.lower().startswith("0x") else 10)


def extract_fields(text: str, *, self_addr: str | None = None) -> tuple[list[dict], list[str]]:
    fields: list[dict] = []
    unknowns: list[str] = []
    gate_stack: list[tuple[int, int]] = []
    depth = 0

    for line in text.splitlines():
        if line.lstrip().startswith("//"):
            continue
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
            add(SIZE_KIND.get(_int(m.group(2)), f"bytes{_int(m.group(2))}"), _int(m.group(1)), _int(m.group(2)))
        elif BYTE_VEC.search(line):
            add("byte_vector", _int(BYTE_VEC.search(line).group(1)))
        elif I32_VEC.search(line):
            add("i32_vector", _int(I32_VEC.search(line).group(1)))
        elif I16_VEC.search(line):
            add("i16_vector", _int(I16_VEC.search(line).group(1)))
        elif STL_STRING.search(line):
            add("stl_string", _int(STL_STRING.search(line).group(1)))
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
                        continue
                    if (DECOMPILES / f"{addr}.c").exists():
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

        depth += line.count("{") - line.count("}")
        if gate:
            gate_stack.append((_int(gate.group(1)), depth))
        while gate_stack and depth < gate_stack[-1][1]:
            gate_stack.pop()

    return fields, sorted(set(unknowns))


def mark_event_base_prefix(fields: list[dict]) -> None:
    expected = iter(EVENT_BASE_PREFIX)
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
    ap = argparse.ArgumentParser()
    ap.add_argument("--vtables", required=True)
    ap.add_argument("--out", required=True)
    ap.add_argument("--read-slot", default="slot_0x120")
    ap.add_argument("--write-slot", default="slot_0x118")
    ap.add_argument("--base-call", default=None, help="Expand call delegation target (hex, no FUN_)")
    ap.add_argument("--mark-event-base", action="store_true")
    args = ap.parse_args()

    vtables = json.loads((DECOMPILES / args.vtables).read_text())
    out: list[dict] = []
    missing: list[int] = []
    all_unknowns: dict[str, list[int]] = {}

    for e in vtables:
        tag = e["tag"]
        read_addr = e.get(args.read_slot)
        entry: dict = {
            "tag": tag,
            "symbol": e["symbol"],
            "inst_size": e.get("inst_size"),
            "read_file": read_addr,
            "write_file": e.get(args.write_slot),
        }
        cpath = DECOMPILES / f"{read_addr}.c" if read_addr else None
        if cpath is None or not cpath.exists():
            entry["error"] = "read_file decompile missing"
            missing.append(tag)
            out.append(entry)
            continue
        fields, unknowns = extract_fields(
            cpath.read_text(encoding="utf-8", errors="replace"),
            self_addr=read_addr,
        )
        if args.mark_event_base:
            mark_event_base_prefix(fields)
        entry["fields"] = fields
        if not fields:
            entry["empty_body"] = True
        if unknowns:
            entry["unknown_calls"] = unknowns
            for u in unknowns:
                all_unknowns.setdefault(u, []).append(tag)
        out.append(entry)

    (DECOMPILES / args.out).write_text(json.dumps(out, indent=1))
    with_fields = sum(1 for e in out if e.get("fields"))
    print(f"wrote {args.out}: {len(out)} entries, {with_fields} with fields, {len(missing)} missing decompile")
    if missing:
        print("missing tags:", missing)
    if all_unknowns:
        print("unknown helper calls:")
        for k, tags in sorted(all_unknowns.items()):
            print(f"  {k}: tags {tags}")


if __name__ == "__main__":
    main()
