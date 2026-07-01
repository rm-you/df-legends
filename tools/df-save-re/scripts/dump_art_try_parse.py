#!/usr/bin/env python3
"""Try structural art_image reads from gap start."""
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.body_skipper import SkipError, default_xml_dir, skip_struct
from df_save_re.deserializers.historical_figures import try_read_historical_figure_header
from df_save_re.deserializers.record_reader import read_struct
from df_save_re.save_preamble import resolve_save_payload

payload = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
xml = default_xml_dir()

CASES = [
    ("fig1", 0x21355EF, 0x213B0CF, 1),
    ("fig2", 0x213B2CD, 0x215EB79, 1),
    ("fig3", 0x215EC4F, 0x2161BAB, 0),
]


def lands(pos: int, expect_id: int) -> bool:
    r = BinaryReader(BytesIO(payload))
    r.seek(pos)
    h = try_read_historical_figure_header(r)
    return h is not None and h.figure_id == expect_id


def try_skip(name: str, tail_end: int, target: int, expect_id: int, fn) -> None:
    try:
        end = fn(tail_end)
    except (SkipError, EOFError, ValueError) as e:
        print(f"  {name}: FAIL {e}")
        return
    ok = end == target and lands(end, expect_id)
    print(f"  {name}: end={end:#x} delta={end-target} ok={ok}")


for label, tail_end, target, art_count in CASES:
    expect_id = {0x21355EF: 2, 0x213B2CD: 3, 0x215EC4F: 4}[tail_end]
    gap = target - tail_end
    print(f"\n{label} gap={gap} art_count={art_count} target={target:#x}")

    def n_art_images(te=tail_end, n=art_count):
        r = BinaryReader(BytesIO(payload))
        r.seek(te)
        for _ in range(n):
            skip_struct(r, "art_image", xml_dir=xml, payload=payload)
        return r.tell()

    def n_art_refs(te=tail_end, n=art_count):
        r = BinaryReader(BytesIO(payload))
        r.seek(te)
        for _ in range(n):
            skip_struct(r, "art_image_ref", xml_dir=xml, payload=payload)
        return r.tell()

    def read_one_art_image(te=tail_end):
        r = BinaryReader(BytesIO(payload))
        r.seek(te)
        read_struct(r, "art_image", xml_dir=xml, payload=payload)
        return r.tell()

    def posnull_art_images(te=tail_end, n=art_count):
        r = BinaryReader(BytesIO(payload))
        r.seek(te)
        # count + bool flags + bodies
        count = r.read_int32()
        if count != n:
            raise SkipError(f"count {count} != {n}")
        present = [r.read_bool() for _ in range(count)]
        while r.tell() % 4:
            r.read_uint8()
        for p in present:
            if p:
                skip_struct(r, "art_image", xml_dir=xml, payload=payload)
        return r.tell()

    def int32_count_then_images(te=tail_end):
        r = BinaryReader(BytesIO(payload))
        r.seek(te)
        n = r.read_int32()
        if n != art_count:
            raise SkipError(f"count {n}")
        for _ in range(n):
            skip_struct(r, "art_image", xml_dir=xml, payload=payload)
        return r.tell()

    try_skip("art_image x art_count", tail_end, target, expect_id, n_art_images)
    try_skip("art_image_ref x art_count", tail_end, target, expect_id, n_art_refs)
    try_skip("read one art_image", tail_end, target, expect_id, read_one_art_image)
    try_skip("posnull art_image", tail_end, target, expect_id, posnull_art_images)
    try_skip("int32+art_image", tail_end, target, expect_id, int32_count_then_images)

    # Brute: leading int32 n then skip n art_image
    for lead in range(0, min(gap, 256), 4):
        r = BinaryReader(BytesIO(payload))
        r.seek(tail_end + lead)
        try:
            n = r.read_int32()
        except EOFError:
            break
        if n != art_count or n < 0 or n > 10:
            continue
        r2 = BinaryReader(BytesIO(payload))
        r2.seek(tail_end + lead + 4)
        try:
            for _ in range(n):
                skip_struct(r2, "art_image", xml_dir=xml, payload=payload)
            if lands(r2.tell(), expect_id):
                print(f"  MATCH lead+{lead} int32({n}) + {n} art_image -> {r2.tell():#x}")
        except SkipError:
            pass
