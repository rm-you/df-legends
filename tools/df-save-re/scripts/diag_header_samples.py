#!/usr/bin/env python3
"""Sample header fields for first figures + false positive at desync."""
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.historical_figures import try_read_historical_figure_header
from df_save_re.save_preamble import resolve_save_payload

payload = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
offsets = [
    ("fig0", 0x2134DD0),
    ("fig1", 0x2135412),
    ("fig2", 0x213B0CF),
    ("fig3", 0x215EB79),
    ("fig4", 0x2161BAB),
    ("fig5", 0x21673D6),
    ("fig10", 0x2192DDA),
    ("false", 0x21FE774),
]
for label, off in offsets:
    r = BinaryReader(BytesIO(payload))
    r.seek(off)
    h = try_read_historical_figure_header(r)
    if not h:
        print(label, "invalid")
        continue
    print(
        f"{label:5s} id={h.figure_id:5d} art={h.art_count:3d} "
        f"prof={h.profession:4d} race={h.race:3d} caste={h.caste:2d} sex={h.sex} "
        f"name={h.name.first_name!r} civ={h.civ_id} flags={len(h.flag_indices)}"
    )
