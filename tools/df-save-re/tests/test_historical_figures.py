"""Tests for historical_figure vector / header parsing."""

from pathlib import Path

import pytest
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.compression import decompress_file
from df_save_re.deserializers.historical_figures import (
    build_historical_figure_catalog,
    locate_figures_vector,
    read_historical_figure_header,
    walk_figure_id_chain,
)
from df_save_re.deserializers.world_dat import parse_dat_preamble
from df_save_re.deserializers.world_layout import discover_layout_landmarks

FIXTURE = Path(__file__).resolve().parents[1] / "tests/fixtures/small-retired/world.dat"

pytestmark = pytest.mark.skipif(
    not FIXTURE.is_file(),
    reason="fixture missing — run scripts/fetch_fixtures.py",
)


def _payload_and_header():
    payload = decompress_file(FIXTURE).payload
    pre = parse_dat_preamble(payload)
    layout = discover_layout_landmarks(payload, pre)
    assert layout.history_stats is not None
    return payload, pre.header, layout.history_stats


def test_locate_figures_vector_dense():
    payload, header, stats_off = _payload_and_header()
    anchor = locate_figures_vector(payload, header, search_start=stats_off)
    assert anchor is not None
    assert anchor.dense is True
    assert anchor.vector_count == 12_747
    assert anchor.vector_offset == 0x2131BB0
    assert anchor.bodies_start >= anchor.flags_end


def test_read_first_historical_figure_header():
    payload, header, stats_off = _payload_and_header()
    anchor = locate_figures_vector(payload, header, search_start=stats_off)
    assert anchor is not None
    reader = BinaryReader(BytesIO(payload))
    reader.seek(anchor.bodies_start)
    sv = 1716
    fig0 = read_historical_figure_header(reader, save_version=sv, figure_id=0)
    assert fig0.figure_id == 0
    # No art_count assertion: there is no art_count field in the save stream
    # (AGENTS.md §4); the dataclass slot is a legacy placeholder.
    assert fig0.race == 0
    assert fig0.civ_id == 437


def test_walk_figure_id_chain_dense():
    payload, header, stats_off = _payload_and_header()
    anchor = locate_figures_vector(payload, header, search_start=stats_off)
    assert anchor is not None
    sv = 1716
    stop = anchor.death_events_offset or len(payload)
    headers, last_id = walk_figure_id_chain(
        payload,
        start_offset=anchor.bodies_start,
        save_version=sv,
        max_figures=8,
        stop_before=stop,
    )
    assert len(headers) >= 1
    assert headers[0].figure_id == 0
    if len(headers) >= 2:
        assert headers[1].figure_id == 1


def test_build_historical_figure_catalog():
    payload, header, stats_off = _payload_and_header()
    catalog = build_historical_figure_catalog(
        payload,
        header,
        search_start=stats_off,
        id_chain_limit=8,
    )
    assert catalog is not None
    assert catalog.anchor.vector_count == 12_747
    assert catalog.id_chain_length >= 1
