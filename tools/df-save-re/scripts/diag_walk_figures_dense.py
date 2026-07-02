#!/usr/bin/env python3
"""Walk the dense figures vector from 0x15beb40 (count=12748) with full record reader."""
from __future__ import annotations

import argparse
import struct
import sys
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.record_reader import read_historical_figure_record
from df_save_re.save_preamble import resolve_save_payload


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("--start", type=lambda x: int(x, 0), default=0x15BEB40)
    ap.add_argument("--limit", type=int, default=100)
    ap.add_argument("--fixture", default="tests/fixtures/small-retired/world.dat")
    args = ap.parse_args()

    payload = resolve_save_payload(args.fixture).payload
    reader = BinaryReader(BytesIO(payload))
    reader.seek(args.start)
    count = reader.read_int32()
    print(f"count={count}")
    n = min(count, args.limit)
    blobs = 0
    for slot in range(n):
        off = reader.tell()
        try:
            rec, _ = read_historical_figure_record(reader, payload, figure_id=slot, save_version=1716)
        except Exception as exc:
            print(f"DESYNC slot {slot} at 0x{off:x}: {exc}")
            print("hex:", payload[off:off + 48].hex())
            return 1
        if rec.get("body_blob") or rec.get("tail_error"):
            blobs += 1
            if blobs <= 5:
                print(f"  slot {slot} partial: {rec.get('tail_error')}")
        if slot < 3 or slot in (n - 1,):
            print(f"  slot {slot} @0x{off:x} race={rec.get('race')} civ={rec.get('civ_id')} "
                  f"born={rec.get('born_year')} words={rec.get('name_words', [])[:2]} end=0x{reader.tell():x}")
    print(f"parsed {n}/{count} partial_tails={blobs} end=0x{reader.tell():x}")
    return 0


if __name__ == "__main__":
    sys.exit(main())
