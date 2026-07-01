#!/usr/bin/env python3
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.body_skipper import default_xml_dir, skip_field
from df_save_re.save_preamble import resolve_save_payload
from df_save_re.structures.xml_fields import load_struct, resolve_fields

p = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
xml = default_xml_dir()
fields = resolve_fields(load_struct("historical_figure", xml), xml)
r = BinaryReader(BytesIO(p))
r.seek(0x2134E66)
for name in ["entity_links", "site_links", "histfig_links"]:
    fd = next(f for f in fields if f.name == name)
    o = r.tell()
    skip_field(r, fd, xml_dir=xml, struct_name="historical_figure")
    print(name, hex(o), hex(r.tell()), r.tell() - o)
print("expected ed5", hex(0x2134ED5))
