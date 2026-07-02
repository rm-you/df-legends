#!/usr/bin/env python3
from io import BytesIO
from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.historical_figures import read_historical_figure_header
from df_save_re.save_preamble import resolve_save_payload

payload = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
start = 0x2134DD9
reader = BinaryReader(BytesIO(payload))
reader.seek(start)
h = read_historical_figure_header(reader, figure_id=4)
print("header end", hex(reader.tell()), "bytes", h.header_bytes)
for field in ["entity_links", "site_links", "histfig_links"]:
    off = reader.tell()
    count = reader.read_int32()
    print(field, "count", count, "at", hex(off))
info = reader.read_uint8()
vague = reader.read_uint8()
print("info", info, "vague", vague, "end", hex(reader.tell()))
print("hex at fig5 start:", payload[reader.tell():reader.tell()+32].hex())
