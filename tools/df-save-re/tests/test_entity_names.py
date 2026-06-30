"""Tests for language_name and entity name resolution."""

from __future__ import annotations

import pytest

from df_save_re.compression import decompress_file
from df_save_re.deserializers.entity_def import catalog_entity_block, find_entity_by_id
from df_save_re.deserializers.entity_names import (
    civ_name_matches,
    match_civ_name_lists,
    resolve_entity_name,
)
from df_save_re.deserializers.language_name import read_language_name
from df_save_re.deserializers.string_tables import parse_string_table_block
from fixture_paths import resolve_fixture


def test_read_language_name_plains_civ():
    path = resolve_fixture("small-retired", "world.dat")
    if path is None:
        pytest.skip("fixture missing")
    payload = decompress_file(path).payload
    block = parse_string_table_block(payload)
    words = block.sections[8].names
    catalog = catalog_entity_block(payload, search_end=0x15BEB28)
    plains = find_entity_by_id(
        payload,
        67,
        entity_classes=set(catalog.entity_classes),
        search_start=catalog.string_index_end,
        search_end=0x15BEB28,
    )
    assert plains is not None
    resolved = resolve_entity_name(payload, plains, words=words)
    assert resolved.source == "words"
    assert "REALM" in resolved.resolved


def test_all_named_civs_resolved_namushul():
    path = resolve_fixture("small-retired", "world.dat")
    if path is None:
        pytest.skip("fixture missing")
    payload = decompress_file(path).payload
    catalog = catalog_entity_block(payload, search_end=0x15BEB28)
    block = parse_string_table_block(payload)
    named = [e for e in catalog.entities if e.has_name]
    assert len(named) == 15
    names = [resolve_entity_name(payload, ent, words=block.sections[8].names).resolved for ent in named]
    assert "Jroshreebus" in names
    assert any("PUZZLE" in n and "MIST" in n for n in names)


def test_civ_name_fuzzy_match():
    assert civ_name_matches("The Puzzling Mist", "PUZZLE MIST")
    assert civ_name_matches("The Reclusive Realms", "RECLUSE REALM")
    assert not civ_name_matches("The Hardy Armory", "PUZZLE MIST")


def test_match_civ_name_lists():
    text = ["The Hardy Armory", "Jroshreebus"]
    binary = ["HARDY ARMORY", "Jroshreebus"]
    matched, unmatched = match_civ_name_lists(text, binary)
    assert matched == 2
    assert unmatched == []
