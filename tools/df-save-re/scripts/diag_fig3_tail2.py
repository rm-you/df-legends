#!/usr/bin/env python3
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.body_skipper import default_xml_dir, skip_field
from df_save_re.deserializers.historical_figures import (
    _find_next_figure_start,
    read_historical_figure_header,
)
from df_save_re.save_preamble import resolve_save_payload
from df_save_re.structures.xml_fields import load_struct, resolve_fields

p = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
xml = default_xml_dir()
TAIL = (
    "entity_links", "site_links", "histfig_links", "info", "vague_relationships",
    "worldgen_site", "worldgen_region", "worldgen_layer", "worldgen_genetics",
    "worldgen_relationships", "temp_var", "temp_flag",
    "gen_material_skill_ip_sum", "defensive_skill_ip_sum",
)
tail = [f for f in resolve_fields(load_struct("historical_figure", xml), xml) if f.name in TAIL]

fig3 = 0x215EB79
r = BinaryReader(BytesIO(p))
r.seek(fig3)
h3 = read_historical_figure_header(r)
for fd in tail:
    if fd.name == "worldgen_relationships":
        present = r.read_int32()
        if present:
            r.read_bytes(830)
        continue
    skip_field(r, fd, xml_dir=xml, struct_name="historical_figure")
tail = r.tell()
print("structural tail", hex(tail), "delta", tail - fig3)
nxt = _find_next_figure_start(p, scan_start=tail, previous_id=h3.figure_id, stop_before=0x226009C)
print("min-id next", hex(nxt) if nxt else None)
