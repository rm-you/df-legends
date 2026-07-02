#!/usr/bin/env python3
import struct
from df_save_re.save_preamble import resolve_save_payload

p = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
pat = struct.pack("<i", 113118)
i = 0
while True:
    j = p.find(pat, i)
    if j < 0:
        break
    tag = struct.unpack_from("<i", p, j + 4)[0] if j + 8 <= len(p) else -999
    print(hex(j), "tag", tag)
    i = j + 1
