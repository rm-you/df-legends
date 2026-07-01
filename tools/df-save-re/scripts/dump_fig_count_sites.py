#!/usr/bin/env python3
import struct
from pathlib import Path
from df_save_re.compression import decompress_file
from df_save_re.deserializers.world_dat import parse_dat_preamble

payload = decompress_file(
    Path(__file__).resolve().parents[1] / "tests/fixtures/small-retired/world.dat"
).payload
cnt = parse_dat_preamble(payload).header.max_ids[8]
pat = struct.pack("<i", cnt)
i = 0
while True:
    j = payload.find(pat, i)
    if j < 0:
        break
    nxt = payload[j + 4 : j + 20]
    print(f"@0x{j:x} next16={nxt.hex()} as_i32={[struct.unpack_from('<i', payload, j+k)[0] for k in (4,8,12)]}")
    i = j + 1
