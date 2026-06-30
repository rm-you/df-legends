"""JSON registry of imported fortress databases (for future legends explorer UI)."""

from __future__ import annotations

import json
from dataclasses import asdict, dataclass
from datetime import datetime
from pathlib import Path

from .paths import registry_path


@dataclass
class LegendsRegistryEntry:
    slug: str
    world_name: str
    db_path: str
    extracted_at: str
    parser_version: str
    entity_count: int
    site_count: int
    histfig_header_count: int
    event_count: int | None


def _load_registry(data_dir: Path) -> list[dict]:
    path = registry_path(data_dir)
    if not path.exists():
        return []
    return json.loads(path.read_text(encoding="utf-8"))


def _save_registry(data_dir: Path, entries: list[dict]) -> None:
    path = registry_path(data_dir)
    path.parent.mkdir(parents=True, exist_ok=True)
    path.write_text(json.dumps(entries, indent=2, sort_keys=True) + "\n", encoding="utf-8")


def list_legends(data_dir: Path) -> list[LegendsRegistryEntry]:
    return [LegendsRegistryEntry(**row) for row in _load_registry(data_dir)]


def register_legends(data_dir: Path, entry: LegendsRegistryEntry) -> None:
    """Insert or replace a registry row keyed by ``slug``."""
    rows = _load_registry(data_dir)
    payload = asdict(entry)
    replaced = False
    for idx, row in enumerate(rows):
        if row.get("slug") == entry.slug:
            rows[idx] = payload
            replaced = True
            break
    if not replaced:
        rows.append(payload)
    rows.sort(key=lambda r: r["world_name"].lower())
    _save_registry(data_dir, rows)
