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


def summarize_layer_walks(walks: list[LayerWalk]) -> list[str]:
    notes: list[str] = []
    for walk in walks:
        status = "OK" if walk.deterministic else "desync"
        notes.append(f"engine[{walk.layer}] {status}: {walk.note}")
    return notes
