"""Fixed-stride site title table discovery (Namushul cluster ~354 bytes)."""

from __future__ import annotations

from collections import Counter
from dataclasses import dataclass

from .site_catalog import WorldSiteBinaryRecord, WorldSiteCatalog, infer_name_table_layout
from .site_id_catalog import _name_fingerprint_at
from .site_names import SiteNameMarker
from .string_tables import StringTableBlock


@dataclass(frozen=True)
class StrideTableLayout:
    record_base: int
    record_stride: int
    base_site_id: int
    score: int


def _word_indices(raw: tuple[int, ...]) -> tuple[int, ...]:
    return tuple(w for w in raw if w > 0)


def read_stride_slot_name(
    payload: bytes,
    *,
    record_start: int,
    record_size: int,
    words: list[str],
) -> tuple[str, tuple[int, ...], int] | None:
    """Find the best ``language_name.words`` fingerprint inside one stride record."""
    best: tuple[int, str, tuple[int, ...], int] | None = None
    max_word_index = len(words)
    for delta in range(0, record_size, 4):
        off = record_start + delta
        parsed = _name_fingerprint_at(
            payload,
            off,
            words=words,
            max_word_index=max_word_index,
        )
        if parsed is None:
            continue
        name, display = parsed
        indices = _word_indices(tuple(name.words))
        score = len(display) + len(indices) * 5
        if best is None or score > best[0]:
            best = (score, display, indices, off)
    if best is None:
        return None
    _, display, indices, off = best
    return display, indices, off


def _infer_stride_from_markers(markers: list[SiteNameMarker]) -> int | None:
    by_id = {marker.site_id: marker for marker in markers}
    gaps: list[int] = []
    for marker in markers:
        for delta in (1, -1):
            neighbor = by_id.get(marker.site_id + delta)
            if neighbor is None:
                continue
            gap = abs(neighbor.payload_offset - marker.payload_offset)
            if 300 <= gap <= 400:
                gaps.append(gap)
    if not gaps:
        return None
    stride, count = Counter(gaps).most_common(1)[0]
    return stride if count >= 2 else None


def _score_layout(
    payload: bytes,
    *,
    record_base: int,
    record_stride: int,
    base_site_id: int,
    max_site_id: int,
    words: list[str],
    search_start: int,
    search_end: int,
) -> int:
    hits = 0
    for site_id in range(max(0, max_site_id - 32), max_site_id + 1):
        rec_start = record_base + (site_id - base_site_id) * record_stride
        if rec_start < search_start or rec_start + record_stride > search_end:
            continue
        if read_stride_slot_name(
            payload,
            record_start=rec_start,
            record_size=record_stride,
            words=words,
        ):
            hits += 1
    return hits


