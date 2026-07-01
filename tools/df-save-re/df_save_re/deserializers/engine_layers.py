"""Apply the serialization engine + harness to each legends layer.

For every record vector we can anchor (figures, sites, events), run the
self-validating walk and record the result. Where the engine lands exactly on
the next anchor, that layer is deterministically extracted; where it desyncs,
the precise failing offset is recorded for follow-up RE while the authoritative
count (header ``max_ids`` / vector anchor) is still reported.

This module is the bridge between the engine and the existing snapshot: it never
fabricates records it cannot deterministically walk.
"""

from __future__ import annotations

from dataclasses import dataclass
from io import BytesIO
from pathlib import Path

from ..binary_reader import BinaryReader
from .body_skipper import SkipError, default_xml_dir, skip_struct
from .engine_walk import WalkResult, walk_inline_vector, walk_pointer_vector
from .historical_figures import FiguresVectorAnchor, locate_figures_vector
from .primitives import WorldHeaderHypothesis
from .site_vector import locate_sites_vector
from .vector_anchor import anchor_posnull_vector
from .world_header_ids import resolve_site_ceiling
from .world_layout import WorldLayoutLandmarks, resolve_history_search_start


@dataclass
class LayerWalk:
    """Engine walk outcome for one legends layer."""

    layer: str
    element_type: str
    authoritative_count: int | None
    result: WalkResult | None
    note: str

    @property
    def deterministic(self) -> bool:
        return bool(self.result and self.result.ok and self.result.landed_on_anchor)

    @property
    def present_count(self) -> int | None:
        return self.result.present_count if self.result else None

    @property
    def parsed_count(self) -> int | None:
        return self.result.parsed_count if self.result else None

    def to_dict(self) -> dict:
        r = self.result
        return {
            "layer": self.layer,
            "element_type": self.element_type,
            "authoritative_count": self.authoritative_count,
            "deterministic": self.deterministic,
            "declared_count": r.declared_count if r else None,
            "present_count": r.present_count if r else None,
            "parsed_count": r.parsed_count if r else None,
            "vector_offset": hex(r.vector_offset) if r else None,
            "bodies_start": hex(r.bodies_start) if r else None,
            "end_offset": hex(r.end_offset) if r else None,
            "landed_on_anchor": r.landed_on_anchor if r else None,
            "error": r.error if r else None,
            "error_offset": hex(r.error_offset) if r and r.error_offset else None,
            "note": self.note,
        }


def walk_figures_layer(
    payload: bytes,
    header: WorldHeaderHypothesis,
    layout: WorldLayoutLandmarks,
    *,
    xml_dir: Path | None = None,
    anchor: FiguresVectorAnchor | None = None,
) -> LayerWalk:
    """Walk historical_figure bodies; authoritative count from the vector anchor."""
    xml_dir = default_xml_dir() if xml_dir is None else Path(xml_dir)
    max_hf = header.max_ids[8] if len(header.max_ids) > 8 else None

    if anchor is None:
        start = resolve_history_search_start(payload, layout, header)
        if start is not None:
            anchor = locate_figures_vector(payload, header, search_start=start)
    if anchor is None:
        return LayerWalk(
            layer="figures",
            element_type="historical_figure",
            authoritative_count=max_hf,
            result=None,
            note="figures vector not located",
        )

    result = walk_pointer_vector(
        payload,
        vector_offset=anchor.vector_offset,
        element_type="historical_figure",
        next_anchor=anchor.death_events_offset,
        bodies_start=anchor.bodies_start,
        xml_dir=xml_dir,
    )
    authoritative = result.present_count if result else anchor.present_count
    if result.ok and result.landed_on_anchor:
        note = f"deterministic: {result.parsed_count} figure bodies landed on events_death"
    else:
        note = (
            f"vector declared={result.declared_count} present={result.present_count} "
            f"(header max_ids[8]={max_hf} cross-check); "
            f"body walk desynced after {result.parsed_count} at "
            f"{'0x%x' % result.error_offset if result.error_offset else '?'} "
            f"({result.error})"
        )
    return LayerWalk(
        layer="figures",
        element_type="historical_figure",
        authoritative_count=authoritative,
        result=result,
        note=note,
    )


