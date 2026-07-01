#!/usr/bin/env python3
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.body_skipper import SkipError, default_xml_dir, skip_historical_figure_body
from df_save_re.deserializers.historical_figures import try_read_historical_figure_header
from df_save_re.save_preamble import resolve_save_payload

payload = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
xml = default_xml_dir()
FIG1 = 0x2135412

for start, label in [(0x2134DD0, "fig0"), (0x2135412, "fig1")]:
    r = BinaryReader(BytesIO(payload))
    r.seek(start)
    try:
        skip_historical_figure_body(r, payload, xml_dir=xml)
        print(f"{label}: end {r.tell():#x} bytes {r.tell()-start}")
        h = try_read_historical_figure_header(r)
        if h:
            print(f"  next id={h.figure_id} art={h.art_count}")
    except SkipError as e:
        print(f"{label}: FAIL @ {r.tell():#x}: {e}")

print("fig0 target", hex(FIG1))
