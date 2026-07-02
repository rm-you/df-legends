#!/usr/bin/env python3
"""Locate world_history events layer start (i32 count + i32 tags)."""
from __future__ import annotations

import argparse
import struct
import sys

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.historical_figures import locate_figures_vector
from df_save_re.deserializers.world_dat import parse_dat_preamble
from df_save_re.deserializers.world_layout import discover_layout_landmarks
from df_save_re.save_preamble import resolve_save_payload
from df_save_re.structures.layout_dispatch import skip_layout_body
from df_save_re.structures.save_layouts import SAVE_LAYOUTS
from io import BytesIO


def _valid_tag(tag: int) -> bool:
    return 0 <= tag <= 0x85


def _walk_probe(payload: bytes, start: int, count: int, *, save_version: int, limit: int) -> tuple[int, str | None]:
    reader = BinaryReader(BytesIO(payload))
    reader.seek(start + 4)
    for i in range(min(count, limit)):
        off = reader.tell()
        if off + 8 > len(payload):
            return i, f"eof before tag at event {i}"
        tag = reader.read_int32()
        if not _valid_tag(tag):
            return i, f"bad tag {tag} at 0x{off:x} event {i}"
        key = f"history_event:{tag}"
        layout = SAVE_LAYOUTS.get(key)
        if not layout or not layout.get("fields"):
            return i, f"missing layout for tag {tag}"
        try:
            skip_layout_body(reader, layout["fields"], save_version=save_version)
        except Exception as exc:
            return i, f"skip failed tag {tag} at 0x{off:x}: {exc}"
    return limit, None


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("--fixture", default="tests/fixtures/small-retired/world.dat")
    ap.add_argument("--probe", type=int, default=100, help="events to validate per candidate")
    args = ap.parse_args()

    payload = resolve_save_payload(args.fixture).payload
    pre = parse_dat_preamble(payload)
    layout = discover_layout_landmarks(payload, pre)
    anchor = locate_figures_vector(payload, pre.header, search_start=layout.history_stats)
    figures_index = anchor.vector_offset if anchor else 0x2131BB0
    event_count = pre.header.max_ids[9] if len(pre.header.max_ids) > 9 else 113118

    candidates: list[tuple[int, int, str | None]] = []
    pat = struct.pack("<i", event_count)
    i = 0
    while True:
        j = payload.find(pat, i, figures_index)
        if j < 0:
            break
        tag = struct.unpack_from("<i", payload, j + 4)[0] if j + 8 <= len(payload) else -1
        if _valid_tag(tag):
            walked, err = _walk_probe(payload, j, event_count, save_version=1716, limit=args.probe)
            candidates.append((j, walked, err))
        i = j + 1

    if not candidates:
        print(f"no candidates for count={event_count} before 0x{figures_index:x}")
        return 1

    candidates.sort(key=lambda x: (-x[1], x[0]))
    for off, walked, err in candidates[:10]:
        end_est = "?" if err else f"probe ok {walked}"
        print(f"0x{off:x} walked={walked} err={err or end_est}")
    best_off, walked, err = candidates[0]
    print(f"BEST 0x{best_off:x} (probe {walked}/{args.probe}) figures_index=0x{figures_index:x}")
    return 0 if err is None and walked >= args.probe else 1


if __name__ == "__main__":
    sys.exit(main())
