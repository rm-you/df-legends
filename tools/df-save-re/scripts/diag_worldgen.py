#!/usr/bin/env python3
import struct
from df_save_re.save_preamble import resolve_save_payload

p = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
names = ["worldgen_site", "worldgen_region", "worldgen_layer", "worldgen_genetics", "worldgen_relationships"]
off = 0x21350B0
for n in names:
    v = struct.unpack_from("<i", p, off)[0]
    print(n, hex(off), v)
    off += 4
