#!/usr/bin/env python3
from df_save_re.save_preamble import resolve_save_payload

p = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
off = 0x226009C
c = int.from_bytes(p[off : off + 4], "little", signed=True)
flags = p[off + 4 : off + 4 + c]
print("declared", c, "sum flags", sum(flags), "nonzero", sum(1 for b in flags if b))
print("first 20", list(flags[:20]))
