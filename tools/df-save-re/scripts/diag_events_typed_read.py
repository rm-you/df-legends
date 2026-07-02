#!/usr/bin/env python3
"""Validate typed event reads: full events walk must land exactly on figures."""
from __future__ import annotations

import sys
from collections import Counter
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.world_history_walk import (
    locate_world_history,
    read_event_record,
)
from df_save_re.save_preamble import resolve_save_payload

save = sys.argv[1] if len(sys.argv) > 1 else "tests/fixtures/small-retired/world.dat"
resolved = resolve_save_payload(save)
payload, sv, header = resolved.payload, resolved.save_version, resolved.preamble.header

lm = locate_world_history(payload, header, save_version=sv)
assert lm is not None
r = BinaryReader(BytesIO(payload))
r.seek(lm.events_bodies_start)

ids = []
bad_year = 0
samples = []
types = Counter()
for i in range(lm.event_count):
    tag = r.read_int32()
    rec = read_event_record(r, tag, save_version=sv)
    types[rec["_type"]] += 1
    ids.append(rec["id"])
    if not (-1 <= rec["year"] <= 10_000):
        bad_year += 1
    if rec["_type"] == "hist_figure_died" and len(samples) < 5:
        samples.append(rec)

end = r.tell()
print(f"events read: {len(ids)}; end 0x{end:x} expected 0x{lm.events_end:x} -> {'OK' if end == lm.events_end else 'DESYNC'}")
print(f"id monotonic: {all(b > a for a, b in zip(ids, ids[1:]))}; min {min(ids)} max {max(ids)} (max_ids[9]={header.max_ids[9]})")
print(f"bad years: {bad_year}")
print("top types:", types.most_common(10))
for s in samples[:3]:
    print("died sample:", {k: v for k, v in s.items() if k not in ("flags",)})
