#!/usr/bin/env python3
"""Deep brute: try art_image save variants until fig1 lands on fig2."""
from io import BytesIO
from itertools import product

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.body_skipper import SkipError, default_xml_dir, skip_struct
from df_save_re.deserializers.historical_figures import try_read_historical_figure_header
from df_save_re.deserializers.language_name import read_language_name
from df_save_re.save_preamble import resolve_save_payload
from df_save_re.structures.polymorph import build_registry

payload = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
xml = default_xml_dir()
TAIL = 0x21355EF
FIG2 = 0x213B0CF
ART = 1


def align4(r: BinaryReader) -> None:
    while r.tell() % 4:
        r.read_uint8()


def skip_poly_vec(r: BinaryReader, base: str, *, pres: str) -> None:
    count = r.read_int32()
    if count < 0 or count > 500_000:
        raise SkipError(count)
    if pres == "bool":
        flags = [r.read_bool() for _ in range(count)]
        if count:
            align4(r)
    elif pres == "int32":
        flags = [r.read_int32() != 0 for _ in range(count)]
    else:
        raise SkipError(pres)
    reg = build_registry(base, xml)
    for p in flags:
        if not p:
            continue
        tag = r.read_int16()
        sub = reg.subclass_for(tag) if reg else None
        if sub is None:
            raise SkipError(tag)
        r.seek(r.tell() - 2)
        skip_struct(r, sub, xml_dir=xml)


def skip_art_image(r: BinaryReader, *, elem_pres: str, prop_pres: str, ref_poly: bool) -> None:
    skip_poly_vec(r, "art_image_element", pres=elem_pres)
    skip_poly_vec(r, "art_image_property", pres=prop_pres)
    r.read_int32()
    read_language_name(r)
    r.read_int32()
    r.read_int16()
    r.read_int32()
    r.read_int16()
    r.read_int32()
    r.read_int32()
    if ref_poly:
        if r.read_int32() != 0:
            tag = r.read_int16()
            r.seek(r.tell() - 2)
            skip_struct(r, "general_ref", xml_dir=xml)  # may fail
    else:
        if r.read_int32() != 0:
            r.read_int32()
    r.read_int32()
    r.read_int32()
    r.read_int32()
    r.read_int16()


def try_variant(elem_pres: str, prop_pres: str, ref_poly: bool, prefix: int) -> int | None:
    r = BinaryReader(BytesIO(payload))
    r.seek(TAIL + prefix)
    try:
        for _ in range(ART):
            skip_art_image(r, elem_pres=elem_pres, prop_pres=prop_pres, ref_poly=ref_poly)
        return r.tell()
    except (SkipError, EOFError, ValueError):
        return None


matches = []
for elem_pres, prop_pres, ref_poly, prefix in product(
    ("bool", "int32"), ("bool", "int32"), (False, True), range(0, 32, 4)
):
    end = try_variant(elem_pres, prop_pres, ref_poly, prefix)
    if end == FIG2:
        matches.append((elem_pres, prop_pres, ref_poly, prefix, end))

print("exact matches", matches)

for elem_pres, prop_pres, ref_poly, prefix in product(
    ("bool", "int32"), ("bool", "int32"), (False,), range(0, 64, 2)
):
    end = try_variant(elem_pres, prop_pres, ref_poly, prefix)
    if end is None:
        continue
    r = BinaryReader(BytesIO(payload))
    r.seek(end)
    h = try_read_historical_figure_header(r)
    if h and h.figure_id == 2:
        print(f"LANDS id=2 elem={elem_pres} prop={prop_pres} ref={ref_poly} prefix={prefix} end={end:#x}")
