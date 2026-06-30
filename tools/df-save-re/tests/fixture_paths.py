"""Resolve paths to gitignored save fixtures for tests."""

from __future__ import annotations

import os
from pathlib import Path

_TESTS_DIR = Path(__file__).resolve().parent
FIXTURES_DIR = Path(os.environ.get("DF_SAVE_RE_FIXTURES", _TESTS_DIR / "fixtures"))

SMALL_WORLD_DAT_SHA256 = "f9cee2642831252bcb09c71cc4f10450505e174abc0aa6806a1f9c79745d8714"


def resolve_fixture(*parts: str) -> Path | None:
    candidates = [
        FIXTURES_DIR.joinpath(*parts),
        _TESTS_DIR.joinpath("fixtures", *parts),
        Path("/workspace/research/fixtures").joinpath(*parts),
    ]
    if parts[0] == "waterlures-retired" and parts[1] == "world.dat":
        candidates.append(
            Path("/workspace/research/fixtures/waterlures - summer 391/world.dat")
        )
    for path in candidates:
        if path.is_file():
            return path
    return None
