#!/usr/bin/env python3
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.historical_figures import read_historical_figure_header
from df_save_re.deserializers.record_reader import read_field
from df_save_re.deserializers.save_profiles import read_historical_figure_info_save
from df_save_re.save_preamble import resolve_save_payload
from df_save_re.structures.xml_fields import FieldDef, load_struct, resolve_fields
from df_save_re.deserializers.body_skipper import default_xml_dir

payload = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
xml = default_xml_dir()
FIG0 = 0x2134DD0
WG = 0x21350AC

r = BinaryReader(BytesIO(payload))
r.seek(FIG0)
read_historical_figure_header(r)
for fd in resolve_fields(load_struct("historical_figure", xml), xml):
    if fd.name in ("entity_links", "site_links", "histfig_links"):
        read_field(r, fd, xml_dir=xml, struct_name="historical_figure", payload=payload)

info_start = r.tell()
custom = read_historical_figure_info_save(r)
print("custom info bytes", r.tell() - info_start, "end", hex(r.tell()), "delta wg", WG - r.tell())
print("wg byte at target", int.from_bytes(payload[WG:WG+4], "little"))

r2 = BinaryReader(BytesIO(payload))
r2.seek(info_start)
fd = FieldDef(name="info", kind="pointer", type_name="historical_figure_info")
read_field(r2, fd, xml_dir=xml, struct_name="historical_figure", payload=payload)
print("profile info bytes", r2.tell() - info_start, "end", hex(r2.tell()))

# Bypass profile: owned pointer + raw read_struct (pre-custom behaviour)
from df_save_re.deserializers.record_reader import read_struct

r3 = BinaryReader(BytesIO(payload))
r3.seek(info_start)
present = r3.read_int32()
print("info present flag", present)
body, n = read_struct(r3, "historical_figure_info", xml_dir=xml)
print("raw read_struct info", n, "end", hex(r3.tell()), "total from info_start", r3.tell() - info_start)
