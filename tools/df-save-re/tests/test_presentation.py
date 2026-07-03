"""Tests for legends presentation layer."""

from __future__ import annotations

from pathlib import Path

import yaml

from df_save_re.web.presentation import (
    ResolveContext,
    _EVENT_SUMMARIZERS,
    resolve_reference,
    summarize_event,
    timeline_highlight,
)


def _ctx() -> ResolveContext:
    return ResolveContext(
        slug="namushul",
        figure_names={42: "Urist McMiner", 99: "Bob Slayer"},
        entity_names={7: "The Dwarven Kingdom"},
        site_names={12: "Stoutmurders"},
        enum_lookup={
            "death_type": {43: "Struck Down"},
            "job_skill": {5: "Mining"},
            "profession": {0: "Miner"},
        },
    )


class _FakeEvent:
    def __init__(self, event_id: int, event_type: str, year: int, hfid: int | None = None):
        self.event_id = event_id
        self.event_type = event_type
        self.year = year
        self.hfid = hfid
        self.site_id = None
        self.civ_id = None
        self.fields_json = None


def test_summarize_hist_figure_died():
    ctx = _ctx()
    event = _FakeEvent(1, "hist_figure_died", 142)
    fields = {
        "victim_hf": 42,
        "slayer_hf": 99,
        "site": 12,
        "death_cause": 43,
    }
    text = summarize_event(event, fields, ctx)
    assert "Urist McMiner" in text
    assert "died" in text
    assert "142" in text
    assert "Bob Slayer" in text
    assert "Stoutmurders" in text


def test_summarize_hist_figure_born():
    ctx = _ctx()
    event = _FakeEvent(2, "hist_figure_born", 98)
    fields = {"histfig": 42, "site": 12}
    text = summarize_event(event, fields, ctx)
    assert "Urist McMiner" in text
    assert "born" in text
    assert "98" in text


def test_resolve_figure_reference():
    ctx = _ctx()
    resolved = resolve_reference("victim_hf", 42, ctx)
    assert resolved.display == "Urist McMiner"
    assert resolved.href == "/world/namushul/figures/42"


def test_resolve_death_cause_enum():
    ctx = _ctx()
    resolved = resolve_reference("death_cause", 43, ctx)
    assert resolved.display == "Struck Down"


def test_timeline_highlight_birth_death():
    assert timeline_highlight("hist_figure_born") is True
    assert timeline_highlight("war_attacked_site") is False


def test_summarize_simple_battle():
    ctx = _ctx()
    ctx.figure_names.update({1366: "Urist", 978: "Goblin Chief"})
    event = _FakeEvent(3, "hist_figure_simple_battle_event", 51)
    fields = {"group1": [1366], "group2": [978], "subtype": 3}
    text = summarize_event(event, fields, ctx)
    assert "Urist" in text
    assert "Goblin Chief" in text
    assert "fought" in text


def test_summarize_change_hf_job():
    ctx = _ctx()
    ctx.figure_names[782] = "Miner Bob"
    ctx.enum_lookup.setdefault("profession", {})[102] = "Miner"
    ctx.enum_lookup["profession"][48] = "Craftsman"
    event = _FakeEvent(4, "change_hf_job", 51)
    fields = {"hfid": 782, "new_job": 102, "old_job": 48, "site": 12}
    text = summarize_event(event, fields, ctx)
    assert "Miner Bob" in text
    assert "miner" in text.lower()


def test_year_negative_uses_fields():
    ctx = _ctx()
    event = _FakeEvent(5, "hist_figure_born", -1)
    fields = {"histfig": 42, "year": 98}
    text = summarize_event(event, fields, ctx)
    assert "98" in text
    assert "-1" not in text

    assert timeline_highlight("hist_figure_born") is True
    assert timeline_highlight("war_attacked_site") is False


def test_event_template_manifest_matches_implementation():
    manifest_path = (
        Path(__file__).resolve().parents[1]
        / "df_save_re"
        / "web"
        / "event_templates.yaml"
    )
    manifest = yaml.safe_load(manifest_path.read_text(encoding="utf-8"))
    for event_type in manifest["templates"]:
        assert event_type in _EVENT_SUMMARIZERS, f"missing summarizer for {event_type}"
