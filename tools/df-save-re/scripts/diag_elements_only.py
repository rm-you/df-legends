#!/usr/bin/env python3
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.body_skipper import SkipError, default_xml_dir, skip_struct
from df_save_re.deserializers.historical_figures import try_read_historical_figure_header
from df_save_re.save_preamble import resolve_save_payload
from df_save_re.structures.polymorph import build_registry

payload = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
xml = default_xml_dir()
TAIL = 0x21355EF
FIG2 = 0x213B0CF


def align4(r: BinaryReader) -> None:
    while r.tell() % 4:
        r.read_uint8()


def skip_elements_from_here(r: BinaryReader, *, pres: str) -> int:
    start = r.tell()
    count = r.read_int32()
    if count < 0 or count > 500_000:
        raise SkipError(count)
    if pres == "bool":
        flags = [r.read_bool() for _ in range(count)]
        if count:
            align4(r)
    else:
        flags = [r.read_int32() != 0 for _ in range(count)]
    reg = build_registry("art_image_element", xml)
    for p in flags:
        if not p:
            continue
        tag = r.read_int16()
        sub = reg.subclass_for(tag) if reg else None
        if sub is None:
            raise SkipError(tag)
        r.seek(r.tell() - 2)
        skip_struct(r, sub, xml_dir=xml)
    return r.tell() - start


for prefix in range(0, 64, 4):
    for pres in ("bool", "int32"):
        r = BinaryReader(BytesIO(payload))
        r.seek(TAIL + prefix)
        try:
            used = skip_elements_from_here(r, pres=pres)
        except (SkipError, EOFError):
            continue
        end = r.tell()
        h = try_read_historical_figure_header(BinaryReader(BytesIO(payload)))
        r2 = BinaryReader(BytesIO(payload))
        r2.seek(end)
        h = try_read_historical_figure_header(r2)
        if end == FIG2 or (h and h.figure_id == 2):
            print(f"prefix={prefix} pres={pres} elem_used={used} end={end:#x} id={h.figure_id if h else None}")