def walk_events_death_layer(
    payload: bytes,
    header: WorldHeaderHypothesis,
    layout: WorldLayoutLandmarks,
    *,
    xml_dir: Path | None = None,
    anchor: FiguresVectorAnchor | None = None,
) -> LayerWalk:
    """Walk the located events_death vector as polymorphic history_event.

    This is the one history_event vector with a confirmed offset, so it is the
    test bed for the polymorphic event reader. The authoritative total event
    count is header max_ids[9]; this walk only covers events_death.
    """
    xml_dir = default_xml_dir() if xml_dir is None else Path(xml_dir)
    max_ev = header.max_ids[9] if len(header.max_ids) > 9 else None

    if anchor is None:
        start = resolve_history_search_start(payload, layout, header)
        if start is not None:
            anchor = locate_figures_vector(payload, header, search_start=start)
    death_off = anchor.death_events_offset if anchor else None
    if death_off is None:
        return LayerWalk(
            layer="events_death",
            element_type="history_event",
            authoritative_count=max_ev,
            result=None,
            note="events_death vector not located",
        )

    result = walk_pointer_vector(
        payload,
        vector_offset=death_off,
        element_type="history_event",
        xml_dir=xml_dir,
    )
    authoritative = result.present_count if result else None
    if result.ok:
        note = f"deterministic: {result.parsed_count} death events walked"
    else:
        note = (
            f"events_death vector present={result.present_count} declared={result.declared_count} "
            f"(header max_ids[9]={max_ev} cross-check); "
            f"events_death polymorphic walk desynced after {result.parsed_count} at "
            f"{'0x%x' % result.error_offset if result.error_offset else '?'} ({result.error})"
        )
    return LayerWalk(
        layer="events_death",
        element_type="history_event",
        authoritative_count=authoritative,
        result=result,
        note=note,
    )


def walk_sites_layer(
    payload: bytes,
    header: WorldHeaderHypothesis,
    layout: WorldLayoutLandmarks,
    *,
    xml_dir: Path | None = None,
) -> LayerWalk:
    """Attempt to locate and walk the world_data.sites vector with the engine.

    Authoritative count is the header-derived site ceiling (max_ids[26]+4). If a
    clean posnull sites vector is found, walk world_site bodies; otherwise record
    that the canonical vector is unlocated (header-derived discovery is used).
    """
    xml_dir = default_xml_dir() if xml_dir is None else Path(xml_dir)
    ceiling = resolve_site_ceiling(header)

    search_start = layout.last_catalog_entity or layout.string_index_end
    search_end = layout.history_stats or layout.payload_size
    anchor = None
    if ceiling and search_start is not None and search_end is not None:
        anchor = locate_sites_vector(
            payload,
            header,
            search_start=search_start,
            search_end=search_end,
            expected_count=ceiling,
        )
    if anchor is None:
        return LayerWalk(
            layer="sites",
            element_type="world_site",
            authoritative_count=ceiling,
            result=None,
            note=(
                f"site ceiling={ceiling} (header max_ids[26]+4); "
                "canonical world_data.sites posnull vector not located — "
                "header-derived discovery used instead"
            ),
        )

    result = walk_pointer_vector(
        payload,
        vector_offset=anchor.vector_offset,
        element_type="world_site",
        next_anchor=None,
        bodies_start=anchor.flags_end,
        xml_dir=xml_dir,
    )
    note = (
        f"deterministic: {result.parsed_count} site bodies walked"
        if result.ok
        else (
            f"site ceiling={ceiling}; sites vector @ 0x{anchor.vector_offset:x} "
            f"body walk desynced after {result.parsed_count} "
            f"({result.error})"
        )
    )
    return LayerWalk(
        layer="sites",
        element_type="world_site",
        authoritative_count=ceiling,
        result=result,
        note=note,
    )


