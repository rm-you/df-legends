#!/usr/bin/env python3
import struct
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.body_skipper import SkipError, default_xml_dir, skip_field
from df_save_re.deserializers.historical_figures import read_historical_figure_header
from df_save_re.save_preamble import resolve_save_payload
from df_save_re.structures.xml_fields import FieldDef, load_struct, resolve_fields

payload = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
xml = default_xml_dir()

for label, start in [("fig0", 0x2134DD0), ("fig1", 0x2135412), ("fig3", 0x215EB79)]:
    r = BinaryReader(BytesIO(payload))
    r.seek(start)
    read_historical_figure_header(r)
    skip_field(r, FieldDef(name="e", kind="stl-vector", pointer_type="histfig_entity_link"), xml_dir=xml, struct_name="historical_figure")
    skip_field(r, FieldDef(name="s", kind="stl-vector", pointer_type="histfig_site_link"), xml_dir=xml, struct_name="historical_figure")
    hf_start = r.tell()
    count = struct.unpack_from("<i", payload, hf_start)[0]
    print(f"\n{label} histfig_links @ {hf_start:#x} count={count}")
    r2 = BinaryReader(BytesIO(payload))
    r2.seek(hf_start)
    skip_field(r2, FieldDef(name="histfig_links", kind="stl-vector", pointer_type="histfig_hf_link"), xml_dir=xml, struct_name="historical_figure")
    hf_end = r2.tell()
    print(f"  skip ends {hf_end:#x} +{hf_end-hf_start}")
    # probe next int32s
    for i in range(4):
        v = struct.unpack_from("<i", payload, hf_end + i * 4)[0]
        print(f"  next[{i}] @ {hf_end + i*4:#x} = {v}")
