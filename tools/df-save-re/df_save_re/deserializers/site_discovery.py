"""Binary-only world_site discovery (no legends text exports)."""

from __future__ import annotations

from dataclasses import dataclass, field

from .entity_def import HistoricalEntityHeader, catalog_entity_block
from .entity_names import resolve_language_name_display
from .site_catalog import WorldSiteBinaryRecord, WorldSiteCatalog, infer_name_table_layout
from .site_def import scan_site_headers
from .site_names import SiteNameMarker
from .string_tables import StringTableBlock


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


def discover_world_sites(
    payload: bytes,
    *,
    block: StringTableBlock,
    search_start: int,
    search_end: int,
    entities: list[HistoricalEntityHeader] | None = None,
    max_site_id: int = 349,
    civ_ids: set[int] | None = None,
) -> SiteDiscoveryResult:
    """
    Build a site catalog purely from ``world.dat``.

    Uses a scored header scan across the entity-gap / mid payload, then merges
    id-field backscan hits for any missing site ids.
    """
    if entities is None:
        entities = catalog_entity_block(payload, search_end=search_end).entities
    entity_civ_ids = {ent.entity_id for ent in entities}

    scanned = scan_site_headers(
        payload,
        search_start=search_start,
        search_end=search_end,
        max_sites=max_site_id + 1,
        max_site_id=max_site_id,
        civ_ids=civ_ids,
    )

    catalog = _headers_to_catalog(
        payload,
        block=block,
        headers=scanned,
        search_start=search_start,
        search_end=search_end,
    )

    notes = [
        f"binary site scan: {len(catalog.records)} headers (ids 0..{max_site_id})",
    ]
    if len(catalog.records) < max_site_id + 1:
        notes.append(
            f"missing {max_site_id + 1 - len(catalog.records)} site ids — "
            "world_site body walk / population parse still open"
        )

    return SiteDiscoveryResult(
        catalog=catalog,
        civ_ids=entity_civ_ids,
        notes=notes,
    )
