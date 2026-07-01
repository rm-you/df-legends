#!/usr/bin/env python3
"""Find int32 vector count at gap start whose body fills to fig1."""
import struct

from df_save_re.save_preamble import resolve_save_payload

payload = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
START = 0x21350D4
FIG1 = 0x2135412
GAP = FIG1 - START

for width in (1, 2, 4, 8):
    for off in range(START, START + 16):
        count = struct.unpack_from("<i", payload, off)[0]
        if count < 0 or count > 5000:
            continue
        end = off + 4 + count * width
        if end == FIG1:
            print(f"vector off={off:#x} count={count} width={width} lands fig1")
        if off == START and end - START <= GAP:
            rem = FIG1 - end
            if 0 <= rem <= 16:
                print(f"count={count} w={width} end={end:#x} rem={rem}")
