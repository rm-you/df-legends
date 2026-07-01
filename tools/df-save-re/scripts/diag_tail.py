#!/usr/bin/env python3
import struct

from df_save_re.save_preamble import resolve_save_payload

p = resolve_save_payload("tests/fixtures/small-retired/world.dat")
payload = p.payload
start = 0x21353A3
end = 0x2135412
print("int32s from", hex(start), "to", hex(end))
for off in range(start, end, 4):
    if off + 4 > end:
        print(hex(off), "partial", payload[off:end].hex())
        break
    v = struct.unpack_from("<i", payload, off)[0]
    print(hex(off), v, hex(v))
