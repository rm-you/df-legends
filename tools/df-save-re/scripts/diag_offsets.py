#!/usr/bin/env python3
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.historical_figures import (
    read_historical_figure_header,
    try_read_historical_figure_header,
)
from df_save_re.save_preamble import resolve_save_payload

payload = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
for off in [0x21356AF, 0x2135412, 0x213b0cf]:
    r = BinaryReader(BytesIO(payload))
    r.seek(off)
    try:
        h = read_historical_figure_header(r)
        print(f"{off:#x} raw id={h.figure_id} art={h.art_count} race={h.race} prof={h.profession}")
    except Exception as e:
        print(f"{off:#x} raw FAIL {e}")
    r.seek(off)
    h2 = try_read_historical_figure_header(r)
    print(f"  validated={h2.figure_id if h2 else None}")
