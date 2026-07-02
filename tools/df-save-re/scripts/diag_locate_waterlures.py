#!/usr/bin/env python3
"""Diagnose locate_world_history on Waterlures."""
from __future__ import annotations

import time

from df_save_re.deserializers.world_history_walk import (
    _figures_anchor_candidates,
    _locate_events_start,
    locate_world_history,
)
from df_save_re.save_preamble import resolve_save_payload

path = "tests/fixtures/waterlures-retired/world.dat"
r = resolve_save_payload(path)
p, h, sv = r.payload, r.preamble.header, r.save_version
print(f"max_ids[8]={h.max_ids[8]} max_ids[9]={h.max_ids[9]} payload={len(p):,}")

t0 = time.time()
cands = _figures_anchor_candidates(p, h, save_version=sv)
print(f"candidates={len(cands)} [{time.time()-t0:.1f}s]")
for off in cands[:8]:
    for label, back in (("16M", 0x1000000), ("64M", 0x4000000), ("full", len(p))):
        t1 = time.time()
        loc = _locate_events_start(p, off, save_version=sv, scan_back=back)
        dt = time.time() - t1
        if loc:
            print(f"  0x{off:x} {label}: events={loc[2]} count@0x{loc[0]:x} [{dt:.1f}s]")
            break
    else:
        print(f"  0x{off:x}: no chain in any scan window")

t2 = time.time()
lm = locate_world_history(p, h, save_version=sv)
print(f"locate_world_history: {lm} [{time.time()-t2:.1f}s]")
