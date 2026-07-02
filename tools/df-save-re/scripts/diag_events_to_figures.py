#!/usr/bin/env python3
"""Find events count offset that walks exactly to figures count at FIG_OFF."""
from __future__ import annotations

import struct
import sys
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.save_preamble import resolve_save_payload
from df_save_re.structures.layout_dispatch import skip_layout_body
from df_save_re.structures.save_layouts import SAVE_LAYOUTS

FIG_OFF = 0x15BEB34
payload = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
print(f"figures count at 0x{FIG_OFF:x} = {struct.unpack_from('<i', payload, FIG_OFF)[0]}")


def walk_events(count_off: int) -> tuple[int, int, str | None]:
    reader = BinaryReader(BytesIO(payload))
    reader.seek(count_off)
    count = reader.read_int32()
    for i in range(count):
        off = reader.tell()
        tag = reader.read_int32()
        if not (0 <= tag <= 0x85):
            return i, off, f"bad tag {tag} at 0x{off:x}"
        fields = SAVE_LAYOUTS.get(f"history_event:{tag}", {}).get("fields")
        if not fields:
            return i, off, f"no layout {tag}"
        try:
            skip_layout_body(reader, fields, save_version=1716)
        except Exception as exc:
            return i, off, str(exc)
    return count, reader.tell(), None


# probe counts near known region
for count_off in range(0x600000, 0x850000, 4):
    c = struct.unpack_from("<i", payload, count_off)[0]
    if c not in (113118, 111718, 86575, 86380, 86381):
        continue
    tag = struct.unpack_from("<i", payload, count_off + 4)[0]
    if not (0 <= tag <= 0x85):
        continue
    walked, end, err = walk_events(count_off)
    if err:
        print(f"0x{count_off:x} count={c} walked={walked} err={err}")
    elif end == FIG_OFF:
        print(f"LANDED 0x{count_off:x} count={c} end=0x{end:x}")
        sys.exit(0)
    elif walked > 50000:
        print(f"near 0x{count_off:x} count={c} end=0x{end:x} delta={end-FIG_OFF}")

print("scan done, no exact landing")
