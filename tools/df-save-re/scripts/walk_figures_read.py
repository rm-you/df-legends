#!/usr/bin/env python3
"""Walk present figure bodies from catalog anchor; report first desync."""
from __future__ import annotations

import argparse
import struct
import sys
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.body_skipper import SkipError
from df_save_re.deserializers.historical_figures import build_historical_figure_catalog
from df_save_re.deserializers.record_reader import read_historical_figure_record
from df_save_re.deserializers.world_dat import parse_dat_preamble
from df_save_re.deserializers.world_layout import discover_layout_landmarks
from df_save_re.save_preamble import resolve_save_payload


def _plausible_collection_tag(tag: int) -> bool:
    return 0 <= tag <= 17


def _scan_collections_start(payload: bytes, start: int, window: int = 256) -> int | None:
    end = min(len(payload), start + window)
    for off in range(start, end - 8, 4):
        count = struct.unpack_from("<i", payload, off)[0]
        if count <= 0 or count > 500_000:
            continue
        tag = struct.unpack_from("<i", payload, off + 4)[0]
        if _plausible_collection_tag(tag):
            return off
    return None


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("--limit", type=int, default=0, help="max figures (0=all present)")
    ap.add_argument("--fixture", default="tests/fixtures/small-retired/world.dat")
    args = ap.parse_args()

    payload = resolve_save_payload(args.fixture).payload
    pre = parse_dat_preamble(payload)
    layout = discover_layout_landmarks(payload, pre)
    cat = build_historical_figure_catalog(payload, pre.header, search_start=layout.history_stats)
    anchor = cat.anchor
    if anchor is None:
        print("figures anchor not found")
        return 1

    present_ids = [i for i, p in enumerate(cat.presence) if p]
    limit = args.limit or len(present_ids)
    present_ids = present_ids[:limit]

    reader = BinaryReader(BytesIO(payload))
    reader.seek(anchor.bodies_start)
    parsed = 0
    for fid in present_ids:
        off = reader.tell()
        try:
            record, consumed = read_historical_figure_record(
                reader,
                payload,
                figure_id=fid,
                save_version=pre.header.save_version or 1716,
            )
        except SkipError as exc:
            print(f"DESYNC after {parsed} fig_index={fid} at 0x{off:x}: {exc}")
            chunk = payload[off : off + 96]
            print(f"  hex: {chunk.hex()}")
            return 1
        if record.get("body_parse_error") or record.get("body_blob"):
            print(
                f"PARTIAL after {parsed} fig_index={fid} at 0x{off:x}: "
                f"{record.get('body_parse_error', 'blob')}"
            )
            return 1
        parsed += 1
        if parsed <= 5 or parsed % 500 == 0:
            print(f"{parsed:5d} id={fid:5d} off=0x{off:x} consumed={consumed}")

    end = reader.tell()
    coll = _scan_collections_start(payload, end)
    print(f"parsed={parsed}/{len(present_ids)} end=0x{end:x} collections_candidate={coll and hex(coll)}")
    if coll is not None and coll == end:
        print("SUCCESS: landed on collections layer")
        return 0
    if coll is not None:
        print(f"GAP: end 0x{end:x} vs collections 0x{coll:x} (+{coll - end})")
    return 0 if parsed == len(present_ids) else 1


if __name__ == "__main__":
    sys.exit(main())
