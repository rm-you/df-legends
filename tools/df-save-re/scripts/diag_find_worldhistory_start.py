#!/usr/bin/env python3
"""Find world_history's start: the events count (first field) is followed by a
4-byte event tag in 0..0x85 (0..133). Test candidate counts from max_ids:
113118, 8200, 731, 12747, 1110, 678, 7949. For each occurrence of each count,
check if the next 4 bytes (first event tag) is in 0..133, and the tag's event
body is plausibly followed by another tag, etc.
"""
import struct
from collections import Counter

from df_save_re.save_preamble import resolve_save_payload


CANDIDATES = [113118, 8200, 731, 12747, 1110, 678, 7949, 2, 5730, 1012, 346, 337, 69, 56, 66, 13, 415, 411, 268, 264, 81]


def main() -> None:
    p = resolve_save_payload("tests/fixtures/small-retired/world.dat")
    payload = p.payload
    for cnt in CANDIDATES:
        pat = struct.pack("<i", cnt)
        positions = []
        i = 0
        while True:
            j = payload.find(pat, i)
            if j < 0:
                break
            positions.append(j)
            i = j + 1
        if not positions:
            continue
        # check each: next 4 bytes = tag in 0..133
        good = []
        for voff in positions:
            if voff + 8 > len(payload):
                continue
            tag = struct.unpack_from("<i", payload, voff + 4)[0]
            if 0 <= tag <= 0x85:
                good.append((voff, tag))
        if good:
            print(f"count={cnt} ({len(positions)} occ): {len(good)} with valid first tag")
            for voff, tag in good[:8]:
                # also check the 4 bytes BEFORE the count (end of previous section)
                before = payload[voff-4:voff] if voff >= 4 else b""
                print(f"  @ 0x{voff:x}  first tag={tag} (0x{tag:x})  prev4={before.hex()}")


if __name__ == "__main__":
    main()
