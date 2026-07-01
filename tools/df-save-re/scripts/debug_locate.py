#!/usr/bin/env python3
from df_save_re.compression import decompress_file
from df_save_re.deserializers.world_dat import parse_dat_preamble
from df_save_re.deserializers.world_layout import discover_layout_landmarks
from df_save_re.deserializers.historical_figures import locate_figures_vector, _find_dense_body_start
from df_save_re.deserializers.vector_io import score_posnull_prefix, skip_posnull_pointer_vector
from io import BytesIO
from df_save_re.binary_reader import BinaryReader
from pathlib import Path

payload = decompress_file(Path("tests/fixtures/small-retired/world.dat")).payload
pre = parse_dat_preamble(payload)
layout = discover_layout_landmarks(payload, pre)
stats_off = layout.history_stats or 0
print(f"stats_off=0x{stats_off:x}")
anchor = locate_figures_vector(payload, pre.header, search_start=stats_off)
print("anchor", anchor)
# manual at 0x2131bb0
off = 0x2131bb0
score = score_posnull_prefix(payload, off, sample=20000)
print(f"0x2131bb0 score={score}")
r = BinaryReader(BytesIO(payload)); r.seek(off)
cnt, pres = skip_posnull_pointer_vector(r)
print(f"skip end=0x{r.tell():x}")
bs = _find_dense_body_start(payload, flags_end=r.tell(), save_version=1716)
print(f"body start=0x{bs:x}" if bs else "no body")
