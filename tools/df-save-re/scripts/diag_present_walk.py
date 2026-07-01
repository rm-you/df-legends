#!/usr/bin/env python3
"""Walk first N present figures using correct tail skip + header scan for art gap."""
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.body_skipper import SkipError, default_xml_dir, skip_field
from df_save_re.deserializers.historical_figures import (
    build_historical_figure_catalog,
    locate_figures_vector,
    read_historical_figure_header,
    try_read_historical_figure_header,
    _find_next_figure_start,
)
from df_save_re.deserializers.world_dat import parse_dat_preamble
from df_save_re.deserializers.world_layout import discover_layout_landmarks
from df_save_re.save_preamble import resolve_save_payload
from df_save_re.structures.xml_fields import load_struct, resolve_fields

payload = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
pre = parse_dat_preamble(payload)
layout = discover_layout_landmarks(payload, pre)
xml = default_xml_dir()
anchor = locate_figures_vector(payload, pre.header, search_start=layout.history_stats)
assert anchor

TAIL = (
    "entity_links", "site_links", "histfig_links", "info", "vague_relationships",
    "worldgen_site", "worldgen_region", "worldgen_layer", "worldgen_genetics",
    "worldgen_relationships", "temp_var", "temp_flag",
    "gen_material_skill_ip_sum", "defensive_skill_ip_sum",
)
tail_fields = [f for f in resolve_fields(load_struct("historical_figure", xml), xml) if f.name in TAIL]


def skip_artistic_save(reader: BinaryReader) -> None:
    ec = reader.read_int32()
    if ec:
        reader.read_bytes(ec * 4 + 3)
    lc = reader.read_int32()
    if lc:
        reader.read_bytes(lc * 4)
    pc = reader.read_int32()
    if pc:
        reader.read_bytes(pc * 4)
    pm = reader.read_int32()
    if pm:
        reader.read_bytes(pm * 2)
    reader.read_bytes(8)


def skip_info_save(reader: BinaryReader) -> None:
    info_fields = resolve_fields(load_struct("historical_figure_info", xml), xml)
    for fd in info_fields:
        if fd.name == "masterpieces":
            if reader.read_int32() != 0:
                skip_artistic_save(reader)
            continue
        skip_field(reader, fd, xml_dir=xml, struct_name="historical_figure_info", payload=payload)


def structural_tail_end(start: int) -> tuple[int, int, int]:
    r = BinaryReader(BytesIO(payload))
    r.seek(start)
    h = read_historical_figure_header(r)
    for fd in tail_fields:
        if fd.name == "info":
            if r.read_int32() != 0:
                skip_info_save(r)
        elif fd.name == "worldgen_relationships":
            p = r.read_int32()
            if p == 1:
                r.read_bytes(830)
        else:
            skip_field(r, fd, xml_dir=xml, struct_name="historical_figure", payload=payload)
    return r.tell(), h.figure_id, h.art_count


offset = anchor.bodies_start
death = anchor.death_events_offset
for i in range(15):
    body_start = offset
    tail_end, fid, art = structural_tail_end(body_start)
    nxt = _find_next_figure_start(
        payload, scan_start=tail_end, previous_id=fid, stop_before=death, art_count=art
    )
    gap = (nxt - tail_end) if nxt else -1
    body = (nxt - body_start) if nxt else -1
    nxt_s = f"{nxt:#x}" if nxt is not None else "None"
    print(f"i={i:2d} id={fid:5d} art={art} body_start={body_start:#x} tail_end={tail_end:#x} gap={gap:6d} next={nxt_s}")
    if nxt is None:
        break
    offset = nxt
