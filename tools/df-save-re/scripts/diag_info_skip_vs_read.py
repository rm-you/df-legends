#!/usr/bin/env python3
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.body_skipper import default_xml_dir, skip_field
from df_save_re.deserializers.save_profiles import read_artistic_profile_save, read_masterpieces_save
from df_save_re.save_preamble import resolve_save_payload
from df_save_re.structures.xml_fields import load_struct, resolve_fields

payload = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
xml = default_xml_dir()
INFO_INNER = 0x2134ED5 + 4  # after outer present=1


def skip_artistic_save(reader: BinaryReader) -> None:
    ec = reader.read_int32()
    if ec:
        reader.read_bytes(ec * 4)
        reader.read_bytes(3)
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


def skip_info_save(reader: BinaryReader) -> None:
    for fd in resolve_fields(load_struct("historical_figure_info", xml), xml):
        if fd.name == "masterpieces":
            if reader.read_int32() != 0:
                skip_artistic_save(reader)
            continue
        skip_field(reader, fd, xml_dir=xml, struct_name="historical_figure_info", payload=payload)


def read_info_save(reader: BinaryReader) -> None:
    for fd in resolve_fields(load_struct("historical_figure_info", xml), xml):
        if fd.name == "masterpieces":
            read_masterpieces_save(reader)
        else:
            from df_save_re.deserializers.record_reader import read_field

            read_field(reader, fd, xml_dir=xml, struct_name="historical_figure_info")


for label, fn in [("skip", skip_info_save), ("read", read_info_save)]:
    r = BinaryReader(BytesIO(payload))
    r.seek(INFO_INNER)
    start = r.tell()
    fn(r)
    print(label, r.tell() - start, "end", hex(r.tell()))
