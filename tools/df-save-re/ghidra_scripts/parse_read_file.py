#!/usr/bin/env python3
"""Parse Ghidra decompiler snippets into ordered read calls (best-effort)."""

from __future__ import annotations

import argparse
import re
from pathlib import Path

READ_RE = re.compile(
    r"(?:read_int32|read_int16|read_bool|load_posnull|read_\w+)\s*\(",
    re.IGNORECASE,
)


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("decomp_file", type=Path)
    args = parser.parse_args()
    text = args.decomp_file.read_text(encoding="utf-8", errors="replace")
    for i, line in enumerate(text.splitlines(), 1):
        if READ_RE.search(line):
            print(f"{i:5d}: {line.strip()}")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
