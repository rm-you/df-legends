#!/usr/bin/env python3
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.body_skipper import SkipError, default_xml_dir, skip_field
from df_save_re.deserializers.historical_figures import read_historical_figure_header
from df_save_re.save_preamble import resolve_save_payload
from df_save_re.structures.xml_fields import load_struct, resolve_fields

payload = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
xml_dir = default_xml_dir()
TARGET = 0x2135412

info_fields = resolve_fields(load_struct("historical_figure_info", xml_dir), xml_dir)
rest_info = [f for f in info_fields if f.name not in ("metaphysical", "skills", "pets", "personality", "masterpieces")]

tail_fields = [f for f in resolve_fields(load_struct("historical_figure", xml_dir), xml_dir) if f.name in (
    "vague_relationships", "worldgen_site", "worldgen_region", "worldgen_layer",
    "worldgen_genetics", "worldgen_relationships", "temp_var", "temp_flag",
    "gen_material_skill_ip_sum", "defensive_skill_ip_sum",
)]

def try_art_body(body_len: int) -> int | None:
    r = BinaryReader(BytesIO(payload))
    r.seek(0x2134F4D + body_len)
    for fd in rest_info + tail_fields:
        try:
            skip_field(r, fd, xml_dir=xml_dir, struct_name="historical_figure_info" if fd in rest_info else "historical_figure")
        except SkipError:
            return None
    return r.tell()

for bl in range(4, 900, 4):
    end = try_art_body(bl)
    if end == TARGET:
        print("artistic body_len", bl)
        break
else:
    print("no exact match in range")
