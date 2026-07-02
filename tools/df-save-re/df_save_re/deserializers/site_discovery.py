"""Binary-only world_site discovery (no legends text exports)."""

from __future__ import annotations

from dataclasses import dataclass, field

from .entity_def import HistoricalEntityHeader, catalog_entity_block
from .entity_names import resolve_language_name_display
from .primitives import WorldHeaderHypothesis
from .site_catalog import WorldSiteBinaryRecord, WorldSiteCatalog, infer_name_table_layout
from .site_def import scan_site_headers
from .site_id_catalog import build_catalog_from_id_fields
from .site_name_table import (
    discover_stride_table_layout,
    expand_catalog_from_stride_table,
    stride_table_notes,
)
from .site_names import SiteNameMarker
from .string_tables import StringTableBlock
from .world_header_ids import resolve_max_site_id, resolve_site_ceiling


@dataclass(frozen=True)
class SiteDiscoveryResult:
    catalog: WorldSiteCatalog
    civ_ids: set[int]
    notes: list[str] = field(default_factory=list)


def _headers_to_catalog(
    payload: bytes,
    *,
    block: StringTableBlock,
    headers,
    search_start: int,
    search_end: int,
) -> WorldSiteCatalog:
    words = block.sections[8].names if len(block.sections) > 8 else []
    markers: list[SiteNameMarker] = []
    records: list[WorldSiteBinaryRecord] = []
    for header in headers:
        display, _ = resolve_language_name_display(header.name, words=words)
        word_indices = tuple(w for w in header.name.words if w >= 0)
        markers.append(
            SiteNameMarker(
                site_id=header.site_id,
                display_name=display or f"site_{header.site_id}",
                word_indices=word_indices,
                payload_offset=header.name.payload_offset,
            )
        )
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
    table_base, table_stride = infer_name_table_layout(markers)
    return WorldSiteCatalog(
        records=records,
        name_table_base=table_base,
        name_table_stride=table_stride,
        search_start=search_start,
        search_end=search_end,
    )


def _merge_catalogs(
    primary: WorldSiteCatalog,
    supplemental: WorldSiteCatalog,
) -> WorldSiteCatalog:
    by_id = {rec.site_id: rec for rec in primary.records}
    for rec in supplemental.records:
        if rec.site_id not in by_id:
            by_id[rec.site_id] = rec
    records = [by_id[sid] for sid in sorted(by_id)]
    return WorldSiteCatalog(
        records=records,
        name_table_base=primary.name_table_base or supplemental.name_table_base,
        name_table_stride=primary.name_table_stride or supplemental.name_table_stride,
        search_start=min(primary.search_start, supplemental.search_start),
        search_end=max(primary.search_end, supplemental.search_end),
    )


def discover_world_sites(
    payload: bytes,
    *,
    block: StringTableBlock,
    search_start: int,
    search_end: int,
    entities: list[HistoricalEntityHeader] | None = None,
    header: WorldHeaderHypothesis | None = None,
    max_site_id: int | None = None,
    civ_ids: set[int] | None = None,
) -> SiteDiscoveryResult:
    """
    Build a site catalog purely from ``world.dat``.

    Primary path: ``site_id`` field probe across entity-gap + mid payload with
    nearest ``language_name.words`` fingerprint for titles. Header scan fills
    any remaining ids with lower-confidence hits. A fixed-stride name table pass
    fills late ids when ``max_ids[26]+4`` supplies the site ceiling.
    """
    site_ceiling = resolve_site_ceiling(header) if header is not None else None
    if max_site_id is None:
        derived = resolve_max_site_id(header) if header is not None else None
        if derived is None:
            raise ValueError(
                "max_site_id is required when the world header does not provide "
                "a site ceiling (max_ids[26])"
            )
        max_site_id = derived

    if entities is None:
        entities = catalog_entity_block(payload, search_end=search_end).entities
    entity_civ_ids = {ent.entity_id for ent in entities}
    words = block.sections[8].names if len(block.sections) > 8 else []

    id_catalog = build_catalog_from_id_fields(
        payload,
        block=block,
        search_start=search_start,
        search_end=search_end,
        max_site_id=max_site_id,
    )

    scanned = scan_site_headers(
        payload,
        search_start=search_start,
        search_end=search_end,
        max_sites=max_site_id + 1,
        max_site_id=max_site_id,
        civ_ids=civ_ids,
    )
    scan_catalog = _headers_to_catalog(
        payload,
        block=block,
        headers=scanned,
        search_start=search_start,
        search_end=search_end,
    )
    catalog = _merge_catalogs(id_catalog, scan_catalog)
    before_stride = catalog.site_count

    markers = [
        SiteNameMarker(
            site_id=rec.site_id,
            display_name=rec.display_name,
            word_indices=rec.word_indices,
            payload_offset=rec.name_marker_offset,
        )
        for rec in catalog.records
        if rec.word_indices and rec.name_marker_offset
    ]
    stride_layout = discover_stride_table_layout(
        payload,
        markers=markers,
        search_start=search_start,
        search_end=search_end,
        max_site_id=max_site_id,
        words=words,
    )
    if stride_layout is not None:
        catalog = expand_catalog_from_stride_table(
            payload,
            catalog,
            block=block,
            layout=stride_layout,
            max_site_id=max_site_id,
        )

    notes = [
        (
            f"site ceiling: {site_ceiling} from header max_ids[{26}]+4"
            if site_ceiling is not None
            else f"site ceiling: ids 0..{max_site_id} (header slot unset)"
        ),
        f"id-field probe: {id_catalog.site_count} sites",
        f"header scan merge: {before_stride} total (ids 0..{max_site_id})",
    ]
    notes.extend(stride_table_notes(stride_layout, added=catalog.site_count - before_stride))
    missing = max_site_id + 1 - catalog.site_count
    if missing > 0:
        notes.append(
            f"missing {missing} site ids — early sites use scattered title markers; "
            "full world_site body walk still open"
        )
    elif site_ceiling is not None and catalog.site_count == site_ceiling:
        notes.append(f"complete site catalog ({catalog.site_count} sites)")

    return SiteDiscoveryResult(
        catalog=catalog,
        civ_ids=entity_civ_ids,
        notes=notes,
    )
