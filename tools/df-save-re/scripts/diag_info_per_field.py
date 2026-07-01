#!/usr/bin/env python3
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.body_skipper import default_xml_dir, skip_field
from df_save_re.deserializers.record_reader import read_field
from df_save_re.deserializers.save_profiles import read_masterpieces_save
from df_save_re.save_preamble import resolve_save_payload
from df_save_re.structures.xml_fields import load_struct, resolve_fields

payload = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
xml = default_xml_dir()
START = 0x2134ED5 + 4


def skip_artistic_save(reader: BinaryReader) -> None:
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


rs = BinaryReader(BytesIO(payload))
rr = BinaryReader(BytesIO(payload))
rs.seek(START)
rr.seek(START)

for fd in resolve_fields(load_struct("historical_figure_info", xml), xml):
    off_s, off_r = rs.tell(), rr.tell()
    if fd.name == "masterpieces":
        if rs.read_int32() != 0:
            skip_artistic_save(rs)
        read_masterpieces_save(rr)
    else:
        skip_field(rs, fd, xml_dir=xml, struct_name="historical_figure_info", payload=payload)
        read_field(rr, fd, xml_dir=xml, struct_name="historical_figure_info")
    ds, dr = rs.tell() - off_s, rr.tell() - off_r
    mark = " ***" if ds != dr else ""
    print(f"{fd.name:15s} skip={ds:4d} read={dr:4d}{mark} -> {rs.tell():#x} / {rr.tell():#x}")

print("total skip", rs.tell() - START, "read", rr.tell() - START)
