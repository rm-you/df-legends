#!/usr/bin/env python3
"""Probe art trailer after fig1 tail."""
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.body_skipper import SkipError, default_xml_dir, skip_field, skip_historical_figure_body, skip_struct
from df_save_re.deserializers.historical_figures import read_historical_figure_header, try_read_historical_figure_header
from df_save_re.save_preamble import resolve_save_payload
from df_save_re.structures.xml_fields import load_struct, resolve_fields

payload = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
xml = default_xml_dir()
FIG1 = 0x2135412
FIG2 = 0x213B0CF

TAIL = (
    "entity_links", "site_links", "histfig_links", "info", "vague_relationships",
    "worldgen_site", "worldgen_region", "worldgen_layer", "worldgen_genetics",
    "worldgen_relationships", "temp_var", "temp_flag",
    "gen_material_skill_ip_sum", "defensive_skill_ip_sum",
)
tail = [f for f in resolve_fields(load_struct("historical_figure", xml), xml) if f.name in TAIL]

r = BinaryReader(BytesIO(payload))
r.seek(FIG1)
h = read_historical_figure_header(r)
print("fig1 art_count", h.art_count)
for fd in tail:
    if fd.name == "worldgen_relationships":
        p = r.read_int32()
        if p:
            r.read_bytes(830)
        continue
    skip_field(r, fd, xml_dir=xml, struct_name="historical_figure")
tail_end = r.tell()
print("tail_end", hex(tail_end), "fig2 delta", tail_end - FIG2)

for name in ("art_image_ref", "art_image"):
    r2 = BinaryReader(BytesIO(payload))
    r2.seek(tail_end)
    try:
        for i in range(h.art_count):
            skip_struct(r2, name, xml_dir=xml)
        print(f"{name} x{h.art_count} -> {r2.tell():#x} delta fig2 {r2.tell()-FIG2}")
        nxt = try_read_historical_figure_header(r2)
        print("  next header", nxt.figure_id if nxt else None)
    except SkipError as e:
        print(f"{name} FAIL: {e}")

# full skip_historical_figure_body
r3 = BinaryReader(BytesIO(payload))
r3.seek(FIG1)
skip_historical_figure_body(r3, payload, xml_dir=xml)
print("skip_historical_figure_body end", hex(r3.tell()), "fig2 delta", r3.tell() - FIG2)
