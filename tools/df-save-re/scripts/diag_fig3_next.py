#!/usr/bin/env python3
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.body_skipper import default_xml_dir, skip_historical_figure_body
from df_save_re.deserializers.historical_figures import (
    _find_next_figure_start,
    read_historical_figure_header,
    try_read_historical_figure_header,
)
from df_save_re.save_preamble import resolve_save_payload

p = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
xml = default_xml_dir()
fig3 = 0x215EB79
r = BinaryReader(BytesIO(p))
r.seek(fig3)
h3 = read_historical_figure_header(r)
r.seek(fig3)
skip_historical_figure_body(r, p, xml_dir=xml)
tail = r.tell()
print("fig3 tail", hex(tail))
nxt = _find_next_figure_start(p, scan_start=tail, previous_id=h3.figure_id, stop_before=0x226009C)
print("next", hex(nxt) if nxt else None)
if nxt:
    hr = BinaryReader(BytesIO(p))
    hr.seek(nxt)
    h = try_read_historical_figure_header(hr)
    print("next id", h.figure_id, "hb", h.header_bytes, "art", h.art_count)
