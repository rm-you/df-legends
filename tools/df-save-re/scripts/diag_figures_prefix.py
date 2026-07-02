#!/usr/bin/env python3
from io import BytesIO
from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.vector_io import skip_posnull_pointer_vector
from df_save_re.deserializers.historical_figures import locate_figures_vector
from df_save_re.deserializers.world_dat import parse_dat_preamble
from df_save_re.deserializers.world_layout import discover_layout_landmarks
from df_save_re.save_preamble import resolve_save_payload

payload = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
pre = parse_dat_preamble(payload)
layout = discover_layout_landmarks(payload, pre)
anchor = locate_figures_vector(payload, pre.header, search_start=layout.history_stats)
reader = BinaryReader(BytesIO(payload))
reader.seek(anchor.vector_offset)
count, present = skip_posnull_pointer_vector(reader)
flags_end = reader.tell()
print("count", count, "present", present, "flags_end", hex(flags_end), "bodies", hex(anchor.bodies_start))
for off in range(flags_end, anchor.bodies_start + 4, 4):
    v = int.from_bytes(payload[off : off + 4], "little", signed=True)
    print(hex(off), v)
