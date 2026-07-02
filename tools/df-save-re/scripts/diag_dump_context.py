#!/usr/bin/env python3
"""Dump i32/i16 context around an offset."""
import struct
import sys

from df_save_re.save_preamble import resolve_save_payload

off = int(sys.argv[1], 0)
payload = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
print("hex before/after:")
print(" ", payload[off - 64 : off].hex())
print(" *", payload[off : off + 64].hex())
for k in range(-16, 8):
    p = off + 4 * k
    v = struct.unpack_from("<i", payload, p)[0]
    print(f"0x{p:x} i32 {v}")
