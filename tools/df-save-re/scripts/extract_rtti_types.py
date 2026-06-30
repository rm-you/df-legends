#!/usr/bin/env python3
"""Extract Itanium ABI typeinfo names from a DF binary (history_event*, etc.)."""

from __future__ import annotations

import argparse
import re
import subprocess
from pathlib import Path

# Matches mangled type names like "31history_event_war_attacked_sitest"
RTTI_RE = re.compile(r"^(\d+)(history_event_[a-z0-9_]+)st$")


def extract_strings(binary: Path) -> list[str]:
    result = subprocess.run(
        ["strings", str(binary)],
        check=True,
        capture_output=True,
        text=True,
    )
    return result.stdout.splitlines()


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("binary", type=Path, help="Path to Dwarf_Fortress binary")
    parser.add_argument("-o", "--output", type=Path, required=True)
    parser.add_argument("--prefix", default="history_event_", help="Type name prefix filter")
    args = parser.parse_args()

    names: set[str] = set()
    for line in extract_strings(args.binary):
        m = RTTI_RE.match(line)
        if m and m.group(2).startswith(args.prefix):
            names.add(m.group(2))

    lines = sorted(names)
    args.output.write_text("\n".join(lines) + ("\n" if lines else ""))
    print(f"wrote {len(lines)} type(s) to {args.output}")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
