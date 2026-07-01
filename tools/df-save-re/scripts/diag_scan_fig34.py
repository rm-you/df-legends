#!/usr/bin/env python3
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.historical_figures import try_read_historical_figure_header
from df_save_re.save_preamble import resolve_save_payload

p = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
for off in range(0x215EB79, 0x215EDBF + 200, 2):
    r = BinaryReader(BytesIO(p))
    r.seek(off)
    h = try_read_historical_figure_header(r)
    if h and h.figure_id >= 3:
        print(hex(off), "id", h.figure_id, "art", h.art_count, "hb", h.header_bytes)
