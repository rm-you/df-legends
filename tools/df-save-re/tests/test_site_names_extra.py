"""Tests for site name decomposition edge cases."""

from pathlib import Path

from df_save_re.compression import decompress_file
from df_save_re.deserializers.site_names import (
    decompose_display_name_to_word_indices,
    match_title_to_word_pair,
    build_word_pair_index,
)
from df_save_re.deserializers.string_tables import parse_string_table_block
from df_save_re.deserializers.world_dat import parse_dat_preamble
from df_save_re.deserializers.world_layout import discover_layout_landmarks

FIXTURE = Path(__file__).resolve().parents[1] / "tests/fixtures/small-retired/world.dat"


def test_decompose_bristledhollows():
    words = parse_string_table_block(decompress_file(FIXTURE).payload).sections[8].names
    assert decompose_display_name_to_word_indices("Bristledhollows", words=words) == (84, 1179)


def test_decompose_stolenveils():
    words = parse_string_table_block(decompress_file(FIXTURE).payload).sections[8].names
    assert decompose_display_name_to_word_indices("Stolenveils", words=words) == (822, 1564)


def test_pair_match_scalystop():
    payload = decompress_file(FIXTURE).payload
    layout = discover_layout_landmarks(payload, parse_dat_preamble(payload))
    words = parse_string_table_block(payload).sections[8].names
    pairs = build_word_pair_index(
        payload,
        start=layout.last_catalog_entity or 0,
        end=layout.history_stats or len(payload),
    )
    hit = match_title_to_word_pair("Scalystop", words=words, pair_index=pairs)
    assert hit is not None
    pair, off = hit
    assert pair[0] == 1868
    assert off > 0
