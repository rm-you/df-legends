"""Human-readable legends presentation: ID resolution, enum labels, event summaries."""

from __future__ import annotations

import json
import re
import xml.etree.ElementTree as ET
from dataclasses import dataclass
from functools import lru_cache
from pathlib import Path
from typing import Any, Callable

from sqlalchemy import select
from sqlalchemy.orm import Session

from ..deserializers.body_skipper import default_xml_dir
from ..db.models import HistoryEvent, WorldSite
from .queries import LegendsStore

_STRUCT_XML_GLOB = "df*.xml"

FIELD_ENUM_TYPES: dict[str, str] = {
    "death_cause": "death_type",
    "skill_id": "job_skill",
    "profession": "profession",
    "new_job": "profession",
    "old_job": "profession",
    "state": "whereabouts_type",
    "reason": "history_event_reason",
    "link_type": "histfig_entity_link_type",
    "type": "histfig_hf_link_type",
    "subtype": "history_event_simple_battle_subtype",
    "relationship_type": "histfig_relationship_type",
}

# Low-signal administrative events hidden from the default chronicle view.
CHRONICLE_NOISE_TYPES: frozenset[str] = frozenset(
    {
        "change_hf_state",
        "change_hf_job",
        "add_hf_entity_link",
        "remove_hf_entity_link",
        "add_hf_hf_link",
        "remove_hf_hf_link",
        "add_hf_site_link",
        "remove_hf_site_link",
        "hfs_formed_reputation_relationship",
    }
)

DEBUG_FIELD_RE = re.compile(r"^(flags|raw_b64|f_\d+)$")


@dataclass(frozen=True)
class ResolvedValue:
    display: str
    href: str | None = None
    raw: Any = None
    hidden: bool = False


@dataclass
class ResolveContext:
    slug: str
    figure_names: dict[int, str]
    entity_names: dict[int, str]
    site_names: dict[int, str]
    enum_lookup: dict[str, dict[int, str]]

    def figure_name(self, figure_id: int | None) -> str | None:
        if figure_id is None or figure_id < 0:
            return None
        return self.figure_names.get(figure_id, f"Figure #{figure_id}")

    def entity_name(self, entity_id: int | None) -> str | None:
        if entity_id is None or entity_id < 0:
            return None
        return self.entity_names.get(entity_id, f"Entity #{entity_id}")

    def site_name(self, site_id: int | None) -> str | None:
        if site_id is None or site_id < 0:
            return None
        return self.site_names.get(site_id, f"Site #{site_id}")

    def figure_href(self, figure_id: int | None) -> str | None:
        if figure_id is None or figure_id < 0:
            return None
        return f"/world/{self.slug}/figures/{figure_id}"

    def entity_href(self, entity_id: int | None) -> str | None:
        if entity_id is None or entity_id < 0:
            return None
        return f"/world/{self.slug}/entities/{entity_id}"

    def site_href(self, site_id: int | None) -> str | None:
        if site_id is None or site_id < 0:
            return None
        return f"/world/{self.slug}/sites/{site_id}"

    def enum_label(self, enum_type: str, value: Any) -> str | None:
        if not isinstance(value, int):
            return None
        table = self.enum_lookup.get(enum_type)
        if not table:
            return None
        return table.get(value)


@lru_cache(maxsize=4)
def _load_enum_tables(xml_dir: str) -> dict[str, dict[int, str]]:
    root = Path(xml_dir)
    tables: dict[str, dict[int, str]] = {}
    for path in sorted(root.glob(_STRUCT_XML_GLOB)):
        tree = ET.parse(path)
        for elem in tree.getroot():
            if elem.tag != "enum-type":
                continue
            type_name = elem.get("type-name")
            if not type_name:
                continue
            items: dict[int, str] = {}
            next_value = 0
            for item in elem.findall("enum-item"):
                name = item.get("name")
                if not name:
                    continue
                if item.get("value") is not None:
                    try:
                        next_value = int(item.get("value", "0"))
                    except ValueError:
                        continue
                items[next_value] = name.replace("_", " ").title()
                next_value += 1
            if items:
                tables[type_name] = items
    return tables


