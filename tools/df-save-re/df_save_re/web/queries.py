"""Read-only queries for the legends explorer UI."""

from __future__ import annotations

import json
from dataclasses import dataclass
from pathlib import Path

from sqlalchemy import func, or_, select, text
from sqlalchemy.orm import Session

from ..db.migrate import make_engine
from ..db.models import (
    EventCollection,
    ExtractionNote,
    ExtractionRun,
    HfLink,
    HfRelationship,
    HfSkill,
    HistoricalEntity,
    HistoricalFigure,
    HistoricalFigureCatalogMeta,
    HistoryEra,
    HistoryEvent,
    HistoryEventsMeta,
    HistoryStatsBlock,
    LayerStatus,
    LayoutLandmark,
    SiteCatalogMeta,
    SitePopulation,
    VectorAnchor,
    World,
    WorldHeaderCounter,
    WorldSite,
)
from ..db.paths import DEFAULT_DATA_DIR
from ..db.registry import LegendsRegistryEntry, list_legends

HEADER_COUNTER_LABELS = {
    4: "max civ",
    8: "max histfig",
    9: "max event",
}


@dataclass(frozen=True)
class EntitySummary:
    entity_id: int
    entity_class: str
    resolved_name: str | None
    display_name: str
    site_count: int


@dataclass(frozen=True)
class SiteSummary:
    site_id: int
    display_name: str
    site_type_name: str | None
    civ_id: int | None
    civ_name: str | None
    pos_x: int | None
    pos_y: int | None


@dataclass(frozen=True)
class FigureSummary:
    figure_id: int
    name_display: str | None
    display_name: str
    civ_id: int | None
    civ_name: str | None
    profession: int | None
    race: int | None
    appeared_year: int | None
    died_year: int | None


