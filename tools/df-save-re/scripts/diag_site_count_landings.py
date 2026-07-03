#!/usr/bin/env python3
"""Find site vector count prefix that lands on events_count_offset."""
from __future__ import annotations

import io
import struct
import sys

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.world_history_walk import locate_world_history
from df_save_re.deserializers.world_site_walk import skip_world_site_body
from df_save_re.save_preamble import resolve_save_payload


def find(save: str, *, scan_back: int = 5_000_000) -> None:
    r = resolve_save_payload(save)
    lm = locate_world_history(r.payload, r.preamble.header, save_version=r.save_version)
    if lm is None:
        print(save, "no world_history")
        return
    ec = lm.events_count_offset
    lo = max(0, ec - scan_back)
    found = []
    for count in range(500_000, 0, -1):
        needle = struct.pack("<i", count)
        pos = r.payload.rfind(needle, lo, ec - 16)
        while pos >= lo + 12:
            off = pos - 12
            try:
                rd = BinaryReader(io.BytesIO(r.payload))
                rd.seek(off)
                rd.read_int32()
                rd.read_int16()
                rd.read_int32()
                rd.read_int16()
                c = rd.read_int32()
                if c != count:
                    raise ValueError("count mismatch")
                for _ in range(count):
                    skip_world_site_body(rd)
                if rd.tell() == ec:
                    found.append((count, off))
                    break
            except (ValueError, EOFError):
                pass
            pos = r.payload.rfind(needle, lo, pos - 1)
    print(save, f"events=0x{ec:x}", f"landings={len(found)}")
    for count, off in found[:10]:
        print(f"  count={count} prefix=0x{off:x}")


if __name__ == "__main__":
    for path in sys.argv[1:]:
        find(path)
