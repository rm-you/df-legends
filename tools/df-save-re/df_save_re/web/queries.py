"""Read-only queries for the legends explorer UI."""

from __future__ import annotations

from dataclasses import dataclass
from pathlib import Path

from sqlalchemy import func, or_, select
from sqlalchemy.orm import Session

from ..db.migrate import make_engine
from ..db.models import (
    ExtractionNote,
    ExtractionRun,
    HistoricalEntity,
    HistoricalFigure,
    HistoricalFigureCatalogMeta,
    HistoryEventsMeta,
    HistoryStatsBlock,
    LayoutLandmark,
    SiteCatalogMeta,
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
        return f"{entity.entity_class} #{entity.entity_id}"

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
