#!/usr/bin/env python3
"""Rebuild ghidra_decompiles/index.json from the committed <addr>.c headers.

Each decompile written by ghidra_scripts/DecompileWithCallees.java starts with:

    // <name> @ <entry>
    // callees:
    //   -> <callee_addr> <callee_name>
    ...
    <blank line>
    <decompiled C body>

This regenerates index.json (the machine-readable function map) from those
headers without re-running Ghidra, so the index stays in sync with the .c files
that are the source of truth. Entries are sorted by address for stable diffs.
"""
from __future__ import annotations

import json
import re
from pathlib import Path

DECOMP_DIR = Path(__file__).resolve().parent.parent / "ghidra_decompiles"

_HEADER = re.compile(r"^//\s*(\S+)\s*@\s*(\S+)\s*$")
_CALLEE = re.compile(r"^//\s*->\s*(.+?)\s*$")


def parse_decompile(path: Path) -> dict:
    name: str | None = None
    entry: str | None = None
    callees: list[str] = []
    in_callees = False

    with path.open(encoding="utf-8", errors="replace") as fh:
        for line in fh:
            line = line.rstrip("\n")
            if not line.startswith("//"):
                # First non-comment line ends the header block.
                if name is not None:
                    break
                continue
            m = _HEADER.match(line)
            if m and name is None:
                name, entry = m.group(1), m.group(2)
                continue
            if line.strip("/ ").startswith("callees:"):
                in_callees = True
                continue
            if in_callees:
                cm = _CALLEE.match(line)
                if cm:
                    callees.append(cm.group(1))

    addr = path.stem
    return {
        "addr": addr,
        "name": name,
        "entry": entry if entry is not None else addr,
        "callees": callees,
        "decompile_file": path.name,
    }


def main() -> None:
    entries = [
        parse_decompile(p)
        for p in sorted(DECOMP_DIR.glob("*.c"), key=lambda p: p.stem)
    ]
    index_path = DECOMP_DIR / "index.json"
    with index_path.open("w", encoding="utf-8", newline="\n") as fh:
        fh.write("[\n")
        for i, entry in enumerate(entries):
            comma = "," if i + 1 < len(entries) else ""
            fh.write("  " + json.dumps(entry, separators=(",", ":")) + comma + "\n")
        fh.write("]\n")
    print(f"wrote {len(entries)} entries to {index_path}")


if __name__ == "__main__":
    main()
