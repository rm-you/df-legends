#!/usr/bin/env python3
"""Scan Ironhand for an 89-count events vector that forward-walks cleanly."""
from __future__ import annotations

import struct
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.world_history_walk import skip_event_body
from df_save_re.save_preamble import resolve_save_payload

r = resolve_save_payload("tests/fixtures/ironhand-active/world.sav")
p, sv = r.payload, r.save_version
count = r.preamble.header.max_ids[9]
needle = struct.pack("<i", count)
print(f"events ceiling {count}; scanning {len(p):,} bytes")

pos = 0
found = 0
while True:
    off = p.find(needle, pos)
    if off < 0:
        break
    pos = off + 1
    # quick pre-filter: next i32 must be a valid tag
    tag0 = struct.unpack_from("<i", p, off + 4)[0]
    if not (0 <= tag0 <= 0x85):
        continue
    reader = BinaryReader(BytesIO(p))
    reader.seek(off + 4)
    ok = 0
    try:
        for _ in range(count):
            tag = reader.read_int32()
            if not (0 <= tag <= 0x85):
                break
            skip_event_body(reader, tag, save_version=sv)
            ok += 1
    except (ValueError, EOFError):
        pass
    if ok >= count // 2:
        found += 1
        end = reader.tell()
        nxt = struct.unpack_from("<i", p, end)[0] if end + 4 <= len(p) else None
        print(f"@0x{off:x}: walked {ok}/{count}, end=0x{end:x}, next_i32={nxt}")
print(f"done, {found} plausible vectors")
