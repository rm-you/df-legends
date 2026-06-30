"""Bytes between generated-raws block and World data — partially RE'd for 0.47.05."""

from __future__ import annotations

from dataclasses import dataclass, field

from ..binary_reader import BinaryReader
from .world_dat import GeneratedRawSection


@dataclass
class PostHeaderRawStream:
    """
    After DatPreamble on 0.47.05 fixtures:

        int32 lead_field          # 426 Namushul, 447 Waterlures (purpose TBD)
        repeat until parse fails:
            int32 string_count
            string_count × DfString

    This continues ITEM/CREATURE/INTERACTION generated-raw chunks (not short name tables).
    On Namushul ~427 sections ending ~0x86d93 before World-data region blocks.
    """

    lead_field: int
    sections: list[GeneratedRawSection] = field(default_factory=list)
    payload_offset: int = 0
    bytes_consumed: int = 0

    @property
    def total_strings(self) -> int:
        return sum(s.string_count for s in self.sections)

    @classmethod
    def read(cls, reader: BinaryReader, *, max_sections: int = 50_000) -> PostHeaderRawStream:
        start = reader.tell()
        lead_field = reader.read_int32()
        sections: list[GeneratedRawSection] = []
        for _ in range(max_sections):
            try:
                sections.append(GeneratedRawSection.read(reader))
            except (EOFError, ValueError):
                break
        end = reader.tell()
        return cls(
            lead_field=lead_field,
            sections=sections,
            payload_offset=start,
            bytes_consumed=end - start,
        )
