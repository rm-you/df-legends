#!/usr/bin/env python3
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.historical_figures import (
    _quick_histfig_header_check,
    try_read_historical_figure_header,
)
from df_save_re.save_preamble import resolve_save_payload

payload = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
FIG2_TAIL = 0x213B2F5
FIG3 = 0x215EB79

hits = []
for off in range(FIG2_TAIL, FIG3 + 1, 2):
    if not _quick_histfig_header_check(payload, off):
        continue
    r = BinaryReader(BytesIO(payload))
    r.seek(off)
    h = try_read_historical_figure_header(r)
    if h and h.figure_id == 3:
        hits.append((off, h.art_count))

print(f"id=3 headers in fig2 gap: {len(hits)}")
for off, art in hits:
    print(f"  {off:#x} art={art}")
print(f"canonical fig3 {FIG3:#x} in hits", any(o == FIG3 for o, _ in hits))
