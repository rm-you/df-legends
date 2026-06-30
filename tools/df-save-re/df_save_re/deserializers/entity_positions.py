"""Extract historical_entity body fields (worship lists, positions)."""

from __future__ import annotations

from dataclasses import dataclass, field
from io import BytesIO

from ..binary_reader import BinaryReader
from .body_skipper import skip_struct, default_xml_dir
from .entity_def import HistoricalEntityHeader
from .language_name import read_language_name


@dataclass(frozen=True)
class EntityPositionStub:
    position_id: int
    histfig_id: int | None = None


@dataclass
class EntityBodyRecord:
    entity_id: int
    entity_class: str
    payload_offset: int
    body_bytes: int | None = None
    worship_ids: list[int] = field(default_factory=list)
    positions: list[EntityPositionStub] = field(default_factory=list)
    notes: list[str] = field(default_factory=list)


def _body_start(payload: bytes, header: HistoricalEntityHeader) -> int:
    start = header.payload_offset + header.header_bytes
    if header.has_name:
        reader = BinaryReader(BytesIO(payload))
        reader.seek(start)
        read_language_name(reader)
        return reader.tell()
    return start


def measure_entity_body(
    payload: bytes,
    header: HistoricalEntityHeader,
    *,
    next_header_offset: int | None,
) -> EntityBodyRecord:
    """Measure one entity body span; full field parse still open."""
    body_start = _body_start(payload, header)
    body_end = next_header_offset if next_header_offset is not None else len(payload)
    span = max(0, body_end - body_start)
    notes = [f"body span {span:,} bytes @ 0x{body_start:x}"]
    return EntityBodyRecord(
        entity_id=header.entity_id,
        entity_class=header.entity_class,
        payload_offset=header.payload_offset,
        body_bytes=span,
        notes=notes,
    )


def try_skip_entity_body(reader: BinaryReader, *, xml_dir=None) -> int:
    """Skip a full ``historical_entity`` body when catalog headers are available."""
    start = reader.tell()
    skip_struct(reader, "historical_entity", xml_dir=xml_dir or default_xml_dir())
    return reader.tell() - start
