"""Pytest fixtures for optional real save integration tests."""

from __future__ import annotations

from pathlib import Path

import pytest

from df_save_re.legends_extract import LegendsSnapshot, extract_legends_snapshot
from df_save_re.save_preamble import resolve_save_payload
from fixture_paths import resolve_fixture


def pytest_collection_modifyitems(items):
    slow_timeout = pytest.mark.timeout(600)
    for item in items:
        if "slow" in item.keywords and "timeout" not in item.keywords:
            item.add_marker(slow_timeout)


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


@pytest.fixture(scope="session")
def namushul_resolved():
    """Decompressed Namushul payload + preamble (shared across tests)."""
    path = resolve_fixture("small-retired", "world.dat")
    if path is None:
        pytest.skip("small-retired/world.dat fixture missing")
    return resolve_save_payload(path)


@pytest.fixture(scope="session")
def namushul_snapshot(namushul_resolved) -> LegendsSnapshot:
    """Full Namushul extract including engine walks (~60–90s, once per session)."""
    return extract_legends_snapshot(
        namushul_resolved.payload,
        preamble=namushul_resolved.preamble,
    )


@pytest.fixture(scope="session")
def namushul_snapshot_light(namushul_resolved) -> LegendsSnapshot:
    """Namushul extract without engine walks or vector probe (~15–25s, once per session)."""
    return extract_legends_snapshot(
        namushul_resolved.payload,
        preamble=namushul_resolved.preamble,
        run_engine_walks=False,
        run_vector_probe=False,
    )
