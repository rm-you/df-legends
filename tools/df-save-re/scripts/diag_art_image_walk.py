#!/usr/bin/env python3
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.body_skipper import SkipError, default_xml_dir, skip_field, skip_struct
from df_save_re.deserializers.historical_figures import try_read_historical_figure_header
from df_save_re.save_preamble import resolve_save_payload
from df_save_re.structures.xml_fields import load_struct, resolve_fields

payload = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
xml = default_xml_dir()
TAIL_END = 0x21355EF
FIG2 = 0x213B0CF
GAP = FIG2 - TAIL_END

TAIL = (
    "entity_links", "site_links", "histfig_links", "info", "vague_relationships",
    "worldgen_site", "worldgen_region", "worldgen_layer", "worldgen_genetics",
    "worldgen_relationships", "temp_var", "temp_flag",
    "gen_material_skill_ip_sum", "defensive_skill_ip_sum",
)
tail = [f for f in resolve_fields(load_struct("historical_figure", xml), xml) if f.name in TAIL]

print("GAP", GAP)

# Try art_image field-by-field
r = BinaryReader(BytesIO(payload))
r.seek(TAIL_END)
art = load_struct("art_image", xml)
for fd in resolve_fields(art, xml):
    off = r.tell()
    try:
        skip_field(r, fd, xml_dir=xml, struct_name="art_image")
        print(f"  {fd.name:20s} +{r.tell()-off:6d} -> {r.tell():#x}")
    except SkipError as e:
        print(f"  {fd.name:20s} FAIL at {off:#x}: {e}")
        break

print("end", hex(r.tell()), "delta fig2", r.tell() - FIG2)
r2 = BinaryReader(BytesIO(payload))
r2.seek(r.tell())
h = try_read_historical_figure_header(r2)
print("next header", h.figure_id if h else None)

# Brute fixed-size blob: art_count from header is 1, maybe blob size = GAP
print("fixed blob lands fig2?", TAIL_END + GAP == FIG2)
