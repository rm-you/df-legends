#!/usr/bin/env python3
"""Verify full events walk from candidate start to history_stats."""
from __future__ import annotations

import struct
import sys
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.save_preamble import resolve_save_payload
from df_save_re.structures.layout_dispatch import skip_layout_body
from df_save_re.structures.save_layouts import SAVE_LAYOUTS

START = int(sys.argv[1], 0) if len(sys.argv) > 1 else 0x1079C3C
END = 0x15BEB28
payload = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
r = BinaryReader(BytesIO(payload))
r.seek(START)
count = r.read_int32()
print(f"start=0x{START:x} count={count}")
for i in range(count):
    off = r.tell()
    tag = r.read_int32()
    fields = SAVE_LAYOUTS.get(f"history_event:{tag}", {}).get("fields")
    if not fields:
        print(f"fail {i} 0x{off:x} tag={tag} no layout"); sys.exit(1)
    try:
        skip_layout_body(r, fields, save_version=1716)
    except Exception as exc:
        print(f"fail {i} 0x{off:x} tag={tag}: {exc}"); sys.exit(1)
    if i in (0, 1, 832, 833, count - 1):
        print(f"  ok event {i} tag={tag} end=0x{r.tell():x}")
print(f"walked {count} end=0x{r.tell():x} expected=0x{END:x} match={r.tell()==END}")
print("next:", [struct.unpack_from("<i", payload, r.tell() + 4 * k)[0] for k in range(6)])
