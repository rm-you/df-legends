#!/usr/bin/env python3
"""Try parsing gap as art_image vector or struct."""
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.body_skipper import SkipError, default_xml_dir, skip_struct
from df_save_re.save_preamble import resolve_save_payload

payload = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
GAP = 0x2134FFD
FIG1 = 0x2135412

r = BinaryReader(BytesIO(payload))
r.seek(GAP)
xml = default_xml_dir()

# try int32 count + art_image bodies
count = r.read_int32()
print("int32 count at gap", count)
r.seek(GAP)
try:
    from df_save_re.deserializers.body_skipper import skip_field
    from df_save_re.structures.xml_fields import FieldDef

    # stl-vector art_image
    fd = FieldDef(name="art", kind="stl-vector", pointer_type="art_image")
    skip_field(r, fd, xml_dir=xml, struct_name="historical_figure")
    print("art_image vector skip ->", hex(r.tell()), "delta fig1", r.tell() - FIG1)
except SkipError as e:
    print("art_image vector fail:", e)

# try single art_image inline
for start in [GAP, GAP + 4, GAP + 8]:
    r2 = BinaryReader(BytesIO(payload))
    r2.seek(start)
    try:
        skip_struct(r2, "art_image", xml_dir=xml)
        print(f"art_image struct from {start:#x} -> {r2.tell():#x} delta fig1 {r2.tell()-FIG1}")
    except SkipError as e:
        print(f"art_image from {start:#x}: {e}")
