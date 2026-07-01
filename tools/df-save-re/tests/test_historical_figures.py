"""Tests for historical_figure vector / header parsing."""

from pathlib import Path

from df_save_re.compression import decompress_file
from df_save_re.deserializers.historical_figures import (
    build_historical_figure_catalog,
    locate_figures_vector,
    read_historical_figure_header,
    walk_figure_id_chain,
)
from df_save_re.deserializers.world_dat import parse_dat_preamble
from df_save_re.deserializers.world_layout import discover_layout_landmarks
from io import BytesIO

from df_save_re.binary_reader import BinaryReader

FIXTURE = Path(__file__).resolve().parents[1] / "tests/fixtures/small-retired/world.dat"


def _payload_and_header():
    payload = decompress_file(FIXTURE).payload
    pre = parse_dat_preamble(payload)
    layout = discover_layout_landmarks(payload, pre)
    assert layout.history_stats is not None
    return payload, pre.header, layout.history_stats


def test_locate_figures_vector_namushul():
    payload, header, stats_off = _payload_and_header()
    anchor = locate_figures_vector(payload, header, search_start=stats_off)
    assert anchor is not None
    assert anchor.vector_offset == 0x2131BB0
    assert anchor.vector_count == 12_747
    assert anchor.bodies_start == 0x2134DD8
    assert anchor.death_events_offset is None
    assert anchor.prefix_bytes == 0x58


def test_read_first_historical_figure_header():
    payload, _, _ = _payload_and_header()
    reader = BinaryReader(BytesIO(payload))
    reader.seek(0x2134DD8)
    header = read_historical_figure_header(reader)
    assert header.figure_id == 0
    assert header.race == 0
    assert header.civ_id == 437
    assert not header.name.has_name
    assert header.art_count == 15


def test_walk_figure_id_chain_starts_at_zero():
    payload, _, _ = _payload_and_header()
    headers, last_id = walk_figure_id_chain(
        payload,
        start_offset=0x2134DD8,
        max_figures=16,
        stop_before=0x226009C,
    )
    assert last_id >= 5
    assert len(headers) >= 6
    assert headers[0].figure_id == 0
    assert headers[1].figure_id == 1
    assert all(headers[i].figure_id == i for i in range(min(6, len(headers))))


def test_build_historical_figure_catalog():
    payload, header, stats_off = _payload_and_header()
    catalog = build_historical_figure_catalog(
        payload,
        header,
        search_start=stats_off,
        id_chain_limit=16,
    )
    assert catalog is not None
    assert catalog.anchor.vector_count == 12_747
    assert catalog.id_chain_length >= 6
    assert catalog.max_id_seen >= 5
