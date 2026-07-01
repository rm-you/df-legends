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
r.seek(0x2134ED5)
present = r.read_int32()
print("info present", present, "body @", hex(r.tell()))
info = load_struct("historical_figure_info", xml_dir)
for fd in resolve_fields(info, xml_dir):
    off = r.tell()
    try:
        skip_field(r, fd, xml_dir=xml_dir, struct_name="historical_figure_info")
    except SkipError as e:
        print(f"FAIL {fd.name} @ {off:#x}: {e}")
        break
    print(f"  ok {fd.name:20s} +{r.tell()-off:5d} -> {r.tell():#x}")
else:
    print("info end", hex(r.tell()), "delta to target", r.tell() - TARGET)
