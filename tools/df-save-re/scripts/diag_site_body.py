#!/usr/bin/env python3
import struct

from df_save_re.save_preamble import resolve_save_payload

payload = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
site_body = 0x21354FB  # tag int16 here
print("bytes at site tag", payload[site_body:site_body+32].hex())

for body_len in range(2, 64):
    off = site_body + 2 + body_len
    if off + 4 > len(payload):
        break
    c = struct.unpack_from("<i", payload, off)[0]
    if 0 <= c <= 64:
        print(f"body_len={body_len} next_off={off:#x} count={c}")

# fig0 after histfig at ed5
off = 0x2134ED5
print("\nfig0 after hf", payload[off:off+32].hex())
for i in range(8):
    o = off + i * 4
    print(f"  {o:#x}: {struct.unpack_from('<i', payload, o)[0]}")
