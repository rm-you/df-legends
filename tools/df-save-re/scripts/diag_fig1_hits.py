#!/usr/bin/env python3
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.historical_figures import (
    _quick_histfig_header_check,
    try_read_historical_figure_header,
)
from df_save_re.save_preamble import resolve_save_payload

payload = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
tail = 0x213592D
stop = 0x213B0CF + 100
hits = []
for cand in range(tail, stop, 2):
    if not _quick_histfig_header_check(payload, cand):
        continue
    r = BinaryReader(BytesIO(payload))
    r.seek(cand)
    h = try_read_historical_figure_header(r)
    if h is None:
        continue
    hits.append((cand, h.figure_id, h.header_bytes, h.art_count))
print("valid headers", len(hits))
for row in hits[:8]:
    print(f"  {row[0]:#x} id={row[1]} hb={row[2]} art={row[3]}")
if hits:
    print("last", f"{hits[-1][0]:#x} id={hits[-1][1]}")
