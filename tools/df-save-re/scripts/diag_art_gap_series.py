#!/usr/bin/env python3
"""Measure art gap vs art_count across first figures via sequential skip."""
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.body_skipper import SkipError, default_xml_dir, skip_field, skip_struct
from df_save_re.deserializers.historical_figures import (
    locate_figures_vector,
    read_historical_figure_header,
    try_read_historical_figure_header,
)
from df_save_re.deserializers.world_header_ids import resolve_history_stats_start
from df_save_re.save_preamble import resolve_save_payload
from df_save_re.structures.xml_fields import load_struct, resolve_fields

payload = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
xml = default_xml_dir()
p = resolve_save_payload("tests/fixtures/small-retired/world.dat")
stats = resolve_history_stats_start(p.payload, p.preamble.header)
anchor = locate_figures_vector(p.payload, p.preamble.header, search_start=stats)

TAIL = (
    "entity_links", "site_links", "histfig_links", "info", "vague_relationships",
    "worldgen_site", "worldgen_region", "worldgen_layer", "worldgen_genetics",
    "worldgen_relationships", "temp_var", "temp_flag",
    "gen_material_skill_ip_sum", "defensive_skill_ip_sum",
)
tail = [f for f in resolve_fields(load_struct("historical_figure", xml), xml) if f.name in TAIL]


def structural_tail_end(start: int) -> tuple[int, int]:
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


def try_skip_art(tail_end: int, art_count: int) -> int | None:
    if art_count <= 0:
        return tail_end
    r = BinaryReader(BytesIO(payload))
    r.seek(tail_end)
    # format: art_count x art_image
    try:
        for _ in range(art_count):
            skip_struct(r, "art_image", xml_dir=xml)
        return r.tell()
    except SkipError:
        pass
    # format: int32 count + art_image_ref x count
    r.seek(tail_end)
    try:
        n = r.read_int32()
        if n != art_count:
            return None
        for _ in range(n):
            skip_struct(r, "art_image_ref", xml_dir=xml)
        return r.tell()
    except SkipError:
        return None


offset = anchor.bodies_start
for i in range(12):
    start = offset
    tail_end, art_count, fid = structural_tail_end(start)
    art_end = try_skip_art(tail_end, art_count)
    # find next via sequential: read header at offset after full skip
    r = BinaryReader(BytesIO(payload))
    r.seek(start)
    read_historical_figure_header(r)
    for fd in tail:
        if fd.name == "worldgen_relationships":
            p = r.read_int32()
            if p == 1:
                r.read_bytes(830)
            continue
        skip_field(r, fd, xml_dir=xml, struct_name="historical_figure")
    scan_end = r.tell()
    # min-id scan for next
    from df_save_re.deserializers.historical_figures import _find_next_figure_start

    nxt = _find_next_figure_start(payload, scan_start=scan_end, previous_id=fid, stop_before=anchor.death_events_offset)
    gap = (nxt - tail_end) if nxt else -1
    art_ok = art_end == nxt if (art_end and nxt) else False
    print(
        f"i={i} id={fid} art={art_count} body={nxt-start if nxt else '?'} "
        f"struct_tail={tail_end-start} gap={gap} art_skip_ok={art_ok}"
    )
    if nxt is None:
        break
    offset = nxt
