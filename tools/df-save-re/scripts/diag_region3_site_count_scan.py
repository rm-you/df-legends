"""Scan region saves for an i32 site-count echo (export count) in the payload.

If DF serializes world sites as `i32 count + bodies`, the exact export count
should appear as a little-endian i32 somewhere before the site name markers.
Print all occurrences with context so we can spot the real vector header.
"""

import re
import struct
import sys
from pathlib import Path

from df_save_re.save_preamble import resolve_save_payload

SAVES = Path(r"C:\Users\rm_yo\CursorProjects\df-legends\data\saves")


def main() -> None:
    for region, count in (("region2", 194), ("region3", 262)):
        wd = SAVES / region / "world.dat"
        resolved = resolve_save_payload(str(wd))
        payload = resolved.payload
        needle = struct.pack("<i", count)
        offs = []
        pos = 0
        while True:
            idx = payload.find(needle, pos)
            if idx == -1:
                break
            offs.append(idx)
            pos = idx + 1
        print(f"{region}: count {count} appears {len(offs)} times")
        for o in offs[:40]:
            ctx = payload[max(0, o - 8): o + 24].hex()
            print(f"  0x{o:x}: {ctx}")


if __name__ == "__main__":
    sys.stdout.reconfigure(errors="backslashreplace")
    main()
