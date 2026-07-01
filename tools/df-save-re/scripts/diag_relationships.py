#!/usr/bin/env python3
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.body_skipper import default_xml_dir, skip_field
from df_save_re.deserializers.historical_figures import read_historical_figure_header, try_read_historical_figure_header
from df_save_re.save_preamble import resolve_save_payload
from df_save_re.structures.xml_fields import load_struct, resolve_fields

payload = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
xml = default_xml_dir()
FIG1 = 0x2135412

info_fields = resolve_fields(load_struct("historical_figure_info", xml), xml)

r = BinaryReader(BytesIO(payload))
r.seek(0x2134ED5)
assert r.read_int32() == 1
for fd in info_fields:
    if fd.name == "relationships":
        off = r.tell()
        present = r.read_int32()
        print(f"relationships present={present} @ {off:#x}")
        if present:
            r.seek(off)
            r.read_int32()
            from df_save_re.deserializers.body_skipper import skip_struct
            skip_struct(r, "historical_figure_relationships", xml_dir=xml)
            print("after relationships body", hex(r.tell()), "delta fig1", r.tell() - FIG1)
        break
    skip_field(r, fd, xml_dir=xml, struct_name="historical_figure_info")
