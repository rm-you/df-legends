#!/usr/bin/env python3
import time
import sys
from df_save_re.save_preamble import resolve_save_payload
from df_save_re.deserializers.world_history_walk import locate_world_history, walk_world_history

save = sys.argv[1] if len(sys.argv) > 1 else "tests/fixtures/small-retired/world.dat"
r = resolve_save_payload(save)
print("payload", len(r.payload))
t = time.time()
lm = locate_world_history(r.payload, r.preamble.header, save_version=r.save_version)
print("locate", round(time.time() - t, 2), "s", "events", lm.event_count if lm else None)
t = time.time()
full = walk_world_history(
    r.payload,
    r.preamble.header,
    save_version=r.save_version,
    landmarks=lm,
    read_figure_bodies=False,
)
print("walk", round(time.time() - t, 2), "s", "history_end", hex(full.history_end or 0))
