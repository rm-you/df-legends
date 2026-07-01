#!/usr/bin/env python3
"""Try owned worldgen pointers from 0x21350b0."""
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.body_skipper import SkipError, default_xml_dir, skip_struct
from df_save_re.deserializers.historical_figures import try_read_historical_figure_header
from df_save_re.save_preamble import resolve_save_payload

payload = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
xml = default_xml_dir()
FIG1 = 0x2135412
BASE = 0x21350B0

tests = [
    ("worldgen_genetics", "unit_genes"),
    ("worldgen_relationships", "wg_relationship_quick_infost"),
    ("worldgen_site", "world_site"),
]

for label, st in tests:
    r = BinaryReader(BytesIO(payload))
    r.seek(BASE)
    for _ in range(3):
        r.read_int32()  # skip site, region, layer refs
    if label == "worldgen_genetics":
        pass
    elif label == "worldgen_relationships":
        r.read_int32()  # genetics ref
    present = r.read_int32()
    print(label, "present", present, "at", hex(r.tell() - 4))
    if present:
        try:
            skip_struct(r, st, xml_dir=xml)
            print("  body end", hex(r.tell()))
        except SkipError as e:
            print("  FAIL", e)

# brute: genetics owned from 0x21350c0
r = BinaryReader(BytesIO(payload))
r.seek(0x21350C0)
p = r.read_int32()
print("genetics ref", p)
if p:
    r.seek(0x21350C0)
    r.read_int32()
    try:
        skip_struct(r, "unit_genes", xml_dir=xml)
        print("genes end", hex(r.tell()), "fig1 delta", r.tell() - FIG1)
    except SkipError as e:
        print("genes fail", e)
