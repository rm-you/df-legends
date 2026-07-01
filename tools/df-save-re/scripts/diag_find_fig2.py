#!/usr/bin/env python3
"""Find real fig2 header after fig1."""
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.historical_figures import try_read_historical_figure_header
from df_save_re.save_preamble import resolve_save_payload

payload = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
FIG1 = 0x2135412

r = BinaryReader(BytesIO(payload))
r.seek(FIG1)
h1 = try_read_historical_figure_header(r)
body_start = r.tell()
print(f"fig1 header_end={body_start:#x} art={h1.art_count}")

candidates = []
for cand in range(body_start, body_start + 2000, 2):
    r2 = BinaryReader(BytesIO(payload))
    r2.seek(cand)
    h = try_read_historical_figure_header(r2, expect_id=2)
    if h:
        candidates.append(cand)

print("expect_id=2 candidates:", [hex(c) for c in candidates[:10]])

# best candidate: smallest offset with id=2
for cand in range(body_start, body_start + 8000, 2):
    r2 = BinaryReader(BytesIO(payload))
    r2.seek(cand)
    h = try_read_historical_figure_header(r2)
    if h and h.figure_id == 2:
        print(f"fig2 @ {cand:#x} art={h.art_count} body_size_from_fig1={cand - FIG1}")
        break
else:
    print("id=2 not found in 8k scan")
