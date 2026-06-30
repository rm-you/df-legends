"""Unified stl-vector anchor discovery (DF 0.47.05 Path C RE)."""

from __future__ import annotations

import struct
from dataclasses import dataclass

from .historical_figures import locate_figures_vector
from .history_events import locate_death_events_vector
from .primitives import WorldHeaderHypothesis
from .vector_io import score_posnull_prefix
from .vector_probe import find_posnull_vector_candidates


@dataclass(frozen=True)
class VectorAnchor:
    name: str
    payload_offset: int
    count: int
    posnull_score: int
    present_count: int
    region: str
    notes: list[str]


def anchor_posnull_vector(
    payload: bytes,
    *,
    name: str,
    count: int,
    search_start: int,
    search_end: int,
    region: str,
    min_quality: float = 0.95,
    sample: int | None = None,
) -> VectorAnchor | None:
    sample = min(count, sample or 5000)
    min_score = int(sample * min_quality)
    hits = find_posnull_vector_candidates(
        payload,
        count=count,
        search_start=search_start,
        search_end=search_end,
        region=region,
        min_score=min_score,
        max_hits=1,
    )
    if not hits:
        return None
    hit = hits[0]
    present = sum(
        1
        for b in payload[hit.payload_offset + 4 : hit.payload_offset + 4 + min(count, 512)]
        if b == 1
    )
    return VectorAnchor(
        name=name,
        payload_offset=hit.payload_offset,
        count=count,
        posnull_score=hit.posnull_score,
        present_count=present,
        region=region,
        notes=[f"posnull sample {hit.posnull_score}/{sample}"],
    )


def anchor_history_vectors(
    payload: bytes,
    header: WorldHeaderHypothesis,
    *,
    stats_offset: int,
    payload_end: int,
) -> list[VectorAnchor]:
    """Locate known history tail vectors (figures, events_death)."""
    anchors: list[VectorAnchor] = []
    fig = locate_figures_vector(payload, header, search_start=stats_offset)
    if fig is not None:
        anchors.append(
            VectorAnchor(
                name="figures",
                payload_offset=fig.vector_offset,
                count=fig.vector_count,
                posnull_score=fig.posnull_score,
                present_count=fig.present_count,
                region="history_tail",
                notes=list(fig.notes),
            )
        )
        if fig.death_events_offset is not None:
            death = locate_death_events_vector(
                payload,
                search_start=fig.bodies_start,
                search_end=min(payload_end, fig.death_events_offset + 256),
            )
            if death is not None:
                anchors.append(
                    VectorAnchor(
                        name="events_death",
                        payload_offset=death.vector_offset,
                        count=death.vector_count,
                        posnull_score=death.posnull_score,
                        present_count=death.present_count,
                        region="history_tail",
                        notes=[],
                    )
                )
    if len(header.max_ids) > 9:
        ev = anchor_posnull_vector(
            payload,
            name="events",
            count=header.max_ids[9],
            search_start=stats_offset,
            search_end=fig.vector_offset if fig else payload_end,
            region="history_gap",
            min_quality=0.95,
        )
        if ev is not None:
            anchors.append(ev)
    return anchors


def read_vector_present_count(payload: bytes, offset: int, count: int) -> int:
    flags = payload[offset + 4 : offset + 4 + count]
    return sum(1 for b in flags if b != 0)


def validate_posnull_at(payload: bytes, offset: int, count: int, *, min_quality: float = 0.95) -> bool:
    sample = min(count, 5000)
    score = score_posnull_prefix(payload, offset, sample=sample)
    return score >= int(sample * min_quality)
