#!/usr/bin/env python3
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.historical_figures import try_read_historical_figure_header
from df_save_re.save_preamble import resolve_save_payload

p = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
hits = []
for off in range(0x21354d7, 0x2140000, 2):
    r = BinaryReader(BytesIO(p))
    r.seek(off)
    h = try_read_historical_figure_header(r)
    if h and h.figure_id in (2, 3, 4, 5):
        hits.append((off, h.figure_id))
        if len(hits) >= 5:
            break
print("hits", [hex(o) for o, i in hits])
if hits:
    print("fig1 body size", hits[0][0] - 0x2135412)
