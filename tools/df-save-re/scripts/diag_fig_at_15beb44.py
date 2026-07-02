#!/usr/bin/env python3
"""Test hypothesis: figures count 12748 at 0x15beb40, bodies at 0x15beb44."""
from __future__ import annotations

import struct
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.historical_figures import (
    read_historical_figure_header,
    try_read_historical_figure_header,
)
from df_save_re.save_preamble import resolve_save_payload

p = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload

# A: figure count candidate
off = 0x15BEB40
print("i32 at 0x15beb40:", struct.unpack_from("<i", p, off)[0], "(expect 12748 = max_id 12747 + 1)")

# B: try figure header at 0x15beb44
start = 0x15BEB44
r = BinaryReader(BytesIO(p))
r.seek(start)
h = try_read_historical_figure_header(r, save_version=1716)
if h:
    print(f"header OK: race={h.race} caste={h.caste} sex={h.sex} civ={h.civ_id} "
          f"prof={h.profession} born={h.born_year} name_words={h.name.words[:3]} end=0x{r.tell():x}")
else:
    # show raw parse without validation
    r2 = BinaryReader(BytesIO(p))
    r2.seek(start)
    try:
        h2 = read_historical_figure_header(r2, save_version=1716)
        print(f"raw parse: race={h2.race} caste={h2.caste} sex={h2.sex} civ={h2.civ_id} "
              f"prof={h2.profession} orient={h2.orientation_flags} appeared={h2.appeared_year} "
              f"born={h2.born_year} lang={h2.name.language} first={h2.name.first_name!r} end=0x{r2.tell():x}")
    except Exception as exc:
        print("raw parse failed:", exc)
print("hex at 0x15beb44:", p[start:start + 48].hex())
