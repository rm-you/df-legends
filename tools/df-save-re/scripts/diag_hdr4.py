#!/usr/bin/env python3
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.historical_figures import read_historical_figure_header
from df_save_re.save_preamble import resolve_save_payload

p = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
for off in [0x215EDBF, 0x215EB79]:
    r = BinaryReader(BytesIO(p))
    r.seek(off)
    try:
        h = read_historical_figure_header(r)
        print(hex(off), "id", h.figure_id, "art", h.art_count, "header_bytes", h.header_bytes)
    except Exception as e:
        print(hex(off), "FAIL", e)
