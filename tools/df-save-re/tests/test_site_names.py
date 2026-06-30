from pathlib import Path

from df_save_re.compression import decompress_file
from df_save_re.deserializers.site_names import (
    decompose_display_name_to_word_indices,
    parse_site_names_from_text,
    scan_site_name_markers,
)
from df_save_re.deserializers.string_tables import parse_string_table_block
from df_save_re.deserializers.world_dat import parse_dat_preamble
from df_save_re.deserializers.world_layout import discover_layout_landmarks

FIXTURE = Path(__file__).resolve().parents[1] / "tests/fixtures/small-retired/world.dat"
UPLOADS = Path("/home/ubuntu/.cursor/projects/workspace/uploads")


def test_decompose_birthshadows():
    payload = decompress_file(FIXTURE).payload
    block = parse_string_table_block(payload)
    table = block.sections[8].names
    idxs = decompose_display_name_to_word_indices("Birthshadows", words=table)
    assert idxs == (2176, 729)


def test_decompose_incensecross():
    payload = decompress_file(FIXTURE).payload
    block = parse_string_table_block(payload)
    table = block.sections[8].names
    idxs = decompose_display_name_to_word_indices("Incensecross", words=table)
    assert idxs == (427, 175)


def test_scan_namushul_site_markers_from_upload():
    payload = decompress_file(FIXTURE).payload
    preamble = parse_dat_preamble(payload)
    layout = discover_layout_landmarks(payload, preamble)
    sites_path = next(UPLOADS.glob("*world_sites_and_pops*"))
    site_names = parse_site_names_from_text(
        sites_path.read_bytes().decode("latin-1")
    )
    block = parse_string_table_block(payload)
    result = scan_site_name_markers(
        payload,
        block=block,
        region_start=layout.first_region_block,
        region_end=layout.history_stats,
        site_names=site_names,
    )
    assert result.located_count >= 200
    ids = {m.site_id for m in result.markers}
    assert 7 in ids


def test_parse_site_names_from_text():
    text = '1: Eguakon, "Birthshadows", cave\n2: X, "Foo Bar", town\n'
    assert parse_site_names_from_text(text) == {1: "Birthshadows", 2: "Foo Bar"}
