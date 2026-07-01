#!/usr/bin/env python3
import struct
from df_save_re.save_preamble import resolve_save_payload
p = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
for o in [0x21350ac, 0x21350b0, 0x21350d4, 0x2135412]:
    print(hex(o), struct.unpack_from("<i", p, o)[0])
