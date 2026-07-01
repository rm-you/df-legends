#!/usr/bin/env python3
import struct

from df_save_re.save_preamble import resolve_save_payload

p = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
for off in range(0x2134e66, 0x2134e80):
    b = p[off]
    print(f"{off:#x}: {b:02x}")
print("int32@6e", struct.unpack_from("<i", p, 0x2134e6e)[0])
print("int32@72", struct.unpack_from("<i", p, 0x2134e72)[0])
print("bytes@6e", p[0x2134e6e:0x2134e76].hex())
