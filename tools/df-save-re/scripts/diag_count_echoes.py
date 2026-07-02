#!/usr/bin/env python3
import struct
from df_save_re.save_preamble import resolve_save_payload
p=resolve_save_payload('tests/fixtures/small-retired/world.dat').payload
for val in (113118, 113117, 86380, 86381):
    pos=0
    hs=[]
    while True:
        j=p.find(struct.pack('<i', val), pos, 0x900000)
        if j<0: break
        hs.append(j); pos=j+4
    print(val, [hex(x) for x in hs])
