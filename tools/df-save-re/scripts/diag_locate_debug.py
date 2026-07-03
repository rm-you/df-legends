#!/usr/bin/env python3
from df_save_re.save_preamble import resolve_save_payload
from df_save_re.deserializers.world_history_walk import (
    _figures_anchor_candidates,
    _locate_events_start,
    locate_world_history,
)

r = resolve_save_payload("tests/fixtures/small-retired/world.dat")
cands = _figures_anchor_candidates(r.payload, r.preamble.header, save_version=r.save_version)
print("candidates", len(cands), [hex(c) for c in cands[:8]])
for c in cands[:8]:
    loc = _locate_events_start(
        r.payload, c, save_version=r.save_version, scan_back=0x3000000, header=r.preamble.header
    )
    print(hex(c), loc)
lm = locate_world_history(r.payload, r.preamble.header, save_version=r.save_version)
print("locate", lm)