def _collect_reference_ids(
    events: list[HistoryEvent],
    store: LegendsStore,
) -> tuple[set[int], set[int], set[int]]:
    hf_ids: set[int] = set()
    entity_ids: set[int] = set()
    site_ids: set[int] = set()
    for event in events:
        if event.hfid is not None and event.hfid >= 0:
            hf_ids.add(event.hfid)
        if event.civ_id is not None and event.civ_id >= 0:
            entity_ids.add(event.civ_id)
        if event.site_id is not None and event.site_id >= 0:
            site_ids.add(event.site_id)
        for key, value in store.event_fields(event).items():
            lk = key.lower()
            if isinstance(value, list):
                if "hf" in lk or "histfig" in lk or key in ("group1", "group2", "group"):
                    for item in value:
                        if isinstance(item, int) and item >= 0:
                            hf_ids.add(item)
                continue
            if not isinstance(value, int) or value < 0:
                continue
            if "hf" in lk or "histfig" in lk:
                hf_ids.add(value)
            elif "civ" in lk or key == "entity":
                entity_ids.add(value)
            elif key in ("site", "site_id") or lk.endswith("_site"):
                site_ids.add(value)
    return hf_ids, entity_ids, site_ids


def build_resolve_context(
    store: LegendsStore,
    session: Session,
    slug: str,
    *,
    xml_dir: Path | None = None,
    extra_figure_ids: list[int] | None = None,
    events: list[HistoryEvent] | None = None,
) -> ResolveContext:
    xml_path = (xml_dir or default_xml_dir()).resolve()
    hf_ids, entity_ids, site_ids = (
        _collect_reference_ids(events, store) if events else (set(), set(), set())
    )
    if extra_figure_ids:
        hf_ids.update(extra_figure_ids)
    sites = session.scalars(select(WorldSite)).all()
    site_names = {s.site_id: s.display_name or f"Site #{s.site_id}" for s in sites}
    entity_names = store.entity_name_map(session)
    figure_names = (
        store.figure_name_map(session, list(hf_ids)) if hf_ids else {}
    )
    return ResolveContext(
        slug=slug,
        figure_names=figure_names,
        entity_names=entity_names,
        site_names=site_names,
        enum_lookup=_load_enum_tables(str(xml_path)),
    )


def is_debug_field(field_name: str) -> bool:
    return bool(DEBUG_FIELD_RE.match(field_name))


def _field_enum_type(field_name: str) -> str | None:
    if field_name in FIELD_ENUM_TYPES:
        return FIELD_ENUM_TYPES[field_name]
    return None


def resolve_reference(
    field_name: str,
    value: Any,
    ctx: ResolveContext,
) -> ResolvedValue:
    if is_debug_field(field_name):
        return ResolvedValue(display=str(value), raw=value, hidden=True)

    if isinstance(value, (list, dict, bytes)):
        return ResolvedValue(display=str(value), raw=value)

    if isinstance(value, int) and value < 0:
        return ResolvedValue(display=str(value), raw=value)

    key = field_name.lower()
    if isinstance(value, int):
        if key == "hfid" or key.endswith("_hf") or "histfig" in key:
            name = ctx.figure_name(value)
            return ResolvedValue(display=name or str(value), href=ctx.figure_href(value), raw=value)
        if key == "entity" or key.endswith("_civ") or key.endswith("_entity") or "civ" in key:
            name = ctx.entity_name(value)
            return ResolvedValue(display=name or str(value), href=ctx.entity_href(value), raw=value)
        if key in ("site", "site_id") or key.endswith("_site"):
            name = ctx.site_name(value)
            return ResolvedValue(display=name or str(value), href=ctx.site_href(value), raw=value)
        enum_type = _field_enum_type(field_name)
        if enum_type:
            label = ctx.enum_label(enum_type, value)
            if label:
                return ResolvedValue(display=label, raw=value)

    return ResolvedValue(display=str(value), raw=value)


