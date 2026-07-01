"""Persist ``LegendsSnapshot`` extracts into a fortress SQLite database."""

from __future__ import annotations

import json
from dataclasses import dataclass
from datetime import datetime, timezone
from pathlib import Path

from sqlalchemy import func, select
from sqlalchemy.orm import Session

from ..deserializers.entity_names import resolve_language_name_display
from ..deserializers.vector_anchor import VectorAnchor as ParsedVectorAnchor
from ..deserializers.vector_anchor import anchor_history_vectors
from ..deserializers.engine_walk import walk_pointer_vector
from ..legends_extract import LegendsSnapshot, extract_legends_snapshot
from ..save_preamble import resolve_save_payload
from ..save_validate import fingerprint_path
from ..target import TARGET_DF_VERSION
from .migrate import create_legends_database
from .models import (
    Artifact,
    EventCollection,
    ExtractionNote,
    ExtractionRun,
    HistoricalEntity,
    HistoricalFigure,
    HistoricalFigureCatalogMeta,
    HistoryEra,
    HistoryEvent,
    HistoryEventsMeta,
    HistoryStatsBlock,
    LayerStatus,
    LayoutLandmark,
    LayoutRegion,
    RawRecord,
    SiteCatalogMeta,
    StringTableSection,
    VectorAnchor,
    World,
    WorldHeaderCounter,
    WorldSite,
    WrittenContent,
)
from .paths import DEFAULT_DATA_DIR, fortress_slug, legends_db_path
from .registry import LegendsRegistryEntry, register_legends
from .stream_writer import StreamWriter

PARSER_VERSION = "0.1.0"


@dataclass(frozen=True)
class ImportResult:
    world_name: str
    slug: str
    db_path: Path
    run_id: int
    entity_count: int
    site_count: int
    histfig_header_count: int
    event_count: int | None


def _json_int_list(values: tuple[int, ...] | list[int]) -> str:
    return json.dumps(list(values))


def stream_snapshot_records(
    session: Session,
    snapshot: LegendsSnapshot,
    payload: bytes,
) -> int:
    """Stream full-fidelity records from binary walks into SQLite."""
    writer = StreamWriter(session)

    if snapshot.historical_figure_catalog is not None:
        anchor = snapshot.historical_figure_catalog.anchor
        walk_pointer_vector(
            payload,
            vector_offset=anchor.vector_offset,
            element_type="historical_figure",
            next_anchor=anchor.death_events_offset,
            bodies_start=anchor.bodies_start,
            on_record=writer.on_record,
            layer="figures",
        )
        if anchor.death_events_offset is not None:
            walk_pointer_vector(
                payload,
                vector_offset=anchor.death_events_offset,
                element_type="history_event",
                on_record=writer.on_record,
                layer="events_death",
            )

    writer.flush()
    return writer.records_written


def _histfig_name_display(snapshot: LegendsSnapshot, header) -> str:
    words = (
        snapshot.string_tables.sections[8].names
        if len(snapshot.string_tables.sections) > 8
        else []
    )
    display, _ = resolve_language_name_display(header.name, words=words)
    return display


