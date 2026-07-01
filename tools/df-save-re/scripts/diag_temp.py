#!/usr/bin/env python3
import struct
from df_save_re.save_preamble import resolve_save_payload

p = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
for o in [0x21350c8, 0x21350cc, 0x21350d0, 0x21350d4]:
    print(hex(o), struct.unpack_from("<i", p, o)[0], struct.unpack_from("<I", p, o)[0])
