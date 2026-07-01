#!/usr/bin/env python3
"""Measure structural skip vs actual next header for first N figures."""
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.body_skipper import default_xml_dir, skip_historical_figure_body
from df_save_re.deserializers.historical_figures import read_historical_figure_header, try_read_historical_figure_header
from df_save_re.save_preamble import resolve_save_payload

payload = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
xml = default_xml_dir()

# known good chain from min-id @ header_end
pairs = [
    (0x2134DD0, 0x2135412),
    (0x2135412, 0x213B0CF),
    (0x213B0CF, 0x215EB79),
    (0x215EB79, 0x215EDBF),
    (0x215EDBF, 0x21673D6),
    (0x21673D6, 0x2169CF3),
]

for start, nxt in pairs:
    r = BinaryReader(BytesIO(payload))
    r.seek(start)
    h = read_historical_figure_header(r)
    r2 = BinaryReader(BytesIO(payload))
    r2.seek(start)
    skip_historical_figure_body(r2, payload, xml_dir=xml)
    tail = r2.tell()
    art_gap = nxt - tail
    print(
        f"id={h.figure_id} art={h.art_count} total={nxt-start} tail_end={tail-start} "
        f"art_gap={art_gap}"
    )
