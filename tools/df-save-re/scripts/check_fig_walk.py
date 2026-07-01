from pathlib import Path

from df_save_re.compression import decompress_file
from df_save_re.deserializers.engine_layers import walk_figures_layer
from df_save_re.deserializers.historical_figures import build_historical_figure_catalog
from df_save_re.deserializers.world_dat import parse_dat_preamble
from df_save_re.deserializers.world_layout import discover_layout_landmarks

FIX = Path(__file__).resolve().parents[1] / "tests/fixtures/small-retired/world.dat"
p = decompress_file(FIX).payload
pre = parse_dat_preamble(p)
layout = discover_layout_landmarks(p, pre)
cat = build_historical_figure_catalog(p, pre.header, search_start=layout.history_stats)
w = walk_figures_layer(p, pre.header, layout, anchor=cat.anchor)
r = w.result
print(
    "present", r.present_count,
    "parsed", r.parsed_count,
    "ok", r.ok,
    "landed", r.landed_on_anchor,
    "end", hex(r.end_offset),
    "death", hex(cat.anchor.death_events_offset),
)
print("note", w.note)
