#!/usr/bin/env python3
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.body_skipper import SkipError, default_xml_dir, skip_field
from df_save_re.deserializers.historical_figures import try_read_historical_figure_header
from df_save_re.save_preamble import resolve_save_payload
from df_save_re.structures.xml_fields import load_struct, resolve_fields

payload = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
xml = default_xml_dir()
FIG1 = 0x2135412

# start after corrected artistic_profilest (events tail=3)
ART_END = 0x213508C

info_rest = [f for f in resolve_fields(load_struct("historical_figure_info", xml), xml) if f.name in (
    "whereabouts", "kills", "wounds", "known_info", "curse", "books", "reputation", "relationships",
)]
tail = [f for f in resolve_fields(load_struct("historical_figure", xml), xml) if f.name in (
    "vague_relationships", "worldgen_site", "worldgen_region", "worldgen_layer",
    "worldgen_genetics", "worldgen_relationships", "temp_var", "temp_flag",
    "gen_material_skill_ip_sum", "defensive_skill_ip_sum",
)]

r = BinaryReader(BytesIO(payload))
r.seek(ART_END)
for fd in info_rest:
    off = r.tell()
    try:
        skip_field(r, fd, xml_dir=xml, struct_name="historical_figure_info")
    except SkipError as e:
        print(f"FAIL info {fd.name} @ {off:#x}: {e}")
        break
    print(f"  ok {fd.name:15s} +{r.tell()-off:5d} -> {r.tell():#x}")
else:
    for fd in tail:
        off = r.tell()
        skip_field(r, fd, xml_dir=xml, struct_name="historical_figure")
        print(f"  ok {fd.name:30s} +{r.tell()-off:5d} -> {r.tell():#x}")
    print("final", hex(r.tell()), "fig1 delta", r.tell() - FIG1)
    h = try_read_historical_figure_header(r)
    print("next header", h.figure_id if h else None)
