#!/usr/bin/env python3
import time

from df_save_re.deserializers.historical_figures import build_figure_body_starts, locate_figures_vector
from df_save_re.deserializers.world_layout import discover_layout_landmarks, resolve_history_search_start
from df_save_re.save_preamble import resolve_save_payload

p = resolve_save_payload("tests/fixtures/small-retired/world.dat")
layout = discover_layout_landmarks(p.payload, p.preamble)
start = resolve_history_search_start(p.payload, layout, p.preamble.header)
anchor = locate_figures_vector(p.payload, p.preamble.header, search_start=start)
for n in [50, 100, 200]:
    t0 = time.perf_counter()
    starts = build_figure_body_starts(
        p.payload,
        bodies_start=anchor.bodies_start,
        stop_before=anchor.death_events_offset,
        max_bodies=n + 1,
    )
    dt = time.perf_counter() - t0
    print(f"max={n} got={len(starts)} in {dt:.1f}s last_id_offset={starts[-1]:#x if starts else 0}")
