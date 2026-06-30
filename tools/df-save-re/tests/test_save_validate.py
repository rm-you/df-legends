"""Tests for save fingerprint / validate workflow."""

from __future__ import annotations

import pytest

from df_save_re.save_validate import NAMUSHUL_WORLD_DAT_SHA256, fingerprint_path
from fixture_paths import resolve_fixture


def test_fingerprint_namushul():
    path = resolve_fixture("small-retired", "world.dat")
    if path is None:
        pytest.skip("fixture missing")
    fp = fingerprint_path(path)
    assert fp.world_name == "Namushul"
    assert fp.sha256 == NAMUSHUL_WORLD_DAT_SHA256
    assert fp.known_fixture is not None
    assert fp.max_histfig == 12_747
    assert fp.max_event == 113_118
    assert fp.is_target_version
