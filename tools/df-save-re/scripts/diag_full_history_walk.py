#!/usr/bin/env python3
"""Full forward walk: events @0x11b494a -> figures -> collections probe."""
from __future__ import annotations

import struct
import sys
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.historical_figures import read_historical_figure_header
from df_save_re.deserializers.histfig_info import skip_histfig_info, skip_vague_relationships
from df_save_re.deserializers.world_history_walk import skip_event_body
from df_save_re.save_preamble import resolve_save_payload
from df_save_re.structures.layout_dispatch import skip_layout_body
from df_save_re.structures.save_layouts import SAVE_LAYOUTS

SV = 1716
p = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
r = BinaryReader(BytesIO(p))

# --- events ---
r.seek(0x11B494A)
ev_count = r.read_int32()
print(f"events count={ev_count} bodies@0x{r.tell():x}")
for i in range(ev_count):
    tag = r.read_int32()
    if not (0 <= tag <= 0x85):
        print(f"bad tag {tag} at event {i} offset 0x{r.tell() - 4:x}")
        sys.exit(1)
    skip_event_body(r, tag, save_version=SV)
print(f"events end 0x{r.tell():x} (expect 0x15beb40)")

# --- figures ---
fig_count = r.read_int32()
print(f"figures count={fig_count} bodies@0x{r.tell():x}")
for slot in range(fig_count):
    read_historical_figure_header(r, save_version=SV)
    for factory in ("entity", "site", "histfig"):
        n = r.read_int32()
        if n < 0 or n > 100_000:
            print(f"bad {factory} link count {n} slot {slot} @0x{r.tell() - 4:x}")
            sys.exit(1)
        for _ in range(n):
            tag = r.read_int16()
            layout = SAVE_LAYOUTS.get(f"link:{factory}:{tag}")
            if not layout or not layout.get("fields"):
                print(f"no layout link:{factory}:{tag} slot {slot} @0x{r.tell() - 2:x}")
                sys.exit(1)
            skip_layout_body(r, layout["fields"], save_version=SV)
    if r.read_uint8():
        skip_histfig_info(r, save_version=SV)
    if SV > 0x6A0 and r.read_uint8():
        skip_vague_relationships(r)
print(f"figures end 0x{r.tell():x}")

# --- collections probe ---
coll_count = r.read_int32()
print(f"next i32 (collections count?) = {coll_count} @0x{r.tell() - 4:x}")
print("next 64 bytes:", p[r.tell():r.tell() + 64].hex())
