#!/usr/bin/env python3
"""
Static analysis helpers for DF 0.47.05 Linux save serialization RE.

Run against the extracted game binary:
  python scripts/analyze_binary.py /path/to/Dwarf_Fortress
"""

from __future__ import annotations

import argparse
import re
import struct
import subprocess
from pathlib import Path

# Discovered manually via objdump — paired read/write serializers
CATALOGUED_FUNCTIONS = [
    {
        "name": "MultiStringRecord0x50::read",
        "va": 0x5DA000,
        "write_va": 0x5D9EF0,
        "layout": (
            "int16@0; pad6; string@8; int32@10; "
            "string@18; string@20; string@28; string@30; "
            "int16@40; int16@42; int16@44; int32@48; int32@4c"
        ),
        "notes": "Five consecutive strings — likely generated-raw bundle or entity def",
    },
    {
        "name": "BlockWithByteVector::read",
        "va": 0x893AC0,
        "layout": "string@0; int32@8; byte_vector (int32 count + bytes)",
        "notes": "Reads magic string then byte payload — candidate region sub-block reader",
    },
    {
        "name": "StringTableEntry vector loader",
        "va": 0x410600,
        "layout": "int32 count; vector of {string@8, int32@10, int32@14, int32@18} per 0x20-byte object",
        "notes": "Loads string table sections after world header",
    },
]

REGION_MARKER_VAS = {
    "*START REGION SAVE*": 0x16059E6,
    "*START REGION DIM SAVE*": 0x16059FA,
    "*START REGION MAP SAVE*": 0x1605A12,
    "*START REGION GEOLOGY SAVE*": 0x1605A2A,
    "*START REGION SUBREGION SAVE*": 0x1605A46,
}

PLT = {
    "read_file(string)": 0x4056B0,
    "read_file(raw)": 0x4051B0,
    "write_file(string)": 0x405330,
    "write_file(raw)": 0x405650,
}


def extract_history_event_types(binary: Path) -> list[str]:
    result = subprocess.run(["strings", str(binary)], check=True, capture_output=True, text=True)
    types: set[str] = set()
    for line in result.stdout.splitlines():
        m = re.match(r"^(\d+)(history_event_[a-z0-9_]+)st$", line)
        if m:
            types.add(m.group(2))
    return sorted(types)


def count_plt_calls(binary: Path, plt_va: int) -> int:
    data = binary.read_bytes()
    # locate .text
    # simplified: scan entire file for CALL rel32 targeting plt_va
    count = 0
    for i in range(len(data) - 5):
        if data[i] != 0xE8:
            continue
        rel = struct.unpack_from("<i", data, i + 1)[0]
        # We don't have VA mapping here; skip accurate count in quick mode
    return count


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("binary", type=Path, nargs="?", default=None)
    parser.add_argument("--extract-events", type=Path, help="Write history_event type list to file")
    args = parser.parse_args()

    print("=== DF 0.47.05 Save Serialization RE Catalog ===\n")

    print("PLT stubs (Dwarf_Fortress):")
    for name, va in PLT.items():
        print(f"  {name}: 0x{va:x}")

    print("\nRegion marker rodata VAs:")
    for marker, va in REGION_MARKER_VAS.items():
        print(f"  {marker}: 0x{va:x}")

    print("\nCatalogued deserialize functions:")
    for entry in CATALOGUED_FUNCTIONS:
        print(f"  {entry['name']} @ 0x{entry['va']:x}")
        print(f"    layout: {entry['layout']}")
        if "write_va" in entry:
            print(f"    write @ 0x{entry['write_va']:x}")
        print(f"    notes: {entry['notes']}")

    print("\nfile_compressorst implementation: libgraphics.so (NOT stripped)")
    print("  read_file(string): 0xdb670")
    print("  read_file(raw):    0xdb570")
    print("  open_file:         0xdb7a0")

    if args.binary and args.binary.is_file():
        events = extract_history_event_types(args.binary)
        print(f"\nhistory_event subclasses in binary: {len(events)}")
        if args.extract_events:
            args.extract_events.write_text("\n".join(events) + "\n")
            print(f"  wrote {args.extract_events}")
    elif args.binary:
        print(f"\nwarning: binary not found: {args.binary}")

    print("\nNext Ghidra steps:")
    print("  1. Import Dwarf_Fortress + libgraphics.so (for file_compressorst source)")
    print("  2. Navigate to 0x893AC0 — region block reader (string + byte vec)")
    print("  3. Xref write_file(string) near 0x5D9EF0 to find magic string init")
    print("  4. From world load, trace call graph backward from string table loader @ 0x410600")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
