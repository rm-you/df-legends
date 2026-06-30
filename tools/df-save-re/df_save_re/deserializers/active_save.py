"""Active save (world.sav) payload sections — stubs for Track B RE."""

from __future__ import annotations

from dataclasses import dataclass

from ..binary_reader import BinaryReader


@dataclass
class WorldHeaderSavHypothesis:
    """
    world.sav world header (Andux WORLD.SAV) — NOT the same as world.dat.

    Andux lists int32 fields Unk1..Unk13+ after the envelope, then beast defs
    and string tables. Field count/names must be confirmed against a real
    world.sav via hexdump + Ghidra.

    See docs/save-formats-0.47.05.md
    """

    fields: list[int]

    @classmethod
    def read(cls, reader: BinaryReader, *, int32_count: int = 13) -> WorldHeaderSavHypothesis:
        return cls(fields=[reader.read_int32() for _ in range(int32_count)])


@dataclass
class GameDataSection:
    """
    Placeholder for the world.sav 'Game data' body (after SAV header + string tables).

    Contains live fort/adventure state and (somewhere within) the same world_history
    graph as world.dat. Entry offset and internal layout TBD.
    """

    raw_offset: int
    note: str = "not yet deserialized"


def probe_world_sav_header(reader: BinaryReader) -> WorldHeaderSavHypothesis:
    """First-pass read of SAV-specific header ints (hypothesis)."""
    return WorldHeaderSavHypothesis.read(reader)
