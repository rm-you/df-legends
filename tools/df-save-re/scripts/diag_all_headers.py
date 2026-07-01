#!/usr/bin/env python3
"""Count all valid figure headers in the figures body region."""
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.historical_figures import (
    locate_figures_vector,
    try_read_historical_figure_header,
)
from df_save_re.deserializers.world_layout import discover_layout_landmarks, resolve_history_search_start
from df_save_re.save_preamble import resolve_save_payload

p = resolve_save_payload("tests/fixtures/small-retired/world.dat")
layout = discover_layout_landmarks(p.payload, p.preamble)
start = resolve_history_search_start(p.payload, layout, p.preamble.header)
anchor = locate_figures_vector(p.payload, p.preamble.header, search_start=start)
lo = anchor.bodies_start
hi = anchor.death_events_offset or len(p.payload)
print("region", hex(lo), hex(hi), "size", hi - lo, "present", anchor.present_count)

hits: list[tuple[int, int, int]] = []
for cand in range(lo, hi, 2):
    r = BinaryReader(BytesIO(p.payload))
    r.seek(cand)
    h = try_read_historical_figure_header(r)
    if h is None:
        continue
    hits.append((cand, h.figure_id, h.art_count))

print("valid headers found", len(hits))
if hits:
    print("first 10", [(hex(o), i, a) for o, i, a in hits[:10]])
    print("last 10", [(hex(o), i, a) for o, i, a in hits[-10:]])

# filter: keep headers where no other hit lies inside [prev_end, this_start)
# i.e. non-overlapping chain by taking headers in order with monotonic ids and min gap
chain = [hits[0]]
for off, fid, ac in hits[1:]:
    prev_off, prev_id, _ = chain[-1]
    if off <= prev_off + 400:
        continue
    if fid <= prev_id:
        continue
    chain.append((off, fid, ac))
print("greedy id-chain from all hits", len(chain))
print("last greedy", chain[-1] if chain else None)
