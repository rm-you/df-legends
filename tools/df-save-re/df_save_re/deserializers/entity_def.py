"""historical_entity definition headers (Andux entity def prefix, 0.47.05)."""

from __future__ import annotations

import struct
from dataclasses import dataclass
from io import BytesIO

from ..binary_reader import BinaryReader
from .primitives import DfString
from .string_index import StringIndexTable
from .string_tables import StringTableBlock, find_string_table_block, parse_string_table_block

ENTITY_TYPE_CIV = 0
FIRST_ENTITY_CLASS = "SUBTERRANEAN_ANIMAL_PEOPLES"
MAX_ENTITY_SCAN_WINDOW = 12_000
MAX_ENTITY_SEARCH_BYTES = 40_000_000


def entity_class_names(block: StringTableBlock) -> set[str]:
    """Return the short-name section listing civ entity classes (varies by DAT vs SAV layout)."""
    for section in block.sections:
        if FIRST_ENTITY_CLASS in section.names:
            return set(section.names)
    if len(block.sections) > 7:
        return set(block.sections[7].names)
    return set()


@dataclass
class HistoricalEntityHeader:
    entity_type: int
    entity_id: int
    entity_class: str
    field_16a: int
    field_16b: int
    next_entity_id: int
    short_list_size: int
    has_name: bool
    payload_offset: int = 0
    header_bytes: int = 0

    @classmethod
    def read(cls, reader: BinaryReader, *, valid_classes: set[str]) -> HistoricalEntityHeader:
        start = reader.tell()
        entity_type = reader.read_int16()
        entity_id = reader.read_int32()
        entity_class = DfString.read(reader).value
        if entity_type != ENTITY_TYPE_CIV:
            raise ValueError(f"unexpected entity type {entity_type} at 0x{start:x}")
        if entity_class not in valid_classes:
            raise ValueError(f"unknown entity class {entity_class!r} at 0x{start:x}")
        field_16a = reader.read_int16()
        field_16b = reader.read_int16()
        next_entity_id = reader.read_int32()
        short_list_size = reader.read_int16()
        has_name = reader.read_bool()
        end = reader.tell()
        return cls(
            entity_type=entity_type,
            entity_id=entity_id,
            entity_class=entity_class,
            field_16a=field_16a,
            field_16b=field_16b,
            next_entity_id=next_entity_id,
            short_list_size=short_list_size,
            has_name=has_name,
            payload_offset=start,
            header_bytes=end - start,
        )


@dataclass
class EntityScanResult:
    string_tables_end: int
    string_index_end: int
    first_entity_offset: int | None
    entities: list[HistoricalEntityHeader]
    entity_classes: list[str]


def find_first_entity_offset(
    payload: bytes,
    *,
    search_start: int,
    entity_classes: set[str],
) -> int | None:
    needle = struct.pack("<h", len(FIRST_ENTITY_CLASS)) + FIRST_ENTITY_CLASS.encode("latin-1")
    pos = search_start
    limit = min(len(payload), search_start + MAX_ENTITY_SEARCH_BYTES)
    while pos < limit:
        idx = payload.find(needle, pos, limit)
        if idx < 0:
            return None
        off = idx - 6
        if off >= 0:
            if (
                struct.unpack_from("<h", payload, off)[0] == ENTITY_TYPE_CIV
                and struct.unpack_from("<i", payload, off + 2)[0] == 0
            ):
                reader = BinaryReader(BytesIO(payload))
                reader.seek(off)
                try:
                    HistoricalEntityHeader.read(reader, valid_classes=entity_classes)
                    return off
                except (EOFError, ValueError):
                    pass
        pos = idx + 1
    return None


def scan_entity_headers(
    payload: bytes,
    *,
    start: int,
    entity_classes: set[str],
    max_entities: int = 100,
) -> list[HistoricalEntityHeader]:
    entities: list[HistoricalEntityHeader] = []
    scan_from = start
    for expected_id in range(max_entities):
        found: HistoricalEntityHeader | None = None
        window_end = min(len(payload), scan_from + MAX_ENTITY_SCAN_WINDOW)
        for off in range(scan_from, window_end, 2):
            reader = BinaryReader(BytesIO(payload))
            reader.seek(off)
            try:
                ent = HistoricalEntityHeader.read(reader, valid_classes=entity_classes)
            except (EOFError, ValueError):
                continue
            if ent.entity_id == expected_id:
                found = ent
                scan_from = off + ent.header_bytes
                break
        if found is None:
            break
        entities.append(found)
    return entities


