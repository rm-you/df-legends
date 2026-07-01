#!/usr/bin/env python3
import struct

from df_save_re.save_preamble import resolve_save_payload

p = resolve_save_payload("tests/fixtures/small-retired/world.dat")
payload = p.payload
for off in [0x21353a3, 0x21353ab, 0x2135412]:
    vals = [struct.unpack_from("<i", payload, off + i * 4)[0] for i in range(8)]
    print(hex(off), [hex(v) for v in vals])
