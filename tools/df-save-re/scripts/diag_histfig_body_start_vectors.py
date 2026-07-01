"""Probe nearby historical_figure body starts and post-header vector bytes."""

from __future__ import annotations

import argparse
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.historical_figures import try_read_historical_figure_header
from df_save_re.deserializers.language_name import try_read_language_name
from df_save_re.save_preamble import resolve_save_payload


def _i32(payload: bytes, offset: int) -> int:
    return int.from_bytes(payload[offset : offset + 4], "little", signed=True)


def _i16(payload: bytes, offset: int) -> int:
    return int.from_bytes(payload[offset : offset + 2], "little", signed=True)


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument("--base", type=lambda value: int(value, 0), default=0x2134DD0)
    parser.add_argument("--radius", type=lambda value: int(value, 0), default=32)
    args = parser.parse_args()

    payload = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
    base = args.base
    print("current parser candidates")
    for start in range(base - args.radius, base + args.radius + 1):
        reader = BinaryReader(BytesIO(payload))
        reader.seek(start)
        header = try_read_historical_figure_header(reader, expect_id=0)
        if header is None:
            continue
        end = reader.tell()
        c1 = _i32(payload, end)
        c2 = _i32(payload, end + 4)
        candidates = []
        for pad in range(0, 13):
            off = end + 8 + pad
            c3 = _i32(payload, off)
            tag = _i16(payload, off + 4) if 0 < c3 < 100 else None
            candidates.append((pad, c3, tag))
        print(
            f"start=0x{start:x} end=0x{end:x} hdr={header.header_bytes} "
            f"name={header.name.first_name!r} art={header.art_count} "
            f"unit={header.unit_id} nem={header.nemesis_id} counts=({c1},{c2}) c3={candidates}"
        )
    print("\nghidra no-pad candidates")
    for start in range(base - args.radius, base + args.radius + 1):
        reader = BinaryReader(BytesIO(payload))
        reader.seek(start)
        try:
            profession = reader.read_int16()
            race = reader.read_int16()
            caste = reader.read_int16()
            sex = reader.read_uint8()
            scalars = [reader.read_int32() for _ in range(12)]
            name = try_read_language_name(reader)
            if name is None:
                continue
            ids = [reader.read_int32() for _ in range(5)]
            art_count = reader.read_int32()
            unit_id = reader.read_int32()
            nemesis_id = reader.read_int32()
            flag_count = reader.read_int32()
            if not (0 <= flag_count <= 64):
                continue
            for _ in range(flag_count):
                reader.read_uint8()
            figure_id = reader.read_int32()
        except (EOFError, ValueError):
            continue
        if figure_id != 0:
            continue
        end = reader.tell()
        c1 = _i32(payload, end)
        c2 = _i32(payload, end + 4)
        c3 = _i32(payload, end + 8)
        tag = _i16(payload, end + 12) if 0 < c3 < 100 else None
        print(
            f"start=0x{start:x} end=0x{end:x} prof/race/caste/sex="
            f"({profession},{race},{caste},{sex}) scalars={scalars} "
            f"name={name.first_name!r}/{name.nickname!r} words={name.words} "
            f"ids={ids} art={art_count} unit={unit_id} nem={nemesis_id} "
            f"flags={flag_count} counts=({c1},{c2},{c3}) tag3={tag}"
        )


if __name__ == "__main__":
    main()
