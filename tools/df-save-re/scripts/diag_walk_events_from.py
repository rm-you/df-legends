#!/usr/bin/env python3
"""Walk events from a given count offset to its declared count; dump end context."""
from __future__ import annotations

import argparse
import struct
import sys
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.save_preamble import resolve_save_payload
from df_save_re.structures.layout_dispatch import skip_layout_body
from df_save_re.structures.save_layouts import SAVE_LAYOUTS


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("start", type=lambda x: int(x, 0))
    ap.add_argument("--fixture", default="tests/fixtures/small-retired/world.dat")
    ap.add_argument("--count", type=int, help="override declared count")
    args = ap.parse_args()

    payload = resolve_save_payload(args.fixture).payload
    reader = BinaryReader(BytesIO(payload))
    reader.seek(args.start)
    declared = reader.read_int32()
    count = args.count if args.count is not None else declared
    print(f"start=0x{args.start:x} declared={declared} walking={count}")

    walked = 0
    last_id = None
    for i in range(count):
        off = reader.tell()
        tag = reader.read_int32()
        if not (0 <= tag <= 0x85):
            print(f"DESYNC event {i} at 0x{off:x}: bad tag {tag}")
            break
        fields = SAVE_LAYOUTS.get(f"history_event:{tag}", {}).get("fields")
        if not fields:
            print(f"DESYNC event {i} at 0x{off:x}: no layout for tag {tag}")
            break
        try:
            skip_layout_body(reader, fields, save_version=1716)
        except Exception as exc:
            print(f"DESYNC event {i} at 0x{off:x} tag={tag}: {exc}")
            break
        walked += 1
        if walked % 20000 == 0:
            print(f"  {walked} events, at 0x{reader.tell():x}")
    end = reader.tell()
    print(f"walked={walked}/{count} end=0x{end:x}")
    nxt = [struct.unpack_from("<i", payload, end + 4 * k)[0] for k in range(8)]
    print("next i32s:", nxt)
    return 0


if __name__ == "__main__":
    sys.exit(main())
