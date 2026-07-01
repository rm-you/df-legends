#!/usr/bin/env python3
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.historical_figures import (
    _quick_histfig_header_check,
    try_read_historical_figure_header,
)
from df_save_re.save_preamble import resolve_save_payload

payload = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
START = 0x21355EF
END = 0x213B0CF

hits = []
for off in range(START, END, 2):
    if not _quick_histfig_header_check(payload, off):
        continue
    r = BinaryReader(BytesIO(payload))
    r.seek(off)
    h = try_read_historical_figure_header(r)
    if h is None:
        continue
    hits.append((off, h.figure_id, h.art_count))

print(f"headers between tail_end and fig2: {len(hits)}")
for off, fid, art in hits[:30]:
    print(f"  {off:#x} id={fid} art={art}")
if len(hits) > 30:
    print(f"  ... +{len(hits)-30} more")
print("last few:")
for off, fid, art in hits[-5:]:
    print(f"  {off:#x} id={fid} art={art}")
