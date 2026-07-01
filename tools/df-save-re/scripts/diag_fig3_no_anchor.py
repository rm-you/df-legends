#!/usr/bin/env python3
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.body_skipper import default_xml_dir, skip_historical_figure_body
from df_save_re.deserializers.historical_figures import try_read_historical_figure_header
from df_save_re.save_preamble import resolve_save_payload

p = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
xml = default_xml_dir()

r = BinaryReader(BytesIO(p))
r.seek(0x215EB79)
skip_historical_figure_body(r, p, xml_dir=xml)
print("fig3 no anchor end", hex(r.tell()), "expected", hex(0x215EDBF))
h = try_read_historical_figure_header(BinaryReader(BytesIO(p)))
r2 = BinaryReader(BytesIO(p))
r2.seek(r.tell())
h = try_read_historical_figure_header(r2)
print("next", h.figure_id if h else None)
