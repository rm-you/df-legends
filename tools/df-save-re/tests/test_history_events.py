"""Tests for history events catalog."""

from pathlib import Path

from df_save_re.compression import decompress_file
from df_save_re.deserializers.history_events import build_history_events_catalog
from df_save_re.deserializers.world_dat import parse_dat_preamble
from df_save_re.deserializers.world_layout import discover_layout_landmarks

FIXTURE = Path(__file__).resolve().parents[1] / "tests/fixtures/small-retired/world.dat"


def test_build_history_events_catalog_namushul():
    payload = decompress_file(FIXTURE).payload
    pre = parse_dat_preamble(payload)
    layout = discover_layout_landmarks(payload, pre)
    assert layout.history_stats is not None

    catalog = build_history_events_catalog(
        payload,
        pre.header,
        search_start=layout.history_stats,
    )
    assert catalog is not None
    assert catalog.event_count == 113_118
    assert catalog.stats.fields.field_151 == 151
    assert catalog.stats.fields.field_4 == 4
    assert catalog.death_events is not None
    assert catalog.death_events.vector_offset == 0x226009C
    assert catalog.death_events.vector_count == 151
