#!/usr/bin/env python3
"""Inspect parsed figure headers at the Ironhand candidate anchor."""
from __future__ import annotations

from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.world_history_walk import read_figure_record
from df_save_re.save_preamble import resolve_save_payload

r = resolve_save_payload("tests/fixtures/ironhand-active/world.sav")
p, sv = r.payload, r.save_version

anchor = 0x44F184B
reader = BinaryReader(BytesIO(p))
reader.seek(anchor + 4)
for slot in range(10):
    off = reader.tell()
    try:
        h, tail = read_figure_record(reader, figure_id=slot, save_version=sv)
    except (ValueError, EOFError) as exc:
        print(f"slot {slot} @0x{off:x}: FAIL {str(exc)[:120]}")
        break
    print(
        f"slot {slot} @0x{off:x}: race={h.race} caste={h.caste} sex={h.sex} "
        f"prof={h.profession} born={h.born_year} died={h.died_year} "
        f"civ={h.civ_id} words={list(h.name.words)[:3]} links={tail}"
    )
