#!/usr/bin/env python3
import struct
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.body_skipper import SkipError, default_xml_dir, skip_field
from df_save_re.deserializers.historical_figures import read_historical_figure_header
from df_save_re.save_preamble import resolve_save_payload
from df_save_re.structures.xml_fields import load_struct, resolve_fields

p = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
xml = default_xml_dir()
tail = [f for f in resolve_fields(load_struct("historical_figure", xml), xml) if f.name in (
    "entity_links", "site_links", "histfig_links", "info", "vague_relationships",
    "worldgen_site", "worldgen_region", "worldgen_layer", "worldgen_genetics",
    "worldgen_relationships", "temp_var", "temp_flag", "gen_material_skill_ip_sum", "defensive_skill_ip_sum",
)]


def align_histfig_start(reader: BinaryReader, payload: bytes, *, max_pad: int = 4) -> None:
    start = reader.tell()
    for _ in range(max_pad):
        if reader.tell() + 4 > len(payload):
            break
        count = struct.unpack_from("<i", payload, reader.tell())[0]
        if 0 <= count <= 500:
            return
        reader.read_uint8()
    reader.seek(start)


def walk(start: int, target: int) -> int | None:
    r = BinaryReader(BytesIO(p))
    r.seek(start)
    read_historical_figure_header(r)
    for fd in tail:
        if fd.name == "histfig_links":
            align_histfig_start(r, p)
        if fd.name == "worldgen_relationships":
            present = r.read_int32()
            if present == 1:
                r.read_bytes(830)
            continue
        try:
            skip_field(r, fd, xml_dir=xml, struct_name="historical_figure")
        except SkipError:
            return None
    return r.tell()


for label, start, target in [
    ("fig0", 0x2134DD0, 0x2135412),
    ("fig1", 0x2135412, 0x213B0CF),
    ("fig3", 0x215EB79, 0x215EDBF),
    ("fig4", 0x215EDBF, 0x21673D6),
]:
    end = walk(start, target)
    if end is None:
        print(f"{label} FAIL")
    else:
        print(f"{label} end={end:#x} target={target:#x} ok={end == target}")
