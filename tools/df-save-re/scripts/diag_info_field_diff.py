#!/usr/bin/env python3
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.body_skipper import default_xml_dir, skip_field
from df_save_re.deserializers.record_reader import read_field
from df_save_re.deserializers.save_profiles import read_artistic_profile_save
from df_save_re.save_preamble import resolve_save_payload
from df_save_re.structures.xml_fields import load_struct, resolve_fields

payload = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
xml = default_xml_dir()
INFO_INNER = 0x2134ED5 + 4  # after outer info present=1
MP_BODY = INFO_INNER + 4  # after masterpieces present=1


def skip_artistic(reader):
    ec = reader.read_int32()
    if ec:
        reader.read_bytes(ec * 4 + 3)
    lc = reader.read_int32()
    if lc:
        reader.read_bytes(lc * 4)
    pc = reader.read_int32()
    if pc:
        reader.read_bytes(pc * 4)
    pm = reader.read_int32()
    if pm:
        reader.read_bytes(pm * 2)
    reader.read_bytes(8)


r1 = BinaryReader(BytesIO(payload))
r1.seek(MP_BODY)
skip_artistic(r1)
print("skip_artistic", r1.tell() - MP_BODY)

r2 = BinaryReader(BytesIO(payload))
r2.seek(MP_BODY)
read_artistic_profile_save(r2)
print("read_artistic", r2.tell() - MP_BODY)

MP_END = r1.tell()
for fd in resolve_fields(load_struct("historical_figure_info", xml), xml):
    if fd.name == "masterpieces":
        continue
    rs = BinaryReader(BytesIO(payload))
    rr = BinaryReader(BytesIO(payload))
    rs.seek(MP_END)
    rr.seek(MP_END)
    skip_field(rs, fd, xml_dir=xml, struct_name="historical_figure_info", payload=payload)
    read_field(rr, fd, xml_dir=xml, struct_name="historical_figure_info")
    ds, dr = rs.tell() - MP_END, rr.tell() - MP_END
    if ds != dr:
        print("MISMATCH", fd.name, "skip", ds, "read", dr)
