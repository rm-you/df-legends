#!/usr/bin/env python3
import struct
from df_save_re.save_preamble import resolve_save_payload

p = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
START = 0x21355EF
FIG2 = 0x213B0CF
print("gap", FIG2 - START)
print(p[START:START+48].hex())
for off in range(START, START+64, 4):
    print(hex(off), struct.unpack_from("<i", p, off)[0])
