#!/usr/bin/env python3
import struct
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.primitives import DfString
from df_save_re.save_preamble import resolve_save_payload

p = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
off = 0x215EDBF
r = BinaryReader(BytesIO(p))
r.seek(off + 56)
print("at name", hex(r.tell()))
for label in ("first", "nick"):
    ln = struct.unpack_from("<h", p, r.tell())[0]
    print(label, "len", ln)
    s = DfString.read(r)
    print(" ", s.value[:40], "tell", hex(r.tell()))
print("next int32s", [r.read_int32() for _ in range(7)])
print("tell", hex(r.tell()))
