#!/usr/bin/env python3
import time
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.body_skipper import default_xml_dir, skip_historical_figure_body
from df_save_re.deserializers.historical_figures import try_read_historical_figure_header
from df_save_re.save_preamble import resolve_save_payload

payload = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
xml = default_xml_dir()
EXPECTED = [0x2134DD0, 0x2135412, 0x213B0CF, 0x215EB79, 0x215EDBF, 0x21673D6]

r = BinaryReader(BytesIO(payload))
r.seek(EXPECTED[0])
for i in range(len(EXPECTED) - 1):
    t0 = time.perf_counter()
    off = r.tell()
    skip_historical_figure_body(r, payload, xml_dir=xml)
    got = r.tell()
    exp = EXPECTED[i + 1]
    ok = got == exp
    print(f"{i} {off:#x} -> {got:#x} expect {exp:#x} {'OK' if ok else 'BAD'} ({time.perf_counter()-t0:.1f}s)", flush=True)
    if not ok:
        hr = BinaryReader(BytesIO(payload))
        hr.seek(got)
        h = try_read_historical_figure_header(hr)
        print("  at got id", h.figure_id if h else None, "art", h.art_count if h else None)
        break
