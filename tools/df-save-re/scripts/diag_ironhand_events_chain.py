#!/usr/bin/env python3
"""Backward-chain events before the Ironhand figures anchor; dump near bytes."""
from __future__ import annotations

import struct
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.world_history_walk import (
    _locate_events_start,
    skip_event_body,
)
from df_save_re.save_preamble import resolve_save_payload

r = resolve_save_payload("tests/fixtures/ironhand-active/world.sav")
p, sv = r.payload, r.save_version

for anchor in (0x44F184B, 0x9B7305, 0x48A0673):
    print(f"--- anchor 0x{anchor:x}")
    loc = _locate_events_start(p, anchor, save_version=sv, scan_back=0x1000000)
    print(f"  locate: {loc}")
    # Try a direct forward parse assuming an events count sits right before a
    # plausible small count (89 events per header).
    for back in range(4, 64, 1):
        off = anchor - back
        cnt = struct.unpack_from("<i", p, off)[0]
        if cnt != 89:
            continue
        reader = BinaryReader(BytesIO(p))
        reader.seek(off + 4)
        ok = 0
        try:
            for _ in range(cnt):
                tag = reader.read_int32()
                if not (0 <= tag <= 0x85):
                    break
                skip_event_body(reader, tag, save_version=sv)
                ok += 1
        except (ValueError, EOFError):
            pass
        print(f"  count-89 echo @0x{off:x}: forward-walked {ok}, end=0x{reader.tell():x}")
    print("  32B before anchor:", p[anchor - 32 : anchor].hex())
