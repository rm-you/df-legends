#!/usr/bin/env python3
"""Find events start whose full walk lands exactly on the figures count offset."""
from __future__ import annotations

import argparse
import struct
import sys
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.save_preamble import resolve_save_payload
from df_save_re.structures.layout_dispatch import skip_layout_body
from df_save_re.structures.save_layouts import SAVE_LAYOUTS


def full_walk(payload: bytes, start: int, *, save_version: int, stop: int) -> tuple[int, int, str | None]:
    """Walk declared count events from start; return (walked, end_offset, err)."""
    reader = BinaryReader(BytesIO(payload))
    reader.seek(start)
    count = reader.read_int32()
    for i in range(count):
        off = reader.tell()
        if off > stop:
            return i, off, f"overran stop 0x{stop:x} at event {i}"
        tag = reader.read_int32()
        if not (0 <= tag <= 0x85):
            return i, off, f"bad tag {tag} at 0x{off:x}"
        fields = SAVE_LAYOUTS.get(f"history_event:{tag}", {}).get("fields")
        if not fields:
            return i, off, f"no layout for tag {tag}"
        try:
            skip_layout_body(reader, fields, save_version=save_version)
        except Exception as exc:
            return i, off, f"tag {tag} at 0x{off:x}: {exc}"
    return count, reader.tell(), None


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("--fixture", default="tests/fixtures/small-retired/world.dat")
    ap.add_argument("--figures-count-offset", type=lambda x: int(x, 0), default=0x116F542)
    ap.add_argument("--scan-back", type=lambda x: int(x, 0), default=0x800000)
    ap.add_argument("--min-count", type=int, default=10000)
    args = ap.parse_args()

    payload = resolve_save_payload(args.fixture).payload
    stop = args.figures_count_offset
    lo = max(0, stop - args.scan_back)
    unpack = struct.unpack_from

    tested = 0
    for j in range(lo, stop - 8):
        count = unpack("<i", payload, j)[0]
        if not (args.min_count <= count <= 200_000):
            continue
        tag = unpack("<i", payload, j + 4)[0]
        if not (0 <= tag <= 0x85):
            continue
        tested += 1
        walked, end, err = full_walk(payload, j, save_version=1716, stop=stop)
        if err is None and end == stop:
            print(f"LANDED 0x{j:x} count={count} walked={walked} end=0x{end:x}")
            return 0
        if walked > 20000:
            print(f"  near miss 0x{j:x} count={count} walked={walked} end=0x{end:x} err={err}")
    print(f"no landing candidate (tested {tested})")
    return 1


if __name__ == "__main__":
    sys.exit(main())
