#!/usr/bin/env python3
from io import BytesIO
from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.historical_figures import try_read_historical_figure_header
from df_save_re.save_preamble import resolve_save_payload

p=resolve_save_payload('tests/fixtures/small-retired/world.dat').payload
for off in range(0x15BEB34, 0x15BEC00, 4):
    r=BinaryReader(BytesIO(p)); r.seek(off)
    h=try_read_historical_figure_header(r, save_version=1716)
    if h and 0<=h.race<=500:
        print('ok header at', hex(off), 'race', h.race, 'civ', h.civ_id)
