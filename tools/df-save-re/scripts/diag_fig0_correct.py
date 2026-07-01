#!/usr/bin/env python3
"""Full fig0 walk with corrected artistic_profilest."""
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.body_skipper import SkipError, default_xml_dir, skip_field
from df_save_re.deserializers.historical_figures import (
    read_historical_figure_header,
    try_read_historical_figure_header,
)
from df_save_re.save_preamble import resolve_save_payload
from df_save_re.structures.xml_fields import load_struct, resolve_fields

payload = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
xml = default_xml_dir()
FIG0 = 0x2134DD0
FIG1 = 0x2135412

TAIL = (
    "entity_links", "site_links", "histfig_links", "info", "vague_relationships",
    "worldgen_site", "worldgen_region", "worldgen_layer", "worldgen_genetics",
    "worldgen_relationships", "temp_var", "temp_flag",
    "gen_material_skill_ip_sum", "defensive_skill_ip_sum",
)
tail_fields = [f for f in resolve_fields(load_struct("historical_figure", xml), xml) if f.name in TAIL]


def skip_artistic_save(reader: BinaryReader) -> None:
    """artistic_profilest save layout: events (+3 tail if count>0), vectors, omit static array."""
    ec = reader.read_int32()
    if ec:
        reader.read_bytes(ec * 4)
        reader.read_bytes(3)
    lc = reader.read_int32()
    if lc:
        reader.read_bytes(lc * 4)
    pc = reader.read_int32()
    if pc:
        reader.read_bytes(pc * 4)
    pm = reader.read_int32()
    if pm:
        reader.read_bytes(pm * 2)
    reader.read_bytes(8)  # top_related_heid_num + last_check_index


def skip_info_save(reader: BinaryReader) -> None:
    info_fields = resolve_fields(load_struct("historical_figure_info", xml), xml)
    for fd in info_fields:
        if fd.name == "masterpieces":
            present = reader.read_int32() != 0
            if present:
                skip_artistic_save(reader)
            continue
        skip_field(reader, fd, xml_dir=xml, struct_name="historical_figure_info")


r = BinaryReader(BytesIO(payload))
r.seek(FIG0)
read_historical_figure_header(r)
for fd in tail_fields:
    off = r.tell()
    if fd.name == "info":
        present = r.read_int32() != 0
        if present:
            skip_info_save(r)
    else:
        skip_field(r, fd, xml_dir=xml, struct_name="historical_figure", payload=payload)
    print(f"{fd.name:30s} +{r.tell()-off:5d} -> {r.tell():#x}")

print("end", hex(r.tell()), "fig1 delta", r.tell() - FIG1)
h = try_read_historical_figure_header(r)
print("next", h.figure_id if h else None)
