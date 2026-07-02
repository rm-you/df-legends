#!/usr/bin/env python3
"""Check the final event (tag 32 @0x15beb17) and its layout consumption."""
from __future__ import annotations

import json
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.world_history_walk import skip_event_body
from df_save_re.save_preamble import resolve_save_payload
from df_save_re.structures.save_layouts import SAVE_LAYOUTS

p = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload

r = BinaryReader(BytesIO(p))
r.seek(0x15BEB17)
tag = r.read_int32()
print(f"tag={tag}")
print("layout:", json.dumps(SAVE_LAYOUTS.get(f"history_event:{tag}"), indent=1))
try:
    skip_event_body(r, tag, save_version=1716)
    print(f"body end 0x{r.tell():x} target 0x15beb40 delta {r.tell() - 0x15BEB40}")
except Exception as exc:
    print(f"skip failed at 0x{r.tell():x}: {exc}")
