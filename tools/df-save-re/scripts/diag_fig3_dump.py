#!/usr/bin/env python3
import struct

from df_save_re.save_preamble import resolve_save_payload

p = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
for o in range(0x215EC0F, 0x215EDBF, 4):
    v = struct.unpack_from("<i", p, o)[0]
    print(f"{o:#x} {v:10d} ({v:#x})")
