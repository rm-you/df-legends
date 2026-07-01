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

KNOWN = [
    (0x2134DD0, 0x2135412),
    (0x2135412, 0x213B0CF),
    (0x213B0CF, 0x215EB79),
    (0x215EB79, 0x2161BAB),
    (0x2161BAB, 0x21673D6),
]


def structural_tail(start: int) -> tuple[int, int, int]:
    r = BinaryReader(BytesIO(payload))
    r.seek(start)
    h = read_historical_figure_header(r)
    for fd in tail:
        if fd.name == "worldgen_relationships":
            present = r.read_int32()
            if present:
                r.read_bytes(830)
            continue
        skip_field(r, fd, xml_dir=xml, struct_name="historical_figure")
    return r.tell(), h.figure_id, h.art_count


def max_offset_header(scan_start: int, scan_end: int) -> int | None:
    best = None
    for cand in range(scan_start, scan_end, 2):
        if not _quick_histfig_header_check(payload, cand):
            continue
        r = BinaryReader(BytesIO(payload))
        r.seek(cand)
        if try_read_historical_figure_header(r) is None:
            continue
        best = cand
    return best


for start, expected in KNOWN:
    tail_end, fid, art = structural_tail(start)
    if art == 0:
        got = tail_end
    else:
        window = max(512, art * 30_000 + 512)
        end = min(tail_end + window, len(payload))
        got = max_offset_header(tail_end, end)
    gs = f"{got:#x}" if got else "None"
    print(
        f"id={fid} art={art} tail={tail_end:#x} window={window if art else 0} "
        f"got={gs} exp={expected:#x} {'OK' if got == expected else 'BAD'}"
    )
