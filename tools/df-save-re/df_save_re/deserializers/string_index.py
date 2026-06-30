"""String-table permutation / lookup index after short-name tables."""

from __future__ import annotations

from dataclasses import dataclass
from io import BytesIO

from ..binary_reader import BinaryReader


@dataclass
class StringIndexTable:
    """int32 count followed by count int32 indices (283 on Namushul, 461 on Waterlures)."""

    entry_count: int
    values: list[int]
    payload_offset: int = 0
    bytes_consumed: int = 0

    @classmethod
    def read(cls, reader: BinaryReader) -> StringIndexTable:
        start = reader.tell()
        entry_count = reader.read_int32()
        if entry_count < 0 or entry_count > 100_000:
            raise ValueError(
                f"implausible string index count {entry_count} at 0x{start:x}"
            )
        values = [reader.read_int32() for _ in range(entry_count)]
        end = reader.tell()
        return cls(
            entry_count=entry_count,
            values=values,
            payload_offset=start,
            bytes_consumed=end - start,
        )


def parse_string_index_table(payload: bytes, *, offset: int) -> StringIndexTable:
    reader = BinaryReader(BytesIO(payload))
    reader.seek(offset)
    return StringIndexTable.read(reader)