def resolve_event_fields(
    fields: dict[str, Any],
    ctx: ResolveContext,
    *,
    include_debug: bool = False,
) -> list[tuple[str, ResolvedValue]]:
    rows: list[tuple[str, ResolvedValue]] = []
    for key, value in sorted(fields.items()):
        resolved = resolve_reference(key, value, ctx)
        if resolved.hidden and not include_debug:
            continue
        rows.append((key, resolved))
    return rows


def _year_phrase(year: Any) -> str:
    if year is None or (isinstance(year, int) and year < 0):
        return ""
    return f" in {year}"


def _event_year(event: HistoryEvent, fields: dict[str, Any]) -> Any:
    col_year = event.year
    field_year = fields.get("year")
    if isinstance(field_year, int) and field_year >= 0:
        if col_year is None or col_year < 0:
            return field_year
    if isinstance(col_year, int) and col_year >= 0:
        return col_year
    return field_year if field_year is not None else col_year


def _enum_label(ctx: ResolveContext, enum_type: str, value: Any) -> str | None:
    if isinstance(value, int):
        return ctx.enum_label(enum_type, value)
    return None


def _fmt_figure_group(
    ctx: ResolveContext,
    fields: dict,
    key: str,
    *,
    max_names: int = 2,
) -> str | None:
    raw = fields.get(key)
    if not isinstance(raw, list):
        return None
    ids = [item for item in raw if isinstance(item, int) and item >= 0]
    if not ids:
        return None
    names = [ctx.figure_name(item) for item in ids[:max_names]]
    names = [name for name in names if name]
    if not names:
        return f"{len(ids)} figures"
    if len(ids) == 1:
        return names[0]
    if len(ids) <= max_names:
        return f"{', '.join(names[:-1])} and {names[-1]}"
    extra = len(ids) - max_names
    return f"{', '.join(names)} and {extra} others"


def _fmt_figure(ctx: ResolveContext, fields: dict, *keys: str) -> str | None:
    for key in keys:
        val = fields.get(key)
        if isinstance(val, int) and val >= 0:
            return ctx.figure_name(val)
    return None


def _fmt_site(ctx: ResolveContext, fields: dict, *keys: str) -> str | None:
    for key in keys:
        val = fields.get(key)
        if isinstance(val, int) and val >= 0:
            return ctx.site_name(val)
    return None


def _fmt_entity(ctx: ResolveContext, fields: dict, *keys: str) -> str | None:
    for key in keys:
        val = fields.get(key)
        if isinstance(val, int) and val >= 0:
            return ctx.entity_name(val)
    return None


def _death_cause_label(ctx: ResolveContext, fields: dict) -> str | None:
    cause = fields.get("death_cause")
    if isinstance(cause, int):
        return ctx.enum_label("death_type", cause)
    return None


def _summarize_hist_figure_died(ctx: ResolveContext, fields: dict, year: Any) -> str:
    victim = _fmt_figure(ctx, fields, "victim_hf", "hfid") or "Someone"
    parts = [f"{victim} died{_year_phrase(year)}"]
    slayer = _fmt_figure(ctx, fields, "slayer_hf")
    site = _fmt_site(ctx, fields, "site", "site_id")
    cause = _death_cause_label(ctx, fields)
    if slayer:
        tail = f", slain by {slayer}"
        if site:
            tail += f" at {site}"
        parts.append(tail)
    elif site:
        parts.append(f" at {site}")
    if cause:
        parts.append(f" ({cause.lower()})")
    return "".join(parts)


def _summarize_hist_figure_born(ctx: ResolveContext, fields: dict, year: Any) -> str:
    who = _fmt_figure(ctx, fields, "histfig", "hfid", "mother_hf", "father_hf") or "A figure"
    site = _fmt_site(ctx, fields, "site", "site_id")
    text = f"{who} was born{_year_phrase(year)}"
    if site:
        text += f" at {site}"
    return text


def _summarize_entity_created(ctx: ResolveContext, fields: dict, year: Any) -> str:
    entity = _fmt_entity(ctx, fields, "entity") or "An entity"
    site = _fmt_site(ctx, fields, "site", "site_id")
    text = f"{entity} was founded{_year_phrase(year)}"
    if site:
        text += f" at {site}"
    return text


