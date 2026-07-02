#!/usr/bin/env python3
"""Find the true events vector: i32 N + N clean event bodies, ending on a plausible figures count."""
from __future__ import annotations

import argparse
import struct
import sys
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.save_preamble import resolve_save_payload
from df_save_re.structures.layout_dispatch import skip_layout_body
from df_save_re.structures.save_layouts import SAVE_LAYOUTS


def full_walk(payload: bytes, start: int, *, save_version: int) -> tuple[int, int, int, str | None]:
    reader = BinaryReader(BytesIO(payload))
    reader.seek(start)
    count = reader.read_int32()
    tags: set[int] = set()
    for i in range(count):
        off = reader.tell()
        tag_raw = payload[off : off + 4]
        if len(tag_raw) < 4:
            return i, len(tags), off, "eof"
        tag = struct.unpack("<i", tag_raw)[0]
        if not (0 <= tag <= 0x85):
            return i, len(tags), off, f"bad tag {tag}"
        reader.seek(off + 4)
        fields = SAVE_LAYOUTS.get(f"history_event:{tag}", {}).get("fields")
        if not fields:
            return i, len(tags), off, f"no layout tag {tag}"
        tags.add(tag)
        try:
            skip_layout_body(reader, fields, save_version=save_version)
        except Exception as exc:
            return i, len(tags), off, f"tag {tag}: {exc}"
    return count, len(tags), reader.tell(), None


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("--fixture", default="tests/fixtures/small-retired/world.dat")
    ap.add_argument("--scan-start", type=lambda x: int(x, 0), default=0x400000)
    ap.add_argument("--scan-end", type=lambda x: int(x, 0), default=0x1180000)
    ap.add_argument("--min-count", type=int, default=40000)
    ap.add_argument("--max-count", type=int, default=113118)
    ap.add_argument("--report-walked", type=int, default=5000)
    args = ap.parse_args()

    payload = resolve_save_payload(args.fixture).payload
    unpack = struct.unpack_from
    best = None
    for j in range(args.scan_start, min(args.scan_end, len(payload) - 8)):
        count = unpack("<i", payload, j)[0]
        if not (args.min_count <= count <= args.max_count):
            continue
        tag = unpack("<i", payload, j + 4)[0]
        if not (0 <= tag <= 0x85):
            continue
        walked, ntags, end, err = full_walk(payload, j, save_version=1716)
        if err is None:
            nxt = unpack("<i", payload, end)[0]
            print(f"FULL WALK 0x{j:x} count={count} tags={ntags} end=0x{end:x} next_i32={nxt}")
            if 0 < nxt <= 20000:
                print(f"  -> plausible figures count {nxt}; events start CONFIRMED 0x{j:x}")
                return 0
        elif walked >= args.report_walked:
            print(f"  deep miss 0x{j:x} count={count} walked={walked} tags={ntags} at 0x{end:x}: {err}")
            if best is None or walked > best[1]:
                best = (j, walked, end, err)
    if best:
        print(f"best deep miss: 0x{best[0]:x} walked={best[1]} at 0x{best[2]:x}: {best[3]}")
    print("no full-walk candidate")
    return 1


if __name__ == "__main__":
    sys.exit(main())
