#!/usr/bin/env python3
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.historical_figures import (
    _fast_histfig_candidate,
    try_read_historical_figure_header,
)
from df_save_re.save_preamble import resolve_save_payload

p = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
for off in [0x215EDBF, 0x2161BAB]:
    print(hex(off), "fast", _fast_histfig_candidate(p, off))
    r = BinaryReader(BytesIO(p))
    r.seek(off)
    h = try_read_historical_figure_header(r)
    print(" ", h.figure_id if h else None, h.art_count if h else None)
