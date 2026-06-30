"""Tests for legends snapshot extraction."""

from __future__ import annotations

import pytest

from df_save_re.compression import decompress_file, read_header
from df_save_re.deserializers.world_dat import parse_dat_preamble
from df_save_re.legends_extract import extract_legends_snapshot, snapshot_to_dict
from fixture_paths import resolve_fixture


def test_extract_namushul_snapshot():
    path = resolve_fixture("small-retired", "world.dat")
    if path is None:
        pytest.skip("fixture missing")
    payload = decompress_file(path).payload
    pre = parse_dat_preamble(payload, save_version=read_header(path.read_bytes()).save_version)
    snap = extract_legends_snapshot(payload, preamble=pre, max_entities=15)
    assert snap.world_name == "Namushul"
    assert snap.string_tables.section_count == 20
    assert snap.string_index.entry_count == 283
    assert snap.entities.first_entity_offset == 0x2F7D79
    assert len(snap.entities.entities) == 15
    assert snap.history_stats is not None
    assert snap.history_stats.payload_offset == 0x15BEB28
    assert snap.history_stats.event_counter == 113_118
    assert snap.history_stats.histfig_counter == 12_747

    data = snapshot_to_dict(snap)
    assert data["world_name"] == "Namushul"
    assert "IRON" in data["materials"]
    assert "TOAD" in data["creatures_sample"]
    assert len(data["entities"]) == 15
    assert data["entities"][0]["class"] == "SUBTERRANEAN_ANIMAL_PEOPLES"
    cat = data["entity_catalog"]
    assert cat["count"] >= 70
    assert cat["named_count"] >= 10
    assert "PLAINS" in cat["class_counts"]
