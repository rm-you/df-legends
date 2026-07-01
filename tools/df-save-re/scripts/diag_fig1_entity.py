#!/usr/bin/env python3
import struct

from df_save_re.save_preamble import resolve_save_payload

p = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
off = 0x21354d7
print("entity count", struct.unpack_from("<i", p, off)[0])
for i in range(4):
    v = struct.unpack_from("<i", p, off + 4 + i * 4)[0]
    print(f"  flag{i} @ {off + 4 + i * 4:#x} = {v}")
