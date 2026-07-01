#!/usr/bin/env python3
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.body_skipper import SkipError, default_xml_dir, skip_field
from df_save_re.save_preamble import resolve_save_payload
from df_save_re.structures.xml_fields import load_struct, resolve_fields

payload = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
xml = default_xml_dir()
INFO_START = 0x215F6D6

info_fields = resolve_fields(load_struct("historical_figure_info", xml), xml)
r = BinaryReader(BytesIO(payload))
r.seek(INFO_START)
present = r.read_int32()
print(f"info present={present} at {INFO_START:#x}")
if not present:
    raise SystemExit

for fd in info_fields:
    off = r.tell()
    try:
        skip_field(r, fd, xml_dir=xml, struct_name="historical_figure_info")
        print(f"  {fd.name:25s} +{r.tell()-off:6d} -> {r.tell():#x}")
    except SkipError as e:
        print(f"  {fd.name:25s} FAIL at {off:#x}: {e}")
        break
