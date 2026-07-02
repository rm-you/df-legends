#!/usr/bin/env python3
"""Scan for plausible figure header starts after the dense vector start."""
from __future__ import annotations

import struct
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.historical_figures import read_historical_figure_header
from df_save_re.save_preamble import resolve_save_payload

p = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
START = 0x15BEB44
END = START + 0x8000

hits = []
for off in range(START, END):
    r = BinaryReader(BytesIO(p))
    r.seek(off)
    try:
        h = read_historical_figure_header(r, save_version=1716)
    except Exception:
        continue
    if not (0 <= h.race <= 1000 and 0 <= h.caste <= 50 and -1 <= h.sex <= 2):
        continue
    if not (-1 <= h.civ_id <= 2000):
        continue
    if h.name.language not in (-1, 0, 1):
        continue
    if abs(h.born_year) > 100000 or abs(h.appeared_year) > 100000:
        continue
    hits.append((off, h.race, h.civ_id, h.born_year, r.tell()))

print(f"{len(hits)} header candidates in first 0x8000 bytes")
prev = None
for off, race, civ, born, hdr_end in hits[:40]:
    gap = off - prev if prev is not None else 0
    print(f"0x{off:x} gap={gap} race={race} civ={civ} born={born} hdr_end=0x{hdr_end:x}")
    prev = off
