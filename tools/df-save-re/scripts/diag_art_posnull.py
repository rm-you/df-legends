#!/usr/bin/env python3
"""Try art_count-sized posnull vector of art_image bodies at tail."""
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.body_skipper import SkipError, default_xml_dir, skip_struct
from df_save_re.deserializers.historical_figures import try_read_historical_figure_header
from df_save_re.save_preamble import resolve_save_payload

payload = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
xml = default_xml_dir()


def _align4(r: BinaryReader) -> None:
    while r.tell() % 4:
        r.read_uint8()


def skip_art_posnull_bool(tail_end: int, art_count: int) -> int | None:
    r = BinaryReader(BytesIO(payload))
    r.seek(tail_end)
    present = [r.read_bool() for _ in range(art_count)]
    if art_count:
        _align4(r)
    for p in present:
        if p:
            skip_struct(r, "art_image", xml_dir=xml)
    return r.tell()


def skip_art_posnull_int32(tail_end: int, art_count: int) -> int | None:
    r = BinaryReader(BytesIO(payload))
    r.seek(tail_end)
    present = [r.read_int32() != 0 for _ in range(art_count)]
    for p in present:
        if p:
            skip_struct(r, "art_image", xml_dir=xml)
    return r.tell()


def skip_art_bodies_only(tail_end: int, art_count: int) -> int | None:
    r = BinaryReader(BytesIO(payload))
    r.seek(tail_end)
    try:
        for _ in range(art_count):
            skip_struct(r, "art_image", xml_dir=xml)
        return r.tell()
    except SkipError:
        return None


cases = [
    ("fig1", 0x21355EF, 1, 0x213B0CF, 2),
    ("fig2", 0x213B2F5, 1, 0x215EB79, 3),
]

for label, tail, ac, target, expect in cases:
    print(f"=== {label} ===")
    for name, fn in [
        ("posnull bool", skip_art_posnull_bool),
        ("posnull int32", skip_art_posnull_int32),
        ("bodies only", skip_art_bodies_only),
    ]:
        try:
            end = fn(tail, ac)
        except (SkipError, EOFError, ValueError) as e:
            print(f"  {name}: FAIL {e}")
            continue
        r = BinaryReader(BytesIO(payload))
        r.seek(end if end else 0)
        h = try_read_historical_figure_header(r) if end else None
        print(f"  {name}: end={end:#x} delta={end-target} lands={h.figure_id if h else None}")
