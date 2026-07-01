#!/usr/bin/env python3
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.body_skipper import default_xml_dir, skip_historical_figure_body
from df_save_re.deserializers.historical_figures import try_read_historical_figure_header
from df_save_re.save_preamble import resolve_save_payload

payload = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
xml = default_xml_dir()
FIG1 = 0x2135412
FIG2 = 0x213B0CF

r = BinaryReader(BytesIO(payload))
r.seek(FIG1)
skip_historical_figure_body(r, payload, xml_dir=xml)
print("fig1 skip end", hex(r.tell()), "fig2", hex(FIG2), "delta", r.tell() - FIG2)
h = try_read_historical_figure_header(r)
print("header at end", h.figure_id if h else None)
