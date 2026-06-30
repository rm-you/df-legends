"""Tests for post-header raw stream and legends XML compare."""

from __future__ import annotations

from pathlib import Path

import pytest

from df_save_re.compression import decompress_file, read_header
from df_save_re.deserializers.post_header import PostHeaderRawStream
from df_save_re.deserializers.world_dat import parse_dat_preamble
from df_save_re.legends_scan import find_history_anchor
from df_save_re.legends_xml import compare_with_save_header, parse_legends_xml
from df_save_re.binary_reader import BinaryReader
from io import BytesIO
from fixture_paths import resolve_fixture


def test_post_header_stream_small_world():
    path = resolve_fixture("small-retired", "world.dat")
    if path is None:
        pytest.skip("fixture missing")
    payload = decompress_file(path).payload
    pre = parse_dat_preamble(payload, save_version=read_header(path.read_bytes()).save_version)
    reader = BinaryReader(BytesIO(payload))
    reader.seek(pre.world_data_offset)
    stream = PostHeaderRawStream.read(reader)
    assert stream.lead_field == 426
    assert len(stream.sections) >= 400
    assert stream.sections[0].string_count == 15
    assert stream.sections[0].strings[0] == "item_layer"
    assert stream.total_strings > 7000


def test_history_anchor_on_small_world():
    path = resolve_fixture("small-retired", "world.dat")
    if path is None:
        pytest.skip("fixture missing")
    payload = decompress_file(path).payload
    pre = parse_dat_preamble(payload, save_version=read_header(path.read_bytes()).save_version)
    anchor = find_history_anchor(payload, pre.header, start=pre.world_data_offset)
    assert anchor is not None
    assert anchor.event_count == pre.header.max_ids[9]
    assert anchor.payload_offset == 0x15BEB28
    assert anchor.nearby_offset == 0x15BEB34


def test_legends_xml_parse_and_compare(tmp_path: Path):
    xml = tmp_path / "legends.xml"
    xml.write_text(
        """<?xml version="1.0"?>
        <df_world>
          <name>Namushul</name>
          <historical_events>
            <historical_event><id>100</id><type>created_world</type></historical_event>
            <historical_event><id>500</id><type>hf_died</type></historical_event>
          </historical_events>
          <historical_figures>
            <historical_figure><id>50</id></historical_figure>
          </historical_figures>
        </df_world>
        """,
        encoding="utf-8",
    )
    stats = parse_legends_xml(xml)
    assert stats.world_name == "Namushul"
    assert stats.historical_events == 2
    assert stats.historical_figures == 1
    assert stats.max_event_id == 500
    assert stats.max_figure_id == 50
    name_ok = compare_with_save_header(
        stats,
        world_name="Namushul",
        max_histfig=None,
        max_event=None,
    )
    assert name_ok == []
