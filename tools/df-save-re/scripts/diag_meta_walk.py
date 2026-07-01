#!/usr/bin/env python3
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.body_skipper import SkipError, default_xml_dir, skip_field
from df_save_re.save_preamble import resolve_save_payload
from df_save_re.structures.xml_fields import load_struct, resolve_fields

payload = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
xml_dir = default_xml_dir()
TARGET = 0x2135412

r = BinaryReader(BytesIO(payload))
r.seek(0x2134ED9)
present = r.read_int32()
print("meta present", present, "body @", hex(r.tell()))
meta = load_struct("metaphysical_profilest", xml_dir)
for fd in resolve_fields(meta, xml_dir):
    off = r.tell()
    try:
        skip_field(r, fd, xml_dir=xml_dir, struct_name="metaphysical_profilest")
    except SkipError as e:
        print(f"FAIL {fd.name} @ {off:#x}: {e}")
        break
    print(f"  ok {fd.name:30s} +{r.tell()-off:5d} -> {r.tell():#x}")
else:
    print("meta end", hex(r.tell()), "delta target", r.tell() - TARGET)
