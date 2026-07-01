"""Tests for legends export discovery beside save folders."""

from __future__ import annotations

from pathlib import Path

from df_save_re.legends_exports import discover_legends_exports


def test_discover_xml_inside_save_folder(tmp_path: Path) -> None:
    save = tmp_path / "region1"
    save.mkdir()
    (save / "world.dat").write_bytes(b"stub")
    xml = save / "region1-00250-01-01-legends.xml"
    xml.write_text("<df_world></df_world>", encoding="utf-8")

    bundle = discover_legends_exports(save / "world.dat")
    assert bundle.legends_xml == xml
    assert bundle.has_oracle


def test_discover_text_exports_in_parent_by_region_prefix(tmp_path: Path) -> None:
    save = tmp_path / "region1"
    save.mkdir()
    (save / "world.dat").write_bytes(b"stub")
    parent = tmp_path
    history = parent / "region1-00250-01-01-world_history.txt"
    history.write_text("Testworld\n", encoding="utf-8")
    sites = parent / "region1-00250-01-01-world_sites_and_pops.txt"
    sites.write_text("Sites\n\n1: foo\n", encoding="utf-8")

    bundle = discover_legends_exports(save)
    assert bundle.world_history == history
    assert bundle.world_sites == sites
    assert bundle.text_directory == parent


def test_prefers_save_folder_copy_over_parent(tmp_path: Path) -> None:
    save = tmp_path / "region1"
    save.mkdir()
    (save / "world.dat").write_bytes(b"stub")
    parent = tmp_path
    parent_xml = parent / "region1-legends.xml"
    parent_xml.write_text("<df_world/>", encoding="utf-8")
    save_xml = save / "region1-legends.xml"
    save_xml.write_text("<df_world><name>inside</name></df_world>", encoding="utf-8")

    bundle = discover_legends_exports(save)
    assert bundle.legends_xml == save_xml
