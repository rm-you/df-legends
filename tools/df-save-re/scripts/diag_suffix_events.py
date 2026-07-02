#!/usr/bin/env python3
"""Walk events from anchor to figures count; report count."""
from __future__ import annotations

import struct
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.save_preamble import resolve_save_payload
from df_save_re.structures.layout_dispatch import skip_layout_body
from df_save_re.structures.save_layouts import SAVE_LAYOUTS

from diag_events_id_monotonic import read_event_id

payload = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
ANCHOR = 0x11C41C5
FIG = 0x15BEB28  # history_stats / events end (not figures count)
reader = BinaryReader(BytesIO(payload))
reader.seek(ANCHOR)
n = 0
first_id = last_id = None
while reader.tell() < FIG:
    off = reader.tell()
    tag = struct.unpack_from("<i", payload, off)[0]
    fields = SAVE_LAYOUTS.get(f"history_event:{tag}", {}).get("fields")
    reader.seek(off + 4)
    eid = read_event_id(reader, fields, 1716)
    if first_id is None:
        first_id = eid
    last_id = eid
    n += 1
print(f"events {ANCHOR:#x} -> {FIG:#x}: n={n} first_id={first_id} last_id={last_id}")
print(f"bytes before anchor: {[struct.unpack_from('<i', payload, ANCHOR-4*k)[0] for k in range(1,8)]}")
