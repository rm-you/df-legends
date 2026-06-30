"""Tests for id-field site catalog probing."""

from pathlib import Path

import pytest

from df_save_re.compression import decompress_file
from df_save_re.deserializers.site_discovery import discover_world_sites
from df_save_re.deserializers.site_id_catalog import probe_site_id_fields
from df_save_re.deserializers.string_tables import parse_string_table_block
from df_save_re.deserializers.world_dat import parse_dat_preamble
from df_save_re.deserializers.world_layout import discover_layout_landmarks

FIXTURE = Path(__file__).resolve().parents[1] / "tests/fixtures/small-retired/world.dat"


def test_probe_site_id_fields_namushul():
    if not FIXTURE.exists():
        pytest.skip("fixture missing")
    payload = decompress_file(FIXTURE).payload
    pre = parse_dat_preamble(payload)
    layout = discover_layout_landmarks(payload, pre)
    gap = layout.region("entity_gap")
    mid = layout.region("region_and_mid")
    assert gap is not None and mid is not None

    hits = probe_site_id_fields(
        payload,
        search_start=gap.start,
        search_end=mid.end,
        max_site_id=349,
    )
    assert len(hits) >= 140
    assert all(0 <= hit.site_id <= 349 for hit in hits.values())
    assert all(hit.site_type >= 0 for hit in hits.values())


def test_discover_world_sites_id_field_catalog():
    if not FIXTURE.exists():
        pytest.skip("fixture missing")
    payload = decompress_file(FIXTURE).payload
    pre = parse_dat_preamble(payload)
    layout = discover_layout_landmarks(payload, pre)
    gap = layout.region("entity_gap")
    mid = layout.region("region_and_mid")
    assert gap is not None and mid is not None

    result = discover_world_sites(
        payload,
        block=parse_string_table_block(payload),
        search_start=gap.start,
        search_end=mid.end,
        max_site_id=349,
    )
    assert result.catalog.site_count >= 200
    assert all(rec.header_offset is not None for rec in result.catalog.records)
    named = sum(1 for rec in result.catalog.records if len(rec.display_name) > 6)
    assert named >= 100
