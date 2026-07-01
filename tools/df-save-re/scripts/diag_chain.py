#!/usr/bin/env python3
from df_save_re.deserializers.historical_figures import (
    locate_figures_vector,
    walk_figure_id_chain,
)
from df_save_re.deserializers.world_layout import discover_layout_landmarks, resolve_history_search_start
from df_save_re.save_preamble import resolve_save_payload

p = resolve_save_payload("tests/fixtures/small-retired/world.dat")
layout = discover_layout_landmarks(p.payload, p.preamble)
start = resolve_history_search_start(p.payload, layout, p.preamble.header)
anchor = locate_figures_vector(p.payload, p.preamble.header, search_start=start)
chain, last = walk_figure_id_chain(
    p.payload,
    start_offset=anchor.bodies_start,
    max_figures=20,
    stop_before=anchor.death_events_offset,
)
print("bodies_start", hex(anchor.bodies_start))
print("death", hex(anchor.death_events_offset or 0))
for h in chain[:10]:
    end = h.payload_offset + h.header_bytes
    print(
        f"id={h.figure_id} start=0x{h.payload_offset:x} header_end=0x{end:x} "
        f"art={h.art_count} prof={h.profession} race={h.race}"
    )
print("chain_len", len(chain), "last_id", last)
