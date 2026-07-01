#!/usr/bin/env python3
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.body_skipper import SkipError, default_xml_dir, skip_field, skip_struct
from df_save_re.deserializers.historical_figures import try_read_historical_figure_header
from df_save_re.save_preamble import resolve_save_payload
from df_save_re.structures.xml_fields import load_struct, resolve_fields

payload = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
xml = default_xml_dir()
FIG2 = 0x213B0CF

cases = [
    ("fig1", 0x21355EF, 1),
    ("fig2", 0x213B2F5, 1),
]


def lands(pos: int, expect_id: int) -> bool:
    r = BinaryReader(BytesIO(payload))
    r.seek(pos)
    h = try_read_historical_figure_header(r)
    return h is not None and h.figure_id == expect_id


def try_art_images(start: int, n: int, prefix: int = 0) -> int | None:
    r = BinaryReader(BytesIO(payload))
    r.seek(start + prefix)
    try:
        for _ in range(n):
            skip_struct(r, "art_image", xml_dir=xml)
        return r.tell()
    except SkipError:
        return None


def try_elements_properties_manual(start: int, prefix: int = 0) -> int | None:
    """Try reading art_image as manual field sequence with prefix skip."""
    r = BinaryReader(BytesIO(payload))
    r.seek(start + prefix)
    art = load_struct("art_image", xml)
    try:
        for fd in resolve_fields(art, xml):
            skip_field(r, fd, xml_dir=xml, struct_name="art_image")
        return r.tell()
    except SkipError:
        return None


for label, tail_end, art_count in cases:
    expect = 2 if label == "fig1" else 3
    print(f"=== {label} tail={tail_end:#x} art={art_count} gap={FIG2 if label=='fig1' else 0x215EB79}-tail ===")
    targets = { "fig1": FIG2, "fig2": 0x215EB79}[label]
    for prefix in [0, 4, 8, 12, 16, 20, 24]:
        end = try_art_images(tail_end, art_count, prefix)
        ok = end == targets if end else False
        if end:
            print(f"  prefix={prefix:2d} art_image x{n}: end={end:#x} delta={end-targets} exact={ok}")
    for prefix in [0, 4, 8, 12, 16]:
        end = try_elements_properties_manual(tail_end, prefix)
        if end:
            print(f"  prefix={prefix:2d} manual walk: end={end:#x} delta={end-targets}")
