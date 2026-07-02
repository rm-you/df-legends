#!/usr/bin/env python3
"""Diagnose locate_world_history on the Ironhand active save."""
from __future__ import annotations

import struct
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.world_history_walk import skip_figure_record
from df_save_re.save_preamble import resolve_save_payload

path = "tests/fixtures/ironhand-active/world.sav"
r = resolve_save_payload(path)
p, h, sv = r.payload, r.preamble.header, r.save_version
max_fig = h.max_ids[8]
print(f"max_ids[8]={max_fig} max_ids[9]={h.max_ids[9]} payload={len(p):,}")

for count in (max_fig + 1, max_fig):
    needle = struct.pack("<i", count)
    hits = 0
    pos = 0
    while True:
        off = p.find(needle, pos)
        if off < 0:
            break
        pos = off + 1
        hits += 1
        reader = BinaryReader(BytesIO(p))
        reader.seek(off + 4)
        parsed = 0
        err = None
        try:
            for _ in range(min(3, count)):
                skip_figure_record(reader, save_version=sv)
                parsed += 1
        except (ValueError, EOFError) as exc:
            err = str(exc)[:90]
        if parsed >= 1:
            print(f"count={count} @0x{off:x}: parsed {parsed} figures; err={err}")
    print(f"count={count}: {hits} raw needle hits")
