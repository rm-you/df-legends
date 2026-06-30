"""Tests for save folder classification and indexing."""

from pathlib import Path

import pytest

from df_save_re.save_bundle import SaveKind, classify_filename, index_save_folder, legends_parse_target


@pytest.mark.parametrize(
    ("name", "kind", "index"),
    [
        ("world.dat", SaveKind.WORLD_DAT, None),
        ("world.sav", SaveKind.WORLD_SAV, None),
        ("WORLD.SAV", SaveKind.WORLD_SAV, None),
        ("site-3.dat", SaveKind.SITE, 3),
        ("unit-12.dat", SaveKind.UNIT, 12),
        ("feature-0-1.dat", SaveKind.FEATURE, 0),
        ("region_snapshot-2.dat", SaveKind.REGION_SNAPSHOT, 2),
        ("world_gen_param.txt", SaveKind.WORLD_GEN_PARAMS, None),
        ("random.txt", SaveKind.OTHER, None),
    ],
)
def test_classify_filename(name: str, kind: SaveKind, index: int | None):
    assert classify_filename(name) == (kind, index)


def test_index_save_folder_active(tmp_path: Path):
    region = tmp_path / "region1"
    region.mkdir()
    (region / "world.sav").write_bytes(b"\x00")
    (region / "site-3.dat").write_bytes(b"\x00")
    (region / "unit-7.dat").write_bytes(b"\x00")

    index = index_save_folder(region)
    assert index.region_name == "region1"
    assert index.is_active
    assert not index.is_retired
    assert len(index.sidecars) == 2

    target = legends_parse_target(index)
    assert target is not None
    assert target.kind == SaveKind.WORLD_SAV


def test_index_save_folder_retired(tmp_path: Path):
    region = tmp_path / "region2"
    region.mkdir()
    (region / "world.dat").write_bytes(b"\x00")

    index = index_save_folder(region)
    assert index.is_retired
    assert not index.is_active

    target = legends_parse_target(index)
    assert target is not None
    assert target.kind == SaveKind.WORLD_DAT


def test_index_save_folder_prefers_sav_when_active(tmp_path: Path):
    region = tmp_path / "region3"
    region.mkdir()
    (region / "world.dat").write_bytes(b"\x00")
    (region / "world.sav").write_bytes(b"\x00")

    index = index_save_folder(region)
    assert index.is_active
    target = legends_parse_target(index)
    assert target is not None
    assert target.kind == SaveKind.WORLD_SAV