def _layout_from_marker_alignment(
    markers: list[SiteNameMarker],
    *,
    stride: int,
) -> StrideTableLayout | None:
    """Align all markers to one arithmetic progression (most reliable on Namushul)."""
    if len(markers) < 4:
        return None
    best: StrideTableLayout | None = None
    for anchor in sorted(markers, key=lambda marker: marker.site_id, reverse=True)[:16]:
        for base_site_id in range(max(0, anchor.site_id - 64), anchor.site_id + 1):
            record_base = anchor.payload_offset - (anchor.site_id - base_site_id) * stride
            score = 0
            for marker in markers:
                expected = record_base + (marker.site_id - base_site_id) * stride
                if abs(marker.payload_offset - expected) <= 28:
                    score += 1
            if score < max(4, len(markers) // 4):
                continue
            layout = StrideTableLayout(record_base, stride, base_site_id, score)
            if best is None or layout.score > best.score:
                best = layout
    return best


def _discover_cluster_band_layout(
    payload: bytes,
    *,
    search_start: int,
    search_end: int,
    max_site_id: int,
    words: list[str],
    stride: int = 354,
) -> StrideTableLayout | None:
    """
    Locate the late-id fixed-stride title cluster (Namushul: ~0x1194000, stride 354).

    Scans a narrow band where clustered site titles are stored, independent of id-field hits.
    """
    lo = max(search_start, 0x1190000)
    hi = min(search_end, 0x11B0000)
    if lo >= hi:
        return None

    valid: list[tuple[int, str]] = []
    for rec_start in range(lo, hi, stride):
        parsed = read_stride_slot_name(
            payload,
            record_start=rec_start,
            record_size=stride,
            words=words,
        )
        if parsed:
            valid.append((rec_start, parsed[0]))

    if len(valid) < 8:
        return None

    # Prefer the densest run of consecutive stride slots.
    best_run: tuple[int, int, int] | None = None  # start_idx, length, end_offset
    run_start = 0
    for idx in range(1, len(valid) + 1):
        if idx < len(valid) and valid[idx][0] - valid[idx - 1][0] == stride:
            continue
        run_len = idx - run_start
        if best_run is None or run_len > best_run[1]:
            best_run = (run_start, run_len, valid[idx - 1][0])
        run_start = idx

    if best_run is None or best_run[1] < 8:
        return None

    start_idx, run_len, end_offset = best_run
    record_base = valid[start_idx][0]
    end_site_id = max_site_id
    base_site_id = end_site_id - (run_len - 1)
    if base_site_id < 0:
        base_site_id = 0
        record_base = end_offset - (end_site_id - base_site_id) * stride

    return StrideTableLayout(
        record_base=record_base,
        record_stride=stride,
        base_site_id=base_site_id,
        score=run_len,
    )


def discover_stride_table_layout(
    payload: bytes,
    *,
    markers: list[SiteNameMarker],
    search_start: int,
    search_end: int,
    max_site_id: int,
    words: list[str],
) -> StrideTableLayout | None:
    """
    Infer ``record_base + (site_id - base_site_id) * stride`` from clustered markers.

    Uses marker clustering first, then marker-anchored alignment (fast; no full-range scan).
    """
    if not markers:
        band = _discover_cluster_band_layout(
            payload,
            search_start=search_start,
            search_end=search_end,
            max_site_id=max_site_id,
            words=words,
        )
        return band

    aligned = _layout_from_marker_alignment(markers, stride=354)
    if aligned is not None and aligned.score >= 6:
        return aligned

    band = _discover_cluster_band_layout(
        payload,
        search_start=search_start,
        search_end=search_end,
        max_site_id=max_site_id,
        words=words,
    )
    if band is not None:
        return band

    table_base, table_stride = infer_name_table_layout(markers)
    candidate_strides = [s for s in (table_stride, _infer_stride_from_markers(markers), 354) if s]
    seen_strides: list[int] = []
    for stride in candidate_strides:
        if stride not in seen_strides:
            seen_strides.append(stride)

    best: StrideTableLayout | None = None
    anchor_markers = sorted(markers, key=lambda marker: marker.site_id, reverse=True)[:24]

    if table_base is not None and table_stride is not None:
        cluster = sorted(
            (m for m in markers if abs(m.payload_offset - table_base) <= table_stride * 32),
            key=lambda m: m.site_id,
        )
        for stride in seen_strides:
            for anchor in cluster or anchor_markers:
                for base_site_id in range(max(0, anchor.site_id - 32), anchor.site_id + 1):
                    record_base = table_base + (anchor.site_id - base_site_id) * stride
                    score = _score_layout(
                        payload,
                        record_base=record_base,
                        record_stride=stride,
                        base_site_id=base_site_id,
                        max_site_id=max_site_id,
                        words=words,
                        search_start=search_start,
                        search_end=search_end,
                    )
                    if score < 8:
                        continue
                    layout = StrideTableLayout(record_base, stride, base_site_id, score)
                    if best is None or layout.score > best.score:
                        best = layout

    for stride in seen_strides:
        for anchor in anchor_markers:
            for base_site_id in range(max(0, anchor.site_id - 32), anchor.site_id + 1):
                record_base = anchor.payload_offset - (anchor.site_id - base_site_id) * stride
                if record_base < search_start:
                    continue
                score = _score_layout(
                    payload,
                    record_base=record_base,
                    record_stride=stride,
                    base_site_id=base_site_id,
                    max_site_id=max_site_id,
                    words=words,
                    search_start=search_start,
                    search_end=search_end,
                )
                if score < 8:
                    continue
                layout = StrideTableLayout(record_base, stride, base_site_id, score)
                if best is None or layout.score > best.score:
                    best = layout

    return best


def expand_catalog_from_stride_table(
    payload: bytes,
    catalog: WorldSiteCatalog,
    *,
    block: StringTableBlock,
    layout: StrideTableLayout,
    max_site_id: int,
) -> WorldSiteCatalog:
    """Fill missing site ids from a discovered fixed-stride name table."""
    words = block.sections[8].names if len(block.sections) > 8 else []
    by_id = catalog.by_id()
    records = list(catalog.records)

    for site_id in range(max_site_id + 1):
        if site_id in by_id:
            continue
        rec_start = layout.record_base + (site_id - layout.base_site_id) * layout.record_stride
        if rec_start < 0 or rec_start + layout.record_stride > len(payload):
            continue
        parsed = read_stride_slot_name(
            payload,
            record_start=rec_start,
            record_size=layout.record_stride,
            words=words,
        )
        if parsed is None:
            continue
        display, indices, marker_off = parsed
        records.append(
            WorldSiteBinaryRecord(
                site_id=site_id,
                display_name=display,
                word_indices=indices,
                name_marker_offset=marker_off,
                header_offset=rec_start,
            )
        )

    records.sort(key=lambda rec: rec.site_id)
    return WorldSiteCatalog(
        records=records,
        name_table_base=layout.record_base,
        name_table_stride=layout.record_stride,
        search_start=catalog.search_start,
        search_end=catalog.search_end,
    )


def stride_table_notes(layout: StrideTableLayout | None, *, added: int) -> list[str]:
    if layout is None:
        return []
    return [
        f"stride name table @ 0x{layout.record_base:x} "
        f"stride {layout.record_stride} base_site_id {layout.base_site_id} "
        f"(+{added} sites)"
    ]
