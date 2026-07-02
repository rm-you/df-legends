#!/usr/bin/env python3
"""Find events start S with i32 count N such that N events walk from S+4 exactly to END."""
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
    ap.add_argument("--fixture", default="tests/fixtures/small-retired/world.dat")
    ap.add_argument("--end", type=lambda x: int(x, 0), default=0x15BEB40)
    ap.add_argument("--scan-start", type=lambda x: int(x, 0), default=0x200000)
    args = ap.parse_args()

    payload = resolve_save_payload(args.fixture).payload
    end = args.end
    unpack = struct.unpack_from

    # Walk backwards is hard; instead walk forward once from the earliest
    # self-synchronized point and record every event boundary. Then for each
    # boundary b, events remaining to END = total - idx; check i32 at b-4 == remaining.
    # Find a robust sync point: earliest deep-miss start from prior scan.
    sync = args.scan_start
    reader = BinaryReader(BytesIO(payload))
    # find first offset >= sync that begins a clean run reaching END
    probe = sync
    boundaries: list[int] = []
    while probe < end:
        reader.seek(probe)
        tag = unpack("<i", payload, probe)[0]
        ok = False
        if 0 <= tag <= 0x85:
            fields = SAVE_LAYOUTS.get(f"history_event:{tag}", {}).get("fields")
            if fields:
                # try walking to END from here
                r2 = BinaryReader(BytesIO(payload))
                r2.seek(probe)
                bs: list[int] = []
                good = True
                while r2.tell() < end:
                    off = r2.tell()
                    t = unpack("<i", payload, off)[0]
                    if not (0 <= t <= 0x85):
                        good = False
                        break
                    f = SAVE_LAYOUTS.get(f"history_event:{t}", {}).get("fields")
                    if not f:
                        good = False
                        break
                    bs.append(off)
                    r2.seek(off + 4)
                    try:
                        skip_layout_body(r2, f, save_version=1716)
                    except Exception:
                        good = False
                        break
                if good and r2.tell() == end:
                    boundaries = bs
                    ok = True
        if ok:
            print(f"sync at 0x{probe:x}: {len(boundaries)} events to END")
            break
        probe += 1
        if probe % 0x100000 == 0:
            print(f"  probing 0x{probe:x}...")
    if not boundaries:
        print("no sync point found")
        return 1

    total = len(boundaries)
    hits = []
    for idx, b in enumerate(boundaries):
        remaining = total - idx
        cnt = unpack("<i", payload, b - 4)[0]
        if cnt == remaining:
            hits.append((b - 4, remaining))
    for off, n in hits:
        print(f"CANDIDATE events start 0x{off:x} count={n}")
    if hits:
        off, n = hits[0]
        print(f"BEST 0x{off:x}: count {n} events walk exactly to 0x{end:x}")
        nxt = [unpack("<i", payload, end + 4 * k)[0] for k in range(6)]
        print("i32s at END:", nxt)
        return 0
    print(f"no count match among {total} boundaries")
    return 1


if __name__ == "__main__":
    sys.exit(main())
