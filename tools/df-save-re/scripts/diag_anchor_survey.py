#!/usr/bin/env python3
"""Quick anchor survey: history stats, event/figure landing probes."""
from __future__ import annotations

import struct
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.historical_figures import locate_figures_vector
from df_save_re.deserializers.record_reader import read_historical_figure_record
from df_save_re.deserializers.world_dat import parse_dat_preamble
from df_save_re.deserializers.world_layout import discover_layout_landmarks, find_history_stats_block
from df_save_re.save_preamble import resolve_save_payload
from df_save_re.structures.layout_dispatch import skip_layout_body
from df_save_re.structures.save_layouts import SAVE_LAYOUTS

FIXTURE = "tests/fixtures/small-retired/world.dat"
payload = resolve_save_payload(FIXTURE).payload
pre = parse_dat_preamble(payload)
layout = discover_layout_landmarks(payload, pre)
stats = find_history_stats_block(payload, pre.header)
fig_anchor = locate_figures_vector(payload, pre.header, search_start=layout.history_stats)
max_events = pre.header.max_ids[9]
max_figs = pre.header.max_ids[8]
print(f"payload=0x{len(payload):x} stats=0x{stats:x}" if stats else "no stats")
print(f"max_events={max_events} max_figs={max_figs}")
if fig_anchor:
    print(
        f"figures posnull @0x{fig_anchor.vector_offset:x} bodies=0x{fig_anchor.bodies_start:x} "
        f"present={fig_anchor.present_count}"
    )

# probe key offsets
for off in [0x84407D, 0x11C41C5, 0x15BEB40, 0x116F542, 0x2131BB0]:
    vals = [struct.unpack_from("<i", payload, off + 4 * k)[0] for k in range(6)]
    print(f"0x{off:x}: {vals}")


def walk_events(start: int, *, limit: int | None = None) -> tuple[int, int, str | None]:
    reader = BinaryReader(BytesIO(payload))
    reader.seek(start)
    count = reader.read_int32()
    n = count if limit is None else min(count, limit)
    for i in range(n):
        off = reader.tell()
        tag = reader.read_int32()
        if not (0 <= tag <= 0x85):
            return i, off, f"bad tag {tag}"
        fields = SAVE_LAYOUTS.get(f"history_event:{tag}", {}).get("fields")
        if not fields:
            return i, off, f"no layout {tag}"
        try:
            skip_layout_body(reader, fields, save_version=1716)
        except Exception as exc:
            return i, off, str(exc)
    return n, reader.tell(), None


def walk_figures(start: int, count: int, *, limit: int = 20) -> tuple[int, int, str | None]:
    reader = BinaryReader(BytesIO(payload))
    reader.seek(start)
    declared = reader.read_int32()
    n = min(count if count > 0 else declared, limit)
    for slot in range(n):
        off = reader.tell()
        try:
            read_historical_figure_record(reader, payload, figure_id=slot, save_version=1716)
        except Exception as exc:
            return slot, off, str(exc)
    return n, reader.tell(), None


# try events count candidates that land on fig count
fig_target = max_figs  # 12747
unpack = struct.unpack_from
hits = []
for j in range(0x400000, 0x1200000, 1):
    c = unpack("<i", payload, j)[0]
    if c < 50000 or c > max_events + 1000:
        continue
    tag = unpack("<i", payload, j + 4)[0]
    if not (0 <= tag <= 0x85):
        continue
    walked, end, err = walk_events(j, limit=c)
    if err is not None:
        continue
    nxt = unpack("<i", payload, end)[0]
    if nxt == fig_target:
        hits.append((j, c, end))
        print(f"EVENTS->FIGURES 0x{j:x} count={c} end=0x{end:x} next={nxt}")
        if len(hits) >= 5:
            break

if not hits:
    print("no events->figures landing in scan range")
    # partial: walk from best known suffix anchor backward count bytes
    walked, end, err = walk_events(0x11C41C5 - 4, limit=86380)
    print(f"from count@0x{0x11C41C5-4:x}: walked={walked} end=0x{end:x} err={err}")
    walked2, end2, err2 = walk_figures(end, fig_target, limit=10)
    print(f"figures from end: parsed={walked2} end=0x{end2:x} err={err2}")
