"""Extract human-readable legends-related data from world.dat payloads."""

from __future__ import annotations

import struct
from dataclasses import dataclass, field
from io import BytesIO

from .binary_reader import BinaryReader
from .deserializers.entity_bodies import (
    EntityCatalogRegion,
    measure_entity_catalog_region,
    sample_entity_body_spans,
    summarize_entity_body_spans,
)
from .deserializers.entity_def import EntityScanResult, HistoricalEntityHeader, catalog_entity_block, scan_entities
from .deserializers.entity_names import ResolvedEntityName, resolve_named_entities
from .deserializers.primitives import WorldHeaderHypothesis
from .deserializers.string_index import StringIndexTable
from .deserializers.string_tables import StringTableBlock, parse_string_table_block
from .deserializers.world_dat import DatPreamble
from .deserializers.history_stats import probe_history_stats
from .deserializers.vector_probe import find_posnull_vector_candidates
from .deserializers.site_names import SiteNameScanResult, scan_site_name_markers
from .deserializers.site_catalog import WorldSiteCatalog, build_world_site_catalog
from .deserializers.site_text import SiteTextCatalog, parse_site_text_catalog
from .deserializers.history_text import HistoryTextCatalog, parse_history_text_catalog
from .deserializers.historical_figures import (
    HistoricalFigureCatalog,
    build_historical_figure_catalog,
)
from .deserializers.world_layout import WorldLayoutLandmarks, discover_layout_landmarks


@dataclass
class HistoryStatsBlock:
    """Header counter echo block (Namushul @ 0x15beb28) — not the events vector."""

    payload_offset: int
    event_counter: int
    field_151: int
    field_4: int
    histfig_counter: int


@dataclass
class VectorProbeSummary:
    site_candidates: list[dict]
    event_candidates: list[dict]
    histfig_candidates: list[dict]


@dataclass
class LegendsSnapshot:
    world_name: str | None
    header: WorldHeaderHypothesis
    preamble: DatPreamble
    string_tables: StringTableBlock
    string_index: StringIndexTable
    entities: EntityScanResult
    entity_catalog: list[HistoricalEntityHeader] = field(default_factory=list)
    entity_names: list[ResolvedEntityName] = field(default_factory=list)
    entity_class_counts: dict[str, int] = field(default_factory=dict)
    layout: WorldLayoutLandmarks | None = None
    history_stats: HistoryStatsBlock | None = None
    site_name_scan: SiteNameScanResult | None = None
    world_site_catalog: WorldSiteCatalog | None = None
    site_text_catalog: SiteTextCatalog | None = None
    history_text_catalog: HistoryTextCatalog | None = None
    entity_catalog_region: EntityCatalogRegion | None = None
    historical_figure_catalog: HistoricalFigureCatalog | None = None
    vector_probe: VectorProbeSummary | None = None
    notes: list[str] = field(default_factory=list)


def find_history_stats_block(
    payload: bytes,
    header: WorldHeaderHypothesis,
) -> HistoryStatsBlock | None:
    """Locate paired max event / histfig counters (Namushul-style layout)."""
    if len(header.max_ids) < 10:
        return None
    event_counter = header.max_ids[9]
    histfig_counter = header.max_ids[8]
    needle = struct.pack("<i", event_counter)
    pos = 0x100000  # skip header region
    while True:
        off = payload.find(needle, pos)
        if off < 0:
            return None
        fig_off = off + 12
        if fig_off + 4 <= len(payload) and struct.unpack_from("<i", payload, fig_off)[0] == histfig_counter:
            return HistoryStatsBlock(
                payload_offset=off,
                event_counter=event_counter,
                field_151=struct.unpack_from("<i", payload, off + 4)[0],
                field_4=struct.unpack_from("<i", payload, off + 8)[0],
                histfig_counter=histfig_counter,
            )
        pos = off + 4


