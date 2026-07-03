"""Active save (world.sav) preamble — Track B RE for DF 0.47.05."""

from __future__ import annotations

from dataclasses import dataclass, field
from io import BytesIO

from ..binary_reader import BinaryReader
from .primitives import DfString, WorldHeaderHypothesis
from .string_tables import find_string_table_block, parse_string_table_block, StringTableBlock
from .world_dat import GeneratedRawsBlock

SAV_HEADER_INT32_COUNT = 13
GAMEMODE_FORTRESS = 0
GAMEMODE_ADVENTURER = 1


@dataclass
class WorldHeaderSavHypothesis:
    """
    world.sav world header (Andux WORLD.SAV) — NOT the same as world.dat.

    0.47.05 Ironhand fixture: 13 int32 counters after the envelope, then a
    fixed-size metadata blob, gamemode, GameName, WorldName, generated-raw
    lead int32, and a short generated-raw prefix before the main game-data
    stream and string tables.

    Older Andux docs list 21 int32 fields; treat extra ints as part of the
    metadata blob until confirmed on more fixtures.
    """

    fields: list[int]

    @classmethod
    def read(cls, reader: BinaryReader, *, int32_count: int = SAV_HEADER_INT32_COUNT) -> WorldHeaderSavHypothesis:
        return cls(fields=[reader.read_int32() for _ in range(int32_count)])


@dataclass
class SavPreamble:
    """Parsed prefix of world.sav before Game data (string tables + entities)."""

    sav_header: WorldHeaderSavHypothesis
    metadata_blob: bytes
    gamemode: int
    game_name: str
    world_name: str
    generated_raws_lead: int
    header: WorldHeaderHypothesis
    payload_offset: int = 0
    bytes_consumed: int = 0
    string_tables_offset: int | None = None
    game_data_offset: int | None = None
    generated_raws_prefix: GeneratedRawsBlock | None = None
    string_tables: StringTableBlock | None = None

    @property
    def post_raws_int32(self) -> int:
        """DAT-compatible alias for scan helpers."""
        return self.generated_raws_lead

    @property
    def world_data_offset(self) -> int:
        """Alias for shared DAT/SAV call sites."""
        if self.game_data_offset is None:
            raise ValueError("SAV preamble missing game_data_offset")
        return self.game_data_offset

    @classmethod
    def read(
        cls,
        reader: BinaryReader,
        *,
        payload: bytes,
        save_version: int | None = None,
    ) -> SavPreamble:
        start = reader.tell()
        sav_header = WorldHeaderSavHypothesis.read(reader)
        blob_start = reader.tell()

        gamemode_offset = _find_gamemode_offset(payload, blob_start)
        metadata_blob = payload[blob_start:gamemode_offset]

        reader.seek(gamemode_offset)
        gamemode = reader.read_int16()
        if gamemode not in (GAMEMODE_FORTRESS, GAMEMODE_ADVENTURER):
            raise ValueError(
                f"implausible gamemode {gamemode} at 0x{gamemode_offset + 52:x} "
                f"(expected 0=fortress or 1=adventure)"
            )
        game_name = DfString.read(reader).value
        world_name = DfString.read(reader).value
        generated_raws_lead = reader.read_int32()

        generated_raws_prefix: GeneratedRawsBlock | None = None
        prefix_start = reader.tell()
        try:
            generated_raws_prefix = GeneratedRawsBlock.read(reader)
        except (EOFError, ValueError):
            reader.seek(prefix_start)

        tables_off = find_string_table_block(payload)
        if tables_off is None:
            raise ValueError("string table block not found in world.sav payload")

        string_tables = parse_string_table_block(payload, offset=tables_off)
        tables_end = tables_off + string_tables.bytes_consumed

        from .string_index import StringIndexTable

        index_reader = BinaryReader(BytesIO(payload))
        index_reader.seek(tables_end)
        StringIndexTable.read(index_reader)
        game_data_offset = index_reader.tell()

        header = _sav_fields_to_world_header(
            sav_header.fields,
            game_name=game_name,
            world_name=world_name,
            save_version=save_version,
            payload_offset=start,
            bytes_consumed=gamemode_offset - start,
        )

        return cls(
            sav_header=sav_header,
            metadata_blob=metadata_blob,
            gamemode=gamemode,
            game_name=game_name,
            world_name=world_name,
            generated_raws_lead=generated_raws_lead,
            generated_raws_prefix=generated_raws_prefix,
            string_tables=string_tables,
            header=header,
            payload_offset=start,
            bytes_consumed=game_data_offset - start,
            string_tables_offset=tables_off,
            game_data_offset=game_data_offset,
        )


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


