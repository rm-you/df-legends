"""Map ``WorldHeaderHypothesis.max_ids`` slots to legends layer ceilings."""

from __future__ import annotations

from .primitives import WorldHeaderHypothesis

# On 0.47.05 retired ``world.dat`` saves (Namushul, Waterlures), ``max_ids[26]`` tracks
# the site id high-water mark and ``+ 4`` yields ``next_site_id`` (exclusive site count).
# Validated: Namushul max_ids[26]=346 → 350 sites (ids 0..349); text export agrees.
WORLD_HEADER_SITE_HIGH_WATER_SLOT = 26
SITE_CEILING_TAIL = 4

MIN_SITE_CEILING = 1
MAX_SITE_CEILING = 100_000


def resolve_site_ceiling(header: WorldHeaderHypothesis) -> int | None:
    """
    Return ``next_site_id`` — the exclusive upper bound on ``world_site.id``.

    Site ids are ``0 .. next_site_id - 1``. Returns ``None`` when the header slot
    is unset (common on active ``world.sav`` saves where counter layout differs).
    """
    if len(header.max_ids) <= WORLD_HEADER_SITE_HIGH_WATER_SLOT:
        return None
    high_water = header.max_ids[WORLD_HEADER_SITE_HIGH_WATER_SLOT]
    if high_water < 0:
        return None
    ceiling = high_water + SITE_CEILING_TAIL
    if ceiling < MIN_SITE_CEILING or ceiling > MAX_SITE_CEILING:
        return None
    return ceiling


def resolve_max_site_id(header: WorldHeaderHypothesis) -> int | None:
    """Inclusive max site id (``next_site_id - 1``)."""
    ceiling = resolve_site_ceiling(header)
    if ceiling is None:
        return None
    return ceiling - 1
