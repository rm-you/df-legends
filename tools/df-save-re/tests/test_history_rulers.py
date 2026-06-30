"""Tests for ruler text/binary catalog."""

from pathlib import Path

from df_save_re.compression import decompress_file
from df_save_re.deserializers.history_rulers import build_ruler_catalog, parse_ruler_catalog
from df_save_re.deserializers.historical_figures import locate_figures_vector
from df_save_re.deserializers.history_stats import probe_history_stats
from df_save_re.deserializers.string_tables import parse_string_table_block
from df_save_re.deserializers.world_dat import parse_dat_preamble

FIXTURE = Path(__file__).resolve().parents[1] / "tests/fixtures/small-retired/world.dat"
UPLOADS = Path("/home/ubuntu/.cursor/projects/workspace/uploads")


def test_parse_ruler_catalog_structured():
    text = """The Hardy Armory, Dwarves
 king List
  [*] Likot Goldirons (b.??? d. 2, Reign Began: 1), *** Original Line
"""
    cat = parse_ruler_catalog(text)
    assert cat.ruler_count == 1
    ruler = cat.rulers[0]
    assert ruler.name == "Likot Goldirons"
    assert ruler.position == "king"
    assert ruler.entity == "The Hardy Armory"
    assert ruler.reign_began == 1


def test_build_ruler_catalog_namushul():
    paths = list(UPLOADS.glob("*world_history*"))
    if not paths:
        return
    text = paths[0].read_bytes().decode("latin-1")
    payload = decompress_file(FIXTURE).payload
    pre = parse_dat_preamble(payload)
    stats = probe_history_stats(payload, pre.header)
    assert stats is not None
    fig = locate_figures_vector(payload, pre.header, search_start=stats.payload_offset)
    assert fig is not None
    words = parse_string_table_block(payload).sections[8].names

    catalog = build_ruler_catalog(
        text,
        payload,
        words=words,
        search_start=stats.payload_offset,
        search_end=fig.bodies_start,
    )
    assert catalog.ruler_count == 71
    assert catalog.matched_count >= 50
    likot = next(m for m in catalog.markers if m.ruler_name.startswith("Likot"))
    assert likot.payload_offset == 0x15D0184
    assert likot.word_indices == (341, 433)
