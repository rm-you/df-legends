#!/usr/bin/env python3
"""Brute what fills 830-byte tail gap before fig1."""
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.body_skipper import SkipError, default_xml_dir, skip_field, skip_struct
from df_save_re.deserializers.historical_figures import try_read_historical_figure_header
from df_save_re.save_preamble import resolve_save_payload
from df_save_re.structures.xml_fields import FieldDef, load_struct, resolve_fields

payload = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
xml = default_xml_dir()
START = 0x21350D4
FIG1 = 0x2135412

candidates = [
    "art_image", "art_image_ref", "relationship_quick_infost", "wg_relationship_quick_infost",
    "unit_genes", "historical_figure_relationships", "state_profilest",
]

for name in candidates:
    r = BinaryReader(BytesIO(payload))
    r.seek(START)
    try:
        skip_struct(r, name, xml_dir=xml)
    except SkipError:
        continue
    if r.tell() == FIG1:
        print("single", name, "lands fig1")

# try vague owned body
r = BinaryReader(BytesIO(payload))
r.seek(START)
present = r.read_int32()
print("vague present at gap start", present)
if present:
    skip_struct(r, "relationship_quick_infost", xml_dir=xml)
    print("after vague body", hex(r.tell()), "delta", r.tell() - FIG1)

# art_count trailer: int32 count + count * art_image_ref
for ac in range(0, 50):
    r = BinaryReader(BytesIO(payload))
    r.seek(START)
    if r.read_int32() != ac:
        continue
    ok = True
    for _ in range(ac):
        try:
            skip_struct(r, "art_image_ref", xml_dir=xml)
        except SkipError:
            ok = False
            break
    if ok and r.tell() == FIG1:
        print("art_count trailer", ac, "refs lands fig1")

# stl-vector art_image pointer bodies
for ac in range(0, 50):
    r = BinaryReader(BytesIO(payload))
    r.seek(START)
    fd = FieldDef(name="art", kind="stl-vector", pointer_type="art_image")
    try:
        skip_field(r, fd, xml_dir=xml, struct_name="historical_figure")
    except SkipError:
        continue
    if r.read_int32() if False else r.tell() == FIG1:
        pass
    if r.tell() == FIG1:
        print("art_image ptr vector lands fig1 with count", ac)
