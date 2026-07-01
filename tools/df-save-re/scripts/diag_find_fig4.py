#!/usr/bin/env python3
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.historical_figures import try_read_historical_figure_header
from df_save_re.save_preamble import resolve_save_payload

p = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
lo = 0x215EB79
hi = 0x21673D6
for cand in range(lo, hi, 2):
    r = BinaryReader(BytesIO(p))
    r.seek(cand)
    h = try_read_historical_figure_header(r)
    if h and h.figure_id == 4 and h.header_bytes <= 512:
        print("id4 small header", hex(cand), "hb", h.header_bytes, "art", h.art_count)
