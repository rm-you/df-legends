"""History / legends structures — hypotheses from df-structures + binary RE."""

from __future__ import annotations

from dataclasses import dataclass
from enum import IntEnum
from typing import Callable

from ..binary_reader import BinaryReader
from .primitives import DfString


class HistoryEventType(IntEnum):
    """Subset of history_event_type enum (df.history_event.xml). Values are sequential from 0."""

    WAR_ATTACKED_SITE = 0
    WAR_DESTROYED_SITE = 1
    CREATED_SITE = 2
    HIST_FIGURE_DIED = 3


@dataclass
class HistoryEventBase:
    """
    Base fields for history_event (df-structures).

    class-type history_event fields before virtual-methods:
      year, seconds, flags (BitArray), id
    """

    year: int
    seconds: int
    flags: list[int]
    id: int

    @classmethod
    def read(cls, reader: BinaryReader) -> HistoryEventBase:
        year = reader.read_int32()
        seconds = reader.read_int32()
        flags = _read_flagarray(reader)
        event_id = reader.read_int32()
        return cls(year=year, seconds=seconds, flags=flags, id=event_id)


@dataclass
class HistoryEventCreatedSite(HistoryEventBase):
    civ: int
    site_civ: int
    resident_civ_id: int
    site: int
    builder_hf: int

    @classmethod
    def read(cls, reader: BinaryReader) -> HistoryEventCreatedSite:
        base = HistoryEventBase.read(reader)
        return cls(
            year=base.year,
            seconds=base.seconds,
            flags=base.flags,
            id=base.id,
            civ=reader.read_int32(),
            site_civ=reader.read_int32(),
            resident_civ_id=reader.read_int32(),
            site=reader.read_int32(),
            builder_hf=reader.read_int32(),
        )


def _read_flagarray(reader: BinaryReader) -> list[int]:
    """Hypothesis: int32 count + count × int32 indices. Validate with real saves."""
    count = reader.read_int32()
    if count < 0 or count > 64:
        raise ValueError(f"implausible flagarray count {count} at 0x{reader.tell() - 4:x}")
    return [reader.read_int32() for _ in range(count)]


def read_posnull_bool(reader: BinaryReader) -> bool:
    """Matches file_compressorst::load_posnull_pointer() return value (bool in AL)."""
    return reader.read_bool()


_EVENT_READERS: dict[int, Callable[[BinaryReader], HistoryEventBase]] = {
    int(HistoryEventType.CREATED_SITE): HistoryEventCreatedSite.read,
}


def read_polymorphic_history_event(reader: BinaryReader) -> HistoryEventBase:
    """
    Hypothesis for history_event factory (@ ~0x40ebc0 in DF 0.47.05).

    Expected sequence (TBD — confirm in Ghidra):
      1. load_posnull_pointer() — if false, null entry in pointer vector
      2. int16 or int32 history_event_type tag
      3. subclass read_file() including base fields
    """
    if not read_posnull_bool(reader):
        raise ValueError("null history_event pointer in non-optional context")
    event_type = reader.read_int16()
    handler = _EVENT_READERS.get(event_type, HistoryEventBase.read)
    return handler(reader)
