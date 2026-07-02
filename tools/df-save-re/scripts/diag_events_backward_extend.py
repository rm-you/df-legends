#!/usr/bin/env python3
"""Backward-chain event grid from anchor to count echo (optimized)."""
from __future__ import annotations

import argparse
import struct
import sys

from df_save_re.save_preamble import resolve_save_payload

from diag_events_id_monotonic import read_event_id

# lazy import skip
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.structures.save_layouts import SAVE_LAYOUTS


def parse_event_end(payload: bytes, start: int, save_version: int = 1716) -> tuple[int, int | None] | None:
    if start + 8 > len(payload):
        return None
    tag = struct.unpack_from("<i", payload, start)[0]
    if not (0 <= tag <= 0x85):
        return None
    fields = SAVE_LAYOUTS.get(f"history_event:{tag}", {}).get("fields")
    if not fields:
        return None
    reader = BinaryReader(BytesIO(payload))
    reader.seek(start + 4)
    try:
        eid = read_event_id(reader, fields, save_version)
    except Exception:
        return None
    if eid is None:
        return None
    return reader.tell(), eid


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("--anchor", type=lambda x: int(x, 0), default=0x11C41C5)
    ap.add_argument("--anchor-id", type=int, default=1401)
    ap.add_argument("--figures", type=lambda x: int(x, 0), default=0x15BEB34)
    ap.add_argument("--suffix-len", type=int, default=86380)
    ap.add_argument("--scan-back", type=lambda x: int(x, 0), default=0x800000)
    args = ap.parse_args()

    payload = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
    unpack = struct.unpack_from
    anchor = args.anchor
    lo = anchor - args.scan_back

    grid_next: dict[int, int] = {anchor: args.anchor_id}  # start -> id
    grid_len: dict[int, int] = {anchor: 0}

    for s in range(anchor - 1, lo, -1):
        parsed = parse_event_end(payload, s)
        if parsed is None:
            continue
        nxt, eid = parsed
        if nxt not in grid_next:
            continue
        grid_next[s] = eid
        grid_len[s] = grid_len[nxt] + 1

    if len(grid_next) <= 1:
        print("no backward extension")
        return 1

    earliest = min(grid_next)
    chain = grid_len[earliest]
    total = chain + args.suffix_len
    cnt = unpack("<i", payload, earliest - 4)[0]
    print(f"earliest=0x{earliest:x} id={grid_next[earliest]} chain={chain} total={total}")
    print(f"count@0x{earliest-4:x} = {cnt}")
    if cnt == total:
        print(f"CONFIRMED events start count@0x{earliest-4:x} first_tag@0x{earliest:x}")
        # verify full walk lands on figures
        reader = BinaryReader(BytesIO(payload))
        reader.seek(earliest - 4)
        declared = reader.read_int32()
        from df_save_re.structures.layout_dispatch import skip_layout_body

        for i in range(declared):
            off = reader.tell()
            tag = reader.read_int32()
            fields = SAVE_LAYOUTS[f"history_event:{tag}"]["fields"]
            skip_layout_body(reader, fields, save_version=1716)
        end = reader.tell()
        fig = unpack("<i", payload, end)[0]
        print(f"verify: walked {declared} end=0x{end:x} fig_count={fig} (expect 12747)")
        return 0 if end == args.figures and fig == 12747 else 1

    # show nearby count candidates
    for k in range(-4, 5):
        p = earliest - 4 + 4 * k
        print(f"  0x{p:x} i32 {unpack('<i', payload, p)[0]}")
    return 1


if __name__ == "__main__":
    sys.exit(main())
