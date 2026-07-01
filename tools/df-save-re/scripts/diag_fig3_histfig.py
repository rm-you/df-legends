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

for label, start, nxt in [("fig3", 0x215EB79, 0x215EDBF)]:
    r = BinaryReader(BytesIO(p))
    r.seek(start)
    read_historical_figure_header(r)
    for name in ["entity_links", "site_links"]:
        fd = next(f for f in fields if f.name == name)
        skip_field(r, fd, xml_dir=xml, struct_name="historical_figure")
    o = r.tell()
    count = struct.unpack_from("<i", p, o)[0]
    print(f"{label} histfig @ {o:#x} count={count}")
    fd = next(f for f in fields if f.name == "histfig_links")
    skip_field(r, fd, xml_dir=xml, struct_name="historical_figure")
    print(f"  end {r.tell():#x} delta {r.tell()-o} nxt gap {nxt-r.tell()}")
    print("  next ints", [struct.unpack_from("<i", p, r.tell() + i * 4)[0] for i in range(4)])