def _summarize_war_attacked_site(ctx: ResolveContext, fields: dict, year: Any) -> str:
    attacker = _fmt_entity(ctx, fields, "attacker_civ", "attacker") or "An army"
    site = _fmt_site(ctx, fields, "site", "site_id") or "a site"
    return f"{attacker} attacked {site}{_year_phrase(year)}"


def _summarize_artifact_created(ctx: ResolveContext, fields: dict, year: Any) -> str:
    creator = _fmt_figure(ctx, fields, "creator_hfid", "histfig", "hfid")
    civ = _fmt_entity(ctx, fields, "civ", "entity")
    site = _fmt_site(ctx, fields, "site", "site_id")
    if creator:
        text = f"{creator} created an artifact{_year_phrase(year)}"
    else:
        text = f"An artifact was created{_year_phrase(year)}"
    if civ:
        text += f" for {civ}"
    if site:
        text += f" at {site}"
    return text


def _summarize_site_conquered(ctx: ResolveContext, fields: dict, year: Any) -> str:
    site = _fmt_site(ctx, fields, "site", "site_id") or "A site"
    conqueror = _fmt_entity(ctx, fields, "civ", "attacker_civ") or "a civilization"
    return f"{site} was conquered by {conqueror}{_year_phrase(year)}"


def _summarize_field_battle(ctx: ResolveContext, fields: dict, year: Any) -> str:
    site = _fmt_site(ctx, fields, "site", "site_id")
    text = f"A field battle occurred{_year_phrase(year)}"
    if site:
        text += f" near {site}"
    return text


def _summarize_agreement(ctx: ResolveContext, fields: dict, year: Any, *, formed: bool) -> str:
    a = _fmt_entity(ctx, fields, "first_civ", "civ") or "one party"
    b = _fmt_entity(ctx, fields, "second_civ") or "another"
    verb = "formed" if formed else "concluded"
    return f"An agreement was {verb} between {a} and {b}{_year_phrase(year)}"


def _summarize_hist_figure_travel(ctx: ResolveContext, fields: dict, year: Any) -> str:
    who = _fmt_figure(ctx, fields, "histfig", "hfid") or "A figure"
    site = _fmt_site(ctx, fields, "site", "site_id")
    text = f"{who} traveled{_year_phrase(year)}"
    if site:
        text += f" to {site}"
    return text


def _summarize_change_hf_state(ctx: ResolveContext, fields: dict, year: Any) -> str:
    who = _fmt_figure(ctx, fields, "hfid", "histfig") or "A figure"
    state = _enum_label(ctx, "whereabouts_type", fields.get("state"))
    site = _fmt_site(ctx, fields, "site", "site_id")
    if state:
        text = f"{who} is now {state.lower()}{_year_phrase(year)}"
    else:
        text = f"{who} changed location{_year_phrase(year)}"
    if site:
        text += f" at {site}"
    return text


def _summarize_change_hf_job(ctx: ResolveContext, fields: dict, year: Any) -> str:
    who = _fmt_figure(ctx, fields, "hfid", "histfig") or "A figure"
    new_job = _enum_label(ctx, "profession", fields.get("new_job"))
    old_job = _enum_label(ctx, "profession", fields.get("old_job"))
    site = _fmt_site(ctx, fields, "site", "site_id")
    if new_job and old_job and new_job != old_job:
        text = f"{who} changed profession from {old_job.lower()} to {new_job.lower()}{_year_phrase(year)}"
    elif new_job:
        text = f"{who} became a {new_job.lower()}{_year_phrase(year)}"
    else:
        text = f"{who} changed profession{_year_phrase(year)}"
    if site:
        text += f" at {site}"
    return text


def _summarize_simple_battle(ctx: ResolveContext, fields: dict, year: Any) -> str:
    group1 = _fmt_figure_group(ctx, fields, "group1") or "someone"
    group2 = _fmt_figure_group(ctx, fields, "group2") or "someone else"
    subtype = _enum_label(ctx, "history_event_simple_battle_subtype", fields.get("subtype"))
    site = _fmt_site(ctx, fields, "site", "site_id")
    text = f"{group1} fought {group2}{_year_phrase(year)}"
    if subtype and subtype.lower() not in ("none",):
        text += f" ({subtype.lower()})"
    if site:
        text += f" at {site}"
    return text


