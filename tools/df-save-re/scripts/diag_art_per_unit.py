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

payload = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
xml = default_xml_dir()
DEATH = 0x226009C

TAIL = (
    "entity_links", "site_links", "histfig_links", "info", "vague_relationships",
    "worldgen_site", "worldgen_region", "worldgen_layer", "worldgen_genetics",
    "worldgen_relationships", "temp_var", "temp_flag",
    "gen_material_skill_ip_sum", "defensive_skill_ip_sum",
)
tail = [f for f in resolve_fields(load_struct("historical_figure", xml), xml) if f.name in TAIL]


def tail_end(start: int):
    r = BinaryReader(BytesIO(payload))
    r.seek(start)
    h = read_historical_figure_header(r)
    for fd in tail:
        if fd.name == "worldgen_relationships":
            p = r.read_int32()
            if p == 1:
                r.read_bytes(830)
            continue
        skip_field(r, fd, xml_dir=xml, struct_name="historical_figure")
    return r.tell(), h


offset = 0x2134DD0
for i in range(8):
    te, h = tail_end(offset)
    nxt = _find_next_figure_start(payload, scan_start=te, previous_id=h.figure_id, stop_before=DEATH)
    gap = nxt - te if nxt else -1
    per = gap / h.art_count if h.art_count else 0
    print(f"id={h.figure_id:5d} art={h.art_count:4d} gap={gap:7d} per_art={per:8.1f} start={offset:#x}")
    if nxt is None:
        break
    offset = nxt
