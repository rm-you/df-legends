#!/usr/bin/env python3
from io import BytesIO
from pathlib import Path

from df_save_re.binary_reader import BinaryReader
from df_save_re.compression import decompress_file
from df_save_re.deserializers.historical_figures import (
    _quick_histfig_header_check,
    read_historical_figure_header,
    try_read_historical_figure_header,
)

payload = decompress_file(
    Path(__file__).resolve().parents[1] / "tests/fixtures/small-retired/world.dat"
).payload

for off in [0x2131bb0, 0x2131bb4, 0x2134dd0, 0x2134dd8, 0x5eb921, 0x36af86]:
    print(f"\n=== 0x{off:x} quick={_quick_histfig_header_check(payload, off)} ===")
    r = BinaryReader(BytesIO(payload))
    r.seek(off)
    try:
        h = read_historical_figure_header(r, save_version=1716, figure_id=0)
        print(
            f"  ok prof={h.profession} race={h.race} civ={h.civ_id} "
            f"unit={h.unit_id} nem={h.nemesis_id} flags={h.flag_indices[:5]}"
        )
    except Exception as e:
        print(f"  read err: {e}")
    r = BinaryReader(BytesIO(payload))
    r.seek(off)
    t = try_read_historical_figure_header(r, save_version=1716, expect_id=0)
    print(f"  try_valid={t is not None}")
