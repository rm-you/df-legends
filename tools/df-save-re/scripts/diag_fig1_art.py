#!/usr/bin/env python3
import struct
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.historical_figures import read_historical_figure_header
from df_save_re.save_preamble import resolve_save_payload

payload = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
FIG1 = 0x2135412
r = BinaryReader(BytesIO(payload))
r.seek(FIG1)
h = read_historical_figure_header(r)
end = r.tell()
print(f"fig1 id={h.figure_id} art={h.art_count} header_end={end:#x}")
# probe art blob before entity_links
for delta in range(0, 200, 4):
    off = end + delta
    v = struct.unpack_from("<i", payload, off)[0]
    print(f"  +{delta:3d} {off:#x} = {v:10d} ({v:#x})")
