#!/usr/bin/env python3
from df_save_re.save_preamble import resolve_save_payload

p = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
for label, start, end in [("fig0", 0x2134E65, 0x2134E85), ("fig3", 0x215EC08, 0x215EC28)]:
    print(label, p[start:end].hex())
