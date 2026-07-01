#!/usr/bin/env python3
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.body_skipper import default_xml_dir, skip_field
from df_save_re.deserializers.historical_figures import (
    _quick_histfig_header_check,
    read_historical_figure_header,
    try_read_historical_figure_header,
)
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

CASES = [
    (0x2134DD0, 1, 0x2135412),
    (0x2135412, 2, 0x213B0CF),
    (0x213B0CF, 3, 0x215EB79),
    (0x215EB79, 4, 0x2161BAB),
    (0x2161BAB, 5, 0x21673D6),
]


def figure_tail_end(start):
    r = BinaryReader(BytesIO(payload))
    r.seek(start)
    h = read_historical_figure_header(r)
    for fd in tail:
        if fd.name == "worldgen_relationships":
            p = r.read_int32()
            if p:
                r.read_bytes(830)
            continue
        skip_field(r, fd, xml_dir=xml, struct_name="historical_figure")
    return r.tell(), h.figure_id


def earliest_next(tail_pos, prev_id, stop=0x226009C):
    for cand in range(tail_pos, min(tail_pos + 500_000, stop), 2):
        if not _quick_histfig_header_check(payload, cand):
            continue
        r = BinaryReader(BytesIO(payload))
        r.seek(cand)
        h = try_read_historical_figure_header(r)
        if h is None or h.figure_id <= prev_id:
            continue
        return cand, h.figure_id
    return None, None


for start, exp_id, exp_off in CASES:
    tail_pos, prev = figure_tail_end(start)
    got, gid = earliest_next(tail_pos, prev)
    gs = f"{got:#x}" if got else "None"
    print(
        f"prev={prev} tail={tail_pos:#x} gap={(got or tail_pos) - tail_pos} "
        f"got id={gid}@{gs} exp id={exp_id}@{exp_off:#x} "
        f"{'OK' if got == exp_off else 'BAD'}"
    )
