"""Tests for binary-only site discovery."""

from pathlib import Path

import pytest

from df_save_re.compression import decompress_file
from df_save_re.deserializers.string_tables import parse_string_table_block
from df_save_re.deserializers.site_discovery import discover_world_sites
from df_save_re.deserializers.world_dat import parse_dat_preamble
from df_save_re.deserializers.world_layout import discover_layout_landmarks

FIXTURE = Path(__file__).resolve().parents[1] / "tests/fixtures/small-retired/world.dat"


def test_discover_world_sites_namushul():
    if not FIXTURE.exists():
        pytest.skip("fixture missing")
    payload = decompress_file(FIXTURE).payload
    pre = parse_dat_preamble(payload)
    layout = discover_layout_landmarks(payload, pre)
    mid = layout.region("region_and_mid")
    assert mid is not None

    result = discover_world_sites(
        payload,
        block=parse_string_table_block(payload),
        search_start=layout.last_catalog_entity,
        search_end=mid.end,
        max_site_id=349,
    )
    assert result.catalog.site_count >= 250
    assert all(rec.header_offset is not None for rec in result.catalog.records)
    assert result.catalog.records[0].site_id >= 0
