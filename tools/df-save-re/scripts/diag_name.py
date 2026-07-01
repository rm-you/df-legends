#!/usr/bin/env python3
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.language_name import read_language_name
from df_save_re.save_preamble import resolve_save_payload

p = resolve_save_payload("tests/fixtures/small-retired/world.dat")
r = BinaryReader(BytesIO(p.payload))
r.seek(0x2134DD0)
print("start", hex(r.tell()))
r.read_int16(); print("prof", hex(r.tell()))
r.read_int16(); print("race", hex(r.tell()))
r.read_int16(); print("caste", hex(r.tell()))
r.read_int16(); print("sex", hex(r.tell()))
r.read_int32(); print("orient", hex(r.tell()))
for _ in range(12):
    r.read_int32()
print("pre-name", hex(r.tell()))
name = read_language_name(r)
print("post-name", hex(r.tell()), "name_bytes", name.bytes_consumed)
for label in ["civ", "pop", "breed", "cult", "fam", "flags_count"]:
    if label == "flags_count":
        c = r.read_int32()
        print(label, c, hex(r.tell()))
        r.read_bytes(c * 4)
        print("post-flags", hex(r.tell()))
    else:
        r.read_int32()
        print(label, hex(r.tell()))
r.read_int32(); print("unit", hex(r.tell()))
r.read_int32(); print("nemesis", hex(r.tell()))
r.read_int32(); print("id", hex(r.tell()))
r.read_int32(); print("art", hex(r.tell()))
