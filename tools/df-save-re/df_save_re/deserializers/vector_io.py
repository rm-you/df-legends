"""Shared std::vector / posnull-pointer helpers for DF 0.47.05 save RE."""

from __future__ import annotations

from ..binary_reader import BinaryReader


def read_stl_vector_count(reader: BinaryReader) -> int:
    count = reader.read_int32()
    if count < 0:
        raise ValueError(f"negative vector length {count} at 0x{reader.tell() - 4:x}")
    return count


def skip_stl_int32_vector(reader: BinaryReader) -> int:
    count = read_stl_vector_count(reader)
    reader.read_bytes(count * 4)
    return count


def skip_stl_int16_vector(reader: BinaryReader) -> int:
    count = read_stl_vector_count(reader)
    reader.read_bytes(count * 2)
    return count


def skip_stl_byte_vector(reader: BinaryReader) -> int:
    count = read_stl_vector_count(reader)
    if count:
        reader.read_bytes(count)
    return count


def skip_posnull_pointer_vector(
    reader: BinaryReader,
    *,
    max_count: int = 2_000_000,
) -> tuple[int, int]:
    """
    Skip stl-vector of posnull pointers (bool present + aligned payload).

    Returns (count, present_count). Does not parse pointed-to objects.
    """
    count = read_stl_vector_count(reader)
    if count > max_count:
        raise ValueError(f"implausible posnull vector count {count} at 0x{reader.tell() - 4:x}")
    present = 0
    for _ in range(count):
        if reader.read_bool():
            present += 1
    while reader.tell() % 4:
        reader.read_uint8()
    return count, present


def score_posnull_prefix(payload: bytes, offset: int, *, sample: int = 5000) -> int:
    start = offset + 4
    end = min(len(payload), start + sample)
    return sum(1 for b in payload[start:end] if b in (0, 1))