def extract_legends_snapshot(
    payload: bytes,
    *,
    preamble: DatPreamble,
    max_entities: int = 50,
    catalog_entities: bool = True,
    site_names: dict[int, str] | None = None,
    sites_text: str | None = None,
    history_text: str | None = None,
) -> LegendsSnapshot:
    block = parse_string_table_block(payload)
    reader = BinaryReader(BytesIO(payload))
    reader.seek(block.payload_offset + block.bytes_consumed)
    index = StringIndexTable.read(reader)

    entities = scan_entities(payload, max_entities=max_entities)
    stats = find_history_stats_block(payload, preamble.header)

    catalog: list[HistoricalEntityHeader] = []
    class_counts: dict[str, int] = {}
    if catalog_entities:
        search_end = stats.payload_offset if stats else None
        catalog_result = catalog_entity_block(payload, search_end=search_end)
        catalog = catalog_result.entities
        for ent in catalog:
            class_counts[ent.entity_class] = class_counts.get(ent.entity_class, 0) + 1

    notes = [
        f"string tables: {block.section_count} sections, {block.total_names:,} names",
        f"string index: {index.entry_count} int32 entries",
    ]
    if entities.first_entity_offset is not None:
        notes.append(
            f"entities: first @ 0x{entities.first_entity_offset:x}, "
            f"parsed {len(entities.entities)} consecutive headers"
        )
    else:
        notes.append("entities: first civ header not found")
    entity_names: list[ResolvedEntityName] = []
    if catalog:
        named = sum(1 for ent in catalog if ent.has_name)
        max_id = max(ent.entity_id for ent in catalog)
        header_civ = preamble.header.max_ids[4] if len(preamble.header.max_ids) > 4 else None
        notes.append(
            f"entity catalog: {len(catalog)} validated civ headers "
            f"(ids 0..{max_id}, {named} named"
            + (f"; header max_ids[4]={header_civ:,}" if header_civ is not None else "")
            + ")"
        )
        entity_names = resolve_named_entities(payload, catalog, block=block)
        if entity_names:
            sample = ", ".join(f"{n.entity_id}={n.resolved!r}" for n in entity_names[:3])
            notes.append(f"entity names: {len(entity_names)} resolved via language_name ({sample}, …)")
        body_samples = sample_entity_body_spans(payload, catalog, max_samples=5)
        if body_samples:
            spans = [s.span_bytes for s in body_samples if s.span_bytes is not None]
            if spans:
                notes.append(
                    f"entity body spans (header→next header): "
                    f"min={min(spans):,} max={max(spans):,} bytes ({len(spans)} samples)"
                )
        body_summary = summarize_entity_body_spans(payload, catalog)
        if body_summary:
            notes.append(
                f"entity catalog span: {body_summary.catalog_span_bytes:,} bytes "
                f"({body_summary.sample_count} gaps, median={body_summary.median_span:,}, "
                f"max={body_summary.max_span:,})"
            )

    layout = discover_layout_landmarks(payload, preamble)
    entity_catalog_region: EntityCatalogRegion | None = None
    if catalog and layout.first_region_block is not None:
        capacity = preamble.header.max_ids[4] if len(preamble.header.max_ids) > 4 else None
        entity_catalog_region = measure_entity_catalog_region(
            payload,
            catalog,
            region_end=layout.first_region_block,
            header_capacity_hint=capacity,
        )
        if entity_catalog_region:
            notes.append(
                f"entity region: {entity_catalog_region.header_count} catalog headers "
                f"(ids 0..{entity_catalog_region.max_catalog_id}), "
                f"skip target @ 0x{entity_catalog_region.region_end:x} "
                f"(gap {entity_catalog_region.gap_after_catalog_bytes:,} bytes)"
            )
    site_name_scan: SiteNameScanResult | None = None
    world_site_catalog: WorldSiteCatalog | None = None
    if (
        layout.first_region_block is not None
        and layout.history_stats is not None
        and site_names
    ):
        site_name_scan = scan_site_name_markers(
            payload,
            block=block,
            region_start=layout.first_region_block,
            region_end=layout.history_stats,
            site_names=site_names,
            search_start=layout.last_catalog_entity,
        )
    site_text_catalog = parse_site_text_catalog(sites_text) if sites_text else None
    if site_name_scan and site_text_catalog:
        world_site_catalog = build_world_site_catalog(
            payload,
            name_scan=site_name_scan,
            text_catalog=site_text_catalog,
            search_start=layout.last_catalog_entity,
            search_end=layout.history_stats,
        )
    if layout.first_region_block is not None:
        notes.append(
            f"layout: region blocks @ 0x{layout.first_region_block:x}; "
            f"history tail {layout.history_tail_size:,} bytes @ 0x{layout.history_stats:x}"
            if layout.history_stats is not None and layout.history_tail_size is not None
            else f"layout: region blocks @ 0x{layout.first_region_block:x}"
        )
    if stats:
        notes.append(
            f"history stats block @ 0x{stats.payload_offset:x} "
            f"(events={stats.event_counter:,}, figs={stats.histfig_counter:,}; "
            f"not verified as world_history vector start)"
        )
    history_text_catalog = (
        parse_history_text_catalog(history_text) if history_text else None
    )
    if site_text_catalog:
        notes.append(
            f"site text catalog: {site_text_catalog.site_count} sites parsed from export "
            f"(populations, owners — text ground truth)"
        )
    if world_site_catalog:
        notes.append(
            f"world_site catalog: {world_site_catalog.site_count} marker-anchored records "
            f"({world_site_catalog.header_enriched_count} with civ/type/pos fields"
            + (
                f"; name table @ 0x{world_site_catalog.name_table_base:x} "
                f"stride {world_site_catalog.name_table_stride}"
                if world_site_catalog.name_table_base is not None
                and world_site_catalog.name_table_stride is not None
                else ""
            )
            + ")"
        )
    if history_text_catalog:
        notes.append(
            f"history text catalog: {history_text_catalog.named_civ_count} named civs, "
            f"{history_text_catalog.subterranean_count} subterranean, "
            f"{history_text_catalog.ruler_count} ruler entries"
        )
    if site_name_scan:
        notes.append(
            f"site name markers: {site_name_scan.located_count} titles located "
            f"in mid region 0x{site_name_scan.region_start:x}–0x{site_name_scan.region_end:x}"
        )

    historical_figure_catalog: HistoricalFigureCatalog | None = None
    if layout.history_stats is not None:
        historical_figure_catalog = build_historical_figure_catalog(
            payload,
            preamble.header,
            search_start=layout.history_stats,
            id_chain_limit=32,
        )
        if historical_figure_catalog:
            anchor = historical_figure_catalog.anchor
            notes.append(
                f"historical_figure vector @ 0x{anchor.vector_offset:x} "
                f"(count={anchor.vector_count:,}, present={anchor.present_count:,}, "
                f"bodies @ 0x{anchor.bodies_start:x})"
            )
            for line in historical_figure_catalog.notes:
                notes.append(f"  histfig: {line}")

    vector_probe: VectorProbeSummary | None = None
    stats_probe = probe_history_stats(payload, preamble.header)
    if stats_probe:
        for line in stats_probe.notes:
            notes.append(f"history stats probe: {line}")
    if layout.last_catalog_entity is not None and layout.history_stats is not None:
        probe_start = layout.last_catalog_entity
        probe_end = layout.history_stats
        site_cands = find_posnull_vector_candidates(
            payload,
            count=350,
            search_start=probe_start,
            search_end=probe_end,
            region="entity_gap+mid",
            min_score=280,
            max_hits=5,
        )
        event_cands = find_posnull_vector_candidates(
            payload,
            count=preamble.header.max_ids[9],
            search_start=layout.history_stats,
            search_end=len(payload),
            region="history_tail",
            min_score=50_000,
            max_hits=3,
        )
        fig_cands = find_posnull_vector_candidates(
            payload,
            count=preamble.header.max_ids[8],
            search_start=layout.history_stats,
            search_end=len(payload),
            region="history_tail",
            min_score=5000,
            max_hits=3,
        )
        if site_cands or event_cands or fig_cands:
            vector_probe = VectorProbeSummary(
                site_candidates=[
                    {
                        "offset": hex(c.payload_offset),
                        "score": c.posnull_score,
                        "present_sample": c.present_flags_sample,
                    }
                    for c in site_cands
                ],
                event_candidates=[
                    {"offset": hex(c.payload_offset), "score": c.posnull_score}
                    for c in event_cands
                ],
                histfig_candidates=[
                    {"offset": hex(c.payload_offset), "score": c.posnull_score}
                    for c in fig_cands
                ],
            )
            if site_cands:
                notes.append(
                    f"vector probe: {len(site_cands)} posnull count=350 candidates "
                    f"(best @ {site_cands[0].payload_offset:#x}, score={site_cands[0].posnull_score})"
                )

    return LegendsSnapshot(
        world_name=preamble.header.world_name.value if preamble.header.world_name else None,
        header=preamble.header,
        preamble=preamble,
        string_tables=block,
        string_index=index,
        entities=entities,
        entity_catalog=catalog,
        entity_names=entity_names,
        entity_class_counts=class_counts,
        layout=layout,
        history_stats=stats,
        site_name_scan=site_name_scan,
        world_site_catalog=world_site_catalog,
        site_text_catalog=site_text_catalog,
        history_text_catalog=history_text_catalog,
        entity_catalog_region=entity_catalog_region,
        historical_figure_catalog=historical_figure_catalog,
        vector_probe=vector_probe,
        notes=notes,
    )


