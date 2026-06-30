"""Tests for Legends mode text exports (p key)."""

from __future__ import annotations

from pathlib import Path

import pytest

from df_save_re.compression import decompress_file, read_header
from df_save_re.deserializers.world_dat import parse_dat_preamble
from df_save_re.legends_text import (
    classify_legends_text,
    compare_text_with_save,
    discover_legends_text_exports,
    load_legends_text,
    parse_world_history_text,
    parse_world_sites_text,
)
from fixture_paths import resolve_fixture


NAMUSHUL_HISTORY_SNIPPET = """\
Namushul
The Destined Realms

The Hardy Armory, Dwarves
 Worship List
  Zim the Crystalline, deity: earth, mountains
 king List
  [*] Likot Goldirons (b.??? d. 2, Reign Began: 1), *** Original Line, Never Married
"""

NAMUSHUL_SITES_SNIPPET = """\
Civilized World Population

	13236 Dwarves

	Total: 52372

Sites

1: Eguakon, "Birthshadows", cave
"""


def test_classify_new_style_filenames():
    assert classify_legends_text(Path("region3-00125-01-01-world_history_92fa.txt")) == "history"
    assert (
        classify_legends_text(Path("region3-00125-01-01-world_sites_and_pops_2c4f.txt"))
        == "sites"
    )
    assert classify_legends_text(Path("region3-world_gen_param_d4c5.txt")) == "world_gen"


def test_parse_history_and_sites_snippets(tmp_path: Path):
    hist = tmp_path / "region3-00125-01-01-world_history_ab12.txt"
    hist.write_text(NAMUSHUL_HISTORY_SNIPPET, encoding="utf-8")
    sites = tmp_path / "region3-00125-01-01-world_sites_and_pops_cd34.txt"
    sites.write_text(NAMUSHUL_SITES_SNIPPET, encoding="utf-8")

    h = parse_world_history_text(hist)
    assert h.world_name == "Namushul"
    assert h.alt_name == "The Destined Realms"
    assert h.ruler_entries == 1

    s = parse_world_sites_text(sites)
    assert s.site_count == 1
    assert s.total_population == 52372


def test_load_directory_bundle(tmp_path: Path):
    hist = tmp_path / "region3-00125-01-01-world_history_ab12.txt"
    hist.write_text(NAMUSHUL_HISTORY_SNIPPET, encoding="utf-8")
    gen = tmp_path / "region3-world_gen_param_ef56.txt"
    gen.write_text("Created in DF v0.47.05.\n[END_YEAR:125]\n", encoding="utf-8")

    found = discover_legends_text_exports(tmp_path)
    assert len(found) == 2

    bundle = load_legends_text(tmp_path)
    assert bundle.history is not None
    assert bundle.world_gen is not None
    assert compare_text_with_save(bundle, world_name="Namushul") == []


def test_validate_namushul_fixture_with_text(tmp_path: Path):
    path = resolve_fixture("small-retired", "world.dat")
    if path is None:
        pytest.skip("fixture missing")

    hist = tmp_path / "namushul-world_history.txt"
    hist.write_text(NAMUSHUL_HISTORY_SNIPPET, encoding="utf-8")
    bundle = load_legends_text(hist)

    payload = decompress_file(path).payload
    pre = parse_dat_preamble(payload, save_version=read_header(path.read_bytes()).save_version)
    world_name = pre.header.world_name.value if pre.header.world_name else None

    assert compare_text_with_save(bundle, world_name=world_name) == []


def test_uploaded_exports_if_present():
    upload_dir = Path("/home/ubuntu/.cursor/projects/workspace/uploads")
    hist = upload_dir / "region3-00125-01-01-world_history_92fa.txt"
    if not hist.is_file():
        pytest.skip("uploaded exports not present")

    stats = parse_world_history_text(hist)
    assert stats.world_name == "Namushul"
    assert stats.alt_name == "The Destined Realms"

    sites = upload_dir / "region3-00125-01-01-world_sites_and_pops_2c4f.txt"
    if sites.is_file():
        s = parse_world_sites_text(sites)
        assert s.site_count > 100
        assert s.total_population == 52372

    bundle = load_legends_text(upload_dir)
    assert compare_text_with_save(bundle, world_name="Namushul") == []
