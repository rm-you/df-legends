#!/usr/bin/env python3
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.historical_figures import read_historical_figure_header
from df_save_re.save_preamble import resolve_save_payload

p = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
off = 0x215EDBF
r = BinaryReader(BytesIO(p))
r.seek(off)
start = r.tell()
h = read_historical_figure_header(r)
print("start", hex(start), "end", hex(r.tell()), "hb", h.header_bytes)
print("name words", h.name.words)
print("hex prefix", p[off : off + 80].hex())
