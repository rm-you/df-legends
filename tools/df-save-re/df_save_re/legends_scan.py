"""Heuristic scans toward world_history and legends-relevant regions in saves."""

from __future__ import annotations

import struct
from dataclasses import dataclass, field

from .deserializers.primitives import WorldHeaderHypothesis
from .deserializers.string_tables import find_string_table_block
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


@dataclass(frozen=True)
class HistoryAnchorCandidate:
    """Heuristic world_history landmark — needs confirmation via XML or event parse."""

    payload_offset: int
    event_count: int
    histfig_count_nearby: int | None
    nearby_offset: int | None
    posnull_score: int


@dataclass
class LegendsScanReport:
    preamble_end: int
    post_raws_int32: int
    post_header_lead: int | None = None
    post_header_sections: int | None = None
    post_header_end: int | None = None
    string_tables_offset: int | None = None
    string_tables_sections: int | None = None
    string_tables_end: int | None = None
    first_region_marker: int | None = None
    history_anchor: HistoryAnchorCandidate | None = None
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


def _posnull_prefix_score(payload: bytes, offset: int, *, sample: int = 5000) -> int:
    start = offset + 4
    end = min(len(payload), start + sample)
    chunk = payload[start:end]
    return sum(1 for b in chunk if b in (0, 1))


def find_history_anchor(
    payload: bytes,
    header: WorldHeaderHypothesis,
    *,
    start: int,
) -> HistoryAnchorCandidate | None:
    """Find int32 event-count with nearby histfig count and posnull-like vector prefix."""
    if len(header.max_ids) < 10:
        return None
    event_count = header.max_ids[9]
    fig_count = header.max_ids[8]
    needle = struct.pack("<i", event_count)
    best: HistoryAnchorCandidate | None = None
    pos = start
    while True:
        off = payload.find(needle, pos)
        if off < 0:
            break
        score = _posnull_prefix_score(payload, off)
        nearby: int | None = None
        nearby_val: int | None = None
        for delta in range(-64, 65, 4):
            o2 = off + delta
            if o2 < 0 or o2 + 4 > len(payload):
                continue
            if struct.unpack_from("<i", payload, o2)[0] == fig_count:
                nearby = o2
                nearby_val = fig_count
                break
        if score >= 2500 and nearby is not None:
            cand = HistoryAnchorCandidate(
                payload_offset=off,
                event_count=event_count,
                histfig_count_nearby=nearby_val,
                nearby_offset=nearby,
                posnull_score=score,
            )
            if best is None or score > best.posnull_score:
                best = cand
        pos = off + 4
    return best


def scan_legends_region(
    payload: bytes,
    *,
    preamble_end: int,
    post_raws_int32: int,
    header: WorldHeaderHypothesis,
    post_header_lead: int | None = None,
    post_header_sections: int | None = None,
    post_header_end: int | None = None,
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
        f"preamble ends @ 0x{preamble_end:x}; post_raws int32={post_raws_int32}"
    )
    if post_header_sections is not None:
        notes.append(
            f"post-header raw stream: lead={post_header_lead}, "
            f"{post_header_sections} sections ending @ 0x{post_header_end:x}"
        )
    if first_region is not None:
        gap = first_region - preamble_end
        notes.append(
            f"first *START REGION* substring @ 0x{first_region:x} ({gap:,} bytes after preamble; "
            f"may appear inside generated raws — validate with BlockWithByteVector)"
        )

    string_tables_offset = find_string_table_block(payload, start=preamble_end)
    string_tables_sections: int | None = None
    string_tables_end: int | None = None
    if string_tables_offset is not None:
        try:
            from io import BytesIO

            from .binary_reader import BinaryReader
            from .deserializers.string_tables import StringTableBlock

            reader = BinaryReader(BytesIO(payload))
            reader.seek(string_tables_offset)
            block = StringTableBlock.read(reader)
            string_tables_sections = block.section_count
            string_tables_end = reader.tell()
            notes.append(
                f"short-name string tables @ 0x{string_tables_offset:x}: "
                f"{block.section_count} sections, {block.total_names:,} names, "
                f"ends @ 0x{string_tables_end:x}"
            )
            if block.sections:
                first = block.sections[0]
                notes.append(
                    f"  materials table: {first.entry_count} entries "
                    f"({first.names[0]!r} … {first.names[-1]!r})"
                )
        except (EOFError, ValueError) as exc:
            notes.append(f"string tables @ 0x{string_tables_offset:x}: parse partial ({exc})")

    anchor_start = string_tables_end or post_header_end or preamble_end
    anchor = find_history_anchor(payload, header, start=anchor_start)
    if anchor:
        notes.append(
            f"history anchor candidate @ 0x{anchor.payload_offset:x} "
            f"(events={anchor.event_count:,}, fig nearby @ 0x{anchor.nearby_offset:x}, "
            f"posnull_score={anchor.posnull_score})"
        )
        if string_tables_end is not None:
            gap = anchor.payload_offset - string_tables_end
            notes.append(
                f"  {gap:,} bytes after string tables (awaiting legends XML to confirm)"
            )

    histfig_hits = [h for h in id_hits if h.index == 8]
    event_hits = [h for h in id_hits if h.index == 9]
    notes.append(
        f"payload int32 hits: max_histfig={len(histfig_hits)}, max_event={len(event_hits)}"
    )

    return LegendsScanReport(
        preamble_end=preamble_end,
        post_raws_int32=post_raws_int32,
        post_header_lead=post_header_lead,
        post_header_sections=post_header_sections,
        post_header_end=post_header_end,
        string_tables_offset=string_tables_offset,
        string_tables_sections=string_tables_sections,
        string_tables_end=string_tables_end,
        first_region_marker=first_region,
        history_anchor=anchor,
        id_counter_hits=id_hits[:50],
        notes=notes,
    )