def persist_snapshot(
    session: Session,
    snapshot: LegendsSnapshot,
    *,
    payload: bytes,
    source_path: str | None,
    payload_size: int | None,
    save_version: int | None,
    parser_version: str = PARSER_VERSION,
    source_fingerprint: str | None = None,
    vector_anchors: list[ParsedVectorAnchor] | None = None,
) -> int:
    """Write all currently extracted snapshot fields into ``session``."""
    now = datetime.now(timezone.utc)

    session.query(World).delete()
    session.query(WorldHeaderCounter).delete()
    session.query(StringTableSection).delete()
    session.query(HistoricalEntity).delete()
    session.query(WorldSite).delete()
    session.query(SiteCatalogMeta).delete()
    session.query(HistoricalFigure).delete()
    session.query(HistoricalFigureCatalogMeta).delete()
    session.query(HistoryEventsMeta).delete()
    session.query(HistoryStatsBlock).delete()
    session.query(HistoryEvent).delete()
    session.query(Artifact).delete()
    session.query(WrittenContent).delete()
    session.query(HistoryEra).delete()
    session.query(EventCollection).delete()
    session.query(RawRecord).delete()
    session.query(LayoutLandmark).delete()
    session.query(LayoutRegion).delete()
    session.query(VectorAnchor).delete()
    session.query(LayerStatus).delete()

    session.add(
        World(
            id=1,
            world_name=snapshot.world_name or "unknown",
            save_version=save_version,
            df_version=TARGET_DF_VERSION,
            source_path=source_path,
            payload_size=payload_size,
            extracted_at=now,
            parser_version=parser_version,
        )
    )

    for slot, value in enumerate(snapshot.header.max_ids):
        session.add(WorldHeaderCounter(slot=slot, value=value))

    for idx, section in enumerate(snapshot.string_tables.sections):
        session.add(
            StringTableSection(
                section_index=idx,
                entry_count=section.entry_count,
                first_name=section.names[0] if section.names else None,
                last_name=section.names[-1] if section.names else None,
            )
        )

    name_by_id = {name.entity_id: name for name in snapshot.entity_names}
    for ent in snapshot.entity_catalog:
        resolved = name_by_id.get(ent.entity_id)
        session.add(
            HistoricalEntity(
                entity_id=ent.entity_id,
                entity_type=ent.entity_type,
                entity_class=ent.entity_class,
                field_16a=ent.field_16a,
                field_16b=ent.field_16b,
                next_entity_id=ent.next_entity_id,
                short_list_size=ent.short_list_size,
                has_name=ent.has_name,
                resolved_name=resolved.resolved if resolved else None,
                name_source=resolved.source if resolved else None,
                payload_offset=ent.payload_offset,
            )
        )

    if snapshot.world_site_catalog:
        for rec in snapshot.world_site_catalog.records:
            session.add(
                WorldSite(
                    site_id=rec.site_id,
                    display_name=rec.display_name,
                    site_type=rec.site_type,
                    site_type_name=rec.site_type_name,
                    civ_id=rec.civ_id,
                    cur_owner_id=rec.cur_owner_id,
                    pos_x=rec.pos_x,
                    pos_y=rec.pos_y,
                    word_indices_json=_json_int_list(rec.word_indices),
                    name_marker_offset=rec.name_marker_offset,
                    header_offset=rec.header_offset,
                )
            )
        session.add(
            SiteCatalogMeta(
                id=1,
                site_count=snapshot.world_site_catalog.site_count,
                header_enriched_count=snapshot.world_site_catalog.header_enriched_count,
                name_table_base=snapshot.world_site_catalog.name_table_base,
                name_table_stride=snapshot.world_site_catalog.name_table_stride,
                search_start=snapshot.world_site_catalog.search_start,
                search_end=snapshot.world_site_catalog.search_end,
            )
        )

    if snapshot.historical_figure_catalog:
        anchor = snapshot.historical_figure_catalog.anchor
        session.add(
            HistoricalFigureCatalogMeta(
                id=1,
                vector_offset=anchor.vector_offset,
                vector_count=anchor.vector_count,
                present_count=anchor.present_count,
                bodies_start=anchor.bodies_start,
                death_events_offset=anchor.death_events_offset,
                id_chain_length=snapshot.historical_figure_catalog.id_chain_length,
                max_id_seen=snapshot.historical_figure_catalog.max_id_seen,
            )
        )
        # Full records are streamed via walk_pointer_vector (record_json); header chain
        # is metadata-only fallback when the body walk yields nothing.
        streamed_count = stream_snapshot_records(session, snapshot, payload)
        if streamed_count == 0:
            for header in snapshot.historical_figure_catalog.headers:
                session.add(
                    HistoricalFigure(
                        figure_id=header.figure_id,
                        profession=header.profession,
                        race=header.race,
                        caste=header.caste,
                        sex=header.sex,
                        civ_id=header.civ_id,
                        population_id=header.population_id,
                        breed_id=header.breed_id,
                        cultural_identity=header.cultural_identity,
                        family_head_id=header.family_head_id,
                        unit_id=header.unit_id,
                        nemesis_id=header.nemesis_id,
                        appeared_year=header.appeared_year,
                        born_year=header.born_year,
                        born_seconds=header.born_seconds,
                        died_year=header.died_year,
                        died_seconds=header.died_seconds,
                        curse_year=header.curse_year,
                        curse_seconds=header.curse_seconds,
                        name_display=_histfig_name_display(snapshot, header),
                        name_words_json=_json_int_list(header.name.words),
                        payload_offset=header.payload_offset,
                    )
                )

    if snapshot.history_events_catalog:
        death = snapshot.history_events_catalog.death_events
        session.add(
            HistoryEventsMeta(
                id=1,
                event_count=snapshot.history_events_catalog.event_count,
                stats_offset=snapshot.history_events_catalog.stats.payload_offset,
                events_vector_offset=snapshot.history_events_catalog.events_vector_offset,
                death_events_offset=death.vector_offset if death else None,
                death_present_count=death.present_count if death else None,
            )
        )

    if snapshot.history_stats:
        session.add(
            HistoryStatsBlock(
                id=1,
                payload_offset=snapshot.history_stats.payload_offset,
                event_counter=snapshot.history_stats.event_counter,
                histfig_counter=snapshot.history_stats.histfig_counter,
                field_151=snapshot.history_stats.field_151,
                field_4=snapshot.history_stats.field_4,
            )
        )

    if snapshot.layout:
        layout = snapshot.layout
        for key, offset in (
            ("string_tables", layout.string_tables),
            ("string_index_end", layout.string_index_end),
            ("first_entity", layout.first_entity),
            ("last_catalog_entity", layout.last_catalog_entity),
            ("first_region_block", layout.first_region_block),
            ("history_stats", layout.history_stats),
        ):
            session.add(LayoutLandmark(region_key=key, payload_offset=offset))
        for region in layout.regions:
            session.add(
                LayoutRegion(
                    name=region.name,
                    start_offset=region.start,
                    end_offset=region.end,
                    size_bytes=region.size,
                )
            )

    if vector_anchors is None and snapshot.layout and snapshot.layout.history_stats is not None:
        vector_anchors = anchor_history_vectors(
            payload,
            snapshot.header,
            stats_offset=snapshot.layout.history_stats,
            payload_end=len(payload),
        )
    for anchor in vector_anchors or []:
        session.add(
            VectorAnchor(
                name=anchor.name,
                payload_offset=anchor.payload_offset,
                count=anchor.count,
                present_count=anchor.present_count,
                posnull_score=anchor.posnull_score,
            )
        )

    def _hex_to_int(value) -> int | None:
        if value is None:
            return None
        if isinstance(value, int):
            return value
        try:
            return int(str(value), 0)
        except ValueError:
            return None

    for walk in snapshot.engine_walks:
        data = walk.to_dict()
        session.add(
            LayerStatus(
                layer=data["layer"],
                element_type=data.get("element_type"),
                authoritative_count=data.get("authoritative_count"),
                deterministic=bool(data.get("deterministic")),
                declared_count=data.get("declared_count"),
                parsed_count=data.get("parsed_count"),
                vector_offset=_hex_to_int(data.get("vector_offset")),
                end_offset=_hex_to_int(data.get("end_offset")),
                error_offset=_hex_to_int(data.get("error_offset")),
                note=data.get("note"),
            )
        )

    run = ExtractionRun(
        extracted_at=now,
        parser_version=parser_version,
        source_fingerprint=source_fingerprint,
        note_count=len(snapshot.notes),
    )
    session.add(run)
    session.flush()

    note_lines = list(snapshot.notes)
    if snapshot.historical_figure_catalog:
        streamed = session.scalar(
            select(func.count()).select_from(HistoricalFigure).where(
                HistoricalFigure.record_json.is_not(None)
            )
        )
        if streamed:
            note_lines.append(f"streamed {streamed:,} historical_figure records with record_json")
    run.note_count = len(note_lines)
    for line_no, note in enumerate(note_lines, start=1):
        session.add(ExtractionNote(run_id=run.id, line_number=line_no, text=note))

    return run.id


