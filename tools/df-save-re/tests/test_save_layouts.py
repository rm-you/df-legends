"""Tests for decompile-derived SAVE_LAYOUTS coverage."""

from __future__ import annotations

import json
from pathlib import Path

import pytest

from df_save_re.structures.save_layouts import SAVE_LAYOUTS

ROOT = Path(__file__).resolve().parents[1]
DECOMP = ROOT / "ghidra_decompiles"


def test_save_layouts_covers_all_event_tags():
    registry = json.loads((DECOMP / "event_registry.json").read_text())
    tags = {e["tag"] for e in registry}
    covered = {int(k.split(":")[1]) for k in SAVE_LAYOUTS if k.startswith("history_event:")}
    missing = tags - covered
    assert not missing, f"missing event layout tags: {sorted(missing)[:10]}"


def test_save_layouts_covers_link_tags():
    link_data = json.loads((DECOMP / "link_layouts.json").read_text())
    for factory_name, entries in link_data["links"].items():
        for e in entries:
            key = f"link:{factory_name}:{e['tag']}"
            assert key in SAVE_LAYOUTS, key
            assert SAVE_LAYOUTS[key].get("fields")


def test_change_hf_state_layout_spot_check():
    key = "history_event:45"
    layout = SAVE_LAYOUTS.get(key)
    assert layout is not None
    fields = layout["fields"]
    kinds = [f["kind"] for f in fields if f.get("kind") != "call"]
    assert "i32" in kinds or "scalar" in kinds


def test_entity_link_base_layout():
    key = "link:entity:0"
    layout = SAVE_LAYOUTS[key]
    assert layout["struct"] == "histfig_entity_link_memberst"
    assert any(f.get("kind") in ("i32", "scalar") for f in layout["fields"])
