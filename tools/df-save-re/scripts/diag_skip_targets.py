#!/usr/bin/env python3
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.body_skipper import SkipError, default_xml_dir, skip_historical_figure_body
from df_save_re.deserializers.historical_figures import try_read_historical_figure_header
from df_save_re.save_preamble import resolve_save_payload

p = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
xml = default_xml_dir()

cases = [
    (0x2134DD0, 0x2135412, 1),
    (0x2135412, 0x213B0CF, 2),
    (0x215EB79, 0x215EDBF, 4),
]
for start, target, expect_id in cases:
    r = BinaryReader(BytesIO(p))
    r.seek(start)
    try:
        skip_historical_figure_body(r, p, xml_dir=xml, next_anchor=target)
        ok = r.tell() == target
        h = try_read_historical_figure_header(BinaryReader(BytesIO(p)))
        r2 = BinaryReader(BytesIO(p))
        r2.seek(r.tell())
        h = try_read_historical_figure_header(r2)
        print(f"start={start:#x} end={r.tell():#x} target={target:#x} ok={ok} next={h.figure_id if h else None}")
    except SkipError as e:
        print(f"start={start:#x} FAIL {e}")
