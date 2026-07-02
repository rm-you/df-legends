#!/usr/bin/env python3
"""Backward-chain event bodies from the true events end (= figures count offset).

Finds all offsets s such that a forward walk of events from s lands exactly on
EVENTS_END, then reports those whose i32 count prefix at s-4 equals the chain
length (candidate events vector starts).
"""
from __future__ import annotations

import argparse
import struct
import sys
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.world_history_walk import skip_event_body
from df_save_re.save_preamble import resolve_save_payload


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("--end", type=lambda x: int(x, 0), default=0x15BEB40)
    ap.add_argument("--scan-back", type=lambda x: int(x, 0), default=0x600000)
    ap.add_argument("--fixture", default="tests/fixtures/small-retired/world.dat")
    args = ap.parse_args()

    payload = resolve_save_payload(args.fixture).payload
    end = args.end
    lo = max(0, end - args.scan_back)

    stream = BytesIO(payload)
    reader = BinaryReader(stream)

    chain: dict[int, int] = {end: 0}
    for s in range(end - 4, lo - 1, -1):
        tag = struct.unpack_from("<i", payload, s)[0]
        if not (0 <= tag <= 0x85):
            continue
        reader.seek(s + 4)
        try:
            skip_event_body(reader, tag, save_version=1716)
        except (ValueError, EOFError):
            continue
        nxt = reader.tell()
        if nxt in chain:
            chain[s] = chain[nxt] + 1

    starts = [(s, n) for s, n in chain.items() if s != end]
    starts.sort()
    print(f"grid size {len(starts)} range 0x{starts[0][0]:x}..0x{starts[-1][0]:x}" if starts else "empty grid")
    earliest = starts[0] if starts else None
    if earliest:
        print(f"earliest chain start 0x{earliest[0]:x} chain_len {earliest[1]}")
    hits = []
    for s, n in starts:
        if s - 4 >= 0:
            declared = struct.unpack_from("<i", payload, s - 4)[0]
            if declared == n:
                hits.append((s - 4, s, n))
    print(f"{len(hits)} count-echo hits:")
    for coff, s, n in hits[:20]:
        print(f"  count@0x{coff:x}={n} bodies@0x{s:x}")
    return 0


if __name__ == "__main__":
    sys.exit(main())
