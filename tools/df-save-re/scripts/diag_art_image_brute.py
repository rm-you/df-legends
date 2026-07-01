#!/usr/bin/env python3
"""Brute art_image save-path variants to close fig1->fig2 gap."""
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.body_skipper import (
    SkipError,
    default_xml_dir,
    skip_field,
    skip_struct,
    _read_polymorphic,
)
from df_save_re.deserializers.historical_figures import try_read_historical_figure_header
from df_save_re.deserializers.language_name import read_language_name
from df_save_re.deserializers.primitives import DfString
from df_save_re.save_preamble import resolve_save_payload
from df_save_re.structures.polymorph import build_registry

payload = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
xml = default_xml_dir()
TAIL_END = 0x21355EF
FIG2 = 0x213B0CF
ART_COUNT = 1


def _align4(r: BinaryReader) -> None:
    while r.tell() % 4:
        r.read_uint8()


def skip_poly_ptr_vector_bool(r: BinaryReader, base: str) -> None:
    count = r.read_int32()
    if count < 0 or count > 500_000:
        raise SkipError(f"bad count {count}")
    present = [r.read_bool() for _ in range(count)]
    if count:
        _align4(r)
    reg = build_registry(base, xml)
    for is_present in present:
        if not is_present:
            continue
        tag = r.read_int16()
        if reg is None:
            raise SkipError("no registry")
        sub = reg.subclass_for(tag)
        if sub is None:
            raise SkipError(f"bad tag {tag}")
        r.seek(r.tell() - 2)
        skip_struct(r, sub, xml_dir=xml)


def skip_poly_ptr_vector_int32(r: BinaryReader, base: str) -> None:
    count = r.read_int32()
    if count < 0 or count > 500_000:
        raise SkipError(f"bad count {count}")
    present = [r.read_int32() != 0 for _ in range(count)]
    reg = build_registry(base, xml)
    for is_present in present:
        if not is_present:
            continue
        tag = r.read_int16()
        if reg is None:
            raise SkipError("no registry")
        sub = reg.subclass_for(tag)
        if sub is None:
            raise SkipError(f"bad tag {tag}")
        r.seek(r.tell() - 2)
        skip_struct(r, sub, xml_dir=xml)


def skip_art_image_variant(r: BinaryReader, *, elem_flags: str, prop_flags: str) -> None:
    if elem_flags == "bool":
        skip_poly_ptr_vector_bool(r, "art_image_element")
    elif elem_flags == "int32":
        skip_poly_ptr_vector_int32(r, "art_image_element")
    else:
        raise SkipError("elem?")
    if prop_flags == "bool":
        skip_poly_ptr_vector_bool(r, "art_image_property")
    elif prop_flags == "int32":
        skip_poly_ptr_vector_int32(r, "art_image_property")
    else:
        raise SkipError("prop?")
    r.read_int32()  # event
    read_language_name(r)
    r.read_int32()  # spec_ref_type
    r.read_int16()  # mat_type
    r.read_int32()  # mat_index
    r.read_int16()  # quality
    r.read_int32()  # artist
    r.read_int32()  # site
    present = r.read_int32() != 0
    if present:
        _read_polymorphic(r, "general_ref", xml_dir=xml)
    r.read_int32()  # year
    r.read_int32()  # unk_1
    r.read_int32()  # id
    r.read_int16()  # subid


def try_skip(start: int, elem_flags: str, prop_flags: str) -> int | None:
    r = BinaryReader(BytesIO(payload))
    r.seek(start)
    try:
        for _ in range(ART_COUNT):
            skip_art_image_variant(r, elem_flags=elem_flags, prop_flags=prop_flags)
        return r.tell()
    except (SkipError, EOFError, ValueError):
        return None


def lands(pos: int) -> bool:
    r = BinaryReader(BytesIO(payload))
    r.seek(pos)
    h = try_read_historical_figure_header(r)
    return h is not None and h.figure_id == 2


for elem in ("bool", "int32"):
    for prop in ("bool", "int32"):
        for prefix in range(0, 256, 2):
            end = try_skip(TAIL_END + prefix, elem, prop)
            if end == FIG2:
                print(f"MATCH elem={elem} prop={prop} prefix={prefix}")
            elif end and lands(end):
                print(f"LANDS elem={elem} prop={prop} prefix={prefix} end={end:#x}")

print("done brute")
