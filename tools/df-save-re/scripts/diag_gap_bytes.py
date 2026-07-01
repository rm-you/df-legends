#!/usr/bin/env python3
import struct
from df_save_re.save_preamble import resolve_save_payload

p = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
for off in range(0x213592D, 0x2135960, 4):
    print(hex(off), struct.unpack_from("<i", p, off)[0])
