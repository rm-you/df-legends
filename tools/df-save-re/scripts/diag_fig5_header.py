#!/usr/bin/env python3
from io import BytesIO
from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.language_name import read_language_name
from df_save_re.save_preamble import resolve_save_payload

payload = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
start = 0x2134E47
reader = BinaryReader(BytesIO(payload))
reader.seek(start)
reader.read_int16(); reader.read_int16(); reader.read_int16()
reader.read_uint8()
for _ in range(11):
    reader.read_int32()
name_off = reader.tell()
print("name at", hex(name_off))
name = read_language_name(reader)
print("name consumed", reader.tell() - name_off, "has", name.has_name, "first", name.first_name)
print("after name at", hex(reader.tell()))
for label in ["civ", "pop", "breed", "culture", "family", "e4", "d8", "dc"]:
    print(label, reader.read_int32())
flag_count = reader.read_int32()
print("flag count", flag_count, "at", hex(reader.tell()-4))
