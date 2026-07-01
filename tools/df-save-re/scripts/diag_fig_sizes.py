#!/usr/bin/env python3
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.historical_figures import try_read_historical_figure_header
from df_save_re.save_preamble import resolve_save_payload

p = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
for start in [0x2134DD0, 0x2135412]:
    r = BinaryReader(BytesIO(p))
    r.seek(start)
    h = try_read_historical_figure_header(r, expect_id=0 if start == 0x2134DD0 else 1)
    print("fig", h.figure_id if h else None, "header", hex(start), "end", hex(r.tell()))

# scan fig2
for off in range(0x2135412, 0x2140000, 2):
    r = BinaryReader(BytesIO(p))
    r.seek(off)
    h = try_read_historical_figure_header(r, expect_id=2)
    if h:
        print("fig2 @", hex(off), "size1", off - 0x2135412)
        break
