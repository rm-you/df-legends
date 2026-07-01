#!/usr/bin/env python3
import struct
from io import BytesIO
from pathlib import Path
from df_save_re.binary_reader import BinaryReader
from df_save_re.compression import decompress_file
from df_save_re.deserializers.historical_figures import read_historical_figure_header, try_read_historical_figure_header
from df_save_re.deserializers.world_dat import parse_dat_preamble

payload = decompress_file(Path(__file__).resolve().parents[1] / "tests/fixtures/small-retired/world.dat").payload
base = 0x2134dd8
for delta in range(-16, 17):
    off = base + delta
    r = BinaryReader(BytesIO(payload))
    r.seek(off)
    try:
        h = read_historical_figure_header(r, save_version=1716, figure_id=0)
    except Exception as e:
        print(f"delta {delta:+3d} @0x{off:x} ERR {e}")
        continue
    ok = try_read_historical_figure_header(BinaryReader(BytesIO(payload)), save_version=1716, expect_id=0) if False else None
    r2 = BinaryReader(BytesIO(payload)); r2.seek(off)
    tv = try_read_historical_figure_header(r2, save_version=1716, expect_id=0)
    print(
        f"delta {delta:+3d} @0x{off:x} civ={h.civ_id:4d} race={h.race} "
        f"unit={h.unit_id} nem={h.nemesis_id} valid={tv is not None}"
    )
