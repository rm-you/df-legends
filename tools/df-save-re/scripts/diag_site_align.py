#!/usr/bin/env python3
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.body_skipper import SkipError, default_xml_dir, skip_field, skip_historical_figure_body
from df_save_re.deserializers.historical_figures import try_read_historical_figure_header
from df_save_re.save_preamble import resolve_save_payload
from df_save_re.structures.xml_fields import FieldDef

p = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
xml = default_xml_dir()

FIG3 = 0x215EB79
FIG4 = 0x215EDBF

for pad in range(0, 8):
    r = BinaryReader(BytesIO(p))
    r.seek(0x215EC13)  # after entity
    skip_field(r, FieldDef(name="s", kind="stl-vector", pointer_type="histfig_site_link"), xml_dir=xml, struct_name="historical_figure")
    r.read_bytes(pad)
    fd = FieldDef(name="histfig_links", kind="stl-vector", pointer_type="histfig_hf_link")
    try:
        skip_field(r, fd, xml_dir=xml, struct_name="historical_figure")
    except SkipError as e:
        print(f"pad={pad} histfig FAIL: {e}")
        continue
    print(f"pad={pad} after histfig {r.tell():#x} gap to fig4 {FIG4-r.tell()}")

# full body skip fig3 with site tail fix?
print("\nTry align after site_links in body skipper...")
