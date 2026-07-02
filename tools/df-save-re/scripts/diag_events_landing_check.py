#!/usr/bin/env python3
"""Walk events from their start and check landing on figures count offset 0x15beb40."""
from __future__ import annotations

import struct
import sys
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.world_history_walk import skip_event_body
from df_save_re.save_preamble import resolve_save_payload

p = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload

COUNT_OFF = 0x11BEB3E
FIG_COUNT_OFF = 0x15BEB40

count = struct.unpack_from("<i", p, COUNT_OFF)[0]
print(f"events count echo @0x{COUNT_OFF:x}: {count}")

r = BinaryReader(BytesIO(p))
r.seek(COUNT_OFF + 4)
n = 0
last_tags = []
try:
    while n < count and r.tell() < FIG_COUNT_OFF:
        off = r.tell()
        tag = r.read_int32()
        skip_event_body(r, tag, save_version=1716)
        last_tags.append((n, tag, off, r.tell()))
        if len(last_tags) > 5:
            last_tags.pop(0)
        n += 1
except Exception as exc:
    print(f"walk failed at event {n} offset 0x{r.tell():x}: {exc}")

print(f"walked {n}/{count} events, cursor 0x{r.tell():x}, target 0x{FIG_COUNT_OFF:x}, delta {r.tell() - FIG_COUNT_OFF}")
for i, tag, off, end in last_tags:
    print(f"  event {i} tag={tag} @0x{off:x} -> 0x{end:x}")
