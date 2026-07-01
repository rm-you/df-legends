#!/usr/bin/env python3
import struct

from df_save_re.save_preamble import resolve_save_payload

p = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
off = 0x2134F49
print("int32@4f49", struct.unpack_from("<i", p, off)[0])
print("hex", p[off:off+32].hex())
