#!/usr/bin/env python3
from df_save_re.save_preamble import resolve_save_payload

p = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
off = 0x226009C
if int.from_bytes(p[off : off + 4], "little", signed=True) == 151:
    sample = p[off + 4 : off + 4 + 151]
    quality = sum(1 for byte in sample if byte in (0, 1)) / 151
    print("quality", quality)
