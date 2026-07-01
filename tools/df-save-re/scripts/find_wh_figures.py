#!/usr/bin/env python3
import struct
from io import BytesIO
from pathlib import Path
from df_save_re.binary_reader import BinaryReader
from df_save_re.compression import decompress_file
from df_save_re.deserializers.historical_figures import try_read_historical_figure_header, _quick_histfig_header_check

payload = decompress_file(Path(__file__).resolve().parents[1] / "tests/fixtures/small-retired/world.dat").payload
ev = 113118
fig = 12747
pat = struct.pack("<i", ev)
i = 0
while True:
    j = payload.find(pat, i)
    if j < 0:
        break
    tag = struct.unpack_from("<i", payload, j + 4)[0]
    if 0 <= tag <= 0x85:
        print(f"events@0x{j:x} tag={tag}")
        # search forward for fig count within 200MB
        end = min(len(payload), j + 200_000_000)
        for off in range(j, end - 8, 4):
            if struct.unpack_from("<i", payload, off)[0] != fig:
                continue
            bs = off + 4
            if not _quick_histfig_header_check(payload, bs):
                continue
            r = BinaryReader(BytesIO(payload))
            r.seek(bs)
            h = try_read_historical_figure_header(r, save_version=1716, expect_id=0)
            if h and h.civ_id <= 500:
                print(f"  -> figvec@0x{off:x} body@0x{bs:x} civ={h.civ_id} gap={off-j}")
                break
    i = j + 1
