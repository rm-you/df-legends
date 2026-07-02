#!/usr/bin/env python3
"""Pin the true events start using monotonically increasing event ids (base field +0x20)."""
from __future__ import annotations

import argparse
import struct
import sys
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.save_preamble import resolve_save_payload
from df_save_re.structures.layout_dispatch import skip_layout_body
from df_save_re.structures.save_layouts import SAVE_LAYOUTS


def read_event_id(reader: BinaryReader, fields: list[dict], save_version: int) -> int | None:
    """Consume the full body, returning the value of the base id field (+0x20)."""
    event_id = None
    for idx, f in enumerate(fields):
        if f.get("base") and f.get("mem_offset") == 0x20 and f.get("kind") == "i32":
            event_id = reader.read_int32()
            rest = fields[idx + 1 :]
            if rest:
                skip_layout_body(reader, rest, save_version=save_version)
            return event_id
        skip_layout_body(reader, [f], save_version=save_version)
    return event_id


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("--fixture", default="tests/fixtures/small-retired/world.dat")
    ap.add_argument("--sync", type=lambda x: int(x, 0), default=0x84407D)
    ap.add_argument("--end", type=lambda x: int(x, 0), default=0x15BEB40)
    args = ap.parse_args()

    payload = resolve_save_payload(args.fixture).payload
    unpack = struct.unpack_from
    reader = BinaryReader(BytesIO(payload))
    reader.seek(args.sync)
    entries: list[tuple[int, int, int | None]] = []  # (offset, tag, id)
    while reader.tell() < args.end:
        off = reader.tell()
        tag = unpack("<i", payload, off)[0]
        fields = SAVE_LAYOUTS.get(f"history_event:{tag}", {}).get("fields")
        if not (0 <= tag <= 0x85) or not fields:
            print(f"desync at 0x{off:x} tag={tag}")
            return 1
        reader.seek(off + 4)
        eid = read_event_id(reader, fields, 1716)
        entries.append((off, tag, eid))
    print(f"{len(entries)} events from sync to end")

    # longest strictly-increasing id suffix
    n = len(entries)
    cut = n - 1
    for i in range(n - 2, -1, -1):
        a, b = entries[i][2], entries[i + 1][2]
        if a is None or b is None or not (0 <= a < b):
            break
        cut = i
    first = entries[cut]
    print(f"monotonic id suffix starts at index {cut}: offset=0x{first[0]:x} tag={first[1]} id={first[2]}")
    print(f"suffix length = {n - cut}")
    remaining = n - cut
    cnt = unpack("<i", payload, first[0] - 4)[0]
    print(f"i32 before = {cnt} (expect {remaining})")
    last = entries[-1]
    print(f"last event id = {last[2]} (max_ids[9]-1 = 113117?)")
    for k in range(max(0, cut - 3), min(n, cut + 5)):
        o, t, i = entries[k]
        print(f"  [{k}] 0x{o:x} tag={t} id={i}")
    return 0


if __name__ == "__main__":
    sys.exit(main())
