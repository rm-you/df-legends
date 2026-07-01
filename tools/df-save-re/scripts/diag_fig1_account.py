#!/usr/bin/env python3
"""Detailed fig1 body walk with byte accounting."""
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.body_skipper import default_xml_dir, skip_field
from df_save_re.deserializers.historical_figures import read_historical_figure_header
from df_save_re.save_preamble import resolve_save_payload
from df_save_re.structures.xml_fields import load_struct, resolve_fields

payload = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
xml = default_xml_dir()
FIG1 = 0x2135412
FIG2 = 0x213B0CF

TAIL = (
    "entity_links", "site_links", "histfig_links", "info", "vague_relationships",
    "worldgen_site", "worldgen_region", "worldgen_layer", "worldgen_genetics",
    "worldgen_relationships", "temp_var", "temp_flag",
    "gen_material_skill_ip_sum", "defensive_skill_ip_sum",
)
tail = [f for f in resolve_fields(load_struct("historical_figure", xml), xml) if f.name in TAIL]

r = BinaryReader(BytesIO(payload))
r.seek(FIG1)
h = read_historical_figure_header(r)
print("art_count", h.art_count, "header_end", hex(r.tell()))
for fd in tail:
    off = r.tell()
    if fd.name == "info":
        p = r.read_int32()
        print(f"info present={p} @ {off:#x}")
        if p:
            r.seek(off)
            r.read_int32()
            from df_save_re.deserializers.body_skipper import skip_struct
            skip_struct(r, "historical_figure_info", xml_dir=xml)
            print(f"  info body +{r.tell()-off-4} -> {r.tell():#x}")
        continue
    if fd.name == "worldgen_relationships":
        p = r.read_int32()
        print(f"wg present={p} @ {off:#x}")
        continue
    skip_field(r, fd, xml_dir=xml, struct_name="historical_figure")
    print(f"  {fd.name:25s} +{r.tell()-off:5d} -> {r.tell():#x}")

print("total body", r.tell() - FIG1, "expected", FIG2 - FIG1, "missing", FIG2 - r.tell())
