"""Short-name string tables in world.dat (Andux / Ghidra 0x410600 family)."""

from __future__ import annotations

import re
import struct
from dataclasses import dataclass, field

from ..binary_reader import BinaryReader
from .primitives import DfString

# Per-section int32 count followed by count × DfString (int16 length + bytes).
MAX_SHORT_NAME_COUNT = 10_000
MAX_SHORT_NAME_SECTIONS = 32
SHORT_NAME_RE = re.compile(r"^[A-Za-z0-9_][A-Za-z0-9_ \-'():]*$")

MATERIALS_IRON_ENTRY = struct.pack("<h", 4) + b"IRON"


@dataclass
class ShortNameTableSection:
    entry_count: int
    names: list[str]
    payload_offset: int = 0
    bytes_consumed: int = 0

    @classmethod
    def read(cls, reader: BinaryReader) -> ShortNameTableSection:
        start = reader.tell()
        entry_count = reader.read_int32()
        if entry_count < 0 or entry_count > MAX_SHORT_NAME_COUNT:
            raise ValueError(
                f"implausible short-name table count {entry_count} at 0x{start:x}"
            )
        names = [DfString.read(reader).value for _ in range(entry_count)]
        end = reader.tell()
        return cls(
            entry_count=entry_count,
            names=names,
            payload_offset=start,
            bytes_consumed=end - start,
        )

    @property
    def valid_name_ratio(self) -> float:
        if not self.names:
            return 0.0
        good = sum(1 for name in self.names if SHORT_NAME_RE.match(name))
        return good / len(self.names)


@dataclass
class StringTableBlock:
    """Sequence of short-name vectors (20 valid sections on Namushul 0.47.05)."""

    sections: list[ShortNameTableSection] = field(default_factory=list)
    payload_offset: int = 0
    bytes_consumed: int = 0

    @property
    def section_count(self) -> int:
        return len(self.sections)

    @property
    def total_names(self) -> int:
        return sum(s.entry_count for s in self.sections)

    @classmethod
    def read(
        cls,
        reader: BinaryReader,
        *,
        max_sections: int = MAX_SHORT_NAME_SECTIONS,
        min_valid_ratio: float = 0.85,
    ) -> StringTableBlock:
        start = reader.tell()
        sections: list[ShortNameTableSection] = []
        for _ in range(max_sections):
            off = reader.tell()
            try:
                section = ShortNameTableSection.read(reader)
            except (EOFError, ValueError):
                reader.seek(off)
                break
            if section.valid_name_ratio < min_valid_ratio:
                reader.seek(off)
                break
            sections.append(section)
        if not sections:
            raise ValueError(f"no short-name table sections at 0x{start:x}")
        end = reader.tell()
        return cls(
            sections=sections,
            payload_offset=start,
            bytes_consumed=end - start,
        )


def find_string_table_block(payload: bytes, *, start: int = 0) -> int | None:
    """Locate materials table (count × IRON …) — anchor for short-name string tables."""
    idx = payload.find(MATERIALS_IRON_ENTRY, start)
    while idx >= 4:
        count = struct.unpack_from("<i", payload, idx - 4)[0]
        if 100 <= count <= MAX_SHORT_NAME_COUNT:
            return idx - 4
        idx = payload.find(MATERIALS_IRON_ENTRY, idx + 1)
    return None


def parse_string_table_block(payload: bytes, *, offset: int | None = None) -> StringTableBlock:
    from io import BytesIO

    if offset is None:
        found = find_string_table_block(payload)
        if found is None:
            raise ValueError("materials short-name table signature not found")
        offset = found
    reader = BinaryReader(BytesIO(payload))
    reader.seek(offset)
    return StringTableBlock.read(reader)
