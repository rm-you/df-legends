#!/usr/bin/env python3
"""Walk world_history: events -> figures dense vector."""
from __future__ import annotations

import struct
from io import BytesIO
from pathlib import Path

from df_save_re.binary_reader import BinaryReader
from df_save_re.compression import decompress_file
from df_save_re.deserializers.historical_figures import (
    _quick_histfig_header_check,
    try_read_historical_figure_header,
)
from df_save_re.deserializers.world_dat import parse_dat_preamble

FIX = Path(__file__).resolve().parents[1] / "tests/fixtures/small-retired/world.dat"


def find_events_start(payload: bytes, event_count: int) -> list[int]:
    out = []
    pat = struct.pack("<i", event_count)
    i = 0
    while True:
        j = payload.find(pat, i)
        if j < 0:
            break
        if j + 8 <= len(payload):
            tag = struct.unpack_from("<i", payload, j + 4)[0]
            if 0 <= tag <= 0x85:
                out.append(j)
        i = j + 1
    return out


def main() -> None:
    payload = decompress_file(FIX).payload
    header = parse_dat_preamble(payload).header
    ev_cnt = header.max_ids[9]
    fig_cnt = header.max_ids[8]
    print(f"events={ev_cnt} figures={fig_cnt}")
    starts = find_events_start(payload, ev_cnt)
    print(f"event start candidates: {len(starts)}")
    for es in starts[:5]:
        print(f"  events @ 0x{es:x}, first tag={struct.unpack_from('<i', payload, es+4)[0]}")
    # brute: after each event start, search forward for fig count with quick check
    for es in starts[:10]:
        for off in range(es, min(es + 50_000_000, len(payload) - 8), 4):
            if struct.unpack_from("<i", payload, off)[0] != fig_cnt:
                continue
            bs = off + 4
            if not _quick_histfig_header_check(payload, bs):
                continue
            r = BinaryReader(BytesIO(payload))
            r.seek(bs)
            h = try_read_historical_figure_header(r, save_version=1716, expect_id=0)
            if h and 0 <= h.civ_id <= 500:
                print(
                    f"HIT events@0x{es:x} figvec@0x{off:x} body@0x{bs:x} "
                    f"civ={h.civ_id} race={h.race}"
                )


if __name__ == "__main__":
    main()
