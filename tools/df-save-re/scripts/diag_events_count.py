#!/usr/bin/env python3
import struct

from df_save_re.save_preamble import resolve_save_payload

p = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
start = 0x2134F4D
for ec in range(0, 80):
    off = start + 4 + ec * 4
    lc = struct.unpack_from("<i", p, off)[0]
    if 0 <= lc <= 100:
        print(f"events={ec} lost_count={lc} @ {off:#x}")
