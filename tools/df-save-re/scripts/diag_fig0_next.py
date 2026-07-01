#!/usr/bin/env python3
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.historical_figures import (
    _find_next_figure_start,
    _quick_histfig_header_check,
    read_historical_figure_header,
    try_read_historical_figure_header,
)
from df_save_re.deserializers.body_skipper import default_xml_dir, skip_field
from df_save_re.save_preamble import resolve_save_payload
from df_save_re.structures.xml_fields import load_struct, resolve_fields

payload = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
xml = default_xml_dir()
TAIL = (
    "entity_links", "site_links", "histfig_links", "info", "vague_relationships",
    "worldgen_site", "worldgen_region", "worldgen_layer", "worldgen_genetics",
    "worldgen_relationships", "temp_var", "temp_flag",
    "gen_material_skill_ip_sum", "defensive_skill_ip_sum",
)
tail = [f for f in resolve_fields(load_struct("historical_figure", xml), xml) if f.name in TAIL]

r = BinaryReader(BytesIO(payload))
r.seek(0x2134DD0)
read_historical_figure_header(r)
for fd in tail:
    if fd.name == "worldgen_relationships":
        p = r.read_int32()
        if p:
            r.read_bytes(830)
        continue
    skip_field(r, fd, xml_dir=xml, struct_name="historical_figure")
tail_end = r.tell()
print("fig0 tail", hex(tail_end))
for off in [0x2135412, 0x21373d7]:
    print(hex(off), "quick", _quick_histfig_header_check(payload, off))
    rr = BinaryReader(BytesIO(payload))
    rr.seek(off)
    h = try_read_historical_figure_header(rr)
    print(" ", h.figure_id if h else None, h.header_bytes if h else None)
nxt = _find_next_figure_start(payload, scan_start=tail_end, previous_id=0, stop_before=0x226009C)
print("next", hex(nxt) if nxt else None)
