#!/usr/bin/env python3
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.historical_figures import try_read_historical_figure_header
from df_save_re.save_preamble import resolve_save_payload

p = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
for off in [0x2134DD0, 0x2135412, 0x213B0CF, 0x215EB79, 0x215EDBF, 0x21673D6]:
    r = BinaryReader(BytesIO(p))
    r.seek(off)
    h = try_read_historical_figure_header(r)
    print(hex(off), h.figure_id if h else None, h.header_bytes if h else None)
