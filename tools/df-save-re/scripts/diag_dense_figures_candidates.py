#!/usr/bin/env python3
"""Test dense figures walk (i32 count + count bodies per FUN_1407099a0) at candidate offsets."""
from __future__ import annotations

import sys
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.record_reader import read_historical_figure_record
from df_save_re.save_preamble import resolve_save_payload

CANDIDATES = [0x36AF82, 0x4BCEB2, 0x5EB91D, 0x116F542, 0x2131BB0]


def main() -> int:
    payload = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
    limit = int(sys.argv[1]) if len(sys.argv) > 1 else 50
    for cand in CANDIDATES:
        reader = BinaryReader(BytesIO(payload))
        reader.seek(cand)
        count = reader.read_int32()
        parsed = 0
        blobs = 0
        err = None
        for slot in range(min(count, limit)):
            off = reader.tell()
            try:
                rec, _ = read_historical_figure_record(reader, payload, figure_id=slot)
                if rec.get("body_blob"):
                    blobs += 1
            except Exception as exc:
                err = f"slot {slot} at 0x{off:x}: {exc}"
                break
            parsed += 1
        print(
            f"cand=0x{cand:x} count={count} parsed={parsed}/{min(count, limit)} "
            f"blobs={blobs} end=0x{reader.tell():x} err={err}"
        )
    return 0


if __name__ == "__main__":
    sys.exit(main())
