#!/usr/bin/env python3
"""Find figures count echoes and validate events landing before them."""
from __future__ import annotations

import struct
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.world_dat import parse_dat_preamble
from df_save_re.save_preamble import resolve_save_payload
from df_save_re.structures.layout_dispatch import skip_layout_body
from df_save_re.structures.save_layouts import SAVE_LAYOUTS

payload = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
pre = parse_dat_preamble(payload)
fig_count = pre.header.max_ids[8]
event_max = pre.header.max_ids[9]
print(f"fig_count={fig_count} event_max={event_max}")

needle = struct.pack("<i", fig_count)
pos = 0
hits = []
while True:
    j = payload.find(needle, pos)
    if j < 0:
        break
    hits.append(j)
    pos = j + 4
print(f"fig_count echo: {len(hits)} hits")
for j in hits[:20]:
    ctx = [struct.unpack_from("<i", payload, j + 4 * k)[0] for k in range(-2, 6)]
    print(f"  0x{j:x}: ctx={ctx}")


def walk_events_from_count(count_off: int, *, max_events: int) -> tuple[int, int, str | None]:
    reader = BinaryReader(BytesIO(payload))
    reader.seek(count_off)
    count = reader.read_int32()
    limit = min(count, max_events)
    for i in range(limit):
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
    return limit, reader.tell(), None


# For each fig_count hit, try event counts in the 4 bytes before bodies start
# and also try walking backward: assume count at off-4, walk count events, check end==off
for fig_off in hits:
    if fig_off < 0x200000 or fig_off > 0x2200000:
        continue
    for count_off in range(fig_off - 0x200000, fig_off, 4):
        count = struct.unpack_from("<i", payload, count_off)[0]
        if count < 80000 or count > event_max + 500:
            continue
        tag = struct.unpack_from("<i", payload, count_off + 4)[0]
        if not (0 <= tag <= 0x85):
            continue
        walked, end, err = walk_events_from_count(count_off, max_events=count)
        if err is None and end == fig_off:
            print(f"LANDED events 0x{count_off:x} count={count} -> figures 0x{fig_off:x}")
            break
    else:
        continue
    break
else:
    print("no count->events->figures landing found")
