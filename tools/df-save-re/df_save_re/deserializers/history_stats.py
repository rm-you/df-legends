"""History stats / world_history landmark block (Namushul @ 0x15beb28)."""

from __future__ import annotations

import struct
from dataclasses import dataclass

from .primitives import WorldHeaderHypothesis


@dataclass(frozen=True)
class HistoryStatsFields:
    """First int32 fields at the history stats echo block."""

    event_counter: int
    field_151: int
    field_4: int
    histfig_counter: int
    field_neg1: int
    field_zero: int
    field_12748: int
    field_39583846: int


@dataclass(frozen=True)
class HistoryStatsProbe:
    payload_offset: int
    fields: HistoryStatsFields
    header_matches: bool
    notes: list[str]


def parse_history_stats_fields(payload: bytes, offset: int) -> HistoryStatsFields:
    vals = struct.unpack_from("<8i", payload, offset)
    return HistoryStatsFields(
        event_counter=vals[0],
        field_151=vals[1],
        field_4=vals[2],
        histfig_counter=vals[3],
        field_neg1=vals[4],
        field_zero=vals[5],
        field_12748=vals[6],
        field_39583846=vals[7],
    )


def find_history_stats_offset(
    payload: bytes,
    header: WorldHeaderHypothesis,
    *,
    search_start: int = 0x100000,
) -> int | None:
    if len(header.max_ids) < 10:
        return None
    event_counter = header.max_ids[9]
    histfig_counter = header.max_ids[8]
    needle = struct.pack("<i", event_counter)
    pos = search_start
    while True:
        off = payload.find(needle, pos)
        if off < 0:
            return None
        fig_off = off + 12
        if (
            fig_off + 4 <= len(payload)
            and struct.unpack_from("<i", payload, fig_off)[0] == histfig_counter
        ):
            return off
        pos = off + 4


def probe_history_stats(
    payload: bytes,
    header: WorldHeaderHypothesis,
) -> HistoryStatsProbe | None:
    off = find_history_stats_offset(payload, header)
    if off is None:
        return None
    fields = parse_history_stats_fields(payload, off)
    notes: list[str] = []
    header_matches = (
        fields.event_counter == header.max_ids[9]
        and fields.histfig_counter == header.max_ids[8]
    )
    if header_matches:
        notes.append("event/histfig counters match header max_ids[9]/[8]")
    if fields.field_151 == 151:
        notes.append("field_151=151 (possible events_death or collection count — TBD)")
    if fields.field_4 == 4:
        notes.append("field_4=4 (possible relationship_event block count — TBD)")
    if fields.field_12748 == fields.histfig_counter + 1:
        notes.append("field_12748 = histfig_counter + 1 (next histfig id echo)")
    return HistoryStatsProbe(
        payload_offset=off,
        fields=fields,
        header_matches=header_matches,
        notes=notes,
    )
