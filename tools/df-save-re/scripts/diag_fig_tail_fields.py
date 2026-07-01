#!/usr/bin/env python3
"""Field-by-field tail read for a single figure."""
import sys
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.body_skipper import SkipError, default_xml_dir
from df_save_re.deserializers.historical_figures import read_historical_figure_header
from df_save_re.deserializers.record_reader import read_field
from df_save_re.deserializers.save_profiles import HISTFIG_TAIL_FIELDS, get_profile
from df_save_re.save_preamble import resolve_save_payload
from df_save_re.structures.xml_fields import load_struct, resolve_fields

START = int(sys.argv[1], 0) if len(sys.argv) > 1 else 0x213B0CF
payload = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
xml = default_xml_dir()
struct = load_struct("historical_figure", xml)
tail = [f for f in resolve_fields(struct, xml) if f.name in HISTFIG_TAIL_FIELDS]

r = BinaryReader(BytesIO(payload))
r.seek(START)
h = read_historical_figure_header(r)
print(f"fig id={h.figure_id} art={h.art_count} header_end=0x{r.tell():x}")

for fd in tail:
    off = r.tell()
    try:
        read_field(r, fd, xml_dir=xml, struct_name="historical_figure", payload=payload)
    except SkipError as e:
        print(f"FAIL {fd.name:30s} @ 0x{off:x}: {e}")
        print(f"  bytes: {payload[off:off+32].hex()}")
        break
    print(f"  {fd.name:30s} +{r.tell()-off:5d} -> 0x{r.tell():x}")
else:
    print(f"tail_end=0x{r.tell():x}")
