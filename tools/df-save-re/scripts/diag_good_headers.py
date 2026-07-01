#!/usr/bin/env python3
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.historical_figures import try_read_historical_figure_header
from df_save_re.save_preamble import resolve_save_payload

payload = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
starts = [0x2134DD0, 0x2135412, 0x213B0CF, 0x215EB79, 0x2161BAB, 0x21673D6, 0x21EDFF0]
for off in starts:
    r = BinaryReader(BytesIO(payload))
    r.seek(off)
    h = try_read_historical_figure_header(r)
    print(
        f"{off:#x} id={h.figure_id} art={h.art_count} "
        f"prof={h.profession} race={h.race} appeared={h.appeared_year} civ={h.civ_id}"
    )
