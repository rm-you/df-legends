"""Map nested reader records to SQLite row dicts (hot columns + record_json)."""

from __future__ import annotations

import json
from typing import Any

RecordDict = dict[str, Any]


def _json(record: RecordDict) -> str:
    return json.dumps(record, default=str, separators=(",", ":"))


def _name_display(record: RecordDict) -> str | None:
    words = record.get("name_words")
    if isinstance(words, list) and words:
        return " ".join(str(w) for w in words[:3])
    ln = record.get("__language_name__")
    return str(ln) if ln else None


def historical_figure_row(record: RecordDict, *, payload_offset: int) -> RecordDict:
    return {
        "figure_id": int(record["id"]),
        "profession": record.get("profession"),
        "race": record.get("race"),
        "caste": record.get("caste"),
        "sex": record.get("sex"),
        "civ_id": record.get("civ_id"),
        "population_id": record.get("population_id"),
        "breed_id": record.get("breed_id"),
        "cultural_identity": record.get("cultural_identity"),
        "family_head_id": record.get("family_head_id"),
        "unit_id": record.get("unit_id"),
        "nemesis_id": record.get("nemesis_id"),
        "appeared_year": record.get("appeared_year"),
        "born_year": record.get("born_year"),
        "born_seconds": record.get("born_seconds"),
        "died_year": record.get("died_year"),
        "died_seconds": record.get("died_seconds"),
        "curse_year": record.get("curse_year"),
        "curse_seconds": record.get("curse_seconds"),
        "name_display": _name_display(record),
        "name_words_json": json.dumps(record.get("name_words", [])),
        "payload_offset": payload_offset,
        "record_json": _json(record),
    }


def history_event_row(record: RecordDict, *, payload_offset: int, fallback_id: int) -> RecordDict:
    event_id = record.get("id")
    if event_id is None:
        event_id = fallback_id
    return {
        "event_id": int(event_id),
        "year": record.get("year"),
        "seconds": record.get("seconds"),
        "event_type": record.get("__type__"),
        "civ_id": record.get("civ") or record.get("civ_id"),
        "site_id": record.get("site") or record.get("site_id"),
        "hfid": record.get("hfid") or record.get("histfig"),
        "fields_json": _json(record),
        "record_json": _json(record),
    }


def world_site_row(record: RecordDict, *, payload_offset: int, fallback_id: int) -> RecordDict:
    site_id = record.get("id", fallback_id)
    coord = record.get("global_coord") or record.get("pos") or {}
    if isinstance(coord, dict):
        pos_x = coord.get("x")
        pos_y = coord.get("y")
    else:
        pos_x = pos_y = None
    return {
        "site_id": int(site_id),
        "display_name": _name_display(record) or f"site-{site_id}",
        "site_type": record.get("type"),
        "site_type_name": None,
        "civ_id": record.get("civ_id"),
        "cur_owner_id": record.get("cur_owner_id"),
        "pos_x": pos_x,
        "pos_y": pos_y,
        "word_indices_json": None,
        "name_marker_offset": None,
        "header_offset": payload_offset,
        "record_json": _json(record),
    }


def historical_entity_row(record: RecordDict, *, payload_offset: int, fallback_id: int) -> RecordDict:
    entity_id = record.get("id", fallback_id)
    return {
        "entity_id": int(entity_id),
        "entity_type": record.get("type", 0),
        "entity_class": str(record.get("entity_raw") or record.get("entity_class") or "UNKNOWN"),
        "field_16a": record.get("field_16a"),
        "field_16b": record.get("field_16b"),
        "next_entity_id": record.get("next_entity_id"),
        "short_list_size": record.get("short_list_size"),
        "has_name": bool(record.get("name") or record.get("name_words")),
        "resolved_name": _name_display(record),
        "name_source": "binary",
        "payload_offset": payload_offset,
        "record_json": _json(record),
    }


def artifact_row(record: RecordDict, *, payload_offset: int, fallback_id: int) -> RecordDict:
    artifact_id = record.get("id", fallback_id)
    return {
        "artifact_id": int(artifact_id),
        "name_display": _name_display(record),
        "item_type": record.get("item_type"),
        "holder_hfid": record.get("holder_hfid") or record.get("hfid"),
        "site_id": record.get("site_id"),
        "record_json": _json(record),
    }


def written_content_row(record: RecordDict, *, payload_offset: int, fallback_id: int) -> RecordDict:
    content_id = record.get("id", fallback_id)
    return {
        "content_id": int(content_id),
        "title": record.get("title") or _name_display(record),
        "content_type": record.get("type"),
        "author_hfid": record.get("author_hfid") or record.get("author"),
        "record_json": _json(record),
    }


def event_collection_row(record: RecordDict, *, payload_offset: int, fallback_id: int) -> RecordDict:
    collection_id = record.get("id", fallback_id)
    return {
        "collection_id": int(collection_id),
        "collection_type": record.get("__type__") or str(record.get("type", "")),
        "start_year": record.get("start_year"),
        "end_year": record.get("end_year"),
        "name_display": _name_display(record),
        "record_json": _json(record),
    }


def history_era_row(record: RecordDict, *, payload_offset: int, fallback_id: int) -> RecordDict:
    return {
        "id": fallback_id,
        "name": _name_display(record) or record.get("name"),
        "start_year": record.get("start_year") or record.get("year"),
        "record_json": _json(record),
    }


def raw_record_row(
    layer: str,
    record: RecordDict,
    *,
    payload_offset: int,
    record_id: int | None = None,
) -> RecordDict:
    rid = record_id
    if rid is None:
        rid = record.get("id")
    if rid is None:
        rid = payload_offset
    return {
        "layer": layer,
        "record_id": int(rid),
        "payload_offset": payload_offset,
        "record_json": _json(record),
    }
