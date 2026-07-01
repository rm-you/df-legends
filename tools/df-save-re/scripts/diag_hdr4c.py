#!/usr/bin/env python3
import struct
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.historical_figures import read_language_name
from df_save_re.save_preamble import resolve_save_payload

p = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
off = 0x215EDBF
r = BinaryReader(BytesIO(p))
r.seek(off)
r.read_int16(); r.read_int16(); r.read_int16(); r.read_int16()  # prof race caste sex
r.read_int32()  # orient
for _ in range(10):
    r.read_int32()
name = read_language_name(r)
print("after name", hex(r.tell()), "words", len(name.words))
for field in ("civ_id", "population_id", "breed_id", "cultural_identity", "family_head_id"):
    v = r.read_int32()
    print(field, v, hex(r.tell()))
count = r.read_int32()
print("flag count", count, hex(r.tell()))
if 0 <= count <= 20:
    flags = [r.read_int32() for _ in range(count)]
    print("flags", flags)
print("unit", r.read_int32(), "nem", r.read_int32(), "fid", r.read_int32(), "art", r.read_int32())
