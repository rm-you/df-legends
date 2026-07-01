#!/usr/bin/env python3
"""Scan forward from fig1 tail for next header with tightened validation."""
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.historical_figures import (
    read_historical_figure_header,
    try_read_historical_figure_header,
)
from df_save_re.save_preamble import resolve_save_payload

payload = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
FIG1_TAIL = 0x21355EF
FIG2 = 0x213B0CF


def header_valid(h):
    if h is None:
        return False
    if h.art_count > 100:
        return False
    if h.profession > 200:
        return False
    return True


for cand in range(FIG1_TAIL, FIG2 + 1):
    r = BinaryReader(BytesIO(payload))
    r.seek(cand)
    h = try_read_historical_figure_header(r)
    if h and h.figure_id == 2:
        print("fig2 at", hex(cand), "gap", cand - FIG1_TAIL)
        break

starts = [0x2134DD0]
offset = starts[0]
for n in range(25):
    r = BinaryReader(BytesIO(payload))
    r.seek(offset)
    h0 = read_historical_figure_header(r)
    body_end = r.tell()
    found = None
    for cand in range(body_end, min(body_end + 500_000, len(payload)), 2):
        r2 = BinaryReader(BytesIO(payload))
        r2.seek(cand)
        h = try_read_historical_figure_header(r2)
        if not header_valid(h):
            continue
        if h.figure_id <= h0.figure_id:
            continue
        found = cand
        break
    if found is None:
        print("stop at", hex(offset), "id", h0.figure_id, "after", n, "figures")
        break
    r3 = BinaryReader(BytesIO(payload))
    r3.seek(found)
    nh = try_read_historical_figure_header(r3)
    print(
        f"  id={h0.figure_id} art={h0.art_count} size={found - offset} "
        f"-> next id={nh.figure_id if nh else None} @ {found:#x}"
    )
    starts.append(found)
    offset = found

print("starts", len(starts))
