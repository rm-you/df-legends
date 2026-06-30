"""Pytest fixtures for optional real save integration tests."""

from __future__ import annotations

from pathlib import Path

import pytest

from fixture_paths import resolve_fixture


@pytest.fixture(scope="session")
def waterlures_world_dat() -> Path:
    path = resolve_fixture("waterlures-retired", "world.dat")
    if path is None:
        pytest.skip(
            "Waterlures world.dat not found — run: python3 scripts/fetch_fixtures.py"
        )
    return path


@pytest.fixture(scope="session")
def small_world_dat() -> Path:
    path = resolve_fixture("small-retired", "world.dat")
    if path is None:
        pytest.skip(
            "Small world.dat not found — run: python3 scripts/fetch_fixtures.py"
        )
    return path


@pytest.fixture(scope="session")
def ironhand_world_sav() -> Path:
    path = resolve_fixture("ironhand-active", "world.sav")
    if path is None:
        path = resolve_fixture("region5", "world.sav")
    if path is None:
        path = Path("/workspace/research/fixtures/region5/world.sav")
    if not path.is_file():
        pytest.skip(
            "Ironhand world.sav not found — run: python3 scripts/fetch_fixtures.py --all"
        )
    return path
