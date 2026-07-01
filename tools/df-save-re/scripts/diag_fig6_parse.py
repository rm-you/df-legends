#!/usr/bin/env python3
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.historical_figures import read_historical_figure_header
from df_save_re.save_preamble import resolve_save_payload

payload = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
off = 0x217FAEE
r = BinaryReader(BytesIO(payload))
r.seek(off)
h = read_historical_figure_header(r)
print("figure_id", h.figure_id, "art_count", h.art_count)
print("header_bytes", h.header_bytes, "end", hex(off + h.header_bytes))
print("name", h.name)
print("bytes at id field", payload[off:off+h.header_bytes].hex()[:200])
