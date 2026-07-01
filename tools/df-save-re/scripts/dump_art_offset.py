#!/usr/bin/env python3
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.body_skipper import SkipError, default_xml_dir, skip_struct
from df_save_re.deserializers.historical_figures import try_read_historical_figure_header
from df_save_re.save_preamble import resolve_save_payload

p = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
xml = default_xml_dir()
TAIL = 0x21355EF
TARGET = 0x213B0CF

for lead in list(range(0, 512, 4)) + [72, 76, 80, 84, 88]:
    r = BinaryReader(BytesIO(p))
    r.seek(TAIL + lead)
    try:
        skip_struct(r, "art_image", xml_dir=xml, payload=p)
        end = r.tell()
        r2 = BinaryReader(BytesIO(p))
        r2.seek(end)
        h = try_read_historical_figure_header(r2)
        ok = h is not None and h.figure_id == 2
        if ok or abs(end - TARGET) < 32:
            print(f"lead={lead:4d} end={end:#x} delta={end-TARGET:6d} ok={ok}")
    except SkipError:
        pass
