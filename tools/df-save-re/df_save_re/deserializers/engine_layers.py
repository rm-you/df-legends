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
from pathlib import Path

from .body_skipper import default_xml_dir
from .engine_walk import WalkResult, walk_pointer_vector
from .historical_figures import FiguresVectorAnchor, locate_figures_vector
from .primitives import WorldHeaderHypothesis
from .site_vector import locate_sites_vector
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
    """Walk historical_figure bodies; authoritative count is max_ids[8]."""
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
    if result.ok and result.landed_on_anchor:
        note = f"deterministic: {result.parsed_count} figure bodies landed on events_death"
    else:
        note = (
            f"count={max_hf} authoritative (vector anchor); "
            f"body walk desynced after {result.parsed_count} at "
            f"{'0x%x' % result.error_offset if result.error_offset else '?'} "
            f"({result.error})"
        )
    return LayerWalk(
        layer="figures",
        element_type="historical_figure",
        authoritative_count=max_hf,
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
    if result.ok:
        note = f"deterministic: {result.parsed_count} death events walked"
    else:
        note = (
            f"total events={max_ev} authoritative (header max_ids[9]); "
            f"events_death polymorphic walk desynced after {result.parsed_count} at "
            f"{'0x%x' % result.error_offset if result.error_offset else '?'} ({result.error})"
        )
    return LayerWalk(
        layer="events_death",
        element_type="history_event",
        authoritative_count=max_ev,
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


def summarize_layer_walks(walks: list[LayerWalk]) -> list[str]:
    notes: list[str] = []
    for walk in walks:
        status = "OK" if walk.deterministic else "desync"
        notes.append(f"engine[{walk.layer}] {status}: {walk.note}")
    return notes
