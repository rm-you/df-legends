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
PLANT_TABLE_ANCHOR = struct.pack("<h", len("agave bush")) + b"agave bush"
# Common first entries in the SAV plant table (world-gen dependent).
_SAV_PLANT_ANCHORS = (
    "agave bush",
    "prickle berry",
    "plump helmet",
    "pig tail",
    "dimple cup",
    "tower-cap",
    "cave wheat",
    "sweet pod",
)


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


def find_string_table_block_dat(payload: bytes, *, start: int = 0) -> int | None:
    """Locate materials table (count × IRON …) — anchor for retired world.dat saves."""
    idx = payload.find(MATERIALS_IRON_ENTRY, start)
    while idx >= 4:
        count = struct.unpack_from("<i", payload, idx - 4)[0]
        if 100 <= count <= MAX_SHORT_NAME_COUNT:
            return idx - 4
        idx = payload.find(MATERIALS_IRON_ENTRY, idx + 1)
    return None


def _looks_like_plant_name(name: str) -> bool:
    if not name or name == "IRON":
        return False
    if not SHORT_NAME_RE.match(name):
        return False
    return " " in name or name.islower()


def _validate_sav_string_table_block(block: StringTableBlock) -> bool:
    if block.section_count < 19 or block.total_names < 3_000:
        return False
    if not block.sections:
        return False
    first = block.sections[0].names[0] if block.sections[0].names else ""
    if first == "IRON" or not _looks_like_plant_name(first):
        return False
    if len(block.sections) <= 6:
        return False
    if "SUBTERRANEAN_ANIMAL_PEOPLES" not in block.sections[6].names:
        return False
    if len(block.sections) > 7 and block.sections[7].names[0] != "ABBEY":
        return False
    return True


def _try_sav_string_table_at(payload: bytes, off: int) -> int | None:
    from io import BytesIO

    try:
        reader = BinaryReader(BytesIO(payload))
        reader.seek(off)
        block = StringTableBlock.read(reader, max_sections=20)
    except (EOFError, ValueError):
        return None
    if _validate_sav_string_table_block(block):
        return off
    return None


def find_string_table_block_sav(payload: bytes) -> int | None:
    """
    Locate the 19-section short-name block inside world.sav.

    Active saves do not expose a reliable IRON-count prefix. Try common plant-table
    anchors, then validate the civ/word sections match the expected Andux order.
    """
    for plant in _SAV_PLANT_ANCHORS:
        needle = struct.pack("<h", len(plant)) + plant.encode("latin-1")
        idx = payload.find(needle)
        while idx >= 4:
            count = struct.unpack_from("<i", payload, idx - 4)[0]
            if 50 <= count <= MAX_SHORT_NAME_COUNT:
                found = _try_sav_string_table_at(payload, idx - 4)
                if found is not None:
                    return found
            idx = payload.find(needle, idx + 1)

    # Fallback: coarse scan in the typical game-data band (after preamble).
    scan_start = min(len(payload), 0x50_000)
    scan_end = min(len(payload), 0x10_000_000)
    for off in range(scan_start, scan_end, 0x1000):
        if found := _try_sav_string_table_at(payload, off):
            return found
    return None


def find_string_table_block(payload: bytes, *, start: int = 0) -> int | None:
    """Locate short-name string tables (DAT IRON anchor, then SAV civ-header scan)."""
    found = find_string_table_block_dat(payload, start=start)
    if found is not None:
        return found
    return find_string_table_block_sav(payload)


def parse_string_table_block(payload: bytes, *, offset: int | None = None) -> StringTableBlock:
    from io import BytesIO

    if offset is None:
        found = find_string_table_block(payload)
        if found is None:
            raise ValueError("short-name string table block not found")
        offset = found
    reader = BinaryReader(BytesIO(payload))
    reader.seek(offset)
    return StringTableBlock.read(reader)
