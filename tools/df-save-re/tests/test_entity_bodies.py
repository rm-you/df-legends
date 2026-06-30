"""Tests for historical_entity body span measurement."""

from pathlib import Path

from df_save_re.compression import decompress_file
from df_save_re.deserializers.entity_bodies import (
    measure_entity_catalog_region,
    sample_entity_body_spans,
    summarize_entity_body_spans,
)
from df_save_re.deserializers.entity_def import catalog_entity_block
from df_save_re.deserializers.world_dat import parse_dat_preamble
from df_save_re.deserializers.world_layout import discover_layout_landmarks

FIXTURE = Path(__file__).resolve().parents[1] / "tests/fixtures/small-retired/world.dat"


def test_entity_body_span_summary_namushul():
    payload = decompress_file(FIXTURE).payload
    preamble = parse_dat_preamble(payload)
    layout = discover_layout_landmarks(payload, preamble)
    catalog = catalog_entity_block(payload, search_end=layout.history_stats)
    summary = summarize_entity_body_spans(payload, catalog.entities)
    assert summary is not None
    assert summary.sample_count == len(catalog.entities) - 1
    assert 1500 <= summary.min_span <= 4000
    assert summary.median_span >= summary.min_span
    assert summary.catalog_span_bytes > 1_000_000


def test_entity_catalog_region_namushul():
    payload = decompress_file(FIXTURE).payload
    preamble = parse_dat_preamble(payload)
    layout = discover_layout_landmarks(payload, preamble)
    catalog = catalog_entity_block(payload, search_end=layout.history_stats)
    region = measure_entity_catalog_region(
        payload,
        catalog.entities,
        region_end=layout.first_region_block,
        header_capacity_hint=preamble.header.max_ids[4],
    )
    assert region is not None
    assert region.header_count == len(catalog.entities)
    assert region.max_catalog_id == 203
    assert region.region_end == layout.first_region_block
    assert region.gap_after_catalog_bytes > 1_000_000


def test_entity_body_samples_have_positive_spans():
    payload = decompress_file(FIXTURE).payload
    preamble = parse_dat_preamble(payload)
    layout = discover_layout_landmarks(payload, preamble)
    catalog = catalog_entity_block(payload, search_end=layout.history_stats)
    samples = sample_entity_body_spans(payload, catalog.entities, max_samples=5)
    assert len(samples) == 5
    assert all(s.span_bytes is not None and s.span_bytes > 0 for s in samples)
