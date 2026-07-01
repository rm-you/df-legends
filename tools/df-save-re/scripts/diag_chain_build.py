#!/usr/bin/env python3
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.historical_figures import (
    build_figure_body_starts,
    locate_figures_vector,
    try_read_historical_figure_header,
)
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
    max_bodies=anchor.present_count + 1,
)
print("starts", len(starts), "present", anchor.present_count, "death", hex(anchor.death_events_offset or 0))
for i, s in enumerate(starts[:30]):
    r = BinaryReader(BytesIO(p.payload))
    r.seek(s)
    h = try_read_historical_figure_header(r)
    gap = starts[i + 1] - s if i + 1 < len(starts) else (anchor.death_events_offset or 0) - s
    print(
        i,
        hex(s),
        "id",
        h.figure_id if h else None,
        "art",
        h.art_count if h else None,
        "gap",
        gap,
    )
if len(starts) > 30:
    s = starts[-1]
    r = BinaryReader(BytesIO(p.payload))
    r.seek(s)
    h = try_read_historical_figure_header(r)
    print("...", "last", hex(s), "id", h.figure_id if h else None, "art", h.art_count if h else None)