def _summarize_hf_entity_link(
    ctx: ResolveContext,
    fields: dict,
    year: Any,
    *,
    added: bool,
) -> str:
    who = _fmt_figure(ctx, fields, "histfig", "hf", "hfid") or "A figure"
    civ = _fmt_entity(ctx, fields, "civ", "entity") or "a civilization"
    link = _enum_label(ctx, "histfig_entity_link_type", fields.get("link_type"))
    verb = "joined" if added else "left"
    if link:
        text = f"{who} {verb} {civ} as {link.lower()}{_year_phrase(year)}"
    else:
        text = f"{who} {verb} {civ}{_year_phrase(year)}"
    return text


def _summarize_hf_hf_link(
    ctx: ResolveContext,
    fields: dict,
    year: Any,
    *,
    added: bool,
) -> str:
    who = _fmt_figure(ctx, fields, "hf", "histfig", "hfid") or "A figure"
    other = _fmt_figure(ctx, fields, "hf_target", "hfid_target") or "another figure"
    link = _enum_label(ctx, "histfig_hf_link_type", fields.get("type", fields.get("link_type")))
    verb = "formed a link with" if added else "ended a link with"
    if link:
        text = f"{who} {verb} {other} ({link.lower()}){_year_phrase(year)}"
    else:
        text = f"{who} {verb} {other}{_year_phrase(year)}"
    return text


def _summarize_written_content(ctx: ResolveContext, fields: dict, year: Any) -> str:
    who = _fmt_figure(ctx, fields, "histfig", "hfid") or "A figure"
    site = _fmt_site(ctx, fields, "site", "site_id")
    text = f"{who} composed a written work{_year_phrase(year)}"
    if site:
        text += f" at {site}"
    return text


def _summarize_created_site(ctx: ResolveContext, fields: dict, year: Any) -> str:
    site = _fmt_site(ctx, fields, "site", "site_id") or "A settlement"
    civ = _fmt_entity(ctx, fields, "civ", "entity")
    text = f"{site} was founded{_year_phrase(year)}"
    if civ:
        text += f" by {civ}"
    return text


def _summarize_created_building(ctx: ResolveContext, fields: dict, year: Any) -> str:
    site = _fmt_site(ctx, fields, "site", "site_id")
    text = f"A structure was built{_year_phrase(year)}"
    if site:
        text += f" at {site}"
    return text


def _summarize_creature_devoured(ctx: ResolveContext, fields: dict, year: Any) -> str:
    eater = _fmt_figure(ctx, fields, "eater", "hfid", "histfig") or "A creature"
    victim = _fmt_figure(ctx, fields, "victim", "victim_hf") or "a victim"
    site = _fmt_site(ctx, fields, "site", "site_id")
    text = f"{eater} devoured {victim}{_year_phrase(year)}"
    if site:
        text += f" at {site}"
    return text


def _summarize_entity_location(ctx: ResolveContext, fields: dict, year: Any) -> str:
    entity = _fmt_entity(ctx, fields, "entity") or "An entity"
    site = _fmt_site(ctx, fields, "site", "site_id")
    text = f"{entity} was located{_year_phrase(year)}"
    if site:
        text += f" at {site}"
    return text


def _summarize_create_entity_position(ctx: ResolveContext, fields: dict, year: Any) -> str:
    who = _fmt_figure(ctx, fields, "hfid", "histfig") or "A figure"
    entity = _fmt_entity(ctx, fields, "entity", "civ")
    text = f"{who} took a position{_year_phrase(year)}"
    if entity:
        text += f" in {entity}"
    return text


def _summarize_artifact_lost_found(ctx: ResolveContext, fields: dict, year: Any, *, found: bool) -> str:
    site = _fmt_site(ctx, fields, "site", "site_id")
    verb = "found" if found else "lost"
    text = f"An artifact was {verb}{_year_phrase(year)}"
    if site:
        text += f" at {site}"
    return text


