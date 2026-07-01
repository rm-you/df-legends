#!/usr/bin/env python3
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.body_skipper import SkipError, default_xml_dir, skip_field
from df_save_re.save_preamble import resolve_save_payload
from df_save_re.structures.xml_fields import load_struct, resolve_fields

payload = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
xml_dir = default_xml_dir()
TARGET = 0x2135412

tail = [f for f in resolve_fields(load_struct("historical_figure", xml_dir), xml_dir) if f.name in (
    "vague_relationships", "worldgen_site", "worldgen_region", "worldgen_layer",
    "worldgen_genetics", "worldgen_relationships", "temp_var", "temp_flag",
    "gen_material_skill_ip_sum", "defensive_skill_ip_sum",
)]

r = BinaryReader(BytesIO(payload))
r.seek(0x2134FAD)
for fd in tail:
    off = r.tell()
    try:
        skip_field(r, fd, xml_dir=xml_dir, struct_name="historical_figure")
        print(f"ok {fd.name:25s} +{r.tell()-off:5d} -> {r.tell():#x} delta {r.tell()-TARGET}")
    except SkipError as e:
        print(f"FAIL {fd.name} @ {off:#x}: {e}")
        break
