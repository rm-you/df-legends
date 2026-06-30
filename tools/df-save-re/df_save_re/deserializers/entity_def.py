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


def scan_entities(payload: bytes, *, max_entities: int = 100) -> EntityScanResult:
    block = parse_string_table_block(payload)
    entity_classes = set(block.sections[7].names) if len(block.sections) > 7 else set()
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
