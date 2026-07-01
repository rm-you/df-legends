#!/usr/bin/env python3
import struct
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.body_skipper import default_xml_dir, skip_field
from df_save_re.deserializers.historical_figures import read_historical_figure_header
from df_save_re.save_preamble import resolve_save_payload
from df_save_re.structures.xml_fields import load_struct, resolve_fields

p = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
xml = default_xml_dir()
fields = resolve_fields(load_struct("historical_figure", xml), xml)

for label, start in [("fig0", 0x2134DD0), ("fig1", 0x2135412), ("fig3", 0x215EB79)]:
    r = BinaryReader(BytesIO(p))
    r.seek(start)
    read_historical_figure_header(r)
    for name in ["entity_links", "site_links"]:
        o = r.tell()
        fd = next(f for f in fields if f.name == name)
        skip_field(r, fd, xml_dir=xml, struct_name="historical_figure")
        count = struct.unpack_from("<i", p, o)[0]
        print(f"{label} {name} count={count} end={r.tell():#x} align={r.tell()%4}")
