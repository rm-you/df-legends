"""Measure historical_entity body spans after validated civ headers."""

from __future__ import annotations

from dataclasses import dataclass
from io import BytesIO

from ..binary_reader import BinaryReader
from .entity_def import HistoricalEntityHeader
from .language_name import read_language_name


@dataclass(frozen=True)
class EntityBodySample:
    entity_id: int
    entity_class: str
    header_offset: int
    body_start: int
    next_header_offset: int | None
    span_bytes: int | None


def sample_entity_body_spans(
    payload: bytes,
    entities: list[HistoricalEntityHeader],
    *,
    max_samples: int = 10,
) -> list[EntityBodySample]:
    """Estimate body size as gap to next catalog header (ordered by offset)."""
    ordered = sorted(entities, key=lambda e: e.payload_offset)
    samples: list[EntityBodySample] = []
    for i, ent in enumerate(ordered[:max_samples]):
        body_start = ent.payload_offset + ent.header_bytes
        if ent.has_name:
            reader = BinaryReader(BytesIO(payload))
            reader.seek(body_start)
            try:
                name = read_language_name(reader)
                body_start = reader.tell()
            except (EOFError, ValueError):
                pass
        next_off = ordered[i + 1].payload_offset if i + 1 < len(ordered) else None
        span = None if next_off is None else next_off - body_start
        samples.append(
            EntityBodySample(
                entity_id=ent.entity_id,
                entity_class=ent.entity_class,
                header_offset=ent.payload_offset,
                body_start=body_start,
                next_header_offset=next_off,
                span_bytes=span,
            )
        )
    return samples
