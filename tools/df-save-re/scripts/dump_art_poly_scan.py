#!/usr/bin/env python3
"""Walk fig1 gap byte-by-byte trying polymorphic element/property parse."""
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.body_skipper import SkipError, default_xml_dir, skip_struct
from df_save_re.deserializers.historical_figures import try_read_historical_figure_header
from df_save_re.deserializers.record_reader import read_struct
from df_save_re.save_preamble import resolve_save_payload
from df_save_re.structures.polymorph import build_registry

payload = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
xml = default_xml_dir()
TAIL = 0x21355EF
TARGET = 0x213B0CF
EXPECT = 2


def lands(pos: int) -> bool:
    r = BinaryReader(BytesIO(payload))
    r.seek(pos)
    h = try_read_historical_figure_header(r)
    return h is not None and h.figure_id == EXPECT


def skip_poly_bodies(reader: BinaryReader, base: str, count: int) -> None:
    reg = build_registry(base, xml)
    for _ in range(count):
        tag = reader.read_int16()
        sub = reg.subclass_for(tag) if reg else None
        if sub is None:
            raise SkipError(f"{base} tag {tag}")
        skip_struct(reader, sub, xml_dir=xml, payload=payload)


def try_parse_from(off: int) -> int | None:
    r = BinaryReader(BytesIO(payload))
    r.seek(TAIL + off)
    # Pattern: int32 n_elem, n_elem x (int16 tag + body), int32 n_prop, ...
    ne = r.read_int32()
    if ne < 0 or ne > 500:
        return None
    pos = r.tell()
    try:
        skip_poly_bodies(r, "art_image_element", ne)
    except SkipError:
        r.seek(pos)
        return None
    np = r.read_int32()
    if np < 0 or np > 500:
        return None
    try:
        skip_poly_bodies(r, "art_image_property", np)
    except SkipError:
        return None
    end = r.tell()
    if lands(end):
        return end
    return None


# Also: single art_image with int32 poly presence vectors
def try_one_art_image(off: int) -> int | None:
    r = BinaryReader(BytesIO(payload))
    r.seek(TAIL + off)
    try:
        read_struct(r, "art_image", xml_dir=xml, payload=payload)
    except SkipError:
        return None
    end = r.tell()
    return end if lands(end) else None


print(f"scanning offsets 0..256 for poly elem/prop pattern...")
for off in range(0, 257, 1):
    end = try_parse_from(off)
    if end:
        print(f"MATCH poly pattern lead={off} end={end:#x}")
        break
else:
    print("no poly elem/prop match in first 256 bytes")

for off in range(0, 64, 1):
    end = try_one_art_image(off)
    if end:
        print(f"MATCH art_image lead={off} end={end:#x}")
        break
else:
    print("no art_image match in first 64 bytes")

# Try int32 presence poly vector for elements only (count then int32 flags)
def try_int32_presence_elements(off: int) -> int | None:
    r = BinaryReader(BytesIO(payload))
    r.seek(TAIL + off)
    c = r.read_int32()
    if c < 0 or c > 200:
        return None
    reg = build_registry("art_image_element", xml)
    present = [r.read_int32() != 0 for _ in range(c)]
    for p in present:
        if p:
            tag = r.read_int16()
            sub = reg.subclass_for(tag) if reg else None
            if sub is None:
                return None
            skip_struct(r, sub, xml_dir=xml, payload=payload)
    end = r.tell()
    return end if lands(end) else None

for off in range(0, 128, 4):
    end = try_int32_presence_elements(off)
    if end:
        print(f"MATCH int32-presence elements lead={off} end={end:#x}")
