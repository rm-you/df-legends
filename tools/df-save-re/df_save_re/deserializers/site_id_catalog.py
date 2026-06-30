"""Binary-only site catalog via ``site_id`` field probing (DF 0.47.05)."""

from __future__ import annotations

import struct
from dataclasses import dataclass
from io import BytesIO

from ..binary_reader import BinaryReader
from .entity_names import resolve_language_name_display
from .language_name import LanguageName, try_read_language_name
from .site_catalog import WorldSiteBinaryRecord, WorldSiteCatalog
from .site_def import SITE_TYPES, WorldSiteHeaderHypothesis, try_read_site_header
from .string_tables import StringTableBlock

# Fixed offsets from ``site_id`` int32 (df.world-site.xml header prefix).
SITE_ID_OFFSETS = {
    "pos_y": -4,
    "pos_x": -8,
    "site_type": -10,
    "cur_owner_id": -14,
    "civ_id": -18,
}

# Alternate layouts seen in some mid-payload blobs (padding before civ fields).
_ALT_LAYOUTS: tuple[tuple[int, int], ...] = (
    (SITE_ID_OFFSETS["civ_id"], SITE_ID_OFFSETS["cur_owner_id"]),
    (-22, -18),
)


@dataclass(frozen=True)
class SiteIdFieldHit:
    site_id: int
    id_field_offset: int
    site_type: int
    civ_id: int
    cur_owner_id: int
    pos_x: int
    pos_y: int
    score: int
    layout: str


def _score_hit(*, site_type: int, civ_id: int, pos_x: int, pos_y: int) -> int:
    score = 0
    if site_type != 0:
        score += 10
    if civ_id >= 0:
        score += 5
    if pos_x or pos_y:
        score += 3
    return score


def _read_id_field_hit(
    payload: bytes,
    id_off: int,
    *,
    civ_delta: int,
    owner_delta: int,
    layout: str,
) -> SiteIdFieldHit | None:
    site_id = struct.unpack_from("<i", payload, id_off)[0]
    if site_id < 0 or site_id > 349:
        return None
    site_type = struct.unpack_from("<h", payload, id_off + SITE_ID_OFFSETS["site_type"])[0]
    if site_type not in SITE_TYPES:
        return None
    if site_type == 0 and site_id != 0:
        return None
    civ_id = struct.unpack_from("<i", payload, id_off + civ_delta)[0]
    cur_owner_id = struct.unpack_from("<i", payload, id_off + owner_delta)[0]
    pos_x = struct.unpack_from("<i", payload, id_off + SITE_ID_OFFSETS["pos_x"])[0]
    pos_y = struct.unpack_from("<i", payload, id_off + SITE_ID_OFFSETS["pos_y"])[0]
    if civ_id < -1 or civ_id > 500 or cur_owner_id < -1 or cur_owner_id > 500:
        return None
    if abs(pos_x) > 2500 or abs(pos_y) > 2500:
        return None
    score = _score_hit(site_type=site_type, civ_id=civ_id, pos_x=pos_x, pos_y=pos_y)
    return SiteIdFieldHit(
        site_id=site_id,
        id_field_offset=id_off,
        site_type=site_type,
        civ_id=civ_id,
        cur_owner_id=cur_owner_id,
        pos_x=pos_x,
        pos_y=pos_y,
        score=score,
        layout=layout,
    )


def probe_site_id_fields(
    payload: bytes,
    *,
    search_start: int,
    search_end: int,
    max_site_id: int = 349,
) -> dict[int, SiteIdFieldHit]:
    """Collect best ``site_id`` field hit per id across known layouts."""
    best: dict[int, SiteIdFieldHit] = {}
    layouts: list[tuple[str, int, int]] = [
        ("std", SITE_ID_OFFSETS["civ_id"], SITE_ID_OFFSETS["cur_owner_id"]),
        ("alt", -22, -18),
    ]
    for layout_name, civ_delta, owner_delta in layouts:
        for id_off in range(search_start, search_end - 4, 4):
            hit = _read_id_field_hit(
                payload,
                id_off,
                civ_delta=civ_delta,
                owner_delta=owner_delta,
                layout=layout_name,
            )
            if hit is None or hit.site_id > max_site_id:
                continue
            prev = best.get(hit.site_id)
            if prev is None or hit.score > prev.score or (
                hit.score == prev.score and hit.id_field_offset < prev.id_field_offset
            ):
                best[hit.site_id] = hit
    return best