def _summarize_default(event_type: str, ctx: ResolveContext, fields: dict, year: Any) -> str:
    who = _fmt_figure(ctx, fields, "hfid", "histfig", "victim_hf", "slayer_hf")
    site = _fmt_site(ctx, fields, "site", "site_id")
    civ = _fmt_entity(ctx, fields, "entity", "civ", "attacker_civ", "defender_civ")
    label = event_type.replace("_", " ").strip() or "event"
    if who:
        text = f"{who}: {label}"
    else:
        text = label
    text += _year_phrase(year)
    if site:
        text += f" at {site}"
    elif civ:
        text += f" ({civ})"
    return text


_EVENT_SUMMARIZERS: dict[str, Callable[[ResolveContext, dict, Any], str]] = {
    "hist_figure_died": _summarize_hist_figure_died,
    "hist_figure_born": _summarize_hist_figure_born,
    "entity_created": _summarize_entity_created,
    "war_attacked_site": _summarize_war_attacked_site,
    "artifact_created": _summarize_artifact_created,
    "site_conquered": _summarize_site_conquered,
    "field_battle": _summarize_field_battle,
    "agreement_formed": lambda c, f, y: _summarize_agreement(c, f, y, formed=True),
    "agreement_concluded": lambda c, f, y: _summarize_agreement(c, f, y, formed=False),
    "hist_figure_travel": _summarize_hist_figure_travel,
    "change_hf_state": _summarize_change_hf_state,
    "change_hf_job": _summarize_change_hf_job,
    "hist_figure_simple_battle_event": _summarize_simple_battle,
    "add_hf_entity_link": lambda c, f, y: _summarize_hf_entity_link(c, f, y, added=True),
    "remove_hf_entity_link": lambda c, f, y: _summarize_hf_entity_link(c, f, y, added=False),
    "add_hf_hf_link": lambda c, f, y: _summarize_hf_hf_link(c, f, y, added=True),
    "remove_hf_hf_link": lambda c, f, y: _summarize_hf_hf_link(c, f, y, added=False),
    "written_content_composed": _summarize_written_content,
    "created_site": _summarize_created_site,
    "created_building": _summarize_created_building,
    "creature_devoured": _summarize_creature_devoured,
    "entity_location": _summarize_entity_location,
    "create_entity_position": _summarize_create_entity_position,
    "artifact_lost": lambda c, f, y: _summarize_artifact_lost_found(c, f, y, found=False),
    "artifact_found": lambda c, f, y: _summarize_artifact_lost_found(c, f, y, found=True),
    "hist_figure_revived": lambda c, f, y: f"{_fmt_figure(c, f, 'hfid', 'histfig') or 'A figure'} was revived{_year_phrase(y)}",
}


def summarize_event(
    event: HistoryEvent,
    fields: dict[str, Any],
    ctx: ResolveContext,
) -> str:
    event_type = event.event_type or "unknown"
    fields = fields or {}
    year = _event_year(event, fields)
    fn = _EVENT_SUMMARIZERS.get(event_type)
    if fn:
        return fn(ctx, fields, year)
    return _summarize_default(event_type, ctx, fields, year)


def summarize_events(
    events: list[HistoryEvent],
    store: LegendsStore,
    ctx: ResolveContext,
) -> dict[int, str]:
    out: dict[int, str] = {}
    for event in events:
        fields = store.event_fields(event)
        out[event.event_id] = summarize_event(event, fields, ctx)
    return out


def enum_label_for_field(
    ctx: ResolveContext,
    field_name: str,
    value: Any,
) -> str | None:
    enum_type = _field_enum_type(field_name)
    if enum_type and isinstance(value, int):
        return ctx.enum_label(enum_type, value)
    return None


def event_fields_from_json(fields_json: str | None) -> dict[str, Any]:
    if not fields_json:
        return {}
    try:
        fields = json.loads(fields_json)
    except ValueError:
        return {}
    return {k: v for k, v in fields.items() if not k.startswith("_")}


def timeline_highlight(event_type: str | None) -> bool:
    if not event_type:
        return False
    return event_type in {
        "hist_figure_born",
        "hist_figure_died",
        "create_entity_position",
        "hist_figure_revived",
        "entity_created",
    }
