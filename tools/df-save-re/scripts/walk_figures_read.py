#!/usr/bin/env python3
"""Walk figures with read_historical_figure_record until desync."""
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.body_skipper import SkipError
from df_save_re.deserializers.historical_figures import build_historical_figure_catalog
from df_save_re.deserializers.record_reader import read_historical_figure_record
from df_save_re.deserializers.world_dat import parse_dat_preamble
from df_save_re.deserializers.world_layout import discover_layout_landmarks
from df_save_re.save_preamble import resolve_save_payload

payload = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
pre = parse_dat_preamble(payload)
layout = discover_layout_landmarks(payload, pre)
cat = build_historical_figure_catalog(payload, pre.header, search_start=layout.history_stats)
anchor = cat.anchor
death = anchor.death_events_offset

reader = BinaryReader(BytesIO(payload))
reader.seek(anchor.bodies_start)
parsed = 0
last_id = -1
while parsed < 50:
    off = reader.tell()
    try:
        record, consumed = read_historical_figure_record(
            reader, payload, scan_stop=death, next_anchor=None
        )
    except SkipError as e:
        print(f"DESYNC after {parsed} at 0x{off:x}: {e}")
        break
    fid = record["id"]
    art = record.get("art_count", 0)
    trailer = record.get("post_tail_blob") or record.get("__art_trailer__", {})
    gap = trailer.get("size", 0)
    print(f"{parsed:3d} id={fid:5d} off=0x{off:x} consumed={consumed:6d} art={art} gap={gap}")
    if fid <= last_id:
        print("  WARNING id not increasing")
    last_id = fid
    parsed += 1
    if reader.tell() >= death:
        print("reached death anchor")
        break

print(f"total parsed={parsed} end=0x{reader.tell():x} death=0x{death:x}")
