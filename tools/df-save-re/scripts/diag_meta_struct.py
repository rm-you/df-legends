#!/usr/bin/env python3
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.body_skipper import SkipError, default_xml_dir, skip_struct
from df_save_re.save_preamble import resolve_save_payload

payload = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
xml_dir = default_xml_dir()
TARGET = 0x2135412

r = BinaryReader(BytesIO(payload))
r.seek(0x2134EDD)
try:
    n = skip_struct(r, "metaphysical_profilest", xml_dir=xml_dir)
    print("meta bytes", n, "end", hex(r.tell()), "delta", r.tell() - TARGET)
except SkipError as e:
    print("FAIL", e, "at", hex(r.tell()))
