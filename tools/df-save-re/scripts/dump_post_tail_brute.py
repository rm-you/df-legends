#!/usr/bin/env python3
"""Brute size-prefixed blob and other hypotheses on known figure gaps."""
import struct
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.body_skipper import default_xml_dir, skip_field
from df_save_re.deserializers.historical_figures import read_historical_figure_header, try_read_historical_figure_header
from df_save_re.deserializers.save_profiles import read_historical_figure_info_save, read_worldgen_relationships
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
    for fd in resolve_fields(load_struct("historical_figure_info", xml), xml):
        if fd.name == "masterpieces":
            if reader.read_int32() != 0:
                skip_artistic_save(reader)
            continue
        skip_field(reader, fd, xml_dir=xml, struct_name="historical_figure_info", payload=payload)


def tail_end(body_start: int) -> tuple[int, int, int]:
    r = BinaryReader(BytesIO(payload))
    r.seek(body_start)
    h = read_historical_figure_header(r)
    for fd in tail_fields:
        if fd.name == "info":
            if r.read_int32() != 0:
                skip_info_save(r)
        elif fd.name == "worldgen_relationships":
            if r.read_int32() == 1:
                r.read_bytes(830)
        else:
            skip_field(r, fd, xml_dir=xml, struct_name="historical_figure", payload=payload)
    return r.tell(), h.figure_id, h.art_count


CASES = [
    (0x2134DD0, 0x2135412, 1),
    (0x2135412, 0x213B0CF, 2),
    (0x213B0CF, 0x215EB79, 3),
    (0x215EB79, 0x2161BAB, 4),
    (0x2161BAB, 0x21673D6, 5),
    (0x21673D6, 0x217FAEE, 6),
    (0x217FAEE, 0x21EDFF0, 8),
    (0x21EDFF0, 0x21FE774, 9),
]


def lands(pos: int, expect: int) -> bool:
    r = BinaryReader(BytesIO(payload))
    r.seek(pos)
    h = try_read_historical_figure_header(r)
    return h is not None and h.figure_id == expect


def try_size_blob(te: int, target: int, expect: int) -> None:
    gap = target - te
    blob = payload[te:target]
    for lead in range(0, min(gap, 64)):
        if lead + 4 > len(blob):
            break
        sz = struct.unpack_from("<i", blob, lead)[0]
        if sz < 0 or sz > gap:
            continue
        end = te + lead + 4 + sz
        if end == target and lands(end, expect):
            print(f"  MATCH size_blob lead={lead} sz={sz}")
            return
    print("  no size_blob match (lead 0..63)")


def try_art_count_size(te: int, target: int, expect: int, ac: int) -> None:
    gap = target - te
    blob = payload[te:target]
    if len(blob) < 8:
        return
    ac2, sz = struct.unpack_from("<ii", blob, 0)
    if ac2 == ac and 4 + 8 + sz == gap and lands(target, expect):
        print(f"  MATCH art_count+size ac={ac2} sz={sz}")
    else:
        print(f"  art_count+size at 0: ac={ac2} sz={sz} (want ac={ac} gap={gap})")


for body_start, next_start, expect_id in CASES:
    te, fid, ac = tail_end(body_start)
    gap = next_start - te
    print(f"\nid={fid} art={ac} tail={te:#x} next={next_start:#x} gap={gap}")
    if gap == 0:
        continue
    try_size_blob(te, next_start, expect_id)
    try_art_count_size(te, next_start, expect_id, ac)
    # int32 at start
    v0 = struct.unpack_from("<i", payload, te)[0]
    print(f"  first int32={v0} gap-4={gap-4} gap-8={gap-8}")
