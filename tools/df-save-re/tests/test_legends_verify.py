"""Tests for legends text vs world.dat cross-verification."""

from __future__ import annotations

from pathlib import Path

import pytest

from df_save_re.compression import decompress_file, read_header
from df_save_re.deserializers.world_dat import parse_dat_preamble
from df_save_re.legends_extract import extract_legends_snapshot
from df_save_re.legends_verify import VerifyStatus, parse_history_details, verify_snapshot_against_text
from df_save_re.legends_text import load_legends_text
from fixture_paths import resolve_fixture

NAMUSHUL_HISTORY = """\
Namushul
The Destined Realms
Bat men
Antmen
Bat men
The Hardy Armory, Dwarves
 Worship List
  Zim the Crystalline, deity: earth, mountains
 king List
  [*] Likot Goldirons (b.??? d. 2, Reign Began: 1), *** Original Line, Never Married
The Puzzling Mist, Elves
 Worship List
  Mame, force: nature, rivers
 druid List
  [*] Alisa Gleefulsilk (b.??? d. 3, Reign Began: 1), *** Original Line, Never Married
"""


def test_parse_history_details_subterranean_and_civs():
    # pad to 63 subterranean lines
    lines = ["Namushul", "The Destined Realms"]
    lines += ["Bat men"] * 63
    lines += ["The Hardy Armory, Dwarves", " king List", "  [*] Ruler One"]
    lines += ["The Puzzling Mist, Elves"]
    details = parse_history_details("\n".join(lines))
    assert details["subterranean_count"] == 63
    assert details["named_civ_count"] == 2
    assert details["ruler_count"] == 1


def test_verify_namushul_fixture(tmp_path: Path):
    path = resolve_fixture("small-retired", "world.dat")
    if path is None:
        pytest.skip("fixture missing")

    hist = tmp_path / "test-world_history.txt"
    # 63 subterranean + 15 named civs simulated via minimal header + counts
    lines = ["Namushul", "The Destined Realms"]
    lines += ["Bat men"] * 63
    for i in range(15):
        race = ["Dwarves", "Elves", "Humans", "Goblins"][i % 4]
        lines.append(f"Civ Number {i}, {race}")
    hist.write_text("\n".join(lines), encoding="utf-8")

    payload = decompress_file(path).payload
    pre = parse_dat_preamble(payload, save_version=read_header(path.read_bytes()).save_version)
    snap = extract_legends_snapshot(payload, preamble=pre)
    bundle = load_legends_text(hist)
    report = verify_snapshot_against_text(snap, bundle)

    by_field = {(c.layer, c.field): c for c in report.checks}
    assert by_field[("world_header", "world_name")].status == VerifyStatus.PASS
    assert by_field[("entities", "named_civ_count")].status == VerifyStatus.PASS
    assert by_field[("entities", "subterranean_civ_count")].status == VerifyStatus.PASS
    assert ("sites", "site_count") not in by_field or (
        by_field[("sites", "site_count")].status == VerifyStatus.PENDING
    )
    assert report.ok_for_parsed_layers()


def test_verify_uploaded_exports_if_present():
    upload = Path("/home/ubuntu/.cursor/projects/workspace/uploads")
    world = resolve_fixture("small-retired", "world.dat")
    if not upload.is_dir() or world is None:
        pytest.skip("uploads or fixture missing")

    payload = decompress_file(world).payload
    pre = parse_dat_preamble(payload, save_version=read_header(world.read_bytes()).save_version)
    snap = extract_legends_snapshot(payload, preamble=pre)
    bundle = load_legends_text(upload)
    report = verify_snapshot_against_text(snap, bundle)

    assert report.failed == 0
    assert report.passed >= 4
    assert report.pending >= 3
    sites = next(c for c in report.checks if c.field == "site_count")
    assert sites.expected == 350
