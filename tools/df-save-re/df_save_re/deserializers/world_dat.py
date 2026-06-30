"""world.dat preamble: header, generated raws, and scan helpers toward World data."""

from __future__ import annotations

from dataclasses import dataclass, field
from io import BytesIO

from ..binary_reader import BinaryReader
from .primitives import DfString, WorldHeaderHypothesis


@dataclass
class GeneratedRawSection:
    string_count: int
    strings: list[str]

    @classmethod
    def read(cls, reader: BinaryReader) -> GeneratedRawSection:
        string_count = reader.read_int32()
        if string_count < 0:
            raise ValueError(
                f"negative generated-raw string count {string_count} at 0x{reader.tell() - 4:x}"
            )
        strings = [DfString.read(reader).value for _ in range(string_count)]
        return cls(string_count=string_count, strings=strings)


@dataclass
class GeneratedRawsBlock:
    """List-of-lists written after the DAT world header (Andux generated raws)."""

    section_count: int
    sections: list[GeneratedRawSection] = field(default_factory=list)
    payload_offset: int = 0
    bytes_consumed: int = 0

    @property
    def total_strings(self) -> int:
        return sum(s.string_count for s in self.sections)

    @classmethod
    def read(cls, reader: BinaryReader) -> GeneratedRawsBlock:
        start = reader.tell()
        section_count = reader.read_int32()
        if section_count < 0 or section_count > 10_000:
            raise ValueError(
                f"implausible generated-raw section count {section_count} at 0x{start:x}"
            )
        sections = [GeneratedRawSection.read(reader) for _ in range(section_count)]
        end = reader.tell()
        return cls(
            section_count=section_count,
            sections=sections,
            payload_offset=start,
            bytes_consumed=end - start,
        )


@dataclass
class DatPreamble:
    """Parsed prefix of world.dat before World data (string tables + entity defs TBD)."""

    header: WorldHeaderHypothesis
    generated_raws: GeneratedRawsBlock
    post_raws_int32: int
    payload_offset: int = 0
    bytes_consumed: int = 0

    @property
    def world_data_offset(self) -> int:
        """First byte after preamble — string tables / world data start (partially RE'd)."""
        return self.payload_offset + self.bytes_consumed

    @classmethod
    def read(
        cls,
        reader: BinaryReader,
        *,
        save_version: int | None = None,
    ) -> DatPreamble:
        start = reader.tell()
        header = WorldHeaderHypothesis.read(reader, save_version=save_version)
        generated_raws = GeneratedRawsBlock.read(reader)
        post_raws_int32 = reader.read_int32()
        end = reader.tell()
        return cls(
            header=header,
            generated_raws=generated_raws,
            post_raws_int32=post_raws_int32,
            payload_offset=start,
            bytes_consumed=end - start,
        )


def parse_dat_preamble(payload: bytes, *, save_version: int | None = None) -> DatPreamble:
    reader = BinaryReader(BytesIO(payload))
    return DatPreamble.read(reader, save_version=save_version)
