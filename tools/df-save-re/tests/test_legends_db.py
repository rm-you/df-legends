"""Tests for legends SQLite schema, migrations, and import workflow."""

from __future__ import annotations

from pathlib import Path

import pytest
from sqlalchemy import create_engine, func, select, text
from sqlalchemy.orm import Session

from df_save_re.db.migrate import apply_migrations, create_legends_database
from df_save_re.db.models import (
    HistoricalEntity,
    HistoricalFigure,
    World,
    WorldSite,
)
from df_save_re.db.paths import fortress_slug, legends_db_path
from df_save_re.db.registry import list_legends
from df_save_re.db.store import import_world_dat
from tests.fixture_paths import resolve_fixture


@pytest.mark.parametrize(
    ("name", "slug"),
    [
        ("Namushul", "namushul"),
        ("The Destined Realms", "the-destined-realms"),
        ("  Mixed_Case!!!  ", "mixed-case"),
    ],
)
def test_fortress_slug(name: str, slug: str) -> None:
    assert fortress_slug(name) == slug


def test_apply_migrations_creates_core_tables(tmp_path: Path) -> None:
    db_path = tmp_path / "test.sqlite"
    apply_migrations(db_path)
    engine = create_engine(f"sqlite:///{db_path}")
    with engine.connect() as conn:
        tables = {
            row[0]
            for row in conn.execute(
                text("SELECT name FROM sqlite_master WHERE type='table' ORDER BY name")
            )
        }
    assert "world" in tables
    assert "historical_entity" in tables
    assert "world_site" in tables
    assert "historical_figure" in tables
    assert "alembic_version" in tables


def test_import_world_dat_namushul(tmp_path: Path) -> None:
    world_dat = resolve_fixture("small-retired", "world.dat")
    data_dir = tmp_path / "legends"
    result = import_world_dat(world_dat, data_dir=data_dir)

    assert result.world_name == "Namushul"
    assert result.slug == "namushul"
    assert result.db_path == legends_db_path(data_dir, "namushul")
    assert result.db_path.exists()
    assert result.entity_count > 0
    assert result.site_count > 0
    assert result.histfig_header_count > 0
    assert result.event_count == 113_118

    registry = list_legends(data_dir)
    assert len(registry) == 1
    assert registry[0].slug == "namushul"
    assert registry[0].world_name == "Namushul"

    engine = create_engine(f"sqlite:///{result.db_path}")
    with Session(engine) as session:
        world = session.scalar(select(World))
        assert world is not None
        assert world.world_name == "Namushul"
        assert world.parser_version == "0.1.0"

        entity_count = session.scalar(select(func.count()).select_from(HistoricalEntity))
        site_count = session.scalar(select(func.count()).select_from(WorldSite))
        histfig_count = session.scalar(select(func.count()).select_from(HistoricalFigure))
        assert entity_count == result.entity_count
        assert site_count == result.site_count
        assert histfig_count == result.histfig_header_count

        named = session.scalars(
            select(HistoricalEntity.resolved_name).where(HistoricalEntity.resolved_name.is_not(None))
        ).all()
        assert any(name for name in named)


def test_import_refuses_existing_without_overwrite(tmp_path: Path) -> None:
    world_dat = resolve_fixture("small-retired", "world.dat")
    data_dir = tmp_path / "legends"
    import_world_dat(world_dat, data_dir=data_dir)
    with pytest.raises(FileExistsError):
        import_world_dat(world_dat, data_dir=data_dir)


def test_import_overwrite_replaces_database(tmp_path: Path) -> None:
    world_dat = resolve_fixture("small-retired", "world.dat")
    data_dir = tmp_path / "legends"
    first = import_world_dat(world_dat, data_dir=data_dir)
    second = import_world_dat(world_dat, data_dir=data_dir, overwrite=True)
    assert second.db_path == first.db_path
    assert second.run_id == 1
