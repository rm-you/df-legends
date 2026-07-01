#!/usr/bin/env python3
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.historical_figures import try_read_historical_figure_header
from df_save_re.save_preamble import resolve_save_payload

p = resolve_save_payload("tests/fixtures/small-retired/world.dat")
payload = p.payload

found = []
for off in range(0x2134e66, 0x2140000):
    r = BinaryReader(BytesIO(payload))
    r.seek(off)
    h = try_read_historical_figure_header(r, expect_id=1)
    if h:
        found.append((off, h))
print("id=1 candidates:", len(found))
for off, h in found[:5]:
    print(
        hex(off),
        "id",
        h.figure_id,
        "race",
        h.race,
        "prof",
        h.profession,
        "name",
        repr(h.name.display_hint),
        "art",
        h.art_count,
    )
