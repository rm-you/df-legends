#!/usr/bin/env python3
"""Walk world_history events layer with i32 tags (factory FUN_14070b7a0)."""
from __future__ import annotations

import argparse
import struct
import sys
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.historical_figures import locate_figures_vector
from df_save_re.deserializers.world_dat import parse_dat_preamble
from df_save_re.deserializers.world_layout import discover_layout_landmarks
from df_save_re.save_preamble import resolve_save_payload
from df_save_re.structures.layout_dispatch import skip_layout_body
from df_save_re.structures.save_layouts import SAVE_LAYOUTS


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("--start", type=lambda x: int(x, 0), help="events count offset (hex ok)")
    ap.add_argument("--count", type=int, default=113118)
    ap.add_argument("--figures-index", type=lambda x: int(x, 0), default=0x2131BB0)
    ap.add_argument("--fixture", default="tests/fixtures/small-retired/world.dat")
    args = ap.parse_args()

    payload = resolve_save_payload(args.fixture).payload
    if args.start is None:
        pre = parse_dat_preamble(payload)
        layout = discover_layout_landmarks(payload, pre)
        anchor = locate_figures_vector(payload, pre.header, search_start=layout.history_stats)
        figures_index = anchor.vector_offset if anchor else args.figures_index
        count = pre.header.max_ids[9] if len(pre.header.max_ids) > 9 else args.count
        pat = struct.pack("<i", count)
        start = None
        i = 0
        while True:
            j = payload.find(pat, i, figures_index)
            if j < 0:
                break
            tag = struct.unpack_from("<i", payload, j + 4)[0]
            if 0 <= tag <= 0x85:
                start = j
                break
            i = j + 1
        if start is None:
            print("could not locate events start")
            return 1
    else:
        start = args.start
        count = args.count
        figures_index = args.figures_index

    reader = BinaryReader(BytesIO(payload))
    reader.seek(start)
    declared = reader.read_int32()
    if declared != count:
        print(f"warning: declared count {declared} != expected {count}")

    parsed = 0
    for i in range(declared):
        off = reader.tell()
        tag = reader.read_int32()
        if not (0 <= tag <= 0x85):
            print(f"DESYNC event {i} at 0x{off:x}: bad tag {tag}")
            return 1
        key = f"history_event:{tag}"
        fields = SAVE_LAYOUTS.get(key, {}).get("fields")
        if not fields:
            print(f"DESYNC event {i} at 0x{off:x}: no layout for tag {tag}")
            return 1
        try:
            skip_layout_body(reader, fields, save_version=1716)
        except Exception as exc:
            print(f"DESYNC event {i} at 0x{off:x} tag={tag}: {exc}")
            return 1
        parsed += 1
        if parsed in (1, 100, 1000, 10000, 50000, declared):
            print(f"  parsed {parsed}/{declared} end=0x{reader.tell():x}")

    end = reader.tell()
    ok = end == figures_index
    print(f"parsed={parsed} end=0x{end:x} figures_index=0x{figures_index:x} landed={ok}")
    return 0 if ok else 1


if __name__ == "__main__":
    sys.exit(main())
