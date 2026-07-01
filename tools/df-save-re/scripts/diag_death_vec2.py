#!/usr/bin/env python3
from df_save_re.deserializers.historical_figures import _count_present_flags
from df_save_re.save_preamble import resolve_save_payload

p = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
for off in [0x226009C, 0x21FD66C]:
    c = int.from_bytes(p[off : off + 4], "little", signed=True)
    present, posnull = _count_present_flags(p, off, c)
    print(hex(off), "declared", c, "present", present, "posnull", posnull)
