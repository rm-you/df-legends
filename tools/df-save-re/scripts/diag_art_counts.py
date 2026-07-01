#!/usr/bin/env python3
import struct

from df_save_re.save_preamble import resolve_save_payload

payload = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
START = 0x2134F4D
TARGET = 0x2135412
WHERE = 0x2134F91  # whereabouts from prior walk

for ec in range(65, 75):
    end = START + 4 + ec * 4
    if end + 4 > len(payload):
        break
    lc = struct.unpack_from("<i", payload, end)[0]
    if not (0 <= lc <= 20):
        continue
    end2 = end + 4 + lc * 4
    pc = struct.unpack_from("<i", payload, end2)[0] if end2 + 4 <= len(payload) else -1
    if not (0 <= pc <= 20):
        continue
    end3 = end2 + 4 + pc * 4
    pm = struct.unpack_from("<i", payload, end3)[0] if end3 + 4 <= len(payload) else -1
    if not (0 <= pm <= 20):
        continue
    end4 = end3 + 4 + pm * 2 + 8  # omit static array, keep num fields
    print(f"ec={ec} lc={lc} pc={pc} pm={pm} art_end={end4:#x} where_delta={end4-WHERE} fig1_delta={end4-TARGET}")
