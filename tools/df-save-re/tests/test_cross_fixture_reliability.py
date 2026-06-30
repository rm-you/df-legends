"""Cross-fixture smoke tests — extraction must not depend on one world layout."""

from __future__ import annotations

import pytest

from df_save_re.compression import decompress_file, read_header
from df_save_re.deserializers.string_tables import (
    find_string_table_block,
    find_string_table_block_dat,
    find_string_table_block_sav,
)
from df_save_re.legends_extract import extract_legends_snapshot
from df_save_re.save_preamble import SavePreambleKind, preamble_kind_for_path, resolve_save_payload
from df_save_re.deserializers.world_header_ids import resolve_site_ceiling
from df_save_re.target import TARGET_SAVE_VERSION
from fixture_paths import resolve_fixture


FIXTURES = [
    ("small-retired", "world.dat", SavePreambleKind.DAT),
    ("waterlures-retired", "world.dat", SavePreambleKind.DAT),
    ("ironhand-active", "world.sav", SavePreambleKind.SAV),
]


@pytest.fixture(params=FIXTURES, ids=["namushul-dat", "waterlures-dat", "ironhand-sav"])
def resolved_fixture(request):
    subdir, name, kind = request.param
    path = resolve_fixture(subdir, name)
    if path is None:
        pytest.skip(f"fixture missing: {subdir}/{name} — run scripts/fetch_fixtures.py")
    resolved = resolve_save_payload(path)
    assert resolved.save_kind == kind
    return resolved


def test_save_version_is_target(resolved_fixture):
    assert resolved_fixture.save_version == TARGET_SAVE_VERSION


def test_string_tables_discovered(resolved_fixture):
    payload = resolved_fixture.payload
    off = find_string_table_block(payload)
    assert off is not None
    if resolved_fixture.save_kind == SavePreambleKind.DAT:
        assert find_string_table_block_dat(payload) == off
    else:
        assert find_string_table_block_sav(payload) == off


def test_core_layers_smoke(resolved_fixture):
    snap = extract_legends_snapshot(
        resolved_fixture.payload,
        preamble=resolved_fixture.preamble,
        max_entities=3,
    )
    assert snap.world_name
    assert snap.string_tables.section_count >= 19
    assert snap.entities.first_entity_offset is not None
    assert snap.entities.entities[0].entity_class == "SUBTERRANEAN_ANIMAL_PEOPLES"
    assert len(snap.entity_catalog) > 0
    assert snap.layout is not None
    assert snap.layout.first_region_block is not None

    # History layers must not be gated on Namushul-only stats echo.
    assert snap.layout.history_tail_start is not None
    assert snap.historical_figure_catalog is not None
    assert snap.historical_figure_catalog.anchor.vector_count == snap.header.max_ids[8]
    assert snap.history_events_catalog is not None
    assert snap.history_events_catalog.event_count == snap.header.max_ids[9]

    assert snap.world_site_catalog is not None
    ceiling = resolve_site_ceiling(snap.header)
    if ceiling is not None:
        assert snap.world_site_catalog.site_count <= ceiling
        assert snap.world_site_catalog.site_count > ceiling // 2
    else:
        assert snap.world_site_catalog.site_count > 0

    # Engine layer walks must be wired with authoritative counts on every fixture.
    walks = {w.layer: w for w in snap.engine_walks}
    assert "figures" in walks and "events_death" in walks
    assert walks["figures"].authoritative_count == snap.header.max_ids[8]
    assert walks["events_death"].authoritative_count == snap.header.max_ids[9]
