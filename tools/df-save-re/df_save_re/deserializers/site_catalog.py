"""Build a 350-site binary catalog from name markers and optional header fields."""

from __future__ import annotations

import struct
from dataclasses import dataclass, field
from io import BytesIO

from ..binary_reader import BinaryReader
from .site_def import TEXT_TYPE_TO_ENUM, WorldSiteHeaderHypothesis, try_read_site_header
from .site_names import SiteNameMarker, SiteNameScanResult
from .site_text import SiteTextCatalog


@dataclass(frozen=True)
class WorldSiteBinaryRecord:
    """Partial world_site parse anchored on a located language_name word run."""

    site_id: int
    display_name: str
    word_indices: tuple[int, ...]
    name_marker_offset: int
    site_type: int | None = None
    site_type_name: str | None = None
    civ_id: int | None = None
    cur_owner_id: int | None = None
    pos_x: int | None = None
    pos_y: int | None = None
    header_offset: int | None = None


@dataclass
class WorldSiteCatalog:
    records: list[WorldSiteBinaryRecord] = field(default_factory=list)
    name_table_base: int | None = None
    name_table_stride: int | None = None
    search_start: int = 0
    search_end: int = 0

    @property
    def site_count(self) -> int:
        return len(self.records)

    @property
    def header_enriched_count(self) -> int:
        return sum(1 for rec in self.records if rec.header_offset is not None)

    def by_id(self) -> dict[int, WorldSiteBinaryRecord]:
        return {rec.site_id: rec for rec in self.records}


def _pick_lowest_offset_hits(
    payload: bytes,
    *,
    text_catalog: SiteTextCatalog,
    search_start: int,
    search_end: int,
) -> dict[int, tuple[int, int, int, int, int, int]]:
    """
    Map site_id → (id_field_offset, civ_id, cur_owner_id, site_type, pos_x, pos_y)
    using df.world-site.xml field order before id.
    """
    by_id = text_catalog.by_id()
    best: dict[int, tuple[int, int, int, int, int, int]] = {}
    for off in range(search_start, search_end - 22, 4):
        site_id = struct.unpack_from("<i", payload, off)[0]
        if site_id not in by_id:
            continue
        site_type = struct.unpack_from("<h", payload, off - 10)[0]
        expected = TEXT_TYPE_TO_ENUM.get(by_id[site_id].site_type.strip().lower())
        if expected is None or site_type != expected:
            continue
        civ_id = struct.unpack_from("<i", payload, off - 18)[0]
        cur_owner_id = struct.unpack_from("<i", payload, off - 14)[0]
        pos_x = struct.unpack_from("<i", payload, off - 8)[0]
        pos_y = struct.unpack_from("<i", payload, off - 4)[0]
        if civ_id < -1 or civ_id > 500 or cur_owner_id < -1 or cur_owner_id > 500:
            continue
        if abs(pos_x) > 2500 or abs(pos_y) > 2500:
            continue
        prev = best.get(site_id)
        if prev is None or off < prev[0]:
            best[site_id] = (off, civ_id, cur_owner_id, site_type, pos_x, pos_y)
    return best


def _try_header_at_marker(
    payload: bytes,
    marker: SiteNameMarker,
) -> WorldSiteHeaderHypothesis | None:
    """Best-effort: parse a world_site header ending shortly before the marker."""
    needle = struct.pack("<" + "i" * len(marker.word_indices), *marker.word_indices)
    for word_slot in range(7):
        words_off = marker.payload_offset - 4 * word_slot
        if words_off < 0:
            continue
        for back in (8, 12, 16, 20, 24, 28, 32, 40, 48, 56, 64, 72, 80, 96, 112):
            hdr_off = words_off - back
            if hdr_off < 0:
                break
            reader = BinaryReader(BytesIO(payload))
            reader.seek(hdr_off)
            try:
                site = try_read_site_header(reader)
            except EOFError:
                continue
            if site is None or site.site_id != marker.site_id:
                continue
            if reader.tell() <= words_off + len(needle):
                return site
    return None


