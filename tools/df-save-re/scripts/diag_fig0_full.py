#!/usr/bin/env python3
"""Full fig0 body field walk from header end to fig1 anchor."""
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.body_skipper import SkipError, default_xml_dir, skip_field
from df_save_re.deserializers.historical_figures import try_read_historical_figure_header
from df_save_re.save_preamble import resolve_save_payload
from df_save_re.structures.xml_fields import load_struct, resolve_fields

payload = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
xml_dir = default_xml_dir()
FIG0 = 0x2134DD0
FIG1 = 0x2135412

struct = load_struct("historical_figure", xml_dir)
# skip fields already consumed by header reader
header_field_names = {
    "profession", "race", "caste", "sex", "orientation_flags",
    "appeared_year", "born_year", "born_seconds", "curse_year", "curse_seconds",
    "birth_year_bias", "birth_time_bias", "old_year", "old_seconds",
    "died_year", "died_seconds", "name", "civ_id", "population_id", "breed_id",
    "cultural_identity", "family_head_id", "flagarray", "unit_id", "nemesis_id",
    "id", "art_count",
}
body_fields = [fd for fd in resolve_fields(struct, xml_dir) if fd.name not in header_field_names]

r = BinaryReader(BytesIO(payload))
r.seek(FIG0)
hdr = try_read_historical_figure_header(r)
print(f"fig0 id={hdr.figure_id} header_end={r.tell():#x} art={hdr.art_count}")
for fd in body_fields:
    off = r.tell()
    try:
        skip_field(r, fd, xml_dir=xml_dir, struct_name="historical_figure")
    except SkipError as e:
        print(f"FAIL {fd.name} @ {off:#x}: {e}")
        break
    print(f"  ok {fd.name:30s} +{r.tell()-off:5d} -> {r.tell():#x}")
else:
    print("body end", hex(r.tell()), "fig1", hex(FIG1), "delta", r.tell() - FIG1)
    nxt = try_read_historical_figure_header(r)
    if nxt:
        print(f"next id={nxt.figure_id} art={nxt.art_count} @ {r.tell():#x}")
