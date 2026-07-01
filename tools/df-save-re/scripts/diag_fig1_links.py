#!/usr/bin/env python3
import struct
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.body_skipper import default_xml_dir, skip_struct
from df_save_re.deserializers.historical_figures import read_historical_figure_header
from df_save_re.save_preamble import resolve_save_payload
from df_save_re.structures.polymorph import build_registry

payload = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
xml_dir = default_xml_dir()
r = BinaryReader(BytesIO(payload))
r.seek(0x2135412)
read_historical_figure_header(r)
print("header end", hex(r.tell()))

# entity
count = r.read_int32()
print("entity count", count)
flags = [r.read_int32() for _ in range(count)]
print("entity flags", flags)
reg_e = build_registry("histfig_entity_link", xml_dir)
for i, f in enumerate(flags):
    if not f:
        continue
    tag = r.read_int16()
    sub = reg_e.subclass_for(tag) if reg_e else None
    print(f" entity{i} tag={tag} sub={sub} @ {r.tell()-2:#x}")
    r.seek(r.tell() - 2)
    r.read_int16()
    skip_struct(r, sub or "histfig_entity_link", xml_dir=xml_dir)
print("after entity", hex(r.tell()))

# site
count = r.read_int32()
print("site count", count, "@", hex(r.tell()-4))
flags = [r.read_int32() for _ in range(count)]
print("site flags", flags)
reg_s = build_registry("histfig_site_link", xml_dir)
for i, f in enumerate(flags):
    if not f:
        continue
    tag = r.read_int16()
    sub = reg_s.subclass_for(tag) if reg_s else None
    print(f" site{i} tag={tag} sub={sub} @ {r.tell()-2:#x}")
    r.seek(r.tell() - 2)
    r.read_int16()
    skip_struct(r, sub or "histfig_site_link", xml_dir=xml_dir)
print("after site", hex(r.tell()))

# histfig
count = r.read_int32()
print("hf count", count)
flags = [r.read_int32() for _ in range(count)]
print("hf flags", flags[:10], "..." if len(flags) > 10 else "")
reg_h = build_registry("histfig_hf_link", xml_dir)
for i, f in enumerate(flags):
    if not f:
        continue
    tag = r.read_int16()
    sub = reg_h.subclass_for(tag) if reg_h else None
    start = r.tell() - 2
    r.seek(start)
    r.read_int16()
    skip_struct(r, sub or "histfig_hf_link", xml_dir=xml_dir)
    print(f" hf{i} tag={tag} sub={sub} bytes={r.tell()-start-2}")
print("after hf", hex(r.tell()))
