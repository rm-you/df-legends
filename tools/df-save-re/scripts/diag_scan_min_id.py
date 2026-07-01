#!/usr/bin/env python3
"""Scan with minimum next figure_id (not first offset)."""
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.historical_figures import (
    read_historical_figure_header,
    try_read_historical_figure_header,
)
from df_save_re.save_preamble import resolve_save_payload

payload = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
DEATH = 0x226009C


def header_valid(h):
    if h is None:
        return False
    if not (0 <= h.figure_id <= 200_000):
        return False
    if h.art_count > 500:
        return False
    if h.profession > 200 or h.profession < -1:
        return False
    if not (0 <= h.race <= 500):
        return False
    return True


def find_next(body_end, prev_id, stop):
    best_off = None
    best_id = 2_000_000
    for cand in range(body_end, min(body_end + 500_000, stop), 2):
        r = BinaryReader(BytesIO(payload))
        r.seek(cand)
        h = try_read_historical_figure_header(r)
        if not header_valid(h):
            continue
        if h.figure_id <= prev_id:
            continue
        if h.figure_id < best_id:
            best_id = h.figure_id
            best_off = cand
    return best_off, best_id


offset = 0x2134DD0
for n in range(15):
    r = BinaryReader(BytesIO(payload))
    r.seek(offset)
    h0 = read_historical_figure_header(r)
    body_end = r.tell()
    nxt, nid = find_next(body_end, h0.figure_id, DEATH)
    size = (nxt - offset) if nxt else 0
    nxt_s = f"{nxt:#x}" if nxt else "None"
    print(f"  id={h0.figure_id} art={h0.art_count} size={size} -> next id={nid} @ {nxt_s}")
    if nxt is None:
        break
    offset = nxt
