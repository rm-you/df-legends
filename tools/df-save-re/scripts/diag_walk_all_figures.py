#!/usr/bin/env python3
from io import BytesIO
from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.record_reader import read_historical_figure_record
from df_save_re.deserializers.vector_io import skip_posnull_pointer_vector
from df_save_re.deserializers.historical_figures import locate_figures_vector
from df_save_re.deserializers.world_dat import parse_dat_preamble
from df_save_re.deserializers.world_layout import discover_layout_landmarks
from df_save_re.save_preamble import resolve_save_payload
import struct

payload = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
pre = parse_dat_preamble(payload)
layout = discover_layout_landmarks(payload, pre)
anchor = locate_figures_vector(payload, pre.header, search_start=layout.history_stats)
reader = BinaryReader(BytesIO(payload))
reader.seek(anchor.vector_offset)
skip_posnull_pointer_vector(reader)
flags_end = reader.tell()
bodies_start = 0x2134E61  # empirically correct first body

reader.seek(bodies_start)
parsed = 0
for slot in range(12747):
    off = reader.tell()
    try:
        rec, _ = read_historical_figure_record(reader, payload, figure_id=slot)
        if rec.get("body_parse_error") or rec.get("body_blob"):
            print(f"PARTIAL slot {slot} at 0x{off:x}")
            break
    except Exception as e:
        print(f"FAIL slot {slot} at 0x{off:x}: {e}")
        break
    parsed += 1
    if parsed in (1, 5, 100, 1000, 4595):
        print(f"  ok through slot {slot} end=0x{reader.tell():x}")

end = reader.tell()
print(f"parsed={parsed} end=0x{end:x} flags_end=0x{flags_end:x} prefix={bodies_start-flags_end}")
# collections probe
for off in range(end, end + 64, 4):
    count = struct.unpack_from("<i", payload, off)[0]
    tag = struct.unpack_from("<i", payload, off + 4)[0] if off + 8 <= len(payload) else -1
    if 0 < count < 500000 and 0 <= tag <= 17:
        print(f"collections candidate @ 0x{off:x} count={count} tag={tag}")
