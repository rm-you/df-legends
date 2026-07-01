#!/usr/bin/env python3
import struct

from df_save_re.save_preamble import resolve_save_payload

p = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
off = 0x2134EF1
print("bytes", p[off:off+16].hex())
print("count", struct.unpack_from("<i", p, off)[0])
# brute plausible end offsets until fig1 header id=1 at 5412
target = 0x2135412
for extra in range(0, 2000, 4):
    o = off + 4 + extra
    if o >= target:
        v = struct.unpack_from("<i", p, target)[0]
        print(f"if vector payload {extra} bytes, next field @ {o:#x}, id@5412={v}")
        break
