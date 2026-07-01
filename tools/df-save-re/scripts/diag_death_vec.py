#!/usr/bin/env python3
from df_save_re.save_preamble import resolve_save_payload

p = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
for off in [0x22561E0, 0x226009C]:
    c = int.from_bytes(p[off : off + 4], "little", signed=True)
    flags = p[off + 4 : off + 4 + min(c, 500)]
    q = sum(1 for b in flags if b in (0, 1)) / len(flags) if flags else 0
    print(hex(off), "declared", c, "quality", q)
