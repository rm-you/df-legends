#!/usr/bin/env python3
"""Scan for world_history events start: i32 count (<= max event id) + valid i32 tag, probe-walk."""
from __future__ import annotations

import argparse
import struct
import sys
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.world_dat import parse_dat_preamble
from df_save_re.save_preamble import resolve_save_payload
from df_save_re.structures.layout_dispatch import skip_layout_body
from df_save_re.structures.save_layouts import SAVE_LAYOUTS


def probe_walk(
    payload: bytes, start: int, *, save_version: int, limit: int
) -> tuple[int, int, str | None]:
    """Return (events_walked, distinct_tags, error)."""
    reader = BinaryReader(BytesIO(payload))
    reader.seek(start)
    count = reader.read_int32()
    tags: set[int] = set()
    for i in range(min(count, limit)):
        off = reader.tell()
        if off + 8 > len(payload):
            return i, len(tags), f"eof at event {i}"
        tag = reader.read_int32()
        if not (0 <= tag <= 0x85):
            return i, len(tags), f"bad tag {tag} at 0x{off:x}"
        fields = SAVE_LAYOUTS.get(f"history_event:{tag}", {}).get("fields")
        if not fields:
            return i, len(tags), f"no layout for tag {tag}"
        tags.add(tag)
        try:
            skip_layout_body(reader, fields, save_version=save_version)
        except Exception as exc:
            return i, len(tags), f"tag {tag} at 0x{off:x}: {exc}"
    return min(count, limit), len(tags), None


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("--fixture", default="tests/fixtures/small-retired/world.dat")
    ap.add_argument("--min-count", type=int, default=1000)
    ap.add_argument("--probe", type=int, default=200)
    ap.add_argument("--scan-start", type=lambda x: int(x, 0), default=0x100000)
    ap.add_argument("--scan-end", type=lambda x: int(x, 0), default=0x116F542)
    ap.add_argument("--min-tags", type=int, default=8)
    args = ap.parse_args()

    payload = resolve_save_payload(args.fixture).payload
    pre = parse_dat_preamble(payload)
    max_event_id = pre.header.max_ids[9] if len(pre.header.max_ids) > 9 else 113118
    print(f"max_event_id={max_event_id} payload={len(payload):#x}")

    n = min(args.scan_end, len(payload) - 8)
    unpack = struct.unpack_from
    cands: list[int] = []
    for j in range(args.scan_start, n):
        count = unpack("<i", payload, j)[0]
        if not (args.min_count <= count <= max_event_id):
            continue
        tag = unpack("<i", payload, j + 4)[0]
        if 0 <= tag <= 0x85:
            cands.append(j)
    print(f"{len(cands)} raw (count,tag) candidates; probing...")

    results: list[tuple[int, int, int, int, str | None]] = []
    for j in cands:
        count = unpack("<i", payload, j)[0]
        walked, ntags, err = probe_walk(payload, j, save_version=1716, limit=args.probe)
        if walked >= 10 and ntags >= args.min_tags:
            results.append((j, count, walked, ntags, err))

    results.sort(key=lambda x: (-x[2], -x[3], x[0]))
    for off, count, walked, ntags, err in results[:20]:
        print(f"0x{off:x} count={count} walked={walked} tags={ntags} err={err}")
    if results and results[0][4] is None:
        off, count, walked, ntags, _ = results[0]
        print(f"BEST 0x{off:x} count={count} (probe {walked} clean, {ntags} tags)")
        return 0
    print("no clean candidate")
    return 1


if __name__ == "__main__":
    sys.exit(main())
