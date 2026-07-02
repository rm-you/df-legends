#!/usr/bin/env python3
"""Walk figure bodies using write-path count (12747) with stub skip for empty slots."""
from io import BytesIO
import struct

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.historical_figures import (
    header_looks_valid,
    locate_figures_vector,
    try_read_historical_figure_header,
)
from df_save_re.deserializers.record_reader import read_historical_figure_record
from df_save_re.deserializers.vector_io import skip_posnull_pointer_vector
from df_save_re.deserializers.world_dat import parse_dat_preamble
from df_save_re.deserializers.world_layout import discover_layout_landmarks
from df_save_re.save_preamble import resolve_save_payload

EMPTY_STUB = 26  # bytes of zeros between some consecutive slot bodies on Namushul

payload = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
pre = parse_dat_preamble(payload)
layout = discover_layout_landmarks(payload, pre)
anchor = locate_figures_vector(payload, pre.header, search_start=layout.history_stats)
reader = BinaryReader(BytesIO(payload))
reader.seek(anchor.vector_offset)
count, _ = skip_posnull_pointer_vector(reader)

reader.seek(anchor.bodies_start)
parsed = 0
stub_skips = 0
for slot in range(count):
    off = reader.tell()
    peek = BinaryReader(BytesIO(payload))
    peek.seek(off)
    header = try_read_historical_figure_header(peek, save_version=1716)
    if header is None or not header_looks_valid(header):
        reader.read_bytes(EMPTY_STUB)
        stub_skips += 1
        continue
    try:
        rec, _ = read_historical_figure_record(reader, payload, figure_id=slot)
        if rec.get("body_blob"):
            print(f"blob slot {slot} at 0x{off:x}")
            break
    except Exception as e:
        print(f"fail slot {slot} at 0x{off:x}: {e}")
        break
    parsed += 1
    if parsed in (1, 10, 100, 1000, 4595):
        print(f"  parsed={parsed} stub_skips={stub_skips} end=0x{reader.tell():x}")

end = reader.tell()
print(f"done parsed={parsed} stubs={stub_skips} end=0x{end:x}")
for probe in range(end, end + 32, 4):
    c = struct.unpack_from("<i", payload, probe)[0]
    t = struct.unpack_from("<i", payload, probe + 4)[0]
    if 0 < c < 500000 and 0 <= t <= 17:
        print(f"collections @ 0x{probe:x} count={c} tag={t}")
