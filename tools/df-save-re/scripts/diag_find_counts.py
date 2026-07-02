#!/usr/bin/env python3
from df_save_re.save_preamble import resolve_save_payload

p = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
for off in range(0x2131BB0, 0x2134DE0, 4):
    v = int.from_bytes(p[off : off + 4], "little", signed=True)
    if v in (12747, 4595, 113118):
        print(hex(off), v)
