#!/usr/bin/env python3
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.historical_figures import read_historical_figure_header
from df_save_re.save_preamble import resolve_save_payload

p = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
r = BinaryReader(BytesIO(p))
r.seek(0x2134DD0)
read_historical_figure_header(r)
print("after header", hex(r.tell()))
print("wg present int", int.from_bytes(p[r.tell():r.tell()+4], "little", signed=True))
