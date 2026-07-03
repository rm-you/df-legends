#!/usr/bin/env python3
from df_save_re.save_preamble import resolve_save_payload
from df_save_re.deserializers.world_history_walk import (
    _figures_anchor_candidates,
    _locate_events_start,
    _locate_events_start_exhaustive,
    _event_count_guesses,
    locate_world_history,
)

path = "tests/fixtures/waterlures-retired/world.dat"
r = resolve_save_payload(path)
print("payload", len(r.payload))
cands = _figures_anchor_candidates(r.payload, r.preamble.header, save_version=r.save_version)
print("fig cands", len(cands), [hex(c) for c in cands[:5]])
print("guesses sample", _event_count_guesses(r.preamble.header)[:8])
for fig_off in cands[:3]:
    loc = _locate_events_start(
        r.payload, fig_off, save_version=r.save_version, scan_back=0x3000000,
        header=r.preamble.header, count_guesses=[],
    )
    print("exhaustive only", hex(fig_off), loc)
lm = locate_world_history(r.payload, r.preamble.header, save_version=r.save_version)
print("locate", lm)
