#!/usr/bin/env python3
from df_save_re.deserializers.engine_layers import walk_figures_layer
from df_save_re.deserializers.historical_figures import locate_figures_vector
from df_save_re.deserializers.primitives import WorldHeaderHypothesis
from df_save_re.deserializers.world_layout import resolve_world_layout
from df_save_re.save_preamble import resolve_save_payload

p = resolve_save_payload("tests/fixtures/small-retired/world.dat")
layout = resolve_world_layout(p.payload)
header = WorldHeaderHypothesis.from_stats_region(p.payload, layout.history_stats)
anchor = locate_figures_vector(p.payload, header, search_start=layout.history_stats)
w = walk_figures_layer(p.payload, header, layout, anchor=anchor)
print("deterministic", w.deterministic)
print("note", w.note)
if w.result:
    print("parsed", w.result.parsed_count, "declared", w.result.declared_count)
    print("landed", w.result.landed_on_anchor, "end", hex(w.result.end_offset))
