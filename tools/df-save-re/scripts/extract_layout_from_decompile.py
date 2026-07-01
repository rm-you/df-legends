#!/usr/bin/env python3
"""Extract FUN_1405bba90 / FUN_1405bb7c0 read/write sequences from a decompile .c file.

Usage:
  python scripts/extract_layout_from_decompile.py ghidra_decompiles/14070a9d0.c
"""
from __future__ import annotations

import re
import sys
from pathlib import Path

READ = re.compile(
    r"FUN_1405bba90\s*\(\s*param_2\s*,\s*param_1\s*\+\s*(0x[0-9a-fA-F]+|\d+)\s*,\s*(0x[0-9a-fA-F]+|\d+)\s*\)"
)
WRITE = re.compile(
    r"FUN_1405bb7c0\s*\(\s*param_2\s*,\s*local_res\w+\s*,\s*(0x[0-9a-fA-F]+|\d+)\s*\)"
)
# reader also uses param_1 + offset without param_2 first in some patterns
READ2 = re.compile(
    r"FUN_1405bba90\s*\(\s*param_2\s*,\s*&?\w+\s*,\s*(0x[0-9a-fA-F]+|\d+)\s*\)"
)
BYTE_FLAG = re.compile(
    r"FUN_1405bba90\s*\(\s*param_2\s*,\s*local_res\w+\s*,\s*1\s*\)"
)


def _parse_int(s: str) -> int:
    return int(s, 16 if s.lower().startswith("0x") else 10)


def extract_reads(path: Path) -> list[dict]:
    text = path.read_text(encoding="utf-8", errors="replace")
    out: list[dict] = []
    for i, line in enumerate(text.splitlines(), 1):
        m = READ.search(line)
        if m:
            off = _parse_int(m.group(1))
            size = _parse_int(m.group(2))
            out.append({"line": i, "mem_offset": off, "size": size, "kind": size_kind(size)})
            continue
        m2 = READ2.search(line)
        if m2 and "local_res" in line:
            size = _parse_int(m2.group(1))
            out.append({"line": i, "mem_offset": None, "size": size, "kind": size_kind(size), "note": "temp"})
    return out


def size_kind(n: int) -> str:
    return {1: "u8", 2: "i16", 4: "i32"}.get(n, f"bytes({n})")


def main() -> None:
    if len(sys.argv) < 2:
        print("usage: extract_layout_from_decompile.py <path/to/decompile.c>")
        raise SystemExit(1)
    path = Path(sys.argv[1])
    reads = extract_reads(path)
    print(f"# layout from {path.name} ({len(reads)} FUN_1405bba90 reads)")
    for r in reads:
        off = r.get("mem_offset")
        off_s = f"+0x{off:x}" if off is not None else "?"
        print(f"  L{r['line']:4d}  {off_s:8s}  {r['kind']:4s}  {r.get('note','')}")


if __name__ == "__main__":
    main()
