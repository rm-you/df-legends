#!/usr/bin/env python3
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.body_skipper import SkipError, default_xml_dir, skip_field
from df_save_re.deserializers.historical_figures import read_historical_figure_header
from df_save_re.save_preamble import resolve_save_payload
from df_save_re.structures.xml_fields import load_struct, resolve_fields

payload = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
xml = default_xml_dir()
START = 0x215EB79

TAIL = (
    "entity_links", "site_links", "histfig_links", "info", "vague_relationships",
    "worldgen_site", "worldgen_region", "worldgen_layer", "worldgen_genetics",
    "worldgen_relationships", "temp_var", "temp_flag",
    "gen_material_skill_ip_sum", "defensive_skill_ip_sum",
)
tail = [f for f in resolve_fields(load_struct("historical_figure", xml), xml) if f.name in TAIL]

r = BinaryReader(BytesIO(payload))
r.seek(START)
h = read_historical_figure_header(r)
print(f"id={h.figure_id} art={h.art_count} header_end={r.tell():#x}")

for fd in tail:
    off = r.tell()
    try:
        if fd.name == "worldgen_relationships":
            p = r.read_int32()
            print(f"  wg_rel present={p}")
            if p == 1:
                r.read_bytes(830)
            continue
        skip_field(r, fd, xml_dir=xml, struct_name="historical_figure")
        print(f"  {fd.name:30s} +{r.tell()-off:6d} -> {r.tell():#x}")
    except SkipError as e:
        print(f"  {fd.name:30s} FAIL at {off:#x}: {e}")
        break
