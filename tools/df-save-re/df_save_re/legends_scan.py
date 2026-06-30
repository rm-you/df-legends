"""Heuristic scans toward world_history and legends-relevant regions in saves."""

from __future__ import annotations

import struct
from dataclasses import dataclass, field

from .deserializers.primitives import WorldHeaderHypothesis
from .scan import REGION_BLOCK_MARKERS, find_markers

ID_COUNTER_LABELS = {
    8: "max_histfig",
    9: "max_event",
}


@dataclass(frozen=True)
class IdCounterHit:
    index: int
    label: str
    value: int
    payload_offset: int


@dataclass
class LegendsScanReport:
    preamble_end: int
    post_raws_int32: int
    first_region_marker: int | None
    id_counter_hits: list[IdCounterHit] = field(default_factory=list)
    notes: list[str] = field(default_factory=list)


def find_id_counter_hits(
    payload: bytes,
    header: WorldHeaderHypothesis,
    *,
    start: int = 0,
    end: int | None = None,
    indices: tuple[int, ...] = (8, 9),
) -> list[IdCounterHit]:
    """Find int32 values matching header ID counters (landmarks for world_history RE)."""
    end = len(payload) if end is None else end
    hits: list[IdCounterHit] = []
    for idx in indices:
        if idx >= len(header.max_ids):
            continue
        value = header.max_ids[idx]
        needle = struct.pack("<i", value)
        label = ID_COUNTER_LABELS.get(idx, f"max_ids[{idx}]")
        pos = start
        while True:
            off = payload.find(needle, pos, end)
            if off < 0:
                break
            hits.append(
                IdCounterHit(index=idx, label=label, value=value, payload_offset=off)
            )
            pos = off + 4
    hits.sort(key=lambda h: h.payload_offset)
    return hits


def scan_legends_region(
    payload: bytes,
    *,
    preamble_end: int,
    post_raws_int32: int,
    header: WorldHeaderHypothesis,
) -> LegendsScanReport:
    region_hits = find_markers(payload, REGION_BLOCK_MARKERS)
    first_region = region_hits[0].payload_offset if region_hits else None

    # ID counter echoes are sparse; search from preamble onward (exclude header itself).
    id_hits = find_id_counter_hits(
        payload,
        header,
        start=preamble_end,
    )

    notes: list[str] = []
    notes.append(
        f"preamble ends @ 0x{preamble_end:x}; post_raws int32={post_raws_int32} "
        f"(string-table / item-def bridge — format TBD)"
    )
    if first_region is not None:
        gap = first_region - preamble_end
        notes.append(
            f"first region block marker @ 0x{first_region:x} ({gap:,} bytes after preamble)"
        )

    histfig_hits = [h for h in id_hits if h.index == 8]
    event_hits = [h for h in id_hits if h.index == 9]
    notes.append(
        f"payload int32 hits: max_histfig={len(histfig_hits)}, max_event={len(event_hits)} "
        "(many are coincidental — need vector context to confirm world_history)"
    )

    return LegendsScanReport(
        preamble_end=preamble_end,
        post_raws_int32=post_raws_int32,
        first_region_marker=first_region,
        id_counter_hits=id_hits[:50],
        notes=notes,
    )
