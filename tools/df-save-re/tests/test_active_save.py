"""Tests for world.sav preamble (Track B) and string table discovery."""

from __future__ import annotations

import struct

import pytest
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.compression import decompress_file, read_header
from df_save_re.deserializers.active_save import (
    GAMEMODE_FORTRESS,
    SavPreamble,
    WorldHeaderSavHypothesis,
    parse_sav_preamble,
)
from df_save_re.deserializers.string_tables import find_string_table_block_sav, parse_string_table_block
from df_save_re.legends_extract import extract_legends_snapshot
from df_save_re.save_preamble import SavePreambleKind, preamble_kind_for_path, resolve_save_payload
from df_save_re.target import TARGET_SAVE_VERSION


def test_world_header_sav_hypothesis():
    values = list(range(13))
    raw = struct.pack("<" + "i" * len(values), *values)
    header = WorldHeaderSavHypothesis.read(BinaryReader(BytesIO(raw)))
    assert header.fields == values


def test_ironhand_sav_preamble(ironhand_world_sav):
    payload = decompress_file(ironhand_world_sav).payload
    pre = parse_sav_preamble(payload, save_version=TARGET_SAVE_VERSION)

    assert pre.sav_header.fields[8] == 977
    assert pre.sav_header.fields[9] == 89
    assert pre.gamemode == GAMEMODE_FORTRESS
    assert pre.game_name == "Uzolshed"
    assert pre.world_name == "Rops Wer"
    assert pre.generated_raws_lead == 370
    assert pre.string_tables_offset == 0x74A8D8
    assert pre.string_tables is not None
    assert pre.string_tables.section_count >= 19
    assert pre.game_data_offset == 0x75B96D
    assert pre.header.world_name
    assert pre.header.world_name.value == "Rops Wer"


def test_ironhand_string_table_finder(ironhand_world_sav):
    payload = decompress_file(ironhand_world_sav).payload
    off = find_string_table_block_sav(payload)
    assert off == 0x74A8D8
    block = parse_string_table_block(payload, offset=off)
    assert block.sections[0].names[0] == "agave bush"


@pytest.mark.slow
def test_ironhand_extract_smoke(ironhand_world_sav):
    resolved = resolve_save_payload(ironhand_world_sav)
    assert resolved.save_kind == SavePreambleKind.SAV
    snap = extract_legends_snapshot(
        resolved.payload,
        preamble=resolved.preamble,
        max_entities=10,
        include_history_catalog=False,
        run_engine_walks=False,
        run_vector_probe=False,
    )
    assert snap.world_name == "Rops Wer"
    assert snap.string_tables.section_count >= 19
    assert snap.entities.first_entity_offset is not None
    assert snap.entities.entities[0].entity_class == "SUBTERRANEAN_ANIMAL_PEOPLES"
    assert snap.layout is not None
    assert snap.layout.first_region_block is not None


def test_preamble_kind_for_sav_path(ironhand_world_sav):
    assert preamble_kind_for_path(ironhand_world_sav) == SavePreambleKind.SAV