def walk_entities_layer(
    payload: bytes,
    header: WorldHeaderHypothesis,
    layout: WorldLayoutLandmarks,
    first_entity_offset: int | None,
    *,
    xml_dir: Path | None = None,
) -> LayerWalk:
    """Walk consecutive historical_entity bodies from the first entity header.

    Authoritative capacity is header max_ids[4]. Records the desync offset when
    the entity body tail (positions, links, worship) diverges from df-structures.
    """
    xml_dir = default_xml_dir() if xml_dir is None else Path(xml_dir)
    capacity = header.max_ids[4] if len(header.max_ids) > 4 else None
    if first_entity_offset is None:
        return LayerWalk(
            layer="entities",
            element_type="historical_entity",
            authoritative_count=capacity,
            result=None,
            note="first entity header not located",
        )

    reader = BinaryReader(BytesIO(payload))
    reader.seek(first_entity_offset)
    parsed = 0
    error = None
    error_offset = None
    for _ in range(2):  # measure just the first couple bodies for landing signal
        body_start = reader.tell()
        try:
            skip_struct(reader, "historical_entity", xml_dir=xml_dir)
            parsed += 1
        except (SkipError, EOFError, ValueError) as exc:
            error = f"{type(exc).__name__}: {exc}"
            error_offset = body_start
            break
    result = WalkResult(
        element_type="historical_entity",
        vector_offset=first_entity_offset,
        declared_count=capacity or 0,
        present_count=0,
        parsed_count=parsed,
        flags_end=first_entity_offset,
        bodies_start=first_entity_offset,
        end_offset=reader.tell(),
        ok=error is None and parsed >= 1,
        landed_on_anchor=None,
        error=error,
        error_offset=error_offset,
    )
    note = (
        f"entity capacity={capacity} (header max_ids[4]); "
        + (
            f"body walk desynced after {parsed} ({error})"
            if error
            else f"{parsed} entity bodies skipped (no anchor to confirm landing)"
        )
    )
    return LayerWalk(
        layer="entities",
        element_type="historical_entity",
        authoritative_count=capacity,
        result=result,
        note=note,
    )


def _history_tail_bounds(
    payload: bytes,
    layout: WorldLayoutLandmarks,
    header: WorldHeaderHypothesis,
    *,
    max_span: int = 64_000_000,
) -> tuple[int, int]:
    start = resolve_history_search_start(payload, layout, header) or 0
    end = min(len(payload), start + max_span)
    return start, end


def _walk_posnull_layer(
    payload: bytes,
    header: WorldHeaderHypothesis,
    *,
    layer: str,
    element_type: str,
    count: int | None,
    search_start: int,
    search_end: int,
    region: str,
    next_anchor: int | None = None,
    bodies_start: int | None = None,
    xml_dir: Path | None = None,
    on_record=None,
) -> LayerWalk:
    """Generic posnull vector walk for a history-tail layer."""
    xml_dir = default_xml_dir() if xml_dir is None else Path(xml_dir)
    if not count or count <= 0:
        return LayerWalk(
            layer=layer,
            element_type=element_type,
            authoritative_count=count,
            result=None,
            note=f"{layer}: no authoritative count",
        )
    anchor = anchor_posnull_vector(
        payload,
        name=layer,
        count=count,
        search_start=search_start,
        search_end=search_end,
        region=region,
    )
    if anchor is None:
        return LayerWalk(
            layer=layer,
            element_type=element_type,
            authoritative_count=count,
            result=None,
            note=f"{layer}: posnull vector count={count:,} not located in {region}",
        )
    result = walk_pointer_vector(
        payload,
        vector_offset=anchor.payload_offset,
        element_type=element_type,
        next_anchor=next_anchor,
        bodies_start=bodies_start,
        xml_dir=xml_dir,
        on_record=on_record,
        layer=layer,
    )
    note = (
        f"deterministic: {result.parsed_count} {layer} bodies walked"
        if result.ok and (next_anchor is None or result.landed_on_anchor)
        else (
            f"{layer} vector @ 0x{anchor.payload_offset:x} "
            f"walk desynced after {result.parsed_count} ({result.error})"
        )
    )
    return LayerWalk(
        layer=layer,
        element_type=element_type,
        authoritative_count=result.present_count if result else count,
        result=result,
        note=note,
    )


def walk_events_layer(
    payload: bytes,
    header: WorldHeaderHypothesis,
    layout: WorldLayoutLandmarks,
    *,
    xml_dir: Path | None = None,
    figures_anchor: FiguresVectorAnchor | None = None,
) -> LayerWalk:
    """Walk the main events posnull vector (header max_ids[9])."""
    xml_dir = default_xml_dir() if xml_dir is None else Path(xml_dir)
    max_ev = header.max_ids[9] if len(header.max_ids) > 9 else None
    search_start = resolve_history_search_start(payload, layout, header)
    if search_start is None:
        return LayerWalk("events", "history_event", max_ev, None, "history search start unknown")
    if figures_anchor is None:
        figures_anchor = locate_figures_vector(payload, header, search_start=search_start)
    search_end = figures_anchor.vector_offset if figures_anchor else len(payload)
    return _walk_posnull_layer(
        payload,
        header,
        layer="events",
        element_type="history_event",
        count=max_ev,
        search_start=search_start,
        search_end=search_end,
        region="history_gap",
        xml_dir=xml_dir,
    )


