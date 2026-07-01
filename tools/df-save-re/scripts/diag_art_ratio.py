#!/usr/bin/env python3
"""Collect art_count vs post-tail gap for first figures."""
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


def structural_tail_end(start: int) -> tuple[int, int, int]:
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
    return r.tell(), h.art_count, h.figure_id


offset = 0x2134DD0
for i in range(25):
    tail_end, art_count, fid = structural_tail_end(offset)
    nxt = _find_next_figure_start(
        payload, scan_start=tail_end, previous_id=fid, stop_before=DEATH, max_scan=500_000
    )
    if nxt is None:
        print(f"stop at i={i} id={fid}")
        break
    gap = nxt - tail_end
    body = nxt - offset
    ratio = gap / art_count if art_count else 0
    print(f"i={i:2d} id={fid:5d} art={art_count:4d} body={body:6d} gap={gap:6d} gap/art={ratio:8.1f}")
    offset = nxt
