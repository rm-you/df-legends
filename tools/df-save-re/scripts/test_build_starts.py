#!/usr/bin/env python3
from df_save_re.deserializers.historical_figures import build_figure_body_starts, locate_figures_vector
from df_save_re.deserializers.world_layout import discover_layout_landmarks, resolve_history_search_start
from df_save_re.save_preamble import resolve_save_payload

p = resolve_save_payload("tests/fixtures/small-retired/world.dat")
layout = discover_layout_landmarks(p.payload, p.preamble)
start = resolve_history_search_start(p.payload, layout, p.preamble.header)
anchor = locate_figures_vector(p.payload, p.preamble.header, search_start=start)
starts = build_figure_body_starts(
    p.payload,
    bodies_start=anchor.bodies_start,
    stop_before=anchor.death_events_offset,
    max_bodies=min(10, anchor.present_count + 1),
)
print("starts", len(starts))
for i, s in enumerate(starts[:5]):
    nxt = starts[i + 1] if i + 1 < len(starts) else anchor.death_events_offset
    print(f"  {i}: {s:#x} size {nxt - s}")
