"""Event collection save-path readers, hand-transcribed from Ghidra decompiles.

Factory FUN_140763aa0 dispatches on an i32 tag (0..17). Every subtype's
read_file starts with the base block FUN_140083d80:

    i32_vec events, i32_vec collections, 4x i32 (start_year, end_year,
    start_seconds, end_seconds -- memory order +0x38..+0x44 per df.history.xml),
    byte flagarray (i32 count + count bytes), i32 id

then reads type-specific fields. Only war (0) and battle (1) embed a
language_name (FUN_140315ac0); purge (14) has a raw string.
"""

from __future__ import annotations

from ..binary_reader import BinaryReader
from .language_name import read_language_name

_MAX_COUNT = 5_000_000

COLLECTION_TYPE_NAMES = {
    0: "war",
    1: "battle",
    2: "duel",
    3: "site_conquered",
    4: "abduction",
    5: "theft",
    6: "beast_attack",
    7: "journey",
    8: "insurrection",
    9: "occasion",
    10: "performance",
    11: "competition",
    12: "procession",
    13: "ceremony",
    14: "purge",
    15: "raid",
    16: "persecution",
    17: "entity_overthrown",
}


def _count(reader: BinaryReader, what: str) -> int:
    n = reader.read_int32()
    if n < 0 or n > _MAX_COUNT:
        raise ValueError(f"implausible {what} count {n} at 0x{reader.tell() - 4:x}")
    return n


def _i32_vec(reader: BinaryReader, what: str = "i32_vec") -> list[int]:
    return [reader.read_int32() for _ in range(_count(reader, what))]


def _skip_i32_vec(reader: BinaryReader, what: str = "i32_vec") -> None:
    reader.read_bytes(4 * _count(reader, what))


def _skip_i16_vec(reader: BinaryReader, what: str = "i16_vec") -> None:
    reader.read_bytes(2 * _count(reader, what))


def _skip_string(reader: BinaryReader) -> None:
    length = reader.read_int16()
    if length < 0:
        raise ValueError(f"negative string length {length} at 0x{reader.tell() - 2:x}")
    reader.read_bytes(length)


def _read_base(reader: BinaryReader) -> dict:
    # FUN_140083d80
    events = _i32_vec(reader, "collection_events")
    collections = _i32_vec(reader, "collection_children")
    # +0x38..+0x44 in memory = start_year, end_year, start_seconds, end_seconds
    # (df.history.xml history_event_collection field order).
    start_year = reader.read_int32()
    end_year = reader.read_int32()
    start_seconds = reader.read_int32()
    end_seconds = reader.read_int32()
    flag_bytes = reader.read_bytes(_count(reader, "collection_flags"))
    coll_id = reader.read_int32()
    return {
        "id": coll_id,
        "events": events,
        "collections": collections,
        "start_year": start_year,
        "start_seconds": start_seconds,
        "end_year": end_year,
        "end_seconds": end_seconds,
        "flags": list(flag_bytes),
    }


def _set_name(rec: dict, name) -> None:
    rec["name"] = name.display_hint or None
    rec["name_words"] = name.words if name.has_name else []
    rec["name_parts_of_speech"] = name.parts_of_speech if name.has_name else []
    rec["language"] = name.language if name.has_name else None


def _war_body(reader: BinaryReader, v: int, rec: dict) -> None:
    # FUN_1407699e0
    _set_name(rec, read_language_name(reader))
    rec["attacker_civs"] = _i32_vec(reader)
    rec["defender_civs"] = _i32_vec(reader)
    if v > 0x670:
        _skip_i32_vec(reader)
    # FUN_1406fc080 war tail: aggressor/defender squad + death tallies
    _skip_i16_vec(reader)
    for _ in range(4):
        _skip_i32_vec(reader)
    reader.read_int32()
    _skip_i16_vec(reader)
    for _ in range(3):
        _skip_i32_vec(reader)
    reader.read_int32()
    _skip_i16_vec(reader)
    for _ in range(2):
        _skip_i32_vec(reader)
    reader.read_int32()


def _battle_body(reader: BinaryReader, v: int, rec: dict) -> None:
    # FUN_140084360
    _set_name(rec, read_language_name(reader))
    rec["war_id"] = reader.read_int32()
    rec["subregion_id"] = reader.read_int32()
    rec["feature_layer_id"] = reader.read_int32()
    rec["site_id"] = reader.read_int32()
    rec["coords"] = (reader.read_int16(), reader.read_int16())
    rec["attacker_hfs"] = _i32_vec(reader)
    if v >= 0x670:
        _skip_i32_vec(reader)  # attacker squad counts
    rec["defender_hfs"] = _i32_vec(reader)
    if v >= 0x670:
        _skip_i32_vec(reader)  # defender squad counts
    _skip_i32_vec(reader)  # noncombat hfs
    rec["attacker_civs"] = _i32_vec(reader)
    rec["defender_civs"] = _i32_vec(reader)
    for _ in range(5):
        _skip_i32_vec(reader)  # squad race/entity/site/number vectors
    if v >= 0x66e:
        _skip_i32_vec(reader)
    for _ in range(5):
        _skip_i32_vec(reader)  # defender squad vectors
    if v >= 0x66e:
        _skip_i32_vec(reader)
    reader.read_int16()  # outcome
    if v > 0x66f:
        reader.read_bytes(12)  # 3x i32
        _skip_i32_vec(reader)
        _skip_i32_vec(reader)


