"""Tests for payload region landmarks."""

from pathlib import Path

from df_save_re.compression import decompress_file
from df_save_re.deserializers.world_dat import parse_dat_preamble
from df_save_re.deserializers.world_layout import discover_layout_landmarks

FIXTURE = Path(__file__).resolve().parents[1] / "tests/fixtures/small-retired/world.dat"


def test_layout_regions_namushul():
    payload = decompress_file(FIXTURE).payload
    pre = parse_dat_preamble(payload)
    layout = discover_layout_landmarks(payload, pre)
    names = {r.name for r in layout.regions}
    assert "entity_catalog" in names
    assert "region_and_mid" in names
    assert "history_tail" in names
    mid = layout.region("region_and_mid")
    assert mid is not None
    assert mid.start == layout.first_region_block
    assert mid.end == layout.history_stats
