#!/usr/bin/env python3
import struct
from io import BytesIO
from pathlib import Path
from df_save_re.binary_reader import BinaryReader
from df_save_re.compression import decompress_file
from df_save_re.deserializers.historical_figures import try_read_historical_figure_header
from df_save_re.deserializers.world_dat import parse_dat_preamble

payload = decompress_file(Path(__file__).resolve().parents[1] / "tests/fixtures/small-retired/world.dat").payload
cnt = parse_dat_preamble(payload).header.max_ids[8]
for off in range(0, len(payload) - 8, 4):
    if struct.unpack_from("<i", payload, off)[0] != cnt:
        continue
    bs = off + 4
    r = BinaryReader(BytesIO(payload))
    r.seek(bs)
    h = try_read_historical_figure_header(r, save_version=1716, expect_id=0)
    if h and h.civ_id == 437:
        print(f"HIT vec=0x{off:x} body=0x{bs:x}")