def _duel_body(reader: BinaryReader, v: int, rec: dict) -> None:
    # FUN_140085420
    rec["attacker_hf"] = reader.read_int32()
    rec["defender_hf"] = reader.read_int32()
    rec["subregion_id"] = reader.read_int32()
    rec["feature_layer_id"] = reader.read_int32()
    rec["coords"] = (reader.read_int16(), reader.read_int16())
    rec["site_id"] = reader.read_int32()
    reader.read_int32()
    reader.read_uint8()
    reader.read_int32()


def _site_conquered_body(reader: BinaryReader, v: int, rec: dict) -> None:
    # FUN_140085710
    rec["war_id"] = reader.read_int32()
    rec["site_id"] = reader.read_int32()
    rec["attacker_civs"] = _i32_vec(reader)
    rec["defender_civs"] = _i32_vec(reader)
    reader.read_int16()
    reader.read_int32()


def _abduction_body(reader: BinaryReader, v: int, rec: dict) -> None:
    # FUN_140085a80
    rec["war_id"] = reader.read_int32()
    rec["subregion_id"] = reader.read_int32()
    rec["feature_layer_id"] = reader.read_int32()
    rec["site_id"] = reader.read_int32()
    rec["coords"] = (reader.read_int16(), reader.read_int16())
    reader.read_int32()
    reader.read_int32()
    rec["attacker_civs"] = _i32_vec(reader)
    rec["defender_civs"] = _i32_vec(reader)
    _skip_i32_vec(reader)
    reader.read_int32()


def _theft_body(reader: BinaryReader, v: int, rec: dict) -> None:
    # FUN_140085ec0
    rec["war_id"] = reader.read_int32()
    rec["subregion_id"] = reader.read_int32()
    rec["feature_layer_id"] = reader.read_int32()
    rec["site_id"] = reader.read_int32()
    rec["coords"] = (reader.read_int16(), reader.read_int16())
    reader.read_int32()
    reader.read_int32()
    _skip_i32_vec(reader)
    _skip_i16_vec(reader)
    _skip_i16_vec(reader)
    _skip_i16_vec(reader)
    _skip_i32_vec(reader)
    _skip_i32_vec(reader)
    _skip_i32_vec(reader)
    _skip_i16_vec(reader)
    _skip_i16_vec(reader)
    _skip_i16_vec(reader)
    _skip_i32_vec(reader)
    _skip_i32_vec(reader)
    _skip_i32_vec(reader)
    reader.read_int32()


def _beast_attack_body(reader: BinaryReader, v: int, rec: dict) -> None:
    # FUN_1400c5260
    rec["subregion_id"] = reader.read_int32()
    rec["feature_layer_id"] = reader.read_int32()
    rec["site_id"] = reader.read_int32()
    reader.read_int32()
    rec["coords"] = (reader.read_int16(), reader.read_int16())
    reader.read_int32()
    rec["attacker_hfs"] = _i32_vec(reader)
    reader.read_int32()


def _journey_body(reader: BinaryReader, v: int, rec: dict) -> None:
    # FUN_1404907b0
    rec["traveler_hfs"] = _i32_vec(reader)
    reader.read_int32()


def _three_i32_body(reader: BinaryReader, v: int, rec: dict) -> None:
    # FUN_1401ba540 (insurrection, occasion, persecution, entity_overthrown)
    rec["target_entity"] = reader.read_int32()
    rec["site_id"] = reader.read_int32()
    reader.read_int32()


def _five_i32_body(reader: BinaryReader, v: int, rec: dict) -> None:
    # FUN_1406fe760 (performance, competition, procession, ceremony)
    rec["civ_id"] = reader.read_int32()
    rec["site_id"] = reader.read_int32()
    rec["occasion_id"] = reader.read_int32()
    reader.read_int32()
    reader.read_int32()


def _purge_body(reader: BinaryReader, v: int, rec: dict) -> None:
    # FUN_140490630
    rec["site_id"] = reader.read_int32()
    _skip_string(reader)  # adjective
    reader.read_int32()


def _raid_body(reader: BinaryReader, v: int, rec: dict) -> None:
    # FUN_1400866a0
    rec["war_id"] = reader.read_int32()
    rec["subregion_id"] = reader.read_int32()
    rec["feature_layer_id"] = reader.read_int32()
    rec["site_id"] = reader.read_int32()
    rec["coords"] = (reader.read_int16(), reader.read_int16())
    rec["attacker_civ"] = reader.read_int32()
    rec["defender_civ"] = reader.read_int32()
    _skip_i32_vec(reader)
    reader.read_int32()


_BODY_READERS = {
    0: _war_body,
    1: _battle_body,
    2: _duel_body,
    3: _site_conquered_body,
    4: _abduction_body,
    5: _theft_body,
    6: _beast_attack_body,
    7: _journey_body,
    8: _three_i32_body,
    9: _three_i32_body,
    10: _five_i32_body,
    11: _five_i32_body,
    12: _five_i32_body,
    13: _five_i32_body,
    14: _purge_body,
    15: _raid_body,
    16: _three_i32_body,
    17: _three_i32_body,
}


def read_collection_record(
    reader: BinaryReader,
    tag: int,
    *,
    save_version: int = 1716,
) -> dict:
    """Read one event collection body (after the i32 tag)."""
    body = _BODY_READERS.get(tag)
    if body is None:
        raise ValueError(f"unknown event collection tag {tag} at 0x{reader.tell():x}")
    rec = _read_base(reader)
    rec["tag"] = tag
    rec["type"] = COLLECTION_TYPE_NAMES[tag]
    body(reader, save_version, rec)
    return rec


def skip_collection_body(reader: BinaryReader, tag: int, *, save_version: int = 1716) -> None:
    read_collection_record(reader, tag, save_version=save_version)
