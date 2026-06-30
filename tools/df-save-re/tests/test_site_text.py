from pathlib import Path

from df_save_re.deserializers.site_text import parse_site_text_catalog

UPLOADS = Path("/home/ubuntu/.cursor/projects/workspace/uploads")


def test_parse_site_text_catalog_sample():
    text = """Sites

1: Eguakon, "Birthshadows", cave
\t5 gremlins
2: Quispepbora, "Bridledmined", cave
\tOwner: Jreersnus, kobolds
\tParent Civ: Jroshreebus, kobolds
\t26 kobolds
"""
    cat = parse_site_text_catalog(text)
    assert cat.site_count == 2
    assert cat.by_id()[1].display_name == "Birthshadows"
    assert cat.by_id()[2].owner == "Jreersnus, kobolds"


def test_parse_uploaded_sites_if_present():
    paths = list(UPLOADS.glob("*world_sites_and_pops*"))
    if not paths:
        return
    text = paths[0].read_bytes().decode("latin-1")
    cat = parse_site_text_catalog(text)
    assert cat.site_count == 350
    assert cat.total_population == 52372
    assert cat.by_id()[7].display_name == "Incensecross"
    assert cat.by_id()[7].site_type == "forest retreat"
