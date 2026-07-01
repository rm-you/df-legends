#!/usr/bin/env python3
import struct

from df_save_re.save_preamble import resolve_save_payload

payload = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
GAP_START = 0x21350D4
FIG1 = 0x2135412
print("gap", FIG1 - GAP_START, "bytes")
print(payload[GAP_START:FIG1][:64].hex())

# try whereabouts as owned from ART_END
from io import BytesIO
from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.body_skipper import default_xml_dir, skip_struct

r = BinaryReader(BytesIO(payload))
r.seek(0x213508C)
present = r.read_int32()
print("whereabouts present", present, "at", hex(r.tell()-4))
if present:
    skip_struct(r, "state_profilest", xml_dir=default_xml_dir())
    print("whereabouts body end", hex(r.tell()))