class LegendsStore:
    """Registry-backed access to per-fortress SQLite databases."""

    def __init__(self, data_dir: Path = DEFAULT_DATA_DIR) -> None:
        self.data_dir = data_dir.resolve()
        self._engines: dict[str, object] = {}

    def registry(self) -> list[LegendsRegistryEntry]:
        return list_legends(self.data_dir)

    def entry_for_slug(self, slug: str) -> LegendsRegistryEntry | None:
        for row in self.registry():
            if row.slug == slug:
                return row
        return None

    def clear_engine(self, slug: str) -> None:
        """Drop cached SQLAlchemy engine after re-import."""
        self._engines.pop(slug, None)

    def _engine_for_slug(self, slug: str):
        if slug not in self._engines:
            entry = self.entry_for_slug(slug)
            if entry is None:
                raise KeyError(slug)
            db_path = self.data_dir / entry.db_path
            self._engines[slug] = make_engine(db_path)
        return self._engines[slug]

    def session(self, slug: str) -> Session:
        return Session(self._engine_for_slug(slug))

    @staticmethod
    def entity_display(entity: HistoricalEntity | None) -> str:
        if entity is None:
            return "—"
        if entity.resolved_name:
            return entity.resolved_name
        if entity.entity_class:
            return entity.entity_class.replace("_", " ").title()
        return "Unknown civilization"

    def entity_name_map(self, session: Session) -> dict[int, str]:
        entities = session.scalars(select(HistoricalEntity)).all()
        return {ent.entity_id: self.entity_display(ent) for ent in entities}

    def get_world(self, session: Session) -> World | None:
        return session.scalar(select(World))

    def get_header_counters(self, session: Session) -> list[tuple[int, int, str]]:
        rows = session.scalars(
            select(WorldHeaderCounter).order_by(WorldHeaderCounter.slot)
        ).all()
        return [
            (row.slot, row.value, HEADER_COUNTER_LABELS.get(row.slot, f"slot {row.slot}"))
            for row in rows
        ]

    def get_entities(
        self,
        session: Session,
        *,
        named_only: bool = False,
        entity_class: str | None = None,
    ) -> list[EntitySummary]:
        site_counts = dict(
            session.execute(
                select(WorldSite.civ_id, func.count())
                .where(WorldSite.civ_id.is_not(None))
                .group_by(WorldSite.civ_id)
            ).all()
        )
        stmt = select(HistoricalEntity).order_by(
            HistoricalEntity.resolved_name.is_(None),
            HistoricalEntity.resolved_name,
            HistoricalEntity.entity_id,
        )
        if named_only:
            stmt = stmt.where(HistoricalEntity.resolved_name.is_not(None))
        if entity_class:
            stmt = stmt.where(HistoricalEntity.entity_class == entity_class)
        entities = session.scalars(stmt).all()
        return [
            EntitySummary(
                entity_id=ent.entity_id,
                entity_class=ent.entity_class,
                resolved_name=ent.resolved_name,
                display_name=self.entity_display(ent),
                site_count=site_counts.get(ent.entity_id, 0),
            )
            for ent in entities
        ]

    def get_entity_classes(self, session: Session) -> list[str]:
        return list(
            session.scalars(
                select(HistoricalEntity.entity_class)
                .distinct()
                .order_by(HistoricalEntity.entity_class)
            ).all()
        )

    def get_entity(self, session: Session, entity_id: int) -> HistoricalEntity | None:
        return session.get(HistoricalEntity, entity_id)

    def get_sites_for_entity(
        self, session: Session, entity_id: int
    ) -> list[WorldSite]:
        return list(
            session.scalars(
                select(WorldSite)
                .where(
                    or_(
                        WorldSite.civ_id == entity_id,
                        WorldSite.cur_owner_id == entity_id,
                    )
                )
                .order_by(WorldSite.display_name)
            ).all()
        )

    def get_sites(
        self,
        session: Session,
        *,
        civ_id: int | None = None,
        search: str | None = None,
        limit: int = 500,
    ) -> list[SiteSummary]:
        names = self.entity_name_map(session)
        stmt = select(WorldSite).order_by(WorldSite.display_name)
        if civ_id is not None:
            stmt = stmt.where(WorldSite.civ_id == civ_id)
        if search:
            stmt = stmt.where(WorldSite.display_name.ilike(f"%{search}%"))
        sites = session.scalars(stmt.limit(limit)).all()
        return [
            SiteSummary(
                site_id=site.site_id,
                display_name=site.display_name,
                site_type_name=site.site_type_name,
                civ_id=site.civ_id,
                civ_name=names.get(site.civ_id) if site.civ_id is not None else None,
                pos_x=site.pos_x,
                pos_y=site.pos_y,
            )
            for site in sites
        ]

    def get_site(self, session: Session, site_id: int) -> WorldSite | None:
        return session.get(WorldSite, site_id)

    @staticmethod
    def figure_display(figure: HistoricalFigure) -> str:
        if figure.name_display:
            return figure.name_display
        return f"Figure #{figure.figure_id}"

    def get_figures(
        self,
        session: Session,
        *,
        civ_id: int | None = None,
        search: str | None = None,
        limit: int = 200,
    ) -> list[FigureSummary]:
        names = self.entity_name_map(session)
        stmt = select(HistoricalFigure).order_by(
            HistoricalFigure.name_display.is_(None),
            HistoricalFigure.name_display,
            HistoricalFigure.figure_id,
        )
        if civ_id is not None:
            stmt = stmt.where(HistoricalFigure.civ_id == civ_id)
        if search:
            stmt = stmt.where(HistoricalFigure.name_display.ilike(f"%{search}%"))
        figures = session.scalars(stmt.limit(limit)).all()
        return [
            FigureSummary(
                figure_id=fig.figure_id,
                name_display=fig.name_display,
                display_name=self.figure_display(fig),
                civ_id=fig.civ_id,
                civ_name=names.get(fig.civ_id) if fig.civ_id is not None else None,
                profession=fig.profession,
                race=fig.race,
                appeared_year=fig.appeared_year,
                died_year=fig.died_year,
            )
            for fig in figures
        ]

    def get_figure(self, session: Session, figure_id: int) -> HistoricalFigure | None:
        return session.get(HistoricalFigure, figure_id)

    def get_figures_for_entity(
        self, session: Session, entity_id: int, *, limit: int = 50
    ) -> list[HistoricalFigure]:
        return list(
            session.scalars(
                select(HistoricalFigure)
                .where(HistoricalFigure.civ_id == entity_id)
                .order_by(HistoricalFigure.figure_id)
                .limit(limit)
            ).all()
        )

    def get_site_catalog_meta(self, session: Session) -> SiteCatalogMeta | None:
        return session.get(SiteCatalogMeta, 1)

    def get_histfig_catalog_meta(
        self, session: Session
    ) -> HistoricalFigureCatalogMeta | None:
        return session.get(HistoricalFigureCatalogMeta, 1)

    def get_history_events_meta(self, session: Session) -> HistoryEventsMeta | None:
        return session.get(HistoryEventsMeta, 1)

    def get_history_stats(self, session: Session) -> HistoryStatsBlock | None:
        return session.get(HistoryStatsBlock, 1)

    def get_vector_anchors(self, session: Session) -> list[VectorAnchor]:
        return list(
            session.scalars(
                select(VectorAnchor).order_by(VectorAnchor.name, VectorAnchor.payload_offset)
            ).all()
        )

    def get_layout_landmarks(self, session: Session) -> list[LayoutLandmark]:
        return list(
            session.scalars(
                select(LayoutLandmark).order_by(LayoutLandmark.region_key)
            ).all()
        )

    def get_layer_status(self, session: Session) -> list[LayerStatus]:
        return list(
            session.scalars(select(LayerStatus).order_by(LayerStatus.layer)).all()
        )

    def get_record_counts(self, session: Session) -> dict[str, int]:
        """Counts of deterministically extracted record tables (body-walk layers)."""
        return {
            "history_event": session.scalar(
                select(func.count()).select_from(HistoryEvent)
            )
            or 0,
            "site_population": session.scalar(
                select(func.count()).select_from(SitePopulation)
            )
            or 0,
        }

    # ------------------------------------------------------------------
    # events / collections / eras (deterministic world_history walk)

    def get_event_types(self, session: Session) -> list[tuple[str, int]]:
        rows = session.execute(
            select(HistoryEvent.event_type, func.count())
            .group_by(HistoryEvent.event_type)
            .order_by(func.count().desc())
        ).all()
        return [(t or "?", n) for t, n in rows]

    def get_events(
        self,
        session: Session,
        *,
        event_type: str | None = None,
        year: int | None = None,
        page: int = 1,
        per_page: int = 100,
    ) -> tuple[list[HistoryEvent], int]:
        """Return (page of events ordered by id, total matching count)."""
        stmt = select(HistoryEvent)
        count_stmt = select(func.count()).select_from(HistoryEvent)
        if event_type:
            stmt = stmt.where(HistoryEvent.event_type == event_type)
            count_stmt = count_stmt.where(HistoryEvent.event_type == event_type)
        if year is not None:
            stmt = stmt.where(HistoryEvent.year == year)
            count_stmt = count_stmt.where(HistoryEvent.year == year)
        total = session.scalar(count_stmt) or 0
        events = session.scalars(
            stmt.order_by(HistoryEvent.event_id)
            .offset(max(page - 1, 0) * per_page)
            .limit(per_page)
        ).all()
        return list(events), total

    def get_event(self, session: Session, event_id: int) -> HistoryEvent | None:
        return session.get(HistoryEvent, event_id)

    @staticmethod
    def event_fields(event: HistoryEvent) -> dict:
        """Parsed fields_json minus walk metadata, for detail rendering."""
        if not event.fields_json:
            return {}
        try:
            fields = json.loads(event.fields_json)
        except ValueError:
            return {}
        return {k: v for k, v in fields.items() if not k.startswith("_")}

    def get_collection_types(self, session: Session) -> list[tuple[str, int]]:
        rows = session.execute(
            select(EventCollection.collection_type, func.count())
            .group_by(EventCollection.collection_type)
            .order_by(func.count().desc())
        ).all()
        return [(t or "?", n) for t, n in rows]

    def get_collections(
        self,
        session: Session,
        *,
        collection_type: str | None = None,
        search: str | None = None,
        named_only: bool = False,
        page: int = 1,
        per_page: int = 100,
    ) -> tuple[list[EventCollection], int]:
        stmt = select(EventCollection)
        count_stmt = select(func.count()).select_from(EventCollection)
        if collection_type:
            stmt = stmt.where(EventCollection.collection_type == collection_type)
            count_stmt = count_stmt.where(
                EventCollection.collection_type == collection_type
            )
        if search:
            stmt = stmt.where(EventCollection.name_display.ilike(f"%{search}%"))
            count_stmt = count_stmt.where(
                EventCollection.name_display.ilike(f"%{search}%")
            )
        if named_only:
            stmt = stmt.where(EventCollection.name_display.is_not(None))
            count_stmt = count_stmt.where(EventCollection.name_display.is_not(None))
        total = session.scalar(count_stmt) or 0
        collections = session.scalars(
            stmt.order_by(EventCollection.collection_id)
            .offset(max(page - 1, 0) * per_page)
            .limit(per_page)
        ).all()
        return list(collections), total

    def get_collection(
        self, session: Session, collection_id: int
    ) -> EventCollection | None:
        return session.get(EventCollection, collection_id)

    @staticmethod
    def collection_display(collection: EventCollection | None) -> str:
        if collection is None:
            return "—"
        if collection.name_display:
            return collection.name_display.title()
        return f"{collection.collection_type or 'collection'} #{collection.collection_id}"

    @staticmethod
    def collection_record(collection: EventCollection) -> dict:
        if not collection.record_json:
            return {}
        try:
            return json.loads(collection.record_json)
        except ValueError:
            return {}

    def get_events_by_ids(
        self, session: Session, event_ids: list[int], *, limit: int = 500
    ) -> list[HistoryEvent]:
        if not event_ids:
            return []
        events = session.scalars(
            select(HistoryEvent)
            .where(HistoryEvent.event_id.in_(event_ids[:limit]))
            .order_by(HistoryEvent.year, HistoryEvent.seconds, HistoryEvent.event_id)
        ).all()
        return list(events)

    def get_collections_by_ids(
        self, session: Session, collection_ids: list[int]
    ) -> list[EventCollection]:
        if not collection_ids:
            return []
        return list(
            session.scalars(
                select(EventCollection)
                .where(EventCollection.collection_id.in_(collection_ids))
                .order_by(EventCollection.collection_id)
            ).all()
        )

    def get_eras(self, session: Session) -> list[HistoryEra]:
        return list(
            session.scalars(select(HistoryEra).order_by(HistoryEra.id)).all()
        )

    @staticmethod
    def era_record(era: HistoryEra) -> dict:
        if not era.record_json:
            return {}
        try:
            return json.loads(era.record_json)
        except ValueError:
            return {}

    @staticmethod
    def figure_record(figure: HistoricalFigure) -> dict:
        if not figure.record_json:
            return {}
        try:
            return json.loads(figure.record_json)
        except ValueError:
            return {}

    def get_figure_links(
        self, session: Session, figure_id: int, *, limit: int = 200
    ) -> list[HfLink]:
        return list(
            session.scalars(
                select(HfLink)
                .where(HfLink.figure_id == figure_id)
                .order_by(HfLink.category, HfLink.link_type, HfLink.target_id)
                .limit(limit)
            ).all()
        )

    def get_figure_skills(
        self, session: Session, figure_id: int, *, limit: int = 100
    ) -> list[HfSkill]:
        return list(
            session.scalars(
                select(HfSkill)
                .where(HfSkill.figure_id == figure_id)
                .order_by(HfSkill.rating.desc(), HfSkill.skill_id)
                .limit(limit)
            ).all()
        )

    def get_figure_relationships(
        self, session: Session, figure_id: int, *, limit: int = 100
    ) -> list[HfRelationship]:
        return list(
            session.scalars(
                select(HfRelationship)
                .where(
                    or_(
                        HfRelationship.source_hf == figure_id,
                        HfRelationship.target_hf == figure_id,
                    )
                )
                .order_by(HfRelationship.year.desc().nullslast(), HfRelationship.id)
                .limit(limit)
            ).all()
        )

    def link_target_display(
        self,
        session: Session,
        link: HfLink,
        *,
        site_names: dict[int, str] | None = None,
        entity_names: dict[int, str] | None = None,
        figure_names: dict[int, str] | None = None,
    ) -> str:
        tid = link.target_id
        if tid is None or tid < 0:
            return "—"
        if link.category == "site":
            if site_names and tid in site_names:
                return site_names[tid]
            site = session.get(WorldSite, tid)
            return site.display_name if site and site.display_name else f"site #{tid}"
        if link.category == "entity":
            if entity_names and tid in entity_names:
                return entity_names[tid]
            ent = session.get(HistoricalEntity, tid)
            return self.entity_display(ent) if ent else f"entity #{tid}"
        if figure_names and tid in figure_names:
            return figure_names[tid]
        fig = session.get(HistoricalFigure, tid)
        return self.figure_display(fig) if fig else f"figure #{tid}"

    def figure_name_map(
        self, session: Session, figure_ids: list[int]
    ) -> dict[int, str]:
        if not figure_ids:
            return {}
        figures = session.scalars(
            select(HistoricalFigure).where(HistoricalFigure.figure_id.in_(figure_ids))
        ).all()
        return {f.figure_id: self.figure_display(f) for f in figures}

    def get_latest_extraction_notes(
        self, session: Session, *, limit: int = 20
    ) -> list[str]:
        run = session.scalar(
            select(ExtractionRun).order_by(ExtractionRun.id.desc()).limit(1)
        )
        if run is None:
            return []
        notes = session.scalars(
            select(ExtractionNote)
            .where(ExtractionNote.run_id == run.id)
            .order_by(ExtractionNote.line_number)
            .limit(limit)
        ).all()
        return [note.text for note in notes]


    def site_name_map(self, session: Session) -> dict[int, str]:
        sites = session.scalars(select(WorldSite)).all()
        return {s.site_id: s.display_name or f"Site #{s.site_id}" for s in sites}

    def get_events_for_figure(
        self,
        session: Session,
        figure_id: int,
        *,
        limit: int = 500,
        offset: int = 0,
    ) -> tuple[list[HistoryEvent], int]:
        """Chronological events referencing the figure; returns (page, total)."""
        count_row = session.execute(
            text(
                """
                SELECT COUNT(*) FROM history_event
                WHERE hfid = :fid
                   OR EXISTS (
                        SELECT 1 FROM json_each(history_event.fields_json)
                        WHERE json_each.value = :fid
                          AND (json_each.key LIKE '%hf%' OR json_each.key LIKE '%histfig%')
                      )
                """
            ),
            {"fid": figure_id},
        ).scalar()
        total = int(count_row or 0)
        rows = session.execute(
            text(
                """
                SELECT event_id FROM history_event
                WHERE hfid = :fid
                   OR EXISTS (
                        SELECT 1 FROM json_each(history_event.fields_json)
                        WHERE json_each.value = :fid
                          AND (json_each.key LIKE '%hf%' OR json_each.key LIKE '%histfig%')
                      )
                ORDER BY year, seconds, event_id
                LIMIT :lim OFFSET :off
                """
            ),
            {"fid": figure_id, "lim": limit, "off": offset},
        ).all()
        ids = [r[0] for r in rows]
        if not ids:
            return [], total
        events = session.scalars(
            select(HistoryEvent).where(HistoryEvent.event_id.in_(ids))
        ).all()
        by_id = {e.event_id: e for e in events}
        return [by_id[i] for i in ids if i in by_id], total

    def get_events_for_site(
        self, session: Session, site_id: int, *, limit: int = 100
    ) -> list[HistoryEvent]:
        rows = session.execute(
            text(
                """
                SELECT event_id FROM history_event
                WHERE site_id = :sid
                   OR EXISTS (
                        SELECT 1 FROM json_each(history_event.fields_json)
                        WHERE json_each.value = :sid
                          AND (json_each.key = 'site' OR json_each.key = 'site_id'
                               OR json_each.key LIKE '%_site')
                      )
                ORDER BY year, seconds, event_id
                LIMIT :lim
                """
            ),
            {"sid": site_id, "lim": limit},
        ).all()
        ids = [r[0] for r in rows]
        if not ids:
            return []
        events = session.scalars(
            select(HistoryEvent).where(HistoryEvent.event_id.in_(ids))
        ).all()
        by_id = {e.event_id: e for e in events}
        return [by_id[i] for i in ids if i in by_id]

    def get_events_for_entity(
        self, session: Session, entity_id: int, *, limit: int = 100
    ) -> list[HistoryEvent]:
        rows = session.execute(
            text(
                """
                SELECT event_id FROM history_event
                WHERE civ_id = :eid
                   OR EXISTS (
                        SELECT 1 FROM json_each(history_event.fields_json)
                        WHERE json_each.value = :eid
                          AND (json_each.key LIKE '%civ%' OR json_each.key = 'entity')
                      )
                ORDER BY year, seconds, event_id
                LIMIT :lim
                """
            ),
            {"eid": entity_id, "lim": limit},
        ).all()
        ids = [r[0] for r in rows]
        if not ids:
            return []
        events = session.scalars(
            select(HistoryEvent).where(HistoryEvent.event_id.in_(ids))
        ).all()
        by_id = {e.event_id: e for e in events}
        return [by_id[i] for i in ids if i in by_id]

    def get_collections_for_event(
        self, session: Session, event_id: int, *, limit: int = 20
    ) -> list[EventCollection]:
        rows = session.execute(
            text(
                """
                SELECT collection_id FROM event_collection
                WHERE EXISTS (
                    SELECT 1 FROM json_each(event_collection.record_json, '$.events')
                    WHERE json_each.value = :eid
                )
                LIMIT :lim
                """
            ),
            {"eid": event_id, "lim": limit},
        ).all()
        ids = [r[0] for r in rows]
        if not ids:
            return []
        return list(
            session.scalars(
                select(EventCollection)
                .where(EventCollection.collection_id.in_(ids))
                .order_by(EventCollection.collection_id)
            ).all()
        )

    def get_chronicle_events(
        self,
        session: Session,
        *,
        event_type: str | None = None,
        year: int | None = None,
        page: int = 1,
        per_page: int = 100,
        min_year: int = 0,
        narrative_only: bool = True,
    ) -> tuple[list[HistoryEvent], int]:
        from .presentation import CHRONICLE_NOISE_TYPES

        stmt = select(HistoryEvent)
        count_stmt = select(func.count()).select_from(HistoryEvent)
        if min_year is not None:
            stmt = stmt.where(HistoryEvent.year >= min_year)
            count_stmt = count_stmt.where(HistoryEvent.year >= min_year)
        if narrative_only:
            stmt = stmt.where(HistoryEvent.event_type.not_in(tuple(CHRONICLE_NOISE_TYPES)))
            count_stmt = count_stmt.where(
                HistoryEvent.event_type.not_in(tuple(CHRONICLE_NOISE_TYPES))
            )
        if event_type:
            stmt = stmt.where(HistoryEvent.event_type == event_type)
            count_stmt = count_stmt.where(HistoryEvent.event_type == event_type)
        if year is not None:
            stmt = stmt.where(HistoryEvent.year == year)
            count_stmt = count_stmt.where(HistoryEvent.year == year)
        total = session.scalar(count_stmt) or 0
        events = session.scalars(
            stmt.order_by(HistoryEvent.year, HistoryEvent.seconds, HistoryEvent.event_id)
            .offset(max(page - 1, 0) * per_page)
            .limit(per_page)
        ).all()
        return list(events), total

    def get_site_populations(
        self, session: Session, site_id: int, *, limit: int = 50
    ) -> list[SitePopulation]:
        return list(
            session.scalars(
                select(SitePopulation)
                .where(SitePopulation.site_id == site_id)
                .order_by(SitePopulation.count.desc().nullslast(), SitePopulation.race)
                .limit(limit)
            ).all()
        )

    def get_entity_officials(
        self, session: Session, entity_id: int, *, limit: int = 50
    ) -> list[HfLink]:
        return list(
            session.scalars(
                select(HfLink)
                .where(
                    HfLink.category == "entity",
                    HfLink.target_id == entity_id,
                    or_(
                        HfLink.link_type.ilike("%position%"),
                        HfLink.link_type == "member",
                    ),
                )
                .order_by(HfLink.link_type, HfLink.figure_id)
                .limit(limit)
            ).all()
        )

    def search_world(
        self,
        session: Session,
        query: str,
        *,
        limit: int = 50,
    ) -> dict[str, list]:
        q = f"%{query.strip()}%"
        if not query.strip():
            return {"figures": [], "sites": [], "entities": [], "events": []}
        figures = session.scalars(
            select(HistoricalFigure)
            .where(HistoricalFigure.name_display.ilike(q))
            .order_by(HistoricalFigure.name_display)
            .limit(limit)
        ).all()
        sites = session.scalars(
            select(WorldSite)
            .where(WorldSite.display_name.ilike(q))
            .order_by(WorldSite.display_name)
            .limit(limit)
        ).all()
        entities = session.scalars(
            select(HistoricalEntity)
            .where(HistoricalEntity.resolved_name.ilike(q))
            .order_by(HistoricalEntity.resolved_name)
            .limit(limit)
        ).all()
        events = session.scalars(
            select(HistoryEvent)
            .where(
                or_(
                    HistoryEvent.event_type.ilike(q),
                    HistoryEvent.fields_json.ilike(q),
                )
            )
            .order_by(HistoryEvent.year.desc().nullslast(), HistoryEvent.event_id.desc())
            .limit(limit)
        ).all()
        return {
            "figures": list(figures),
            "sites": list(sites),
            "entities": list(entities),
            "events": list(events),
        }
