#!/usr/bin/env python3
import struct
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.body_skipper import SkipError, default_xml_dir, skip_field, skip_struct
from df_save_re.deserializers.historical_figures import try_read_historical_figure_header
from df_save_re.save_preamble import resolve_save_payload

payload = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
xml = default_xml_dir()

FIG1_TAIL = 0x21355EF
FIG2 = 0x213B0CF
FIG2_TAIL = 0x213B2F5
FIG3 = 0x215EB79

print("fig1 tail hex:", payload[FIG1_TAIL:FIG1_TAIL + 128].hex())
print("fig2 tail hex:", payload[FIG2_TAIL:FIG2_TAIL + 128].hex())

# Parse as int32s
for label, off in [("fig1", FIG1_TAIL), ("fig2", FIG2_TAIL)]:
    print(f"\n{label} int32s:")
    for i in range(16):
        v = struct.unpack_from("<i", payload, off + i * 4)[0]
        print(f"  [{i:2d}] {v:12d} ({v:#x})")


def try_ref_then_image(tail_end: int, art_count: int, target: int) -> None:
    r = BinaryReader(BytesIO(payload))
    r.seek(tail_end)
    try:
        for _ in range(art_count):
            skip_struct(r, "art_image_ref", xml_dir=xml)
        ref_end = r.tell()
        for _ in range(art_count):
            skip_struct(r, "art_image", xml_dir=xml)
        print(f"refs+images: ref_end={ref_end:#x} final={r.tell():#x} target={target:#x} ok={r.tell()==target}")
    except SkipError as e:
        print(f"refs+images FAIL after {r.tell():#x}: {e}")


def try_ptr_vector_art(tail_end: int, target: int) -> None:
    from df_save_re.structures.xml_fields import FieldDef

    r = BinaryReader(BytesIO(payload))
    r.seek(tail_end)
    fd = FieldDef(name="art", kind="stl-vector", pointer_type="art_image")
    try:
        skip_field(r, fd, xml_dir=xml, struct_name="historical_figure")
        print(f"ptr vector art: end={r.tell():#x} target={target:#x} ok={r.tell()==target}")
    except SkipError as e:
        print(f"ptr vector FAIL: {e}")


def try_count_at_start(tail_end: int, target: int) -> None:
    r = BinaryReader(BytesIO(payload))
    r.seek(tail_end)
    n = r.read_int32()
    print(f"first int32 count={n}")
    if n == 1:
        # try ptr vector with that count already consumed
        from df_save_re.structures.xml_fields import FieldDef

        r2 = BinaryReader(BytesIO(payload))
        r2.seek(tail_end + 4)
        # manual: n presence bytes aligned + bodies
        flags = [r2.read_bool() for _ in range(n)]
        while r2.tell() % 4:
            r2.read_uint8()
        for p in flags:
            if p:
                skip_struct(r2, "art_image", xml_dir=xml)
        print(f"  count+posnull art_image: end={r2.tell():#x} ok={r2.tell()==target}")


print("\nfig1 attempts:")
try_ref_then_image(FIG1_TAIL, 1, FIG2)
try_ptr_vector_art(FIG1_TAIL, FIG2)
try_count_at_start(FIG1_TAIL, FIG2)

print("\nfig2 attempts:")
try_ref_then_image(FIG2_TAIL, 1, FIG3)
try_ptr_vector_art(FIG2_TAIL, FIG3)
