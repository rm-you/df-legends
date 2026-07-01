#!/usr/bin/env python3
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.historical_figures import (
    _find_next_figure_start,
    locate_figures_vector,
    read_historical_figure_header,
)
from df_save_re.deserializers.body_skipper import default_xml_dir, skip_field
from df_save_re.deserializers.world_layout import discover_layout_landmarks, resolve_history_search_start
from df_save_re.save_preamble import resolve_save_payload
from df_save_re.structures.xml_fields import load_struct, resolve_fields

p = resolve_save_payload("tests/fixtures/small-retired/world.dat")
layout = discover_layout_landmarks(p.payload, p.preamble)
start = resolve_history_search_start(p.payload, layout, p.preamble.header)
anchor = locate_figures_vector(p.payload, p.preamble.header, search_start=start)
payload = p.payload
xml = default_xml_dir()
DEATH = anchor.death_events_offset
TAIL = (
    "entity_links", "site_links", "histfig_links", "info", "vague_relationships",
    "worldgen_site", "worldgen_region", "worldgen_layer", "worldgen_genetics",
    "worldgen_relationships", "temp_var", "temp_flag",
    "gen_material_skill_ip_sum", "defensive_skill_ip_sum",
)
tail = [f for f in resolve_fields(load_struct("historical_figure", xml), xml) if f.name in TAIL]

offset = anchor.bodies_start
steps = 0
while offset < DEATH and steps < 10000:
    r = BinaryReader(BytesIO(payload))
    r.seek(offset)
    h = read_historical_figure_header(r)
    r.seek(offset)
    for fd in tail:
        if fd.name == "worldgen_relationships":
            present = r.read_int32()
            if present:
                r.read_bytes(830)
            continue
        skip_field(r, fd, xml_dir=xml, struct_name="historical_figure")
    tail_end = r.tell()
    nxt = _find_next_figure_start(
        payload,
        scan_start=tail_end,
        previous_id=h.figure_id,
        stop_before=DEATH,
    )
    if nxt is None:
        print("stop", steps, hex(offset), "id", h.figure_id, "tail", hex(tail_end))
        break
    steps += 1
    if steps < 2:
        print("debug offset", hex(offset), "tail", hex(tail_end), "nxt", hex(nxt) if nxt else None)
    offset = nxt

print("steps", steps, "present", anchor.present_count, "final", hex(offset))
