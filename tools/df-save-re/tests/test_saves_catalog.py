"""Tests for save region catalog."""

from __future__ import annotations

import shutil
from pathlib import Path

import pytest

from df_save_re.db.store import import_world_dat
from df_save_re.web.saves_catalog import RegionStatus, list_save_regions
from tests.fixture_paths import resolve_fixture


pytestmark = [pytest.mark.slow, pytest.mark.timeout(600)]


@pytest.fixture
def region_fixture_tree(tmp_path: Path) -> tuple[Path, Path, Path]:
    world_dat = resolve_fixture("small-retired", "world.dat")
    if world_dat is None:
        pytest.skip("small-retired/world.dat fixture not available")
    saves_dir = tmp_path / "saves"
    region_dir = saves_dir / "region-test"
    region_dir.mkdir(parents=True)
    shutil.copy(world_dat, region_dir / "world.dat")
    data_dir = tmp_path / "legends"
    data_dir.mkdir()
    return saves_dir, data_dir, region_dir


def test_catalog_lists_importable_region(region_fixture_tree: tuple[Path, Path, Path]) -> None:
    saves_dir, data_dir, _ = region_fixture_tree
    rows = list_save_regions(saves_dir, data_dir)
    assert len(rows) == 1
    row = rows[0]
    assert row.region_name == "region-test"
    assert row.world_name == "Namushul"
    assert row.slug == "namushul"
    assert row.status == RegionStatus.IMPORTABLE
    assert row.is_retired is True


def test_catalog_shows_ready_after_import(region_fixture_tree: tuple[Path, Path, Path]) -> None:
    saves_dir, data_dir, region_dir = region_fixture_tree
    import_world_dat(region_dir, data_dir=data_dir, overwrite=True)
    rows = list_save_regions(saves_dir, data_dir)
    assert len(rows) == 1
    assert rows[0].status == RegionStatus.READY
    assert rows[0].event_count is not None
