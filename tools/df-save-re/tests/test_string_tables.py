"""Tests for short-name string table block (materials, plants, …)."""

from __future__ import annotations

import pytest

from df_save_re.compression import decompress_file, read_header
from df_save_re.deserializers.string_tables import (
    find_string_table_block,
    parse_string_table_block,
)
from df_save_re.deserializers.world_dat import parse_dat_preamble
from fixture_paths import resolve_fixture


@pytest.mark.parametrize(
    ("fixture", "expected_offset", "material_count"),
    [
        ("small-retired", 0x2A397E, 265),
        ("waterlures-retired", 0x3A2C37, 265),
    ],
)
def test_string_table_block_on_fixtures(fixture, expected_offset, material_count):
    path = resolve_fixture(fixture, "world.dat")
    if path is None:
        pytest.skip("fixture missing")
    payload = decompress_file(path).payload
    offset = find_string_table_block(payload)
    assert offset == expected_offset
    block = parse_string_table_block(payload, offset=offset)
    assert block.section_count >= 20
    materials = block.sections[0]
    assert materials.entry_count == material_count
    assert materials.names[0] == "IRON"
    assert "STEEL" in materials.names
    assert "ADAMANTINE" in materials.names
