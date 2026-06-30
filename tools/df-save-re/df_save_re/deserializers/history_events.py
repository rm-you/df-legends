"""world_history event layer anchors (DF 0.47.05 Path C RE)."""

from __future__ import annotations

import struct
from dataclasses import dataclass, field

from .historical_figures import FiguresVectorAnchor, locate_figures_vector
from .history_stats import HistoryStatsProbe, probe_history_stats
from .primitives import WorldHeaderHypothesis
from .vector_io import score_posnull_prefix


@dataclass(frozen=True)
class DeathEventsVectorAnchor:
    """Located ``events_death`` posnull vector (count=151 on Namushul)."""

    vector_offset: int
    vector_count: int
    posnull_score: int
    present_count: int


@dataclass(frozen=True)
class HistoryEventsCatalog:
    """
    Anchors for the ``world_history`` event layer.

    On Namushul the counter echo @ ``0x15BEB28`` lists vector sizes
    (events/death/rel/fig) but is **not** the ``events`` pointer vector.
    The ``events_death`` vector sits after figure bodies @ ``0x226009C``.
    """

    stats: HistoryStatsProbe
    event_count: int
    death_events: DeathEventsVectorAnchor | None = None
    figures: FiguresVectorAnchor | None = None
    events_vector_offset: int | None = None
    events_posnull_score: int | None = None
    notes: list[str] = field(default_factory=list)


def locate_death_events_vector(
    payload: bytes,
    *,
    search_start: int,
    search_end: int,
    expected_count: int = 151,
) -> DeathEventsVectorAnchor | None:
    """Find ``events_death`` by count echo + posnull prefix."""
    best: tuple[int, int, int] | None = None  # score, offset, present
    for offset in range(search_start, search_end - 4, 4):
        if struct.unpack_from("<i", payload, offset)[0] != expected_count:
            continue
        sample = payload[offset + 4 : offset + 4 + expected_count]
        if len(sample) < expected_count:
            continue
        score = sum(1 for byte in sample if byte in (0, 1))
        present = sum(1 for byte in sample if byte == 1)
        quality = score / expected_count
        if quality < 0.95:
            continue
        if best is None or score > best[0]:
            best = (score, offset, present)
    if best is None:
        return None
    score, offset, present = best
    return DeathEventsVectorAnchor(
        vector_offset=offset,
        vector_count=expected_count,
        posnull_score=score,
        present_count=present,
    )


def _probe_events_vector(
    payload: bytes,
    *,
    search_start: int,
    search_end: int,
    event_count: int,
) -> tuple[int | None, int | None]:
    """Best-effort scan for ``events`` stl-vector (often absent as clean posnull)."""
    best: tuple[int, int] | None = None  # score, offset
    for offset in range(search_start, search_end - 4, 4):
        if struct.unpack_from("<i", payload, offset)[0] != event_count:
            continue
        score = score_posnull_prefix(payload, offset, sample=min(event_count, 5000))
        if best is None or score > best[0]:
            best = (score, offset)
    if best is None:
        return None, None
    return best[1], best[0]


def build_history_events_catalog(
    payload: bytes,
    header: WorldHeaderHypothesis,
    *,
    search_start: int,
    figures_anchor: FiguresVectorAnchor | None = None,
) -> HistoryEventsCatalog | None:
    stats = probe_history_stats(payload, header)
    if stats is None:
        return None

    event_count = stats.fields.event_counter
    notes = list(stats.notes)
    notes.append(
        "stats echo lists vector sizes; events pointer vector is not at this offset"
    )

    figures = figures_anchor or locate_figures_vector(
        payload,
        header,
        search_start=search_start,
    )
    if figures is not None:
        notes.append(f"figures vector @ 0x{figures.vector_offset:x}")
        if figures.death_events_offset is not None:
            notes.append(f"events_death vector @ 0x{figures.death_events_offset:x}")

    death_events: DeathEventsVectorAnchor | None = None
    if figures is not None and figures.death_events_offset is not None:
        death_events = locate_death_events_vector(
            payload,
            search_start=figures.bodies_start,
            search_end=min(len(payload), figures.death_events_offset + 256),
            expected_count=stats.fields.field_151,
        )
        if death_events is None:
            death_events = DeathEventsVectorAnchor(
                vector_offset=figures.death_events_offset,
                vector_count=stats.fields.field_151,
                posnull_score=score_posnull_prefix(
                    payload,
                    figures.death_events_offset,
                    sample=stats.fields.field_151,
                ),
                present_count=sum(
                    1
                    for b in payload[
                        figures.death_events_offset + 4 : figures.death_events_offset
                        + 4
                        + stats.fields.field_151
                    ]
                    if b == 1
                ),
            )
        notes.append(
            f"events_death present={death_events.present_count}/{death_events.vector_count}"
        )

    events_off, events_score = _probe_events_vector(
        payload,
        search_start=search_start,
        search_end=figures.vector_offset if figures else len(payload),
        event_count=event_count,
    )
    if events_off is not None:
        quality = (events_score or 0) / min(event_count, 5000)
        notes.append(
            f"best events posnull candidate @ 0x{events_off:x} "
            f"(score={events_score:,}, ~{quality:.0%} of sample)"
        )
        if quality >= 0.95:
            notes.append("events vector anchor accepted (high posnull quality)")
        else:
            notes.append(
                "events vector not confirmed — count echo only; "
                "event bodies likely live in pre-stats region blocks"
            )

    if stats.fields.field_4 == 4:
        notes.append("field_4=4 (relationship_event block count echo)")

    return HistoryEventsCatalog(
        stats=stats,
        event_count=event_count,
        death_events=death_events,
        figures=figures,
        events_vector_offset=events_off,
        events_posnull_score=events_score,
        notes=notes,
    )