def parse_sav_preamble(payload: bytes, *, save_version: int | None = None) -> SavPreamble:
    reader = BinaryReader(BytesIO(payload))
    return SavPreamble.read(reader, payload=payload, save_version=save_version)


def peek_sav_world_name(payload: bytes, *, save_version: int | None = None) -> str | None:
    """Read world name from the SAV preamble prefix without parsing the full save."""
    del save_version  # reserved for future version-gated layout tweaks
    reader = BinaryReader(BytesIO(payload))
    WorldHeaderSavHypothesis.read(reader)
    blob_start = reader.tell()
    try:
        gamemode_offset = _find_gamemode_offset(payload, blob_start)
    except ValueError:
        return None
    reader = BinaryReader(BytesIO(payload))
    reader.seek(gamemode_offset + 2)
    DfString.read(reader)
    return DfString.read(reader).value


def _find_gamemode_offset(payload: bytes, blob_start: int) -> int:
    """
    Locate gamemode uint16 followed by two plausible DfStrings (GameName, WorldName).

    Ironhand @ 0xA4: gamemode=0, game='Uzolshed', world='Rops Wer'.
    """
    limit = min(len(payload), blob_start + 512)
    for off in range(blob_start, limit, 2):
        gamemode = int.from_bytes(payload[off : off + 2], "little", signed=True)
        if gamemode not in (GAMEMODE_FORTRESS, GAMEMODE_ADVENTURER):
            continue
        reader = BinaryReader(BytesIO(payload))
        reader.seek(off + 2)
        try:
            game_name = DfString.read(reader).value
            world_name = DfString.read(reader).value
        except (EOFError, ValueError):
            continue
        if not _looks_like_save_name(game_name) or not _looks_like_save_name(world_name):
            continue
        if game_name == world_name:
            continue
        return off
    raise ValueError(
        f"could not locate SAV gamemode/name block after metadata blob @ 0x{blob_start:x}"
    )


def _looks_like_save_name(value: str) -> bool:
    if not value or len(value) > 80:
        return False
    if value.startswith("[") or "\n" in value or "\x00" in value:
        return False
    return all(32 <= ord(ch) < 127 or ch in "\t" for ch in value)


def _sav_fields_to_world_header(
    fields: list[int],
    *,
    game_name: str,
    world_name: str,
    save_version: int | None,
    payload_offset: int,
    bytes_consumed: int,
) -> WorldHeaderHypothesis:
    """Adapt SAV counter fields to the shared WorldHeaderHypothesis shape."""
    from ..target import TARGET_WORLD_HEADER_ID_COUNT, world_header_id_count

    target_count = (
        world_header_id_count(save_version)
        if save_version is not None
        else TARGET_WORLD_HEADER_ID_COUNT
    )
    max_ids = list(fields)
    if len(max_ids) < target_count:
        max_ids.extend([-1] * (target_count - len(max_ids)))
    else:
        max_ids = max_ids[:target_count]

    return WorldHeaderHypothesis(
        unknown_int16=0,
        max_ids=max_ids,
        has_name=bool(game_name),
        name=DfString(game_name) if game_name else None,
        post_name_byte=None,
        post_name_int16=None,
        post_name_int32s=[],
        world_name=DfString(world_name),
        payload_offset=payload_offset,
        bytes_consumed=bytes_consumed,
    )
