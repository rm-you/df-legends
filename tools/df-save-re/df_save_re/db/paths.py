"""Filesystem layout for per-fortress legends databases."""

from __future__ import annotations

import re
from pathlib import Path

DEFAULT_DATA_DIR = Path("data/legends")


def fortress_slug(world_name: str) -> str:
    """
    Turn a world/fortress name into a safe filesystem slug.

    Examples: ``Namushul`` → ``namushul``, ``The Destined Realms`` → ``the-destined-realms``.
    """
    slug = world_name.strip().lower()
    slug = re.sub(r"[^a-z0-9]+", "-", slug)
    slug = slug.strip("-")
    return slug or "unknown"


def legends_db_path(data_dir: Path, slug: str) -> Path:
    """Return ``<data_dir>/databases/<slug>.sqlite``."""
    return data_dir / "databases" / f"{slug}.sqlite"


def registry_path(data_dir: Path) -> Path:
    return data_dir / "registry.json"
