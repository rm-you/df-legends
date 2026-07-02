#!/usr/bin/env python3
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.historical_figures import header_looks_valid, read_historical_figure_header
from df_save_re.save_preamble import resolve_save_payload

p = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
for delta in range(0, 64):
    s = 0x2134E47 + delta
    r = BinaryReader(BytesIO(p))
    r.seek(s)
    try:
        h = read_historical_figure_header(r, figure_id=5)
        ok = header_looks_valid(h, expect_id=5)
        print(
            f"delta={delta:2d} off=0x{s:x} header={h.header_bytes} valid={ok} "
            f"prof={h.profession} race={h.race} has_name={h.name.has_name}"
        )
    except Exception as e:
        print(f"delta={delta:2d} FAIL {e}")
