#!/usr/bin/env python3
from df_save_re.deserializers.engine_walk import walk_pointer_vector
from df_save_re.deserializers.historical_figures import locate_figures_vector
from df_save_re.deserializers.world_dat import parse_dat_preamble
from df_save_re.deserializers.world_layout import discover_layout_landmarks
from df_save_re.save_preamble import resolve_save_payload

payload = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
pre = parse_dat_preamble(payload)
layout = discover_layout_landmarks(payload, pre)
anchor = locate_figures_vector(payload, pre.header, search_start=layout.history_stats)
print(
    "anchor",
    hex(anchor.vector_offset),
    "bodies",
    hex(anchor.bodies_start),
    "present",
    anchor.present_count,
)
r = walk_pointer_vector(
    payload,
    vector_offset=anchor.vector_offset,
    element_type="historical_figure",
    bodies_start=anchor.bodies_start,
    save_version=1716,
)
print(
    "parsed",
    r.parsed_count,
    "present",
    r.present_count,
    "ok",
    r.ok,
    "error",
    r.error,
    "err_off",
    r.error_offset and hex(r.error_offset),
    "end",
    hex(r.end_offset),
)
