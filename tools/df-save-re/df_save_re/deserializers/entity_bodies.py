"""Measure historical_entity body spans after validated civ headers."""

from __future__ import annotations

from dataclasses import dataclass
from io import BytesIO
from statistics import median

from ..binary_reader import BinaryReader
from .entity_def import HistoricalEntityHeader
from .language_name import read_entity_language_name


@dataclass(frozen=True)
class EntityBodySample:
    entity_id: int
    entity_class: str
    header_offset: int
    body_start: int
    next_header_offset: int | None
    span_bytes: int | None


@dataclass(frozen=True)
class EntityBodySpanSummary:
    """Gap-to-next-header measurements for catalog civ headers."""

    sample_count: int
    min_span: int
    max_span: int
    median_span: int
    catalog_body_start: int
    catalog_body_end: int
    catalog_span_bytes: int


@dataclass(frozen=True)
class EntityCatalogRegion:
    """
    Bounds of the historical_entity blob region on Namushul-style saves.

    Header scan finds validated civ definition headers (78 on Namushul); the
    header max_ids[4] slot is the next entity id capacity echo (~7949), not
    the number of parsed headers. Region end is the first *START REGION SAVE*.
    """

    header_count: int
    max_catalog_id: int
    header_capacity_hint: int | None
    first_header_offset: int
    last_header_offset: int
    estimated_last_body_end: int
    region_end: int
    catalog_span_bytes: int
    gap_after_catalog_bytes: int


def _body_start_after_header(payload: bytes, ent: HistoricalEntityHeader) -> int:
    body_start = ent.payload_offset + ent.header_bytes
    if ent.has_name:
        reader = BinaryReader(BytesIO(payload))
        reader.seek(body_start)
        read_entity_language_name(reader, has_name=ent.has_name)
        return reader.tell()
    return body_start


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
        body_start = _body_start_after_header(payload, ent)
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


def summarize_entity_body_spans(
    payload: bytes,
    entities: list[HistoricalEntityHeader],
) -> EntityBodySpanSummary | None:
    """Summarize header→next-header gaps for the full entity catalog."""
    ordered = sorted(entities, key=lambda e: e.payload_offset)
    if len(ordered) < 2:
        return None
    spans: list[int] = []
    body_starts: list[int] = []
    for i, ent in enumerate(ordered[:-1]):
        body_start = _body_start_after_header(payload, ent)
        body_starts.append(body_start)
        spans.append(ordered[i + 1].payload_offset - body_start)
    return EntityBodySpanSummary(
        sample_count=len(spans),
        min_span=min(spans),
        max_span=max(spans),
        median_span=int(median(spans)),
        catalog_body_start=body_starts[0],
        catalog_body_end=ordered[-1].payload_offset + ordered[-1].header_bytes,
        catalog_span_bytes=ordered[-1].payload_offset - ordered[0].payload_offset,
    )


def measure_entity_catalog_region(
    payload: bytes,
    entities: list[HistoricalEntityHeader],
    *,
    region_end: int,
    header_capacity_hint: int | None = None,
) -> EntityCatalogRegion | None:
    """Locate entity catalog bounds and skip target before region/world blocks."""
    if not entities:
        return None
    ordered = sorted(entities, key=lambda e: e.payload_offset)
    summary = summarize_entity_body_spans(payload, ordered)
    if summary is None:
        return None
    last = ordered[-1]
    last_body_start = _body_start_after_header(payload, last)
    if len(ordered) >= 2:
        estimated_last_body_end = ordered[-1].payload_offset + (
            ordered[-1].payload_offset - ordered[-2].payload_offset
        )
    else:
        estimated_last_body_end = last_body_start + summary.median_span
    estimated_last_body_end = min(estimated_last_body_end, region_end)
    return EntityCatalogRegion(
        header_count=len(ordered),
        max_catalog_id=max(ent.entity_id for ent in ordered),
        header_capacity_hint=header_capacity_hint,
        first_header_offset=ordered[0].payload_offset,
        last_header_offset=last.payload_offset,
        estimated_last_body_end=estimated_last_body_end,
        region_end=region_end,
        catalog_span_bytes=summary.catalog_span_bytes,
        gap_after_catalog_bytes=max(0, region_end - estimated_last_body_end),
    )


def skip_entity_catalog_region(reader: BinaryReader, region: EntityCatalogRegion) -> int:
    """Seek past the measured entity catalog region (body skipper stub)."""
    reader.seek(region.region_end)
    return reader.tell()
