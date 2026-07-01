#!/usr/bin/env python3
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.body_skipper import SkipError, default_xml_dir, skip_field
from df_save_re.deserializers.historical_figures import (
    read_historical_figure_header,
    try_read_historical_figure_header,
)
from df_save_re.save_preamble import resolve_save_payload
from df_save_re.structures.xml_fields import load_struct, resolve_fields

p = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
xml = default_xml_dir()
tail_names = (
    "entity_links", "site_links", "histfig_links", "info", "vague_relationships",
    "worldgen_site", "worldgen_region", "worldgen_layer", "worldgen_genetics",
    "worldgen_relationships", "temp_var", "temp_flag",
    "gen_material_skill_ip_sum", "defensive_skill_ip_sum",
)
tail = [f for f in resolve_fields(load_struct("historical_figure", xml), xml) if f.name in tail_names]


def align4(r: BinaryReader) -> None:
    while r.tell() % 4:
        r.read_uint8()


def walk(start: int, target: int, *, align_after_site: bool) -> int | None:
    r = BinaryReader(BytesIO(p))
    r.seek(start)
    read_historical_figure_header(r)
    for fd in tail:
        if fd.name == "site_links":
            skip_field(r, fd, xml_dir=xml, struct_name="historical_figure")
            if align_after_site:
                align4(r)
            continue
        if fd.name == "worldgen_relationships":
            present = r.read_int32()
            if present == 1:
                r.read_bytes(830)
            continue
        try:
            skip_field(r, fd, xml_dir=xml, struct_name="historical_figure")
        except SkipError:
            return None
    return r.tell()


cases = [
    ("fig0", 0x2134DD0, 0x2135412),
    ("fig3", 0x215EB79, 0x215EDBF),
]
for align in (False, True):
    print(f"align_after_site={align}")
    for label, start, target in cases:
        end = walk(start, target, align_after_site=align)
        ok = end == target if end else False
        print(f"  {label} end={end:#x} target={target:#x} ok={ok}" if end else f"  {label} FAIL")
    print()
