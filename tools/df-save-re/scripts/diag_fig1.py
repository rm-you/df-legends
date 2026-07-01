#!/usr/bin/env python3
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.historical_figures import read_historical_figure_header
from df_save_re.save_preamble import resolve_save_payload
import struct

p = resolve_save_payload("tests/fixtures/small-retired/world.dat")
payload = p.payload
off = 0x2135412
r = BinaryReader(BytesIO(payload))
r.seek(off)
h = read_historical_figure_header(r)
print("header end", hex(r.tell()), "art", h.art_count, "id", h.figure_id)
# bytes after header
tail_start = r.tell()
for name, o in [
    ("entity_links", tail_start),
]:
    c = struct.unpack_from("<i", payload, o)[0]
    print(name, "count", c, "at", hex(o))
