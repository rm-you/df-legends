#!/usr/bin/env python3
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.body_skipper import SkipError, default_xml_dir, skip_field, skip_struct
from df_save_re.deserializers.historical_figures import try_read_historical_figure_header
from df_save_re.save_preamble import resolve_save_payload
from df_save_re.structures.xml_fields import FieldDef

payload = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
xml = default_xml_dir()

cases = [
    ("fig1", 0x21355EF, 1, 0x213B0CF, 2),
    ("fig2", 0x213B2F5, 1, 0x215EB79, 3),
    ("fig0", None, 0, 0x2135412, 1),
]


def skip_tail_fields(start: int) -> tuple[int, int]:
    from df_save_re.deserializers.historical_figures import read_historical_figure_header
    from df_save_re.structures.xml_fields import load_struct, resolve_fields

    TAIL = (
        "entity_links", "site_links", "histfig_links", "info", "vague_relationships",
        "worldgen_site", "worldgen_region", "worldgen_layer", "worldgen_genetics",
        "worldgen_relationships", "temp_var", "temp_flag",
        "gen_material_skill_ip_sum", "defensive_skill_ip_sum",
    )
    tail = [f for f in resolve_fields(load_struct("historical_figure", xml), xml) if f.name in TAIL]
    r = BinaryReader(BytesIO(payload))
    r.seek(start)
    h = read_historical_figure_header(r)
    for fd in tail:
        if fd.name == "worldgen_relationships":
            p = r.read_int32()
            if p == 1:
                r.read_bytes(830)
            continue
        skip_field(r, fd, xml_dir=xml, struct_name="historical_figure")
    return r.tell(), h.art_count


def lands(pos: int, expect: int) -> bool:
    r = BinaryReader(BytesIO(payload))
    r.seek(pos)
    h = try_read_historical_figure_header(r)
    return h is not None and h.figure_id == expect


def try_format(tail_end: int, art_count: int, target: int, expect_id: int, name: str, fn) -> None:
    try:
        end = fn(tail_end, art_count)
    except (SkipError, EOFError, ValueError):
        return
    if end is None:
        return
    ok = end == target and lands(end, expect_id)
    if ok or abs(end - target) < 16:
        print(f"{name}: end={end:#x} target={target:#x} ok={ok}")


def fmt_ptr_vector_refs(tail_end: int, art_count: int) -> int | None:
    r = BinaryReader(BytesIO(payload))
    r.seek(tail_end)
    fd = FieldDef(name="refs", kind="stl-vector", pointer_type="art_image_ref")
    skip_field(r, fd, xml_dir=xml, struct_name="historical_figure")
    return r.tell()


def fmt_count_refs(tail_end: int, art_count: int) -> int | None:
    r = BinaryReader(BytesIO(payload))
    r.seek(tail_end)
    if r.read_int32() != art_count:
        return None
    for _ in range(art_count):
        skip_struct(r, "art_image_ref", xml_dir=xml)
    return r.tell()


def fmt_count_then_ptr_bodies(tail_end: int, art_count: int) -> int | None:
    r = BinaryReader(BytesIO(payload))
    r.seek(tail_end)
    n = r.read_int32()
    if n != art_count:
        return None
    fd = FieldDef(name="art", kind="stl-vector", pointer_type="art_image")
    skip_field(r, fd, xml_dir=xml, struct_name="historical_figure")
    return r.tell()


def fmt_refs_then_images(tail_end: int, art_count: int) -> int | None:
    r = BinaryReader(BytesIO(payload))
    r.seek(tail_end)
    for _ in range(art_count):
        skip_struct(r, "art_image_ref", xml_dir=xml)
    for _ in range(art_count):
        skip_struct(r, "art_image", xml_dir=xml)
    return r.tell()


# fig0 check
tail0, ac0 = skip_tail_fields(0x2134DD0)
print(f"fig0 tail={tail0:#x} art={ac0} target={0x2135412:#x} gap={0x2135412-tail0}")

for label, tail, art, target, expect in [
    ("fig1", 0x21355EF, 1, 0x213B0CF, 2),
    ("fig2", 0x213B2F5, 1, 0x215EB79, 3),
]:
    print(f"\n=== {label} gap={target-tail} ===")
    for nm, fn in [
        ("ptr vector refs", fmt_ptr_vector_refs),
        ("count+refs", fmt_count_refs),
        ("count+ptr art bodies", fmt_count_then_ptr_bodies),
        ("refs+images", fmt_refs_then_images),
    ]:
        try_format(tail, art, target, expect, nm, fn)
