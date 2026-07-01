"""Binary-only legends extraction (no text export inputs)."""

import pytest


pytestmark = pytest.mark.slow


def test_extract_without_text_exports(namushul_snapshot_light):
    snap = namushul_snapshot_light
    assert snap.world_name == "Namushul"
    assert snap.history_stats is not None
    assert snap.historical_figure_catalog is not None
    assert snap.history_events_catalog is not None
    assert snap.world_site_catalog is not None
    assert snap.site_discovery is not None


def test_extract_has_no_text_catalog_fields(namushul_snapshot_light):
    snap = namushul_snapshot_light
    assert not hasattr(snap, "site_text_catalog") or getattr(snap, "site_text_catalog", None) is None
    assert not hasattr(snap, "history_text_catalog") or getattr(snap, "history_text_catalog", None) is None
