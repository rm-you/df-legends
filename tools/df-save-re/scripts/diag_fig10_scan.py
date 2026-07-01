#!/usr/bin/env python3
"""List candidate next-figure headers after fig id=10 tail."""
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.historical_figures import (
    read_historical_figure_header,
    try_read_historical_figure_header,
)
from df_save_re.save_preamble import resolve_save_payload

payload = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
TAIL_END = 0x2192EAA
WINDOW = 500_000
DEATH = 0x226009C
PREV_ID = 10

hits = []
for off in range(TAIL_END, min(TAIL_END + WINDOW, DEATH), 2):
    r = BinaryReader(BytesIO(payload))
    r.seek(off)
    h = try_read_historical_figure_header(r)
    if h is None or h.figure_id <= PREV_ID:
        continue
    hits.append((off, h.figure_id, h.art_count, off - TAIL_END))

print(f"candidates in {WINDOW} bytes after tail_end={TAIL_END:#x}: {len(hits)}")
for off, fid, art, delta in hits[:30]:
    print(f"  off={off:#x} delta={delta:6d} id={fid:5d} art={art}")
if len(hits) > 30:
    print(f"  ... {len(hits)-30} more")

# Brute: try personal_art chunk vectors after tail (from header art_count on fig10=0)
print("\nTry post-tail chunk vectors (pc/pm from file):")
r = BinaryReader(BytesIO(payload))
r.seek(TAIL_END)
pc = r.read_int32()
pm = r.read_int32()
print(f"  pc={pc} pm={pm} at {TAIL_END:#x}")
if 0 <= pc <= 10000 and 0 <= pm <= 10000:
    r2 = BinaryReader(BytesIO(payload))
    r2.seek(TAIL_END)
    r2.read_int32()
    r2.read_bytes(pc * 4)
    r2.read_int32()
    r2.read_bytes(pm * 2)
    end = r2.tell()
    r3 = BinaryReader(BytesIO(payload))
    r3.seek(end)
    nh = try_read_historical_figure_header(r3)
    print(f"  after chunk vectors end={end:#x} next_id={nh.figure_id if nh else None}")

# fig10 header for reference
r = BinaryReader(BytesIO(payload))
r.seek(0x2192DDA)
h = read_historical_figure_header(r)
print(f"\nfig10 art_count={h.art_count}")
