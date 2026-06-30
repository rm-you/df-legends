"""Heuristic scans for stl-vector anchors in world.dat payloads."""

from __future__ import annotations

import struct
from dataclasses import dataclass

from .vector_io import score_posnull_prefix


@dataclass(frozen=True)
class VectorAnchorCandidate:
    payload_offset: int
    count: int
    posnull_score: int
    present_flags_sample: int
    region: str


def find_posnull_vector_candidates(
    payload: bytes,
    *,
    count: int,
    search_start: int,
    search_end: int,
    region: str,
    min_score: int | None = None,
    max_hits: int = 20,
) -> list[VectorAnchorCandidate]:
    """Find int32 count values with posnull-like bool prefixes."""
    if min_score is None:
        min_score = min(count, 4000) * 85 // 100
    hits: list[VectorAnchorCandidate] = []
    for off in range(search_start, search_end - 4, 4):
        if struct.unpack_from("<i", payload, off)[0] != count:
            continue
        score = score_posnull_prefix(payload, off, sample=min(count, 5000))
        if score < min_score:
            continue
        sample_end = min(len(payload), off + 4 + min(count, 512))
        flags = payload[off + 4 : sample_end]
        present = sum(1 for b in flags if b == 1)
        hits.append(
            VectorAnchorCandidate(
                payload_offset=off,
                count=count,
                posnull_score=score,
                present_flags_sample=present,
                region=region,
            )
        )
    hits.sort(key=lambda h: (-h.posnull_score, h.payload_offset))
    return hits[:max_hits]