def walk_artifacts_layer(
    payload: bytes,
    header: WorldHeaderHypothesis,
    layout: WorldLayoutLandmarks,
    *,
    xml_dir: Path | None = None,
) -> LayerWalk:
    """Attempt artifact_record vector walk in history tail (Ghidra: artifact_recordst)."""
    xml_dir = default_xml_dir() if xml_dir is None else Path(xml_dir)
    search_start, search_end = _history_tail_bounds(payload, layout, header)
    count = header.max_ids[10] if len(header.max_ids) > 10 else None
    if count is None or count <= 0 or count > 500_000:
        return LayerWalk(
            layer="artifacts",
            element_type="artifact_record",
            authoritative_count=count,
            result=None,
            note="artifacts: header max_ids[10] not a plausible vector count",
        )
    return _walk_posnull_layer(
        payload,
        header,
        layer="artifacts",
        element_type="artifact_record",
        count=count,
        search_start=search_start,
        search_end=search_end,
        region="history_tail",
        xml_dir=xml_dir,
    )


def walk_written_content_layer(
    payload: bytes,
    header: WorldHeaderHypothesis,
    layout: WorldLayoutLandmarks,
    *,
    xml_dir: Path | None = None,
) -> LayerWalk:
    xml_dir = default_xml_dir() if xml_dir is None else Path(xml_dir)
    search_start, search_end = _history_tail_bounds(payload, layout, header)
    count = header.max_ids[11] if len(header.max_ids) > 11 else None
    if count is None or count <= 0 or count > 500_000:
        return LayerWalk(
            layer="written_content",
            element_type="written_content",
            authoritative_count=count,
            result=None,
            note="written_content: header max_ids[11] not a plausible vector count",
        )
    return _walk_posnull_layer(
        payload,
        header,
        layer="written_content",
        element_type="written_content",
        count=count,
        search_start=search_start,
        search_end=search_end,
        region="history_tail",
        xml_dir=xml_dir,
    )


def walk_event_collections_layer(
    payload: bytes,
    header: WorldHeaderHypothesis,
    layout: WorldLayoutLandmarks,
    *,
    xml_dir: Path | None = None,
) -> LayerWalk:
    xml_dir = default_xml_dir() if xml_dir is None else Path(xml_dir)
    search_start, search_end = _history_tail_bounds(payload, layout, header)
    count = header.max_ids[12] if len(header.max_ids) > 12 else None
    if count is None or count <= 0 or count > 500_000:
        return LayerWalk(
            layer="event_collections",
            element_type="historical_event_collection",
            authoritative_count=count,
            result=None,
            note="event_collections: header max_ids[12] not a plausible vector count",
        )
    return _walk_posnull_layer(
        payload,
        header,
        layer="event_collections",
        element_type="historical_event_collection",
        count=count,
        search_start=search_start,
        search_end=search_end,
        region="history_tail",
        xml_dir=xml_dir,
    )


def walk_eras_layer(
    payload: bytes,
    header: WorldHeaderHypothesis,
    layout: WorldLayoutLandmarks,
    *,
    xml_dir: Path | None = None,
) -> LayerWalk:
    """Walk inline history_era vector if located."""
    xml_dir = default_xml_dir() if xml_dir is None else Path(xml_dir)
    search_start, search_end = _history_tail_bounds(payload, layout, header, max_span=8_000_000)
    count = header.max_ids[13] if len(header.max_ids) > 13 else None
    if not count or count <= 0 or count > 256:
        return LayerWalk(
            layer="eras",
            element_type="history_era",
            authoritative_count=count,
            result=None,
            note="eras: implausible count for inline vector",
        )
    for offset in range(search_start, search_end - 4, 4):
        declared = int.from_bytes(payload[offset : offset + 4], "little", signed=True)
        if declared != count:
            continue
        result = walk_inline_vector(
            payload,
            vector_offset=offset,
            element_type="history_era",
            xml_dir=xml_dir,
            layer="eras",
        )
        if result.ok:
            return LayerWalk(
                layer="eras",
                element_type="history_era",
                authoritative_count=count,
                result=result,
                note=f"deterministic: {result.parsed_count} era records walked",
            )
    return LayerWalk(
        layer="eras",
        element_type="history_era",
        authoritative_count=count,
        result=None,
        note=f"eras: inline vector count={count} not located",
    )


def summarize_layer_walks(walks: list[LayerWalk]) -> list[str]:
    notes: list[str] = []
    for walk in walks:
        status = "OK" if walk.deterministic else "desync"
        notes.append(f"engine[{walk.layer}] {status}: {walk.note}")
    return notes
