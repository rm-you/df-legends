#!/usr/bin/env python3
"""Batch RTTI class-name scan via radare2 (run from repo root or df-save-re)."""

from __future__ import annotations

import argparse
import re
import subprocess
import sys
from pathlib import Path

RTTI_RE = re.compile(r"\.?\?AV([A-Za-z0-9_]+)@@")


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument(
        "--binary",
        type=Path,
        default=Path(r"C:\Users\rm_yo\Downloads\df_47_05_win\Dwarf Fortress.exe"),
    )
    parser.add_argument(
        "--r2",
        type=Path,
        default=Path(r"C:\Users\rm_yo\Downloads\radare2-6.1.8-w64\radare2-6.1.8-w64\bin\radare2.exe"),
    )
    parser.add_argument("--filter", default="", help="substring filter for class names")
    args = parser.parse_args()
    if not args.binary.is_file():
        print(f"missing binary: {args.binary}", file=sys.stderr)
        return 1
    cmd = [str(args.r2), "-q", "-e", "bin.relocs.apply=true", "-c", "iz", str(args.binary)]
    out = subprocess.check_output(cmd, text=True, errors="replace")
    hits: list[str] = []
    for line in out.splitlines():
        m = RTTI_RE.search(line)
        if not m:
            continue
        name = m.group(1)
        if args.filter and args.filter.lower() not in name.lower():
            continue
        hits.append(name)
    for name in sorted(set(hits)):
        print(name)
    print(f"# {len(set(hits))} types", file=sys.stderr)
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
