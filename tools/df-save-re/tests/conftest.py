"""Pytest fixtures for optional real save integration tests."""

from __future__ import annotations

import os
from pathlib import Path

import pytest

_TESTS_DIR = Path(__file__).resolve().parent
FIXTURES_DIR = Path(os.environ.get("DF_SAVE_RE_FIXTURES", _TESTS_DIR / "fixtures"))


def _resolve_fixture(*parts: str) -> Path | None:
    candidates = [
        FIXTURES_DIR.joinpath(*parts),
        _TESTS_DIR.joinpath("fixtures", *parts),
        Path("/workspace/research/fixtures").joinpath(*parts),
    ]
    # Legacy research extract path (full region folder name from DFFD zip)
    if parts[0] == "waterlures-retired" and parts[1] == "world.dat":
        candidates.append(
            Path("/workspace/research/fixtures/waterlures - summer 391/world.dat")
        )
    for path in candidates:
        if path.is_file():
            return path
    return None


@pytest.fixture(scope="session")
def waterlures_world_dat() -> Path:
    path = _resolve_fixture("waterlures-retired", "world.dat")
    if path is None:
        pytest.skip(
            "Waterlures world.dat not found — run: python3 scripts/fetch_fixtures.py"
        )
    return path


@pytest.fixture(scope="session")
def ironhand_world_sav() -> Path:
    path = _resolve_fixture("ironhand-active", "world.sav")
    if path is None:
        path = _resolve_fixture("region5", "world.sav")
    if path is None:
        path = Path("/workspace/research/fixtures/region5/world.sav")
    if not path.is_file():
        pytest.skip(
            "Ironhand world.sav not found — run: python3 scripts/fetch_fixtures.py --all"
        )
    return path