def snapshot_to_dict(snapshot: LegendsSnapshot) -> dict:
    materials = snapshot.string_tables.sections[0].names if snapshot.string_tables.sections else []
    creatures = (
        snapshot.string_tables.sections[4].names
        if len(snapshot.string_tables.sections) > 4
        else []
    )
    return {
        "world_name": snapshot.world_name,
        "header": {
            "max_histfig": snapshot.header.max_ids[8],
            "max_event": snapshot.header.max_ids[9],
            "max_civ": snapshot.header.max_ids[4],
        },
        "offsets": {
            "preamble_end": snapshot.preamble.world_data_offset,
            "string_tables": snapshot.string_tables.payload_offset,
            "string_tables_end": snapshot.entities.string_tables_end,
            "string_index_end": snapshot.entities.string_index_end,
            "first_entity": snapshot.entities.first_entity_offset,
            "history_stats": (
                snapshot.history_stats.payload_offset if snapshot.history_stats else None
            ),
            "first_region_block": (
                snapshot.layout.first_region_block if snapshot.layout else None
            ),
        },
        "string_tables": [
            {
                "index": i,
                "count": sec.entry_count,
                "first": sec.names[0] if sec.names else None,
                "last": sec.names[-1] if sec.names else None,
            }
            for i, sec in enumerate(snapshot.string_tables.sections)
        ],
        "materials": materials[:20],
        "creatures_sample": creatures[:20],
        "entities": [
            {
                "id": ent.entity_id,
                "class": ent.entity_class,
                "next_id": ent.next_entity_id,
                "has_name": ent.has_name,
                "offset": ent.payload_offset,
            }
            for ent in snapshot.entities.entities
        ],
        "entity_catalog": {
            "count": len(snapshot.entity_catalog),
            "named_count": sum(1 for ent in snapshot.entity_catalog if ent.has_name),
            "max_id_found": (
                max(ent.entity_id for ent in snapshot.entity_catalog)
                if snapshot.entity_catalog
                else None
            ),
            "class_counts": snapshot.entity_class_counts,
            "named_entities": [
                {
                    "id": ent.entity_id,
                    "class": ent.entity_class,
                    "offset": ent.payload_offset,
                }
                for ent in snapshot.entity_catalog
                if ent.has_name
            ],
            "resolved_names": [
                {
                    "id": name.entity_id,
                    "class": name.entity_class,
                    "name": name.resolved,
                    "source": name.source,
                }
                for name in snapshot.entity_names
            ],
        },
        "layout": (
            {
                "string_tables": snapshot.layout.string_tables,
                "string_index_end": snapshot.layout.string_index_end,
                "first_entity": snapshot.layout.first_entity,
                "last_catalog_entity": snapshot.layout.last_catalog_entity,
                "first_region_block": snapshot.layout.first_region_block,
                "history_stats": snapshot.layout.history_stats,
                "entity_to_region_gap": snapshot.layout.entity_to_region_gap,
                "history_tail_size": snapshot.layout.history_tail_size,
            }
            if snapshot.layout
            else None
        ),
        "history_stats": (
            {
                "offset": snapshot.history_stats.payload_offset,
                "event_counter": snapshot.history_stats.event_counter,
                "histfig_counter": snapshot.history_stats.histfig_counter,
                "field_151": snapshot.history_stats.field_151,
                "field_4": snapshot.history_stats.field_4,
            }
            if snapshot.history_stats
            else None
        ),
        "site_name_scan": (
            {
                "located_count": snapshot.site_name_scan.located_count,
                "region_start": snapshot.site_name_scan.region_start,
                "region_end": snapshot.site_name_scan.region_end,
                "sample": [
                    {
                        "site_id": m.site_id,
                        "name": m.display_name,
                        "offset": m.payload_offset,
                    }
                    for m in snapshot.site_name_scan.markers[:10]
                ],
            }
            if snapshot.site_name_scan
            else None
        ),
        "world_site_catalog": (
            {
                "site_count": snapshot.world_site_catalog.site_count,
                "header_enriched_count": snapshot.world_site_catalog.header_enriched_count,
                "name_table_base": snapshot.world_site_catalog.name_table_base,
                "name_table_stride": snapshot.world_site_catalog.name_table_stride,
                "sample": [
                    {
                        "id": rec.site_id,
                        "name": rec.display_name,
                        "marker_offset": rec.name_marker_offset,
                        "type": rec.site_type_name,
                        "civ_id": rec.civ_id,
                    }
                    for rec in snapshot.world_site_catalog.records[:10]
                ],
            }
            if snapshot.world_site_catalog
            else None
        ),
        "entity_catalog_region": (
            {
                "header_count": snapshot.entity_catalog_region.header_count,
                "max_catalog_id": snapshot.entity_catalog_region.max_catalog_id,
                "header_capacity_hint": snapshot.entity_catalog_region.header_capacity_hint,
                "region_end": snapshot.entity_catalog_region.region_end,
                "gap_after_catalog_bytes": snapshot.entity_catalog_region.gap_after_catalog_bytes,
            }
            if snapshot.entity_catalog_region
            else None
        ),
        "site_text_catalog": (
            {
                "site_count": snapshot.site_text_catalog.site_count,
                "total_population": snapshot.site_text_catalog.total_population,
                "sample": [
                    {
                        "id": rec.site_id,
                        "name": rec.display_name,
                        "type": rec.site_type,
                        "civ": rec.civ_name,
                        "owner": rec.owner,
                        "pop_lines": len(rec.populations),
                    }
                    for rec in snapshot.site_text_catalog.records[:10]
                ],
            }
            if snapshot.site_text_catalog
            else None
        ),
        "history_text_catalog": (
            {
                "named_civ_count": snapshot.history_text_catalog.named_civ_count,
                "subterranean_count": snapshot.history_text_catalog.subterranean_count,
                "ruler_count": snapshot.history_text_catalog.ruler_count,
            }
            if snapshot.history_text_catalog
            else None
        ),
        "vector_probe": (
            {
                "sites": snapshot.vector_probe.site_candidates,
                "events": snapshot.vector_probe.event_candidates,
                "histfigs": snapshot.vector_probe.histfig_candidates,
            }
            if snapshot.vector_probe
            else None
        ),
        "historical_figure_catalog": (
            {
                "vector_offset": anchor.vector_offset,
                "vector_count": anchor.vector_count,
                "present_count": anchor.present_count,
                "bodies_start": anchor.bodies_start,
                "death_events_offset": anchor.death_events_offset,
                "id_chain_length": snapshot.historical_figure_catalog.id_chain_length,
                "max_id_seen": snapshot.historical_figure_catalog.max_id_seen,
                "sample": [
                    {
                        "id": h.figure_id,
                        "race": h.race,
                        "civ_id": h.civ_id,
                        "name_words": h.name.words[:3],
                    }
                    for h in snapshot.historical_figure_catalog.headers[:8]
                ],
            }
            if snapshot.historical_figure_catalog
            and (anchor := snapshot.historical_figure_catalog.anchor)
            else None
        ),
        "notes": snapshot.notes,
    }
