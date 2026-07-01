#!/usr/bin/env python3
"""Brute art section formats after fig1 tail."""
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.body_skipper import SkipError, default_xml_dir, skip_field
from df_save_re.deserializers.historical_figures import try_read_historical_figure_header
from df_save_re.save_preamble import resolve_save_payload
from df_save_re.structures.xml_fields import FieldDef

payload = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
xml = default_xml_dir()
START = 0x213592D
FIG2 = 0x213B0CF

for extra in range(0, 25000, 2):
    r = BinaryReader(BytesIO(payload))
    r.seek(START + extra)
    h = try_read_historical_figure_header(r, expect_id=2)
    if h and h.figure_id == 2:
        print("fig2 header at", hex(START + extra), "extra", extra)
        break
else:
    print("no fig2 found in range")

# try pointer vector art_image at START
for count in [1, 2, 0]:
    r = BinaryReader(BytesIO(payload))
    r.seek(START)
    if r.read_int32() != count:
        continue
    fd = FieldDef(name="art", kind="stl-vector", pointer_type="art_image")
    try:
        skip_field(r, fd, xml_dir=xml, struct_name="historical_figure")
        print(f"ptr vector count={count} end {r.tell():#x} delta {r.tell()-FIG2}")
    except SkipError as e:
        print(f"ptr vector count={count} fail {e}")
