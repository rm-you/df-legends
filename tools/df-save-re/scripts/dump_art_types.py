#!/usr/bin/env python3
"""Try unit_genes / unit_appearance / chunk vectors from post-tail."""
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.body_skipper import SkipError, default_xml_dir, skip_struct
from df_save_re.deserializers.historical_figures import try_read_historical_figure_header
from df_save_re.save_preamble import resolve_save_payload

payload = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
xml = default_xml_dir()

CASES = [
    ("fig1", 0x21355EF, 0x213B0CF, 2),
    ("fig3", 0x215EC4F, 0x2161BAB, 4),
]


def lands(pos: int, expect: int) -> bool:
    r = BinaryReader(BytesIO(payload))
    r.seek(pos)
    h = try_read_historical_figure_header(r)
    return h is not None and h.figure_id == expect


def try_type(name: str, tail: int, expect: int, type_name: str) -> None:
    for lead in range(0, 256, 1):
        r = BinaryReader(BytesIO(payload))
        r.seek(tail + lead)
        try:
            skip_struct(r, type_name, xml_dir=xml, payload=payload)
        except SkipError:
            continue
        if lands(r.tell(), expect):
            print(f"  {name} {type_name} lead={lead} end={r.tell():#x}")


for label, tail, target, expect in CASES:
    print(f"\n{label} gap={target - tail}")
    try_type(label, tail, expect, "unit_genes")
    try_type(label, tail, expect, "unit_appearance")
    try_type(label, tail, expect, "art_image_ref")
