#!/usr/bin/env python3
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.historical_figures import read_historical_figure_header
from df_save_re.save_preamble import resolve_save_payload

p = resolve_save_payload("tests/fixtures/small-retired/world.dat")
r = BinaryReader(BytesIO(p.payload))
for off in [0x2134DD0, 0x21353A3, 0x21355D0, 0x2135380]:
    r.seek(off)
    try:
        h = read_historical_figure_header(r)
        print(
            hex(off),
            "id",
            h.figure_id,
            "prof",
            h.profession,
            "race",
            h.race,
            "header_bytes",
            h.header_bytes,
            "end",
            hex(r.tell()),
        )
    except Exception as exc:
        print(hex(off), "ERR", exc)
