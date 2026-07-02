#!/usr/bin/env python3
"""Walk figure bodies from 0x15beb40 using header + link skips + new histfig_info readers."""
from __future__ import annotations

import argparse
import sys
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.historical_figures import read_historical_figure_header
from df_save_re.deserializers.histfig_info import skip_histfig_info, skip_vague_relationships
from df_save_re.save_preamble import resolve_save_payload
from df_save_re.structures.layout_dispatch import skip_layout_body
from df_save_re.structures.save_layouts import SAVE_LAYOUTS


def skip_links(reader: BinaryReader, factory: str, save_version: int) -> int:
    count = reader.read_int32()
    if count < 0 or count > 100_000:
        raise ValueError(f"{factory}_links count {count} at 0x{reader.tell() - 4:x}")
    for _ in range(count):
        tag = reader.read_int16()
        key = f"link:{factory}:{tag}"
        layout = SAVE_LAYOUTS.get(key)
        if not layout or not layout.get("fields"):
            raise ValueError(f"no layout for {key} at 0x{reader.tell() - 2:x}")
        skip_layout_body(reader, layout["fields"], save_version=save_version)
    return count


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("--start", type=lambda x: int(x, 0), default=0x15BEB40)
    ap.add_argument("--limit", type=int, default=200)
    ap.add_argument("--fixture", default="tests/fixtures/small-retired/world.dat")
    ap.add_argument("--save-version", type=int, default=1716)
    args = ap.parse_args()

    payload = resolve_save_payload(args.fixture).payload
    reader = BinaryReader(BytesIO(payload))
    reader.seek(args.start)
    count = reader.read_int32()
    print(f"count={count} bodies_start=0x{reader.tell():x}")
    n = count if args.limit <= 0 else min(count, args.limit)
    for slot in range(n):
        off = reader.tell()
        try:
            h = read_historical_figure_header(reader, save_version=args.save_version)
            skip_links(reader, "entity", args.save_version)
            skip_links(reader, "site", args.save_version)
            skip_links(reader, "histfig", args.save_version)
            if reader.read_uint8():
                skip_histfig_info(reader, save_version=args.save_version)
            if args.save_version > 0x6A0 and reader.read_uint8():
                skip_vague_relationships(reader)
        except Exception as exc:
            print(f"DESYNC slot {slot} at body start 0x{off:x} cursor 0x{reader.tell():x}: {exc}")
            print("hex at body start:", payload[off:off + 48].hex())
            print("hex at cursor:", payload[reader.tell():reader.tell() + 48].hex())
            return 1
        if slot < 3 or slot == n - 1 or slot % 1000 == 0:
            print(f"  slot {slot} @0x{off:x} race={h.race} civ={h.civ_id} born={h.born_year} -> 0x{reader.tell():x}")
    print(f"OK {n}/{count} end=0x{reader.tell():x}")
    return 0


if __name__ == "__main__":
    sys.exit(main())
