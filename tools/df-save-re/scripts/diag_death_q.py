#!/usr/bin/env python3
from df_save_re.save_preamble import resolve_save_payload

p = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
for off in [0x226009C, 0x2268830, 0x22687C4]:
    c = int.from_bytes(p[off : off + 4], "little", signed=True)
    sample = p[off + 4 : off + 4 + min(c, 500)]
    q = sum(1 for b in sample if b in (0, 1)) / c if c else 0
    print(hex(off), "declared", c, "quality", q)
