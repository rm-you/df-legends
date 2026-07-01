#!/usr/bin/env python3
from pathlib import Path

from df_save_re.deserializers.engine_walk import walk_pointer_vector
from df_save_re.deserializers.historical_figures import locate_figures_vector
from df_save_re.deserializers.world_layout import discover_layout_landmarks, resolve_history_search_start
from df_save_re.save_preamble import resolve_save_payload

ROOT = Path(__file__).resolve().parents[3]
SAVE = ROOT / "data/saves/region1/world.dat"

p = resolve_save_payload(SAVE)
layout = discover_layout_landmarks(p.payload, p.preamble)
start = resolve_history_search_start(p.payload, layout, p.preamble.header)
anchor = locate_figures_vector(p.payload, p.preamble.header, search_start=start)
print(
    f"vector @{hex(anchor.vector_offset)} declared={anchor.vector_count} "
    f"bodies @{hex(anchor.bodies_start)} death @{hex(anchor.death_events_offset or 0)}"
)
result = walk_pointer_vector(
    p.payload,
    vector_offset=anchor.vector_offset,
    element_type="historical_figure",
    expected_count=anchor.vector_count,
    next_anchor=anchor.death_events_offset,
    bodies_start=anchor.bodies_start,
)
print(
    f"ok={result.ok} parsed={result.parsed_count}/{result.present_count} "
    f"end={hex(result.end_offset)} err={result.error} @{hex(result.error_offset or 0)}"
)