def import_world_dat(
    world_dat_path: Path,
    *,
    data_dir: Path = DEFAULT_DATA_DIR,
    overwrite: bool = False,
    expected_site_count: int | None = None,
) -> ImportResult:
    """
    Parse ``world.dat`` or ``world.sav``, create ``<slug>.sqlite``, migrate, and persist extract.

    Registers the database in ``<data_dir>/registry.json`` for the future explorer UI.
    """
    resolved = resolve_save_payload(world_dat_path)
    world_path = resolved.path
    dec_payload = resolved.payload
    preamble = resolved.preamble
    save_header_version = resolved.save_version
    snapshot = extract_legends_snapshot(
        dec_payload,
        preamble=preamble,
        expected_site_count=expected_site_count,
    )
    world_name = snapshot.world_name or "unknown"
    slug = fortress_slug(world_name)
    db_path = legends_db_path(data_dir, slug)

    fingerprint = fingerprint_path(world_path)
    engine = create_legends_database(db_path, overwrite=overwrite)
    with Session(engine) as session:
        run_id = persist_snapshot(
            session,
            snapshot,
            payload=dec_payload,
            source_path=str(world_path),
            payload_size=len(dec_payload),
            save_version=save_header_version,
            source_fingerprint=fingerprint.sha256,
        )
        session.commit()

    entity_count = len(snapshot.entity_catalog)
    site_count = snapshot.world_site_catalog.site_count if snapshot.world_site_catalog else 0
    histfig_header_count = (
        len(snapshot.historical_figure_catalog.headers)
        if snapshot.historical_figure_catalog
        else 0
    )
    event_count = (
        snapshot.history_events_catalog.event_count if snapshot.history_events_catalog else None
    )

    register_legends(
        data_dir,
        LegendsRegistryEntry(
            slug=slug,
            world_name=world_name,
            db_path=str(db_path.relative_to(data_dir)),
            extracted_at=datetime.now(timezone.utc).isoformat(),
            parser_version=PARSER_VERSION,
            entity_count=entity_count,
            site_count=site_count,
            histfig_header_count=histfig_header_count,
            event_count=event_count,
        ),
    )

    return ImportResult(
        world_name=world_name,
        slug=slug,
        db_path=db_path,
        run_id=run_id,
        entity_count=entity_count,
        site_count=site_count,
        histfig_header_count=histfig_header_count,
        event_count=event_count,
    )
