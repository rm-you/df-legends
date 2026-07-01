#!/usr/bin/env python3
from io import BytesIO
import struct

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.body_skipper import SkipError, default_xml_dir, skip_field
from df_save_re.deserializers.historical_figures import read_historical_figure_header
from df_save_re.save_preamble import resolve_save_payload
from df_save_re.structures.xml_fields import load_struct, resolve_fields

payload = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
xml_dir = default_xml_dir()
TARGET = 0x2135412
fields = resolve_fields(load_struct("historical_figure", xml_dir), xml_dir)
tail_names = [
    "entity_links", "site_links", "histfig_links", "info", "vague_relationships",
    "worldgen_site", "worldgen_region", "worldgen_layer", "worldgen_genetics",
    "worldgen_relationships", "temp_var", "temp_flag",
    "gen_material_skill_ip_sum", "defensive_skill_ip_sum",
]
tail = [f for f in fields if f.name in tail_names]

r = BinaryReader(BytesIO(payload))
r.seek(0x2134DD0)
read_historical_figure_header(r)
for fd in tail[:2]:
    skip_field(r, fd, xml_dir=xml_dir, struct_name="historical_figure")
print("after site", hex(r.tell()))
# manual histfig: skip 3 bytes then use normal skip from histfig_links field
r.read_bytes(3)
for fd in tail[2:]:
    off = r.tell()
    try:
        skip_field(r, fd, xml_dir=xml_dir, struct_name="historical_figure")
        print(f"ok {fd.name} +{r.tell()-off} -> {r.tell():#x}")
    except SkipError as e:
        print(f"FAIL {fd.name} @ {off:#x}: {e}")
        break
print("final", hex(r.tell()), "target", hex(TARGET), "delta", r.tell()-TARGET)
