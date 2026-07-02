#!/usr/bin/env python3
import struct
from pathlib import Path

from df_save_re.compression import decompress_file

p = decompress_file(Path("tests/fixtures/small-retired/world.dat")).payload
start = 0x2134DD9
end = min(len(p), start + 2_000_000)
hits = []
for off in range(start, end - 4, 4):
    if struct.unpack_from("<i", p, off)[0] != 151:
        continue
    sample = p[off + 4 : off + 4 + 151]
    if len(sample) < 151:
        continue
    if any(b not in (0, 1) for b in sample):
        continue
    present = sum(sample)
    hits.append((off, present))
print("hits", len(hits))
for h in hits[:15]:
    print(hex(h[0]), h[1])
