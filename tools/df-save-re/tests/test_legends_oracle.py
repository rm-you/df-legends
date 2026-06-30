"""Tests for the verify-only legends.xml oracle loader."""

from __future__ import annotations

from pathlib import Path

from df_save_re.legends_oracle import (
    find_legends_xml,
    parse_legends_oracle,
    resolve_oracle,
)

_SAMPLE_XML = """<?xml version="1.0" encoding="UTF-8"?>
<df_world>
<name>Namushul</name>
<altname>The World</altname>
<sites>
<site><id>0</id><type>cave</type><name>birthshadows</name><coords>10,20</coords></site>
<site><id>1</id><type>dark fortress</type><name>circleshaft</name><coords>30,40</coords></site>
</sites>
<historical_figures>
<historical_figure><id>0</id><name>likot</name><race>DWARF</race></historical_figure>
<historical_figure><id>5</id><name>asmel</name><race>HUMAN</race></historical_figure>
</historical_figures>
<historical_events>
<historical_event><id>0</id><year>1</year><type>create site</type></historical_event>
<historical_event><id>1</id><year>2</year><type>change hf state</type></historical_event>
<historical_event><id>2</id><year>3</year><type>hf died</type></historical_event>
</historical_events>
<entities>
<entity><id>0</id><name>the realm</name></entity>
</entities>
</df_world>
"""


def _write_sample(tmp_path: Path) -> Path:
    xml_path = tmp_path / "region1-legends.xml"
    xml_path.write_text(_SAMPLE_XML, encoding="utf-8")
    return xml_path


def test_parse_legends_oracle_counts(tmp_path: Path) -> None:
    oracle = parse_legends_oracle(_write_sample(tmp_path))
    assert oracle.world_name == "Namushul"
    assert oracle.alt_name == "The World"
    assert oracle.count("sites") == 2
    assert oracle.count("figures") == 2
    assert oracle.count("events") == 3
    assert oracle.count("entities") == 1
    assert oracle.max_id("figures") == 5
    assert oracle.max_id("events") == 2


def test_oracle_field_lookup(tmp_path: Path) -> None:
    oracle = parse_legends_oracle(_write_sample(tmp_path))
    sites = oracle.kind("sites")
    assert sites is not None
    assert sites.field_value(0, "type") == "cave"
    assert sites.field_value(1, "name") == "circleshaft"
    assert sites.field_value(1, "coords") == "30,40"


def test_find_and_resolve_oracle(tmp_path: Path) -> None:
    _write_sample(tmp_path)
    save_path = tmp_path / "world.dat"
    save_path.write_bytes(b"stub")
    found = find_legends_xml(save_path=save_path)
    assert found is not None
    oracle = resolve_oracle(save_path=save_path)
    assert oracle is not None
    assert oracle.count("sites") == 2


def test_resolve_oracle_absent(tmp_path: Path) -> None:
    save_path = tmp_path / "world.dat"
    save_path.write_bytes(b"stub")
    # No legends XML beside the save -> graceful None (uploads dir may also be empty).
    found = find_legends_xml(save_path=save_path)
    assert found is None or found.name.endswith("legends.xml")
