#!/usr/bin/env python3
"""Walk events forward from candidate boundaries; report the common failure offset/tag before the sync point."""
from __future__ import annotations

import argparse
import struct
import sys
from collections import Counter
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.save_preamble import resolve_save_payload
from df_save_re.structures.layout_dispatch import skip_layout_body
from df_save_re.structures.save_layouts import SAVE_LAYOUTS


def walk_until_fail(payload: bytes, start: int, stop: int) -> tuple[int, int, int | None, str | None]:
    reader = BinaryReader(BytesIO(payload))
    reader.seek(start)
    walked = 0
    unpack = struct.unpack_from
    while reader.tell() < stop:
        off = reader.tell()
        tag = unpack("<i", payload, off)[0]
        if not (0 <= tag <= 0x85):
            return walked, off, tag, "bad tag"
        fields = SAVE_LAYOUTS.get(f"history_event:{tag}", {}).get("fields")
        if not fields:
            return walked, off, tag, "no layout"
        reader.seek(off + 4)
        try:
            skip_layout_body(reader, fields, save_version=1716)
        except Exception as exc:
            return walked, off, tag, str(exc)
        walked += 1
    return walked, reader.tell(), None, None


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("--fixture", default="tests/fixtures/small-retired/world.dat")
    ap.add_argument("--scan-start", type=lambda x: int(x, 0), default=0x600000)
    ap.add_argument("--sync", type=lambda x: int(x, 0), default=0x84407D)
    ap.add_argument("--min-walked", type=int, default=50)
    ap.add_argument("--stride", type=int, default=1)
    args = ap.parse_args()

    payload = resolve_save_payload(args.fixture).payload
    fail_counter: Counter[tuple[int, int | None]] = Counter()
    examples: dict[tuple[int, int | None], str] = {}
    j = args.scan_start
    while j < args.sync:
        walked, off, tag, err = walk_until_fail(payload, j, args.sync)
        if err is None and off == args.sync:
            # clean run into sync: j is on the true event grid
            print(f"grid-aligned start 0x{j:x} walked={walked} to sync")
            j += 1
            continue
        if walked >= args.min_walked:
            key = (off, tag)
            fail_counter[key] += 1
            examples[key] = err or ""
            # skip ahead to avoid re-testing every byte inside this good run
            j = off + 1
            continue
        j += args.stride

    for (off, tag), n in fail_counter.most_common(15):
        print(f"fail at 0x{off:x} tag={tag} ({n} runs): {examples[(off, tag)]}")
    return 0


if __name__ == "__main__":
    sys.exit(main())
