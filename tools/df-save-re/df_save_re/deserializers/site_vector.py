"""Locate and walk the world_site stl-vector in world.dat (DF 0.47.05)."""

from __future__ import annotations

from dataclasses import dataclass, field
from io import BytesIO

from ..binary_reader import BinaryReader
from .body_skipper import skip_struct, default_xml_dir
from .entity_names import resolve_language_name_display
from .primitives import WorldHeaderHypothesis
from .site_catalog import WorldSiteBinaryRecord, WorldSiteCatalog
from .site_def import (
    SITE_TYPES,
    WorldSiteHeaderHypothesis,
    try_read_site_header,
)
from .string_tables import StringTableBlock
from .vector_io import score_posnull_prefix, skip_posnull_pointer_vector


@dataclass(frozen=True)
class SitesVectorAnchor:
    vector_offset: int
    vector_count: int
    present_count: int
    posnull_score: int
    flags_end: int
    notes: list[str] = field(default_factory=list)


def _header_looks_plausible(
    header: WorldSiteHeaderHypothesis,
    *,
    words: list[str],
) -> bool:
    if header.site_type not in SITE_TYPES:
        return False
    if header.civ_id < -1 or header.civ_id > 500:
        return False
    if header.cur_owner_id < -1 or header.cur_owner_id > 500:
        return False
    if abs(header.pos_x) > 2500 or abs(header.pos_y) > 2500:
        return False
    pos_words = [w for w in header.name.words if w >= 0]
    if len(pos_words) >= 2 and len(set(pos_words)) == 1:
        return False
    if any(w >= len(words) for w in pos_words if w >= 0):
        return False
    display, _ = resolve_language_name_display(header.name, words=words)
    if not display.strip() and not (header.name.first_name or header.name.nickname):
        return False
    if header.site_type == 0 and len(display) < 3:
        return False
    return True


def _score_header(
    header: WorldSiteHeaderHypothesis,
    *,
    words: list[str],
    hdr_off: int,
) -> tuple[int, int]:
    display, _ = resolve_language_name_display(header.name, words=words)
    pos_words = [w for w in header.name.words if w >= 0]
    score = len(display) + len(pos_words) * 5
    if header.site_type != 0:
        score += 10
    return score, hdr_off


def probe_site_headers_by_id_field(
    payload: bytes,
    *,
    search_start: int,
    search_end: int,
    max_site_id: int = 349,
    words: list[str],
) -> dict[int, WorldSiteHeaderHypothesis]:
    """
    Locate site headers by scanning plausible ``id`` fields, then walking backward
    to a matching ``try_read_site_header`` parse.

    Unlike fixed-offset id probing, this tolerates variable ``language_name`` size.
    """
    import struct

    id_best_off: dict[int, int] = {}
    for id_off in range(search_start, search_end - 4, 4):
        site_id = struct.unpack_from("<i", payload, id_off)[0]
        if site_id < 0 or site_id > max_site_id:
            continue
        site_type = struct.unpack_from("<h", payload, id_off - 10)[0]
        if site_type not in SITE_TYPES:
            continue
        civ_id = struct.unpack_from("<i", payload, id_off - 22)[0]
        cur_owner = struct.unpack_from("<i", payload, id_off - 18)[0]
        pos_x = struct.unpack_from("<i", payload, id_off - 8)[0]
        pos_y = struct.unpack_from("<i", payload, id_off - 4)[0]
        if civ_id < -1 or civ_id > 500 or cur_owner < -1 or cur_owner > 500:
            continue
        if abs(pos_x) > 2500 or abs(pos_y) > 2500:
            continue
        if site_type == 0 and site_id != 0:
            continue
        prev = id_best_off.get(site_id)
        if prev is None or id_off < prev:
            id_best_off[site_id] = id_off

    best: dict[int, WorldSiteHeaderHypothesis] = {}
    best_score: dict[int, tuple[int, int]] = {}
    for site_id, id_off in id_best_off.items():
        for hdr_off in range(max(search_start, id_off - 160), id_off - 18, 2):
            reader = BinaryReader(BytesIO(payload))
            reader.seek(hdr_off)
            try:
                header = try_read_site_header(reader)
            except EOFError:
                continue
            if header is None or header.site_id != site_id:
                continue
            if reader.tell() != id_off + 4:
                continue
            if not _header_looks_plausible(header, words=words):
                continue
            score = _score_header(header, words=words, hdr_off=hdr_off)
            prev = best_score.get(site_id)
            if prev is None or score > prev or (score == prev and hdr_off < prev[1]):
                best[site_id] = header
                best_score[site_id] = score
    return best


