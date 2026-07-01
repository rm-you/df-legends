#!/usr/bin/env python3
import struct
from pathlib import Path
from df_save_re.compression import decompress_file

payload = decompress_file(Path(__file__).resolve().parents[1] / "tests/fixtures/small-retired/world.dat").payload
for cnt in [113118, 12747]:
    pat = struct.pack("<i", cnt)
    i = 0
    n = 0
    while n < 20:
        j = payload.find(pat, i)
        if j < 0:
            break
        nxt = [struct.unpack_from("<i", payload, j + k)[0] for k in (4, 8, 12, 16) if j + k + 4 <= len(payload)]
        print(f"count={cnt} @0x{j:x} next4={nxt}")
        i = j + 1
        n += 1
    print()
