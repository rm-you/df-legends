"""Tests for historical entity header scanning."""

from __future__ import annotations

import pytest

from df_save_re.compression import decompress_file
from df_save_re.deserializers.entity_def import (
    FIRST_ENTITY_CLASS,
    scan_entities,
    scan_entity_headers,
)
from df_save_re.deserializers.string_tables import parse_string_table_block
from fixture_paths import resolve_fixture


def test_first_entity_namushul():
    path = resolve_fixture("small-retired", "world.dat")
    if path is None:
        pytest.skip("fixture missing")
    payload = decompress_file(path).payload
    result = scan_entities(payload, max_entities=20)
    assert result.first_entity_offset == 0x2F7D79
    assert len(result.entities) == 20
    assert result.entities[0].entity_id == 0
    assert result.entities[0].entity_class == FIRST_ENTITY_CLASS
    assert result.entities[0].next_entity_id == 1
    assert result.entities[19].entity_id == 19


def test_entity_chain_consecutive_ids():
    path = resolve_fixture("small-retired", "world.dat")
    if path is None:
        pytest.skip("fixture missing")
    payload = decompress_file(path).payload
    block = parse_string_table_block(payload)
    classes = set(block.sections[7].names)
    headers = scan_entity_headers(
        payload,
        start=0x2F7D79,
        entity_classes=classes,
        max_entities=5,
    )
    assert [h.entity_id for h in headers] == [0, 1, 2, 3, 4]
    assert all(h.entity_class == FIRST_ENTITY_CLASS for h in headers)


def test_first_entity_waterlures():
    path = resolve_fixture("waterlures-retired", "world.dat")
    if path is None:
        pytest.skip("fixture missing")
    payload = decompress_file(path).payload
    result = scan_entities(payload, max_entities=10)
    assert result.first_entity_offset == 0x12B0B24
    assert len(result.entities) >= 10
    assert result.entities[0].entity_class == FIRST_ENTITY_CLASS
