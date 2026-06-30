"""Tests for marker-anchored world_site catalog."""

from pathlib import Path

from df_save_re.compression import decompress_file
from df_save_re.deserializers.site_catalog import build_world_site_catalog
from df_save_re.deserializers.site_names import parse_site_names_from_text, scan_site_name_markers
from df_save_re.deserializers.site_text import parse_site_text_catalog
from df_save_re.deserializers.string_tables import parse_string_table_block
from df_save_re.deserializers.world_dat import parse_dat_preamble
from df_save_re.deserializers.world_layout import discover_layout_landmarks

FIXTURE = Path(__file__).resolve().parents[1] / "tests/fixtures/small-retired/world.dat"
UPLOADS = Path("/home/ubuntu/.cursor/projects/workspace/uploads")


def test_world_site_catalog_namushul():
    payload = decompress_file(FIXTURE).payload
    preamble = parse_dat_preamble(payload)
    layout = discover_layout_landmarks(payload, preamble)
    block = parse_string_table_block(payload)
    sites_path = next(UPLOADS.glob("*world_sites_and_pops*"))
    text = sites_path.read_bytes().decode("latin-1")
    site_names = parse_site_names_from_text(text)
    text_catalog = parse_site_text_catalog(text)
    scan = scan_site_name_markers(
        payload,
        block=block,
        region_start=layout.first_region_block,
        region_end=layout.history_stats,
        site_names=site_names,
        search_start=layout.last_catalog_entity,
    )
    catalog = build_world_site_catalog(
        payload,
        name_scan=scan,
        text_catalog=text_catalog,
        search_start=layout.last_catalog_entity,
        search_end=layout.history_stats,
    )
    assert catalog.site_count == 350
    assert catalog.by_id()[345].display_name == "The Justice of Stances"
    assert catalog.by_id()[345].word_indices == (445, 818)
    assert catalog.header_enriched_count >= 30
    assert catalog.name_table_stride == 354
    assert catalog.name_table_base is not None
    assert 0x1190000 <= catalog.name_table_base <= 0x11A0000
