"""world_site header hypotheses (df.world-site.xml field order at start)."""

from __future__ import annotations

from dataclasses import dataclass
from io import BytesIO

from ..binary_reader import BinaryReader
from .language_name import LanguageName, try_read_language_name

# world_site_type enum (df.world-site.xml)
SITE_TYPES = {
    0: "PlayerFortress",
    1: "DarkFortress",
    2: "Cave",
    3: "MountainHalls",
    4: "ForestRetreat",
    5: "Town",
    6: "ImportantLocation",
    7: "LairShrine",
    8: "Fortress",
    9: "Camp",
    10: "Monument",
}

TEXT_TYPE_TO_ENUM = {
    "cave": 2,
    "dark fortress": 1,
    "forest retreat": 4,
    "hamlet": 5,  # approximate — display name may differ from enum
    "town": 5,
    "hillocks": 3,
    "mountain halls": 3,
    "dark pits": 1,
    "lair": 7,
    "monastery": 8,
    "fortress": 8,
    "fort": 8,
    "castle": 8,
    "camp": 9,
    "vault": 6,
}


@dataclass
class WorldSiteHeaderHypothesis:
    name: LanguageName
    civ_id: int
    cur_owner_id: int
    site_type: int
    pos_x: int
    pos_y: int
    site_id: int
    payload_offset: int
    bytes_consumed: int

    @property
    def site_type_name(self) -> str:
        return SITE_TYPES.get(self.site_type, f"unknown({self.site_type})")


def try_read_site_header(reader: BinaryReader) -> WorldSiteHeaderHypothesis | None:
    start = reader.tell()
    name = try_read_language_name(reader)
    if name is None:
        reader.seek(start)
        return None
    civ_id = reader.read_int32()
    cur_owner_id = reader.read_int32()
    site_type = reader.read_int16()
    pos_x = reader.read_int32()
    pos_y = reader.read_int32()
    site_id = reader.read_int32()
    if site_type < 0 or site_type > 15:
        reader.seek(start)
        return None
    if site_id < 0 or site_id > 20_000:
        reader.seek(start)
        return None
    if civ_id < -1 or civ_id > 20_000:
        reader.seek(start)
        return None
    if cur_owner_id < -1 or cur_owner_id > 20_000:
        reader.seek(start)
        return None
    end = reader.tell()
    return WorldSiteHeaderHypothesis(
        name=name,
        civ_id=civ_id,
        cur_owner_id=cur_owner_id,
        site_type=site_type,
        pos_x=pos_x,
        pos_y=pos_y,
        site_id=site_id,
        payload_offset=start,
        bytes_consumed=end - start,
    )


def scan_site_headers(
    payload: bytes,
    *,
    search_start: int,
    search_end: int | None = None,
    max_sites: int = 500,
    max_site_id: int | None = None,
    civ_ids: set[int] | None = None,
    words: list[str] | None = None,
) -> list[WorldSiteHeaderHypothesis]:
    search_end = len(payload) if search_end is None else search_end
    by_id: dict[int, WorldSiteHeaderHypothesis] = {}
    best_score: dict[int, tuple[int, int]] = {}
    step = 4
    pos = search_start
    while pos < search_end:
        reader = BinaryReader(BytesIO(payload))
        reader.seek(pos)
        try:
            site = try_read_site_header(reader)
        except EOFError:
            break
        if site is not None:
            if max_site_id is not None and site.site_id > max_site_id:
                pos += step
                continue
            if civ_ids is not None and site.civ_id not in civ_ids:
                pos += step
                continue
            if abs(site.pos_x) > 2500 or abs(site.pos_y) > 2500:
                pos += step
                continue
            if site.site_type not in SITE_TYPES:
                pos += step
                continue
            score = site.payload_offset
            if words is not None:
                from .entity_names import resolve_language_name_display

                pos_words = [w for w in site.name.words if w >= 0]
                if len(pos_words) >= 2 and len(set(pos_words)) == 1:
                    pos += step
                    continue
                display, _ = resolve_language_name_display(site.name, words=words)
                score = len(display) + len(pos_words) * 5
                if site.site_type != 0:
                    score += 10
            prev = best_score.get(site.site_id)
            if prev is None or score > prev[0] or (score == prev[0] and site.payload_offset < prev[1]):
                by_id[site.site_id] = site
                best_score[site.site_id] = (score, site.payload_offset)
        pos += step
    return [by_id[k] for k in sorted(by_id)]


def find_sites_vector_anchor(
    payload: bytes,
    *,
    search_start: int,
    search_end: int | None = None,
    expected_count: int | None = None,
) -> int | None:
    """Heuristic: int32 count followed by site headers with ids 0..N-1."""
    search_end = len(payload) if search_end is None else search_end
    best_off: int | None = None
    best_score = 0
    for off in range(search_start, search_end - 8, 4):
        count = int.from_bytes(payload[off : off + 4], "little", signed=True)
        if expected_count is not None and count != expected_count:
            continue
        if count < 50 or count > 2000:
            continue
        headers = scan_site_headers(
            payload,
            search_start=off + 4,
            search_end=min(search_end, off + 4 + 2_000_000),
            max_sites=min(count + 10, 500),
        )
        if not headers:
            continue
        ids = {h.site_id for h in headers}
        score = len(ids)
        if 0 in ids:
            score += 5
        if score > best_score:
            best_score = score
            best_off = off
    return best_off
