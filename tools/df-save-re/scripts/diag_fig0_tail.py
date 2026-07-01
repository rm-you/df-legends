#!/usr/bin/env python3
"""Walk fig0 tail fields after historical_figure_info."""
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.body_skipper import SkipError, default_xml_dir, skip_field
from df_save_re.deserializers.historical_figures import try_read_historical_figure_header
from df_save_re.save_preamble import resolve_save_payload
from df_save_re.structures.xml_fields import load_struct, resolve_fields

payload = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
xml_dir = default_xml_dir()
FIG1 = 0x2135412
START = 0x2134FAD  # after info skip

struct = load_struct("historical_figure", xml_dir)
tail_names = (
    "vague_relationships",
    "worldgen_site",
    "worldgen_region",
    "worldgen_layer",
    "worldgen_genetics",
    "worldgen_relationships",
    "temp_var",
    "temp_flag",
    "gen_material_skill_ip_sum",
    "defensive_skill_ip_sum",
)
tail = [fd for fd in resolve_fields(struct, xml_dir) if fd.name in tail_names]

r = BinaryReader(BytesIO(payload))
r.seek(START)
for fd in tail:
    off = r.tell()
    try:
        skip_field(r, fd, xml_dir=xml_dir, struct_name="historical_figure")
    except SkipError as e:
        print(f"FAIL {fd.name} @ {off:#x}: {e}")
        break
    print(f"  ok {fd.name:30s} +{r.tell()-off:5d} -> {r.tell():#x}")
else:
    print("tail end", hex(r.tell()), "fig1", hex(FIG1), "delta", r.tell() - FIG1)
    probe = try_read_historical_figure_header(r)
    if probe:
        print(f"header id={probe.figure_id} art={probe.art_count}")
