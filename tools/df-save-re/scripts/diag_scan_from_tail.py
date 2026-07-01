#!/usr/bin/env python3
"""Scan from known tail_end offsets for first valid next header."""
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.historical_figures import try_read_historical_figure_header
from df_save_re.save_preamble import resolve_save_payload

payload = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload

cases = [
    ("fig0", 0x2134DD0, 0x2134E66, 0),
    ("fig1", 0x2135412, 0x213592D, 1),
    ("fig2", 0x213B0CF, None, 2),
    ("fig3", 0x215EB79, None, 3),
]

# precomputed tail ends from skip
TAILS = {
    0x2134DD0: 0x2135412,  # perfect
    0x2135412: 0x213592D,
    0x213B0CF: 0x213B645,
    0x215EB79: 0x215EB79 + 150,
    0x215EDBF: 0x215EDBF + 15497,
    0x21673D6: 0x21673D6 + 248,
}

for name, start, tail, prev_id in cases:
    if tail is None:
        tail = TAILS.get(start, start + 150)
    print(f"\n{name} start={start:#x} tail={tail:#x} prev_id={prev_id}")
    for mode in ("first", "min_id"):
        best = None
        best_id = 2_000_000
        for cand in range(tail, min(tail + 300_000, 0x226009C), 2):
            r = BinaryReader(BytesIO(payload))
            r.seek(cand)
            h = try_read_historical_figure_header(r)
            if h is None or h.figure_id <= prev_id or h.art_count > 500:
                continue
            if mode == "first":
                best = (cand, h.figure_id, h.art_count)
                break
            if h.figure_id < best_id:
                best_id = h.figure_id
                best = (cand, h.figure_id, h.art_count)
        print(f"  {mode}: {best}")
