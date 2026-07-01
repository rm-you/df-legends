#!/usr/bin/env python3
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.body_skipper import SkipError, default_xml_dir, skip_field, skip_struct
from df_save_re.deserializers.historical_figures import read_historical_figure_header, try_read_historical_figure_header
from df_save_re.save_preamble import resolve_save_payload
from df_save_re.structures.xml_fields import FieldDef

payload = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
xml = default_xml_dir()
FIG1 = 0x2135412
FIG2 = 0x213B0CF
TAIL_END = 0x213592D

# try pointer vector of art_image with count from header art_count
r = BinaryReader(BytesIO(payload))
r.seek(FIG1)
h = read_historical_figure_header(r)
r.seek(TAIL_END)
fd = FieldDef(name="art", kind="stl-vector", pointer_type="art_image")
try:
    skip_field(r, fd, xml_dir=xml, struct_name="historical_figure")
    print("art_image ptr vector", r.tell(), hex(r.tell()), "delta", r.tell() - FIG2)
    nxt = try_read_historical_figure_header(r)
    print("next", nxt.figure_id if nxt else None)
except SkipError as e:
    print("FAIL", e)

# try count * art_image_ref inline
r2 = BinaryReader(BytesIO(payload))
r2.seek(TAIL_END)
try:
    for _ in range(h.art_count):
        skip_struct(r2, "art_image_ref", xml_dir=xml)
    print("art_image_ref x", h.art_count, r2.tell(), hex(r2.tell()), "delta", r2.tell() - FIG2)
except SkipError as e:
    print("refs FAIL", e)

# try owned art_image full bodies
r3 = BinaryReader(BytesIO(payload))
r3.seek(TAIL_END)
try:
    for _ in range(h.art_count):
        skip_struct(r3, "art_image", xml_dir=xml)
    print("art_image x", h.art_count, r3.tell(), hex(r3.tell()), "delta", r3.tell() - FIG2)
except SkipError as e:
    print("owned FAIL", e)
