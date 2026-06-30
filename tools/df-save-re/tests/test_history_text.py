from pathlib import Path

from df_save_re.deserializers.history_text import parse_history_text_catalog
from df_save_re.legends_verify import parse_history_details

UPLOADS = Path("/home/ubuntu/.cursor/projects/workspace/uploads")


def test_parse_history_text_catalog_sample():
    text = """Namushul
The Destined Realms
Goblin men
The Puzzling Mist, Elves
[*] Urist was a queen of The Puzzling Mist
"""
    cat = parse_history_text_catalog(text)
    assert cat.world_name == "Namushul"
    assert cat.named_civ_count == 1
    assert cat.subterranean_count == 1
    assert cat.ruler_count == 1


def test_parse_uploaded_history_if_present():
    paths = list(UPLOADS.glob("*world_history*"))
    if not paths:
        return
    text = paths[0].read_text(encoding="utf-8", errors="replace")
    cat = parse_history_text_catalog(text)
    details = parse_history_details(text)
    assert cat.named_civ_count == details["named_civ_count"]
    assert cat.subterranean_count == details["subterranean_count"]
    assert cat.ruler_count == details["ruler_count"]