def find_entity_by_id(
    payload: bytes,
    entity_id: int,
    *,
    entity_classes: set[str],
    search_start: int = 0,
    search_end: int | None = None,
) -> HistoricalEntityHeader | None:
    """Find a civ header with a specific ID (validated)."""
    search_end = len(payload) if search_end is None else search_end
    if entity_id == 0:
        off = find_first_entity_offset(
            payload,
            search_start=search_start,
            entity_classes=entity_classes,
        )
        if off is None:
            return None
        reader = BinaryReader(BytesIO(payload))
        reader.seek(off)
        return HistoricalEntityHeader.read(reader, valid_classes=entity_classes)

    pos = search_start
    while pos < search_end:
        off = payload.find(struct.pack("<i", entity_id), pos, search_end)
        if off < 0:
            return None
        if off >= 2 and struct.unpack_from("<h", payload, off - 2)[0] == ENTITY_TYPE_CIV:
            reader = BinaryReader(BytesIO(payload))
            reader.seek(off - 2)
            try:
                ent = HistoricalEntityHeader.read(reader, valid_classes=entity_classes)
            except (EOFError, ValueError):
                pos = off + 4
                continue
            if ent.entity_id == entity_id:
                return ent
        pos = off + 4
    return None


def catalog_entities(
    payload: bytes,
    *,
    entity_classes: set[str],
    search_start: int,
    search_end: int | None = None,
    max_per_class: int = 500,
) -> list[HistoricalEntityHeader]:
    """Scan entity class strings and collect validated civ headers."""
    search_end = len(payload) if search_end is None else search_end
    by_id: dict[int, HistoricalEntityHeader] = {}
    for entity_class in sorted(entity_classes):
        needle = struct.pack("<h", len(entity_class)) + entity_class.encode("latin-1")
        pos = search_start
        found = 0
        while found < max_per_class:
            idx = payload.find(needle, pos, search_end)
            if idx < 0:
                break
            off = idx - 6
            if off >= search_start:
                reader = BinaryReader(BytesIO(payload))
                reader.seek(off)
                try:
                    ent = HistoricalEntityHeader.read(reader, valid_classes=entity_classes)
                except (EOFError, ValueError):
                    pass
                else:
                    prev = by_id.get(ent.entity_id)
                    if prev is None or ent.payload_offset < prev.payload_offset:
                        by_id[ent.entity_id] = ent
                    found += 1
            pos = idx + 1
    return [by_id[k] for k in sorted(by_id)]


def scan_entities(payload: bytes, *, max_entities: int = 100) -> EntityScanResult:
    block = parse_string_table_block(payload)
    entity_classes = entity_class_names(block)
    tables_end = block.payload_offset + block.bytes_consumed

    reader = BinaryReader(BytesIO(payload))
    reader.seek(tables_end)
    index = StringIndexTable.read(reader)
    index_end = reader.tell()

    first = find_first_entity_offset(
        payload,
        search_start=index_end,
        entity_classes=entity_classes,
    )
    entities: list[HistoricalEntityHeader] = []
    if first is not None:
        entities = scan_entity_headers(
            payload,
            start=first,
            entity_classes=entity_classes,
            max_entities=max_entities,
        )
    return EntityScanResult(
        string_tables_end=tables_end,
        string_index_end=index_end,
        first_entity_offset=first,
        entities=entities,
        entity_classes=sorted(entity_classes),
    )


def catalog_entity_block(
    payload: bytes,
    *,
    search_end: int | None = None,
) -> EntityScanResult:
    """Find all validated civ headers in the entity region (by ID, not consecutive scan)."""
    block = parse_string_table_block(payload)
    entity_classes = entity_class_names(block)
    tables_end = block.payload_offset + block.bytes_consumed

    reader = BinaryReader(BytesIO(payload))
    reader.seek(tables_end)
    StringIndexTable.read(reader)
    index_end = reader.tell()

    entities = catalog_entities(
        payload,
        entity_classes=entity_classes,
        search_start=index_end,
        search_end=search_end,
    )
    first = find_first_entity_offset(
        payload,
        search_start=index_end,
        entity_classes=entity_classes,
    )
    return EntityScanResult(
        string_tables_end=tables_end,
        string_index_end=index_end,
        first_entity_offset=first,
        entities=entities,
        entity_classes=sorted(entity_classes),
    )