def locate_sites_vector(
    payload: bytes,
    header: WorldHeaderHypothesis,
    *,
    search_start: int,
    search_end: int,
    expected_count: int = 350,
) -> SitesVectorAnchor | None:
    """Find ``world_data.sites`` by count echo + posnull prefix + inline body skip."""
    best: tuple[int, int, int, int] | None = None  # score, present, offset, flags_end
    sample = min(expected_count, 5000)
    min_score = int(sample * 0.85)

    for offset in range(search_start, search_end - 4, 4):
        if int.from_bytes(payload[offset : offset + 4], "little", signed=True) != expected_count:
            continue
        score = score_posnull_prefix(payload, offset, sample=sample)
        if score < min_score:
            continue
        reader = BinaryReader(BytesIO(payload))
        reader.seek(offset)
        try:
            count, present = skip_posnull_pointer_vector(reader)
        except ValueError:
            continue
        if count != expected_count:
            continue
        flags_end = reader.tell()
        if present < expected_count // 2:
            continue
        if best is None or present > best[1] or (present == best[1] and score > best[0]):
            best = (score, present, offset, flags_end)

    if best is None:
        return None
    score, present, vector_offset, flags_end = best
    return SitesVectorAnchor(
        vector_offset=vector_offset,
        vector_count=expected_count,
        present_count=present,
        posnull_score=score,
        flags_end=flags_end,
        notes=[f"vector count={expected_count}, present={present}, posnull={score}"],
    )


def walk_sites_from_vector(
    payload: bytes,
    anchor: SitesVectorAnchor,
    *,
    block: StringTableBlock,
    max_sites: int = 350,
) -> list[WorldSiteBinaryRecord]:
    """Parse headers from inline ``world_site`` bodies in the sites vector."""
    words = block.sections[8].names if len(block.sections) > 8 else []
    xml_dir = default_xml_dir()
    reader = BinaryReader(BytesIO(payload))
    reader.seek(anchor.vector_offset)
    count = reader.read_int32()
    flags = [reader.read_bool() for _ in range(count)]
    while reader.tell() % 4:
        reader.read_uint8()

    records: list[WorldSiteBinaryRecord] = []
    for flag in flags:
        if not flag:
            continue
        start = reader.tell()
        header = try_read_site_header(reader)
        if header is not None and _header_looks_plausible(header, words=words):
            display, _ = resolve_language_name_display(header.name, words=words)
            word_indices = tuple(w for w in header.name.words if w >= 0)
            records.append(
                WorldSiteBinaryRecord(
                    site_id=header.site_id,
                    display_name=display or f"site_{header.site_id}",
                    word_indices=word_indices,
                    name_marker_offset=header.name.payload_offset,
                    site_type=header.site_type,
                    site_type_name=header.site_type_name,
                    civ_id=header.civ_id,
                    cur_owner_id=header.cur_owner_id,
                    pos_x=header.pos_x,
                    pos_y=header.pos_y,
                    header_offset=header.payload_offset,
                )
            )
        reader.seek(start)
        try:
            skip_struct(reader, "world_site", xml_dir=xml_dir)
        except (ValueError, EOFError):
            break
        if len(records) >= max_sites:
            break
    return records


def build_site_catalog_from_probe(
    payload: bytes,
    *,
    block: StringTableBlock,
    search_start: int,
    search_end: int,
    max_site_id: int = 349,
) -> WorldSiteCatalog:
    """Binary-only site catalog via id-field backscan (Namushul: ~349/350)."""
    words = block.sections[8].names if len(block.sections) > 8 else []
    headers = probe_site_headers_by_id_field(
        payload,
        search_start=search_start,
        search_end=search_end,
        max_site_id=max_site_id,
        words=words,
    )
    records: list[WorldSiteBinaryRecord] = []
    for site_id in sorted(headers):
        header = headers[site_id]
        display, _ = resolve_language_name_display(header.name, words=words)
        word_indices = tuple(w for w in header.name.words if w >= 0)
        records.append(
            WorldSiteBinaryRecord(
                site_id=header.site_id,
                display_name=display or f"site_{header.site_id}",
                word_indices=word_indices,
                name_marker_offset=header.name.payload_offset,
                site_type=header.site_type,
                site_type_name=header.site_type_name,
                civ_id=header.civ_id,
                cur_owner_id=header.cur_owner_id,
                pos_x=header.pos_x,
                pos_y=header.pos_y,
                header_offset=header.payload_offset,
            )
        )
    return WorldSiteCatalog(
        records=records,
        search_start=search_start,
        search_end=search_end,
    )
