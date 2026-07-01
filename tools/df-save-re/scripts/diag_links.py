#!/usr/bin/env python3
from df_save_re.save_preamble import resolve_save_payload

p = resolve_save_payload("tests/fixtures/small-retired/world.dat")
chunk = p.payload[0x2134E66 : 0x2134F00]
print(chunk.hex())
print("len", len(chunk))
