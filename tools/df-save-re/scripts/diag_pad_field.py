#!/usr/bin/env python3
"""Brute: which tail field under-read explains fig0->fig1 gap?"""
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.body_skipper import SkipError, default_xml_dir, skip_field
from df_save_re.deserializers.historical_figures import try_read_historical_figure_header
from df_save_re.save_preamble import resolve_save_payload
from df_save_re.structures.xml_fields import load_struct, resolve_fields

payload = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
xml = default_xml_dir()
FIG0 = 0x2134DD0
FIG1 = 0x2135412
GAP = FIG1 - 0x2134FFD  # bytes missing after current tail skip

struct = load_struct("historical_figure", xml)
header_names = {
    "profession", "race", "caste", "sex", "orientation_flags",
    "appeared_year", "born_year", "born_seconds", "curse_year", "curse_seconds",
    "birth_year_bias", "birth_time_bias", "old_year", "old_seconds",
    "died_year", "died_seconds", "name", "civ_id", "population_id", "breed_id",
    "cultural_identity", "family_head_id", "flagarray", "unit_id", "nemesis_id",
    "id", "art_count",
}
body_fields = [fd for fd in resolve_fields(struct, xml) if fd.name not in header_names]

r = BinaryReader(BytesIO(payload))
r.seek(FIG0)
try_read_historical_figure_header(r)
end_without_pad = r.tell()
for fd in body_fields:
    skip_field(r, fd, xml_dir=xml, struct_name="historical_figure")
end_without_pad = r.tell()
print("current end", hex(end_without_pad), "need pad", GAP)

# try adding pad after each field
for i, fd in enumerate(body_fields):
    r2 = BinaryReader(BytesIO(payload))
    r2.seek(FIG0)
    try_read_historical_figure_header(r2)
    for j, f2 in enumerate(body_fields):
        skip_field(r2, f2, xml_dir=xml, struct_name="historical_figure")
        if j == i:
            r2.read_bytes(GAP)
    if r2.tell() == FIG1:
        probe = try_read_historical_figure_header(r2)
        if probe and probe.figure_id == 1:
            print(f"PAD after {fd.name} fixes landing (id={probe.figure_id})")