def _name_fingerprint_at(
    payload: bytes,
    offset: int,
    *,
    words: list[str],
    max_word_index: int,
) -> tuple[LanguageName, str] | None:
    if offset + 49 > len(payload):
        return None
    raw = struct.unpack_from("<7i", payload, offset)
    pos_words = [w for w in raw if w >= 0]
    if len(pos_words) < 2 or any(w >= max_word_index for w in pos_words):
        return None
    if len(pos_words) >= 2 and len(set(pos_words)) == 1:
        return None
    parts_off = offset + 28
    parts = struct.unpack_from("<7h", payload, parts_off)
    if any(abs(part) > 500 for part in parts):
        return None
    language = struct.unpack_from("<i", payload, parts_off + 14)[0]
    if language < -1 or language > 10_000:
        return None
    if payload[parts_off + 20] not in (0, 1):
        return None
    name = LanguageName(
        first_name="",
        nickname="",
        words=list(raw),
        parts_of_speech=list(parts),
        language=language,
        name_type=struct.unpack_from("<h", payload, parts_off + 18)[0],
        has_name=bool(payload[parts_off + 20]),
        payload_offset=offset,
        bytes_consumed=parts_off + 21 - offset,
    )
    display, source = resolve_language_name_display(name, words=words)
    if source != "words" or len(display) < 4:
        return None
    alpha = sum(ch.isalpha() or ch.isspace() for ch in display)
    if alpha / max(len(display), 1) < 0.85:
        return None
    return name, display


def _nearest_name_fingerprint(
    payload: bytes,
    *,
    anchor: int,
    words: list[str],
    search_start: int,
    search_end: int,
    radius: int = 65_536,
) -> tuple[LanguageName, str, int] | None:
    max_word_index = len(words)
    best: tuple[int, LanguageName, str, int] | None = None
    lo = max(search_start, anchor - radius)
    hi = min(search_end, anchor + radius)
    for off in range(lo, hi, 4):
        parsed = _name_fingerprint_at(payload, off, words=words, max_word_index=max_word_index)
        if parsed is None:
            continue
        name, display = parsed
        dist = abs(off - anchor)
        if best is None or dist < best[0]:
            best = (dist, name, display, off)
    if best is None:
        return None
    _, name, display, off = best
    return name, display, off


def _header_backscan(
    payload: bytes,
    hit: SiteIdFieldHit,
    *,
    search_start: int,
) -> WorldSiteHeaderHypothesis | None:
    id_off = hit.id_field_offset
    for hdr_off in range(max(search_start, id_off - 512), id_off + SITE_ID_OFFSETS["civ_id"], 2):
        reader = BinaryReader(BytesIO(payload))
        reader.seek(hdr_off)
        try:
            header = try_read_site_header(reader)
        except EOFError:
            continue
        if header is None or header.site_id != hit.site_id:
            continue
        if reader.tell() != id_off + 4:
            continue
        if header.site_type != hit.site_type:
            continue
        return header
    return None


def build_catalog_from_id_fields(
    payload: bytes,
    *,
    block: StringTableBlock,
    search_start: int,
    search_end: int,
    max_site_id: int = 349,
) -> WorldSiteCatalog:
    """Assemble site records from id-field probes + nearest name fingerprints."""
    words = block.sections[8].names if len(block.sections) > 8 else []
    hits = probe_site_id_fields(
        payload,
        search_start=search_start,
        search_end=search_end,
        max_site_id=max_site_id,
    )
    records: list[WorldSiteBinaryRecord] = []
    for site_id in sorted(hits):
        hit = hits[site_id]
        header = _header_backscan(payload, hit, search_start=search_start)
        name_info = _nearest_name_fingerprint(
            payload,
            anchor=hit.id_field_offset,
            words=words,
            search_start=search_start,
            search_end=search_end,
        )
        if header is not None:
            display, _ = resolve_language_name_display(header.name, words=words)
            word_indices = tuple(w for w in header.name.words if w >= 0)
            marker_off = header.name.payload_offset
            header_off = header.payload_offset
        elif name_info is not None:
            name, display, marker_off = name_info
            word_indices = tuple(w for w in name.words if w >= 0)
            header_off = hit.id_field_offset + SITE_ID_OFFSETS["civ_id"]
        else:
            display = f"site_{site_id}"
            word_indices = ()
            marker_off = hit.id_field_offset
            header_off = hit.id_field_offset + SITE_ID_OFFSETS["civ_id"]

        records.append(
            WorldSiteBinaryRecord(
                site_id=site_id,
                display_name=display or f"site_{site_id}",
                word_indices=word_indices,
                name_marker_offset=marker_off,
                site_type=hit.site_type,
                site_type_name=SITE_TYPES.get(hit.site_type),
                civ_id=hit.civ_id,
                cur_owner_id=hit.cur_owner_id,
                pos_x=hit.pos_x,
                pos_y=hit.pos_y,
                header_offset=header_off,
            )
        )
    return WorldSiteCatalog(
        records=records,
        search_start=search_start,
        search_end=search_end,
    )
