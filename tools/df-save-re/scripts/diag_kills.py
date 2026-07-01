#!/usr/bin/env python3
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.body_skipper import SkipError, default_xml_dir, skip_field, skip_struct
from df_save_re.save_preamble import resolve_save_payload
from df_save_re.structures.xml_fields import load_struct, resolve_fields

payload = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
xml_dir = default_xml_dir()
TARGET = 0x2135412

r = BinaryReader(BytesIO(payload))
r.seek(0x2134F91)
present = r.read_int32()
print("kills present", present, "body", hex(r.tell()))
if present:
    for fd in resolve_fields(load_struct("historical_kills", xml_dir), xml_dir):
        off = r.tell()
        try:
            skip_field(r, fd, xml_dir=xml_dir, struct_name="historical_kills")
            print(f"  ok {fd.name} +{r.tell()-off} -> {r.tell():#x}")
        except SkipError as e:
            print(f"  FAIL {fd.name} @ {off:#x}: {e}")
            break
print("delta target", r.tell() - TARGET)
