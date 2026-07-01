#!/usr/bin/env python3
import time
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.body_skipper import default_xml_dir, skip_historical_figure_body
from df_save_re.deserializers.historical_figures import try_read_historical_figure_header
from df_save_re.save_preamble import resolve_save_payload

payload = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
xml = default_xml_dir()
N = 50
START = 0x2134DD0
DEATH = 0x226009C

r = BinaryReader(BytesIO(payload))
r.seek(START)
t0 = time.perf_counter()
for i in range(N):
    off = r.tell()
    if off >= DEATH:
        print("reached death early at", i, hex(off))
        break
    h = try_read_historical_figure_header(r)
    r.seek(off)
    skip_historical_figure_body(r, payload, xml_dir=xml)
    if i < 10 or i % 10 == 0:
        print(i, hex(off), "id", h.figure_id if h else None, "->", hex(r.tell()), flush=True)
print("final", hex(r.tell()), "death", hex(DEATH), "elapsed", round(time.perf_counter() - t0, 1))
