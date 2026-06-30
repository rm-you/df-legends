"""Binary-only legends extraction (no text export inputs)."""

from pathlib import Path

import pytest

from df_save_re.compression import decompress_file, read_header
from df_save_re.deserializers.world_dat import parse_dat_preamble
from df_save_re.legends_extract import extract_legends_snapshot

FIXTURE = Path(__file__).resolve().parents[1] / "tests/fixtures/small-retired/world.dat"


def test_extract_without_text_exports():
    if not FIXTURE.exists():
        pytest.skip("fixture missing")
    payload = decompress_file(FIXTURE).payload
    pre = parse_dat_preamble(payload, save_version=read_header(FIXTURE.read_bytes()).save_version)
    snap = extract_legends_snapshot(payload, preamble=pre)

    assert snap.world_name == "Namushul"
    assert snap.history_stats is not None
    assert snap.historical_figure_catalog is not None
    assert snap.history_events_catalog is not None
    assert snap.world_site_catalog is not None
    assert snap.world_site_catalog.site_count > 0
    assert snap.site_discovery is not None


def test_extract_has_no_text_catalog_fields():
    if not FIXTURE.exists():
        pytest.skip("fixture missing")
    payload = decompress_file(FIXTURE).payload
    pre = parse_dat_preamble(payload, save_version=read_header(FIXTURE.read_bytes()).save_version)
    snap = extract_legends_snapshot(payload, preamble=pre)

    assert not hasattr(snap, "site_text_catalog") or getattr(snap, "site_text_catalog", None) is None
    assert not hasattr(snap, "history_text_catalog") or getattr(snap, "history_text_catalog", None) is None