def infer_name_table_layout(markers: list[SiteNameMarker]) -> tuple[int | None, int | None]:
    """Infer fixed-stride name-table layout from the 0x1194xxx cluster (Namushul)."""
    cluster = sorted(
        (m for m in markers if 0x1190000 <= m.payload_offset <= 0x11A0000),
        key=lambda m: m.site_id,
    )
    if len(cluster) < 4:
        return None, None
    gaps = [cluster[i + 1].payload_offset - cluster[i].payload_offset for i in range(len(cluster) - 1)]
    from collections import Counter

    stride, stride_count = Counter(gaps).most_common(1)[0]
    if stride < 300 or stride_count < 2:
        return None, None

    best: tuple[int, int, int, int] | None = None
    for anchor in cluster:
        for delta_idx in range(0, 32):
            base = anchor.payload_offset - delta_idx * stride
            if base < 0:
                break
            base_site_id = anchor.site_id - delta_idx
            slack = 0
            hits = 0
            for m in cluster:
                delta = abs(m.payload_offset - (base + (m.site_id - base_site_id) * stride))
                if delta <= 24:
                    hits += 1
                    slack += delta
            if hits < max(4, len(cluster) // 2):
                continue
            if best is None or hits > best[2] or (hits == best[2] and slack < best[3]):
                best = (base, stride, hits, slack)
    if best is None:
        return None, None
    return best[0], best[1]


def build_world_site_catalog(
    payload: bytes,
    *,
    name_scan: SiteNameScanResult,
    text_catalog: SiteTextCatalog | None = None,
    search_start: int | None = None,
    search_end: int | None = None,
) -> WorldSiteCatalog:
    """Combine site name markers with optional header-field enrichment."""
    scan_start = name_scan.region_start if search_start is None else search_start
    scan_end = name_scan.region_end if search_end is None else search_end
    header_hits: dict[int, tuple[int, int, int, int, int, int]] = {}
    if text_catalog is not None:
        header_hits = _pick_lowest_offset_hits(
            payload,
            text_catalog=text_catalog,
            search_start=scan_start,
            search_end=scan_end,
        )

    records: list[WorldSiteBinaryRecord] = []
    markers_by_id = {m.site_id: m for m in name_scan.markers}
    for site_id in sorted(markers_by_id):
        marker = markers_by_id[site_id]
        rec = WorldSiteBinaryRecord(
            site_id=site_id,
            display_name=marker.display_name,
            word_indices=marker.word_indices,
            name_marker_offset=marker.payload_offset,
        )
        hit = header_hits.get(site_id)
        if hit is not None:
            off, civ_id, cur_owner_id, site_type, pos_x, pos_y = hit
            from .site_def import SITE_TYPES

            records.append(
                WorldSiteBinaryRecord(
                    site_id=site_id,
                    display_name=marker.display_name,
                    word_indices=marker.word_indices,
                    name_marker_offset=marker.payload_offset,
                    site_type=site_type,
                    site_type_name=SITE_TYPES.get(site_type),
                    civ_id=civ_id,
                    cur_owner_id=cur_owner_id,
                    pos_x=pos_x,
                    pos_y=pos_y,
                    header_offset=off - 18,
                )
            )
            continue
        header = _try_header_at_marker(payload, marker)
        if header is not None:
            records.append(
                WorldSiteBinaryRecord(
                    site_id=site_id,
                    display_name=marker.display_name,
                    word_indices=marker.word_indices,
                    name_marker_offset=marker.payload_offset,
                    site_type=header.site_type,
                    site_type_name=header.site_type_name,
                    civ_id=header.civ_id,
                    cur_owner_id=header.cur_owner_id,
                    pos_x=header.pos_x,
                    pos_y=header.pos_y,
                    header_offset=header.payload_offset,
                )
            )
        else:
            records.append(rec)

    table_base, table_stride = infer_name_table_layout(name_scan.markers)
    return WorldSiteCatalog(
        records=records,
        name_table_base=table_base,
        name_table_stride=table_stride,
        search_start=scan_start,
        search_end=scan_end,
    )
