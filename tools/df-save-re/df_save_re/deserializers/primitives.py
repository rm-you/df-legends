"""Low-level deserialization primitives matching DF 0.47.05 g_src/file_compressorst."""

from __future__ import annotations

from dataclasses import dataclass, field
from typing import Callable, Generic, TypeVar

from ..binary_reader import BinaryReader

T = TypeVar("T")


@dataclass
class DfString:
    """Length-prefixed string (int16 len + bytes). Stored as Latin-1."""

    value: str

    @classmethod
    def read(cls, reader: BinaryReader) -> DfString:
        return cls(value=reader.read_fixed_string())

    def __str__(self) -> str:
        return self.value


def read_int32(reader: BinaryReader) -> int:
    return reader.read_int32()


def read_int16(reader: BinaryReader) -> int:
    return reader.read_int16()


def read_bool(reader: BinaryReader) -> bool:
    return reader.read_bool()


def read_vector(reader: BinaryReader, read_item: Callable[[BinaryReader], T]) -> list[T]:
    """std::vector: int32 count followed by count elements."""
    count = reader.read_int32()
    if count < 0:
        raise ValueError(f"negative vector length {count} at offset 0x{reader.tell() - 4:x}")
    return [read_item(reader) for _ in range(count)]


def read_byte_vector(reader: BinaryReader) -> bytes:
    """Vector of uint8: int32 count then raw bytes (see 0x893ac0 in DF binary)."""
    count = reader.read_int32()
    if count < 0:
        raise ValueError(f"negative byte vector length {count} at offset 0x{reader.tell() - 4:x}")
    if count == 0:
        return b""
    return reader.read_bytes(count)


@dataclass
class BlockWithByteVector:
    """
    Block header pattern discovered at DF 0.47.05 VA 0x893ac0.

    Likely used for region sub-blocks: magic string, int32 field, byte payload.
    """

    magic: DfString
    field_8: int
    payload: bytes

    @classmethod
    def read(cls, reader: BinaryReader) -> BlockWithByteVector:
        magic = DfString.read(reader)
        field_8 = reader.read_int32()
        payload = read_byte_vector(reader)
        return cls(magic=magic, field_8=field_8, payload=payload)


@dataclass
class StringTableEntry:
    """
    String table entry pattern at DF 0.47.05 VA ~0x410670 (0x20-byte heap object).

    Observed field order after vtable init:
      string @+8, int32 @+0x10, int32 @+0x14, int32 @+0x18
    """

    name: DfString
    field_10: int
    field_14: int
    field_18: int

    @classmethod
    def read(cls, reader: BinaryReader) -> StringTableEntry:
        name = DfString.read(reader)
        field_10 = reader.read_int32()
        field_14 = reader.read_int32()
        field_18 = reader.read_int32()
        return cls(name=name, field_10=field_10, field_14=field_14, field_18=field_18)


@dataclass
class MultiStringRecord0x50:
    """
    Paired read/write functions at DF 0.47.05 VA 0x5da000 / 0x5d9ef0.

    Exact semantics TBD — five consecutive strings suggests generated-raw or
    entity-definition bundle. Layout verified from objdump of read_file calls.
    """

    field_0: int  # int16
    string_8: DfString
    field_10: int  # int32
    string_18: DfString
    string_20: DfString
    string_28: DfString
    string_30: DfString
    field_40: int  # int16
    field_42: int  # int16
    field_44: int  # int16
    field_48: int  # int32
    field_4c: int  # int32

    @classmethod
    def read(cls, reader: BinaryReader) -> MultiStringRecord0x50:
        field_0 = reader.read_int16()
        reader.read_bytes(6)  # padding to offset 8 (not touched by game read path)
        return cls(
            field_0=field_0,
            string_8=DfString.read(reader),
            field_10=reader.read_int32(),
            string_18=DfString.read(reader),
            string_20=DfString.read(reader),
            string_28=DfString.read(reader),
            string_30=DfString.read(reader),
            field_40=reader.read_int16(),
            field_42=reader.read_int16(),
            field_44=reader.read_int16(),
            field_48=reader.read_int32(),
            field_4c=reader.read_int32(),
        )


@dataclass
class WorldHeaderHypothesis:
    """
    Hypothesis from Andux WORLD.DAT research (pre-v50, structurally similar in 0.47.x).

    Field names for ID counters are guesses — validate against a real world.dat
    by comparing max IDs to DFHack `df.global.world` values.
    """

    unknown_int16: int
    max_ids: list[int] = field(default_factory=list)  # 23 x int32 in Andux
    has_name: bool = False
    name: DfString | None = None
    post_name_byte: int | None = None
    post_name_int16: int | None = None
    post_name_int32s: list[int] = field(default_factory=list)
    world_name: DfString | None = None

    @classmethod
    def read(cls, reader: BinaryReader, *, id_count: int = 23) -> WorldHeaderHypothesis:
        unknown_int16 = reader.read_int16()
        max_ids = [reader.read_int32() for _ in range(id_count)]
        has_name = reader.read_bool()
        name = DfString.read(reader) if has_name else None
        post_name_byte = reader.read_uint8()
        post_name_int16 = reader.read_int16()
        post_name_int32s = [reader.read_int32() for _ in range(3)]
        world_name = DfString.read(reader)
        return cls(
            unknown_int16=unknown_int16,
            max_ids=max_ids,
            has_name=has_name,
            name=name,
            post_name_byte=post_name_byte,
            post_name_int16=post_name_int16,
            post_name_int32s=post_name_int32s,
            world_name=world_name,
        )

    def id_summary(self) -> dict[str, int]:
        """Tentative labels from Andux (indices 8-9 = histfig/event max)."""
        labels = [
            "unk1", "unk2", "unk3", "unk4_max_civ", "unk5_max_unit",
            "unk6", "unk7", "unk8", "unk9_max_histfig", "unk10_max_event",
            "unk11", "unk12", "unk13", "unk14", "unk15",
            "unk16", "unk17", "unk18", "unk19", "unk20",
            "unk21", "unk22", "unk23",
        ]
        return {
            labels[i] if i < len(labels) else f"unk{i}": v
            for i, v in enumerate(self.max_ids)
        }
