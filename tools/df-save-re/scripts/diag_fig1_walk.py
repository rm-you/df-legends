#!/usr/bin/env python3
"""Walk fig1 link vectors manually to find site/histfig boundaries."""

from __future__ import annotations

from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.body_skipper import SkipError, default_xml_dir, skip_struct
from df_save_re.deserializers.historical_figures import read_historical_figure_header
from df_save_re.save_preamble import resolve_save_payload
from df_save_re.structures.polymorph import build_registry
import struct

payload = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
xml_dir = default_xml_dir()
r = BinaryReader(BytesIO(payload))
r.seek(0x2135412)
read_historical_figure_header(r)
start = r.tell()
print(f"header end {start:#x}")

# entity_links: count + int32 flags + bodies
count = r.read_int32()
print(f"entity count={count} @ {r.tell()-4:#x}")
flags = [r.read_int32() for _ in range(count)]
print("entity flags", flags)
for i, present in enumerate(flags):
    if not present:
        continue
    body_start = r.tell()
    tag = r.read_int16()
    reg = build_registry("histfig_entity_link", xml_dir)
    sub = reg.subclass_for(tag) if reg else None
    print(f"  body{i} tag={tag} sub={sub} @ {body_start:#x}")
    r.seek(body_start)
    r.read_int16()  # re-read tag inside skip
    skip_struct(r, sub, xml_dir=xml_dir)
    print(f"    -> {r.tell():#x} (+{r.tell()-body_start})")

site_off = r.tell()
site_count = struct.unpack_from("<i", payload, site_off)[0]
print(f"\nafter entity @ {site_off:#x}, site count candidate={site_count}")

# try skip site + histfig from here using body_skipper field by field
from df_save_re.structures.xml_fields import load_struct, resolve_fields
from df_save_re.deserializers.body_skipper import skip_field

struct = load_struct("historical_figure", xml_dir)
fields = resolve_fields(struct, xml_dir)
# start from site_links field
for fd in fields:
    if fd.name in ("entity_links",):
        continue
    if fd.name == "site_links" and r.tell() != site_off:
        r.seek(site_off)
    off = r.tell()
    try:
        skip_field(r, fd, xml_dir=xml_dir, struct_name="historical_figure")
        print(f"ok {fd.name} @ {off:#x} +{r.tell()-off} -> {r.tell():#x}")
    except SkipError as e:
        print(f"FAIL {fd.name} @ {off:#x}: {e}")
        break

# show next int32s
for i in range(8):
    o = r.tell() + i * 4
    print(f"  {o:#x}: {struct.unpack_from('<i', payload, o)[0]}")
