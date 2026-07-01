#!/usr/bin/env python3
from df_save_re.deserializers.historical_figures import locate_figures_vector
from df_save_re.deserializers.world_layout import discover_layout_landmarks
from df_save_re.save_preamble import resolve_save_payload

p = resolve_save_payload("tests/fixtures/small-retired/world.dat")
layout = discover_layout_landmarks(p.payload, p.preamble)
a = locate_figures_vector(p.payload, p.preamble.header, search_start=layout.history_stats)
bs = a.bodies_start
lo = bs + 1_250_000
hi = bs + 1_280_000
target = 0x226009C
print("bs", hex(bs), "lo", hex(lo), "hi", hex(hi), "target", hex(target), "in", lo <= target < hi)
found = None
for offset in range(lo, hi - 4, 4):
    declared = int.from_bytes(p.payload[offset : offset + 4], "little", signed=True)
    if declared < 130 or declared > 170:
        continue
    sample = p.payload[offset + 4 : offset + 4 + declared]
    if len(sample) < declared:
        continue
    quality = sum(1 for byte in sample if byte in (0, 1)) / declared
    if quality >= 0.952:
        found = offset
        print("match", hex(offset), declared, quality)
print("last", hex(found) if found else None)
