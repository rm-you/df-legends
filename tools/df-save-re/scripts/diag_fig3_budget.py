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

start = 0x215EB79
end = 0x215EDBF
budget = end - start

r = BinaryReader(BytesIO(p))
r.seek(start)
h = read_historical_figure_header(r)
print(f"id={h.figure_id} budget={budget} header_end={r.tell()-start}")

for name in ["entity_links", "site_links", "histfig_links", "info"]:
    fd = next(f for f in fields if f.name == name)
    o = r.tell()
    if name == "histfig_links":
        print(f"  histfig raw count @ {o:#x} = {struct.unpack_from('<i', p, o)[0]}")
    try:
        skip_field(r, fd, xml_dir=xml, struct_name="historical_figure")
        print(f"  {name:15s} +{r.tell()-o:4d} total={r.tell()-start} remain={end-r.tell()}")
    except Exception as e:
        print(f"  {name} FAIL: {e}")
        break

print("hex at header+150", p[start + 150 : start + 200].hex())
