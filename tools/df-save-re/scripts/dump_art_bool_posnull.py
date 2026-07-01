#!/usr/bin/env python3
"""Try bool-posnull art_image x art_count from each gap offset."""
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.body_skipper import SkipError, default_xml_dir
from df_save_re.deserializers.historical_figures import try_read_historical_figure_header
from df_save_re.deserializers.save_profiles import read_art_image_save
from df_save_re.save_preamble import resolve_save_payload

payload = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload

CASES = [
    ("fig1", 0x21355EF, 0x213B0CF, 2, 1),
    ("fig3", 0x215EC4F, 0x2161BAB, 4, 0),
]


def lands(pos: int, expect: int) -> bool:
    r = BinaryReader(BytesIO(payload))
    r.seek(pos)
    h = try_read_historical_figure_header(r)
    return h is not None and h.figure_id == expect


for label, tail, target, expect, ac in CASES:
    print(f"\n{label} art={ac} gap={target - tail}")
    for lead in range(0, 512, 1):
        r = BinaryReader(BytesIO(payload))
        r.seek(tail + lead)
        try:
            for _ in range(max(ac, 1) if ac else 1):
                read_art_image_save(r)
            if ac == 0 and lead == 0:
                continue
        except SkipError:
            continue
        if lands(r.tell(), expect):
            print(f"  MATCH lead={lead} end={r.tell():#x}")
