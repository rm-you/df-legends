"""Deterministic world_site vector walk (FUN_140330310 case 8 / FUN_1403066f0).

Sites live **before** world_history in the save stream: four scalar fields, ``i32
count``, then ``count`` dense bodies via ``FUN_1403066f0``.
"""

from __future__ import annotations

from dataclasses import dataclass, field
from io import BytesIO
from typing import Any, Callable

from ..binary_reader import BinaryReader
from .language_name import read_language_name
from .primitives import WorldHeaderHypothesis
from .site_catalog import WorldSiteBinaryRecord, WorldSiteCatalog
from .site_def import SITE_TYPES
from .entity_names import resolve_language_name_display


@dataclass(frozen=True)
class WorldSitesVectorLandmark:
    prefix_offset: int
    count_offset: int
    bodies_start: int
    site_count: int
    events_count_offset: int
    notes: list[str] = field(default_factory=list)


def _read_i16_vec(reader: BinaryReader, label: str) -> list[int]:
    n = reader.read_int32()
    if n < 0 or n > 1_000_000:
        raise ValueError(f"implausible {label} count {n}")
    return [reader.read_int16() for _ in range(n)]


def _read_i32_vec(reader: BinaryReader, label: str) -> list[int]:
    n = reader.read_int32()
    if n < 0 or n > 1_000_000:
        raise ValueError(f"implausible {label} count {n}")
    return [reader.read_int32() for _ in range(n)]


def skip_site_building(reader: BinaryReader) -> None:
    """FUN_1403021d0 — not yet decompiled; raises until RE lands."""
    raise NotImplementedError(
        "FUN_1403021d0 (site abstract_building body) is not decompiled yet"
    )


def skip_world_site_body(reader: BinaryReader) -> dict[str, Any]:
    """Skip/read one world_site body (FUN_1403066f0 on-disk order)."""
    site_type = reader.read_int32()
    name = read_language_name(reader)
    _read_i16_vec(reader, "site_i16")
    _read_i32_vec(reader, "site_i32_a")
    _read_i32_vec(reader, "site_i32_b")
    f_d8 = reader.read_int32()
    f_dc = reader.read_int32()
    f_e8 = reader.read_int32()
    f_e4 = reader.read_int32()
    n_build = reader.read_int32()
    if n_build < 0 or n_build > 100_000:
        raise ValueError(f"implausible building slot count {n_build}")
    for _ in range(n_build):
        if reader.read_uint8():
            skip_site_building(reader)
    return {
        "site_type": site_type,
        "name": name,
        "f_d8": f_d8,
        "f_dc": f_dc,
        "f_e8": f_e8,
        "f_e4": f_e4,
    }


def read_world_site_body(reader: BinaryReader, *, site_id: int, words: list[str]) -> WorldSiteBinaryRecord:
    start = reader.tell()
    body = skip_world_site_body(reader)
    display, _ = resolve_language_name_display(body["name"], words=words)
    return WorldSiteBinaryRecord(
        site_id=site_id,
        display_name=display or f"site_{site_id}",
        word_indices=tuple(w for w in body["name"].words if w >= 0),
        name_marker_offset=body["name"].payload_offset,
        site_type=body["site_type"],
        site_type_name=SITE_TYPES.get(body["site_type"], f"unknown({body['site_type']})"),
        civ_id=body["f_d8"],
        cur_owner_id=body["f_dc"],
        pos_x=body["f_e8"],
        pos_y=body["f_e4"],
        header_offset=start,
    )


def locate_world_sites_vector(
    payload: bytes,
    header: WorldHeaderHypothesis,
    *,
    events_count_offset: int,
    scan_back: int = 32_000_000,
) -> WorldSitesVectorLandmark | None:
    """Find case-8 site vector by backward scan; body walk must land on ``events_count_offset``."""
    lo = max(0, events_count_offset - scan_back)
    best: WorldSitesVectorLandmark | None = None
    for off in range(events_count_offset - 16, lo, -4):
        try:
            reader = BinaryReader(BytesIO(payload))
            reader.seek(off)
            reader.read_int32()
            reader.read_int16()
            reader.read_int32()
            reader.read_int16()
            count = reader.read_int32()
            if count <= 0 or count > 500_000:
                continue
            bodies_start = reader.tell()
            for _ in range(count):
                skip_world_site_body(reader)
            if reader.tell() == events_count_offset:
                return WorldSitesVectorLandmark(
                    prefix_offset=off,
                    count_offset=off + 12,
                    bodies_start=bodies_start,
                    site_count=count,
                    events_count_offset=events_count_offset,
                    notes=[f"landed on events @ 0x{events_count_offset:x}"],
                )
        except (ValueError, NotImplementedError, EOFError):
            continue
    return best


def walk_world_sites_vector(
    payload: bytes,
    landmark: WorldSitesVectorLandmark,
    *,
    words: list[str],
    on_site: Callable[[int, WorldSiteBinaryRecord], None] | None = None,
) -> WorldSiteCatalog:
    reader = BinaryReader(BytesIO(payload))
    reader.seek(landmark.bodies_start)
    records: list[WorldSiteBinaryRecord] = []
    for site_id in range(landmark.site_count):
        rec = read_world_site_body(reader, site_id=site_id, words=words)
        records.append(rec)
        if on_site:
            on_site(site_id, rec)
    return WorldSiteCatalog(records=records, search_start=landmark.prefix_offset)
