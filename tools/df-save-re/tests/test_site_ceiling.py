"""Tests for header-derived site ceiling and stride-table site discovery."""

from __future__ import annotations

from df_save_re.deserializers.world_header_ids import (
    SITE_CEILING_TAIL,
    WORLD_HEADER_SITE_HIGH_WATER_SLOT,
    resolve_max_site_id,
    resolve_site_ceiling,
)
from df_save_re.legends_extract import extract_legends_snapshot
from df_save_re.save_preamble import resolve_save_payload
from tests.fixture_paths import resolve_fixture


def test_resolve_site_ceiling_namushul() -> None:
    resolved = resolve_save_payload(resolve_fixture("small-retired", "world.dat"))
    header = resolved.preamble.header
    assert header.max_ids[WORLD_HEADER_SITE_HIGH_WATER_SLOT] == 346
    assert resolve_site_ceiling(header) == 346 + SITE_CEILING_TAIL
    assert resolve_max_site_id(header) == 349


def test_resolve_site_ceiling_waterlures() -> None:
    resolved = resolve_save_payload(resolve_fixture("waterlures-retired", "world.dat"))
    header = resolved.preamble.header
    assert resolve_site_ceiling(header) == header.max_ids[26] + SITE_CEILING_TAIL


def test_extract_namushul_uses_header_site_ceiling() -> None:
    resolved = resolve_save_payload(resolve_fixture("small-retired", "world.dat"))
    snap = extract_legends_snapshot(resolved.payload, preamble=resolved.preamble)
    ceiling = resolve_site_ceiling(snap.header)
    assert ceiling == 350
    assert snap.world_site_catalog is not None
    catalog = snap.world_site_catalog
    assert catalog.site_count > 300
    assert catalog.site_count <= ceiling
    assert max(rec.site_id for rec in catalog.records) <= resolve_max_site_id(snap.header)
    assert all(0 <= rec.site_id < ceiling for rec in catalog.records)
    # Remaining gap needs full world_site body walk in region blobs (35 on Namushul).
    assert ceiling - catalog.site_count <= 40
