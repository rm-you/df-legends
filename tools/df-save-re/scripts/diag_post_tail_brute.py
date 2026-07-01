#!/usr/bin/env python3
"""Brute post-defensive_skill_ip_sum blob formats for fig1 -> fig2."""
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.body_skipper import SkipError, default_xml_dir, skip_field, skip_struct
from df_save_re.deserializers.historical_figures import (
    read_historical_figure_header,
    try_read_historical_figure_header,
)
from df_save_re.save_preamble import resolve_save_payload
from df_save_re.structures.xml_fields import FieldDef, load_struct, resolve_fields

payload = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
xml = default_xml_dir()

TAIL = (
    "entity_links", "site_links", "histfig_links", "info", "vague_relationships",
    "worldgen_site", "worldgen_region", "worldgen_layer", "worldgen_genetics",
    "worldgen_relationships", "temp_var", "temp_flag",
    "gen_material_skill_ip_sum", "defensive_skill_ip_sum",
)
tail = [f for f in resolve_fields(load_struct("historical_figure", xml), xml) if f.name in TAIL]

FIG1 = 0x2135412
FIG2 = 0x213B0CF
GAP = FIG2 - 0x213592D  # structural tail end from prior diag


def structural_tail_end(start: int) -> tuple[int, int]:
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


def lands_fig2(pos: int) -> bool:
    h = try_read_historical_figure_header(BinaryReader(BytesIO(payload)), pos)
    return h is not None and h.figure_id == 2


tail_end, art_count = structural_tail_end(FIG1)
print(f"fig1 tail_end={tail_end:#x} art_count={art_count} gap={FIG2 - tail_end}")

# Raw first ints at tail_end
import struct

for i in range(8):
    off = tail_end + i * 4
    v = struct.unpack_from("<i", payload, off)[0]
    print(f"  [{i}] {off:#x} = {v}")

# Try formats
tests: list[tuple[str, callable]] = []


def try_art_images(n: int) -> int | None:
    r = BinaryReader(BytesIO(payload))
    r.seek(tail_end)
    try:
        for _ in range(n):
            skip_struct(r, "art_image", xml_dir=xml)
    except SkipError:
        return None
    return r.tell()


def try_art_refs(n: int) -> int | None:
    r = BinaryReader(BytesIO(payload))
    r.seek(tail_end)
    try:
        for _ in range(n):
            skip_struct(r, "art_image_ref", xml_dir=xml)
    except SkipError:
        return None
    return r.tell()


def try_ptr_vector_art() -> int | None:
    r = BinaryReader(BytesIO(payload))
    r.seek(tail_end)
    fd = FieldDef(name="art", kind="stl-vector", pointer_type="art_image")
    try:
        skip_field(r, fd, xml_dir=xml, struct_name="historical_figure")
    except SkipError:
        return None
    return r.tell()


def try_int32_then_refs() -> int | None:
    r = BinaryReader(BytesIO(payload))
    r.seek(tail_end)
    n = r.read_int32()
    if n != art_count:
        return None
    try:
        for _ in range(n):
            skip_struct(r, "art_image_ref", xml_dir=xml)
    except SkipError:
        return None
    return r.tell()


def try_int32_then_images() -> int | None:
    r = BinaryReader(BytesIO(payload))
    r.seek(tail_end)
    n = r.read_int32()
    if n != art_count:
        return None
    try:
        for _ in range(n):
            skip_struct(r, "art_image", xml_dir=xml)
    except SkipError:
        return None
    return r.tell()


def try_fixed_gap(n: int) -> int | None:
    return tail_end + n


for name, fn in [
    ("art_image x art_count", lambda: try_art_images(art_count)),
    ("art_image_ref x art_count", lambda: try_art_refs(art_count)),
    ("ptr vector art_image", try_ptr_vector_art),
    ("int32+refs", try_int32_then_refs),
    ("int32+images", try_int32_then_images),
    ("fixed gap", lambda: try_fixed_gap(GAP)),
]:
    end = fn()
    if end is None:
        print(f"{name}: FAIL")
        continue
    ok = lands_fig2(end)
    print(f"{name}: end={end:#x} delta_fig2={end - FIG2} lands_fig2={ok}")

# Brute single art_image partial - find if one art_image skip lands near fig2
r = BinaryReader(BytesIO(payload))
r.seek(tail_end)
try:
    skip_struct(r, "art_image", xml_dir=xml)
    print(f"single art_image -> {r.tell():#x} delta {r.tell() - FIG2}")
except SkipError as e:
    print(f"single art_image FAIL: {e}")
