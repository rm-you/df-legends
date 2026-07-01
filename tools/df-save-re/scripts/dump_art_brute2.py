#!/usr/bin/env python3
"""Brute post-tail layouts: chunk vectors, art elements, appearance blobs."""
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.body_skipper import SkipError, default_xml_dir, skip_field, skip_struct
from df_save_re.deserializers.historical_figures import try_read_historical_figure_header
from df_save_re.deserializers.record_reader import read_struct
from df_save_re.save_preamble import resolve_save_payload
from df_save_re.structures.polymorph import build_registry
from df_save_re.structures.xml_fields import FieldDef

payload = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
xml = default_xml_dir()


def lands(pos: int, expect: int) -> bool:
    r = BinaryReader(BytesIO(payload))
    r.seek(pos)
    h = try_read_historical_figure_header(r)
    return h is not None and h.figure_id == expect


def skip_chunk_vectors(reader: BinaryReader) -> None:
    """artistic_profilest save layout for personal_art_image_chunk vectors."""
    pc = reader.read_int32()
    if pc:
        reader.read_bytes(pc * 4)
    pm = reader.read_int32()
    if pm:
        reader.read_bytes(pm * 2)


def skip_poly_vector_int32_presence(reader: BinaryReader, base_type: str) -> None:
    registry = build_registry(base_type, xml)
    count = reader.read_int32()
    if count < 0 or count > 100_000:
        raise SkipError(f"bad count {count}")
    present = [reader.read_int32() != 0 for _ in range(count)]
    for p in present:
        if not p:
            continue
        tag = reader.read_int16()
        subclass = registry.subclass_for(tag) if registry else None
        if subclass is None:
            raise SkipError(f"unknown tag {tag} for {base_type}")
        skip_struct(reader, subclass, xml_dir=xml, payload=payload)


def try_art_image_save_layout(tail_end: int) -> int | None:
    """Hypothesis: save art_image = int32 elem count + poly elements + int32 prop count + poly props + tail fields."""
    r = BinaryReader(BytesIO(payload))
    r.seek(tail_end)
    skip_poly_vector_int32_presence(r, "art_image_element")
    skip_poly_vector_int32_presence(r, "art_image_property")
    # remainder of art_image scalar fields
    skip_struct_fields_tail = [
        ("int32", 4),
        ("language_name", None),
    ]
    reader.read_int32()  # event
    from df_save_re.deserializers.language_name import read_language_name

    read_language_name(r)
    r.read_int32()  # spec_ref_type
    r.read_int16()
    r.read_int32()  # mat_index
    r.read_int16()  # quality
    r.read_int32()  # artist
    r.read_int32()  # site
    flag = r.read_int32()
    if flag:
        skip_struct(r, "general_ref", xml_dir=xml, payload=payload)
    r.read_int32()  # year
    r.read_int32()  # unk_1
    r.read_int32()  # id
    r.read_int16()  # subid
    return r.tell()


CASES = [
    ("fig1", 0x21355EF, 0x213B0CF, 2, 1),
    ("fig2", 0x213B2CD, 0x215EB79, 3, 1),
    ("fig3", 0x215EC4F, 0x2161BAB, 4, 0),
]

for label, tail, target, expect, ac in CASES:
    print(f"\n=== {label} gap={target-tail} art={ac} ===")

    r = BinaryReader(BytesIO(payload))
    r.seek(tail)
    try:
        skip_chunk_vectors(r)
        ok = lands(r.tell(), expect)
        print(f"  chunk vectors only: end={r.tell():#x} ok={ok}")
    except SkipError as e:
        print(f"  chunk vectors only: {e}")

    r = BinaryReader(BytesIO(payload))
    r.seek(tail)
    try:
        for _ in range(ac):
            skip_poly_vector_int32_presence(r, "art_image_element")
        ok = lands(r.tell(), expect)
        print(f"  {ac}x elem poly vectors: end={r.tell():#x} ok={ok}")
    except SkipError as e:
        print(f"  elem poly vectors: {e}")

    try:
        end = try_art_image_save_layout(tail)
        print(f"  full art_image save layout: end={end:#x} ok={lands(end, expect) if end else False}")
    except SkipError as e:
        print(f"  full art_image save layout: {e}")

    # int32 art_count then chunk vectors
    r = BinaryReader(BytesIO(payload))
    r.seek(tail)
    try:
        n = r.read_int32()
        if n == ac or (ac == 0 and n == 0):
            skip_chunk_vectors(r)
            ok = lands(r.tell(), expect)
            print(f"  int32({n}) + chunk vectors: end={r.tell():#x} ok={ok}")
    except SkipError as e:
        print(f"  int32+chunk: {e}")

    # appearance / portrait blob: int32 size + bytes
    for off in range(0, 128, 4):
        r = BinaryReader(BytesIO(payload))
        r.seek(tail + off)
        try:
            sz = r.read_int32()
        except EOFError:
            break
        if sz <= 0 or sz > target - tail - off - 4:
            continue
        end = tail + off + 4 + sz
        if lands(end, expect):
            print(f"  MATCH int32 size @+{off} sz={sz} end={end:#x}")
