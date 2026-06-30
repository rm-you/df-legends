"""SQLAlchemy models for per-fortress legends SQLite databases."""

from __future__ import annotations

from datetime import datetime, timezone

from sqlalchemy import (
    Boolean,
    DateTime,
    ForeignKey,
    Index,
    Integer,
    String,
    Text,
    UniqueConstraint,
)
from sqlalchemy.orm import DeclarativeBase, Mapped, mapped_column, relationship


def utcnow() -> datetime:
    return datetime.now(timezone.utc)


class Base(DeclarativeBase):
    pass


class World(Base):
    """One row per fortress DB — the extracted world identity."""

    __tablename__ = "world"

    id: Mapped[int] = mapped_column(Integer, primary_key=True, default=1)
    world_name: Mapped[str] = mapped_column(String(256), nullable=False)
    save_version: Mapped[int | None] = mapped_column(Integer)
    df_version: Mapped[str | None] = mapped_column(String(32))
    source_path: Mapped[str | None] = mapped_column(Text)
    payload_size: Mapped[int | None] = mapped_column(Integer)
    extracted_at: Mapped[datetime] = mapped_column(DateTime(timezone=True), default=utcnow)
    parser_version: Mapped[str] = mapped_column(String(32), nullable=False)


class WorldHeaderCounter(Base):
    """``WorldHeaderHypothesis.max_ids`` slot/value pairs for queryable caps."""

    __tablename__ = "world_header_counter"

    slot: Mapped[int] = mapped_column(Integer, primary_key=True)
    value: Mapped[int] = mapped_column(Integer, nullable=False)


class ExtractionRun(Base):
    """Provenance for each import into this fortress DB."""

    __tablename__ = "extraction_run"

    id: Mapped[int] = mapped_column(Integer, primary_key=True, autoincrement=True)
    extracted_at: Mapped[datetime] = mapped_column(DateTime(timezone=True), default=utcnow)
    parser_version: Mapped[str] = mapped_column(String(32), nullable=False)
    source_fingerprint: Mapped[str | None] = mapped_column(String(64))
    note_count: Mapped[int] = mapped_column(Integer, default=0)

    notes: Mapped[list[ExtractionNote]] = relationship(back_populates="run")


class ExtractionNote(Base):
    __tablename__ = "extraction_note"

    id: Mapped[int] = mapped_column(Integer, primary_key=True, autoincrement=True)
    run_id: Mapped[int] = mapped_column(ForeignKey("extraction_run.id"), nullable=False)
    line_number: Mapped[int] = mapped_column(Integer, nullable=False)
    text: Mapped[str] = mapped_column(Text, nullable=False)

    run: Mapped[ExtractionRun] = relationship(back_populates="notes")


class LayoutLandmark(Base):
    """Named payload offsets from ``WorldLayoutLandmarks``."""

    __tablename__ = "layout_landmark"

    region_key: Mapped[str] = mapped_column(String(64), primary_key=True)
    payload_offset: Mapped[int | None] = mapped_column(Integer)


class LayoutRegion(Base):
    """Contiguous payload regions discovered during layout pass."""

    __tablename__ = "layout_region"

    id: Mapped[int] = mapped_column(Integer, primary_key=True, autoincrement=True)
    name: Mapped[str] = mapped_column(String(64), nullable=False)
    start_offset: Mapped[int] = mapped_column(Integer, nullable=False)
    end_offset: Mapped[int] = mapped_column(Integer, nullable=False)
    size_bytes: Mapped[int] = mapped_column(Integer, nullable=False)


class StringTableSection(Base):
    """Summary of each DF string-table section (not full string lists)."""

    __tablename__ = "string_table_section"

    section_index: Mapped[int] = mapped_column(Integer, primary_key=True)
    entry_count: Mapped[int] = mapped_column(Integer, nullable=False)
    first_name: Mapped[str | None] = mapped_column(Text)
    last_name: Mapped[str | None] = mapped_column(Text)


class HistoricalEntity(Base):
    """Civilization / entity catalog headers."""

    __tablename__ = "historical_entity"

    entity_id: Mapped[int] = mapped_column(Integer, primary_key=True)
    entity_type: Mapped[int] = mapped_column(Integer, nullable=False)
    entity_class: Mapped[str] = mapped_column(String(128), nullable=False)
    field_16a: Mapped[int | None] = mapped_column(Integer)
    field_16b: Mapped[int | None] = mapped_column(Integer)
    next_entity_id: Mapped[int | None] = mapped_column(Integer)
    short_list_size: Mapped[int | None] = mapped_column(Integer)
    has_name: Mapped[bool] = mapped_column(Boolean, nullable=False, default=False)
    resolved_name: Mapped[str | None] = mapped_column(Text)
    name_source: Mapped[str | None] = mapped_column(String(16))
    payload_offset: Mapped[int | None] = mapped_column(Integer)

    __table_args__ = (Index("ix_historical_entity_class", "entity_class"),)


class WorldSite(Base):
    """Binary ``world_site`` records (query by civ, type, coords, name)."""

    __tablename__ = "world_site"

    site_id: Mapped[int] = mapped_column(Integer, primary_key=True)
    display_name: Mapped[str] = mapped_column(Text, nullable=False)
    site_type: Mapped[int | None] = mapped_column(Integer)
    site_type_name: Mapped[str | None] = mapped_column(String(64))
    civ_id: Mapped[int | None] = mapped_column(Integer)
    cur_owner_id: Mapped[int | None] = mapped_column(Integer)
    pos_x: Mapped[int | None] = mapped_column(Integer)
    pos_y: Mapped[int | None] = mapped_column(Integer)
    word_indices_json: Mapped[str | None] = mapped_column(Text)
    name_marker_offset: Mapped[int | None] = mapped_column(Integer)
    header_offset: Mapped[int | None] = mapped_column(Integer)

    __table_args__ = (
        Index("ix_world_site_civ_id", "civ_id"),
        Index("ix_world_site_display_name", "display_name"),
        Index("ix_world_site_coords", "pos_x", "pos_y"),
    )


class SiteCatalogMeta(Base):
    """Singleton metadata for the site discovery pass."""

    __tablename__ = "site_catalog_meta"

    id: Mapped[int] = mapped_column(Integer, primary_key=True, default=1)
    site_count: Mapped[int] = mapped_column(Integer, nullable=False, default=0)
    header_enriched_count: Mapped[int] = mapped_column(Integer, nullable=False, default=0)
    name_table_base: Mapped[int | None] = mapped_column(Integer)
    name_table_stride: Mapped[int | None] = mapped_column(Integer)
    search_start: Mapped[int | None] = mapped_column(Integer)
    search_end: Mapped[int | None] = mapped_column(Integer)


class HistoricalFigureCatalogMeta(Base):
    """Singleton metadata for the histfig vector anchor."""

    __tablename__ = "historical_figure_catalog_meta"

    id: Mapped[int] = mapped_column(Integer, primary_key=True, default=1)
    vector_offset: Mapped[int | None] = mapped_column(Integer)
    vector_count: Mapped[int | None] = mapped_column(Integer)
    present_count: Mapped[int | None] = mapped_column(Integer)
    bodies_start: Mapped[int | None] = mapped_column(Integer)
    death_events_offset: Mapped[int | None] = mapped_column(Integer)
    id_chain_length: Mapped[int | None] = mapped_column(Integer)
    max_id_seen: Mapped[int | None] = mapped_column(Integer)


class HistoricalFigure(Base):
    """Parsed ``historical_figure`` headers (prefix through ``art_count``)."""

    __tablename__ = "historical_figure"

    figure_id: Mapped[int] = mapped_column(Integer, primary_key=True)
    profession: Mapped[int | None] = mapped_column(Integer)
    race: Mapped[int | None] = mapped_column(Integer)
    caste: Mapped[int | None] = mapped_column(Integer)
    sex: Mapped[int | None] = mapped_column(Integer)
    civ_id: Mapped[int | None] = mapped_column(Integer)
    population_id: Mapped[int | None] = mapped_column(Integer)
    breed_id: Mapped[int | None] = mapped_column(Integer)
    cultural_identity: Mapped[int | None] = mapped_column(Integer)
    family_head_id: Mapped[int | None] = mapped_column(Integer)
    unit_id: Mapped[int | None] = mapped_column(Integer)
    nemesis_id: Mapped[int | None] = mapped_column(Integer)
    appeared_year: Mapped[int | None] = mapped_column(Integer)
    born_year: Mapped[int | None] = mapped_column(Integer)
    born_seconds: Mapped[int | None] = mapped_column(Integer)
    died_year: Mapped[int | None] = mapped_column(Integer)
    died_seconds: Mapped[int | None] = mapped_column(Integer)
    curse_year: Mapped[int | None] = mapped_column(Integer)
    curse_seconds: Mapped[int | None] = mapped_column(Integer)
    name_display: Mapped[str | None] = mapped_column(Text)
    name_words_json: Mapped[str | None] = mapped_column(Text)
    payload_offset: Mapped[int | None] = mapped_column(Integer)

    __table_args__ = (
        Index("ix_historical_figure_civ_id", "civ_id"),
        Index("ix_historical_figure_race", "race"),
        Index("ix_historical_figure_name", "name_display"),
    )


class HistoryEventsMeta(Base):
    """Singleton metadata for history event layer anchors."""

    __tablename__ = "history_events_meta"

    id: Mapped[int] = mapped_column(Integer, primary_key=True, default=1)
    event_count: Mapped[int | None] = mapped_column(Integer)
    stats_offset: Mapped[int | None] = mapped_column(Integer)
    events_vector_offset: Mapped[int | None] = mapped_column(Integer)
    death_events_offset: Mapped[int | None] = mapped_column(Integer)
    death_present_count: Mapped[int | None] = mapped_column(Integer)


class HistoryStatsBlock(Base):
    """Counter echo block (not the events vector)."""

    __tablename__ = "history_stats_block"

    id: Mapped[int] = mapped_column(Integer, primary_key=True, default=1)
    payload_offset: Mapped[int] = mapped_column(Integer, nullable=False)
    event_counter: Mapped[int] = mapped_column(Integer, nullable=False)
    histfig_counter: Mapped[int] = mapped_column(Integer, nullable=False)
    field_151: Mapped[int | None] = mapped_column(Integer)
    field_4: Mapped[int | None] = mapped_column(Integer)


class VectorAnchor(Base):
    """Located posnull pointer vectors (sites, events, figures, etc.)."""

    __tablename__ = "vector_anchor"

    id: Mapped[int] = mapped_column(Integer, primary_key=True, autoincrement=True)
    name: Mapped[str] = mapped_column(String(64), nullable=False)
    payload_offset: Mapped[int] = mapped_column(Integer, nullable=False)
    count: Mapped[int] = mapped_column(Integer, nullable=False)
    present_count: Mapped[int | None] = mapped_column(Integer)
    posnull_score: Mapped[int | None] = mapped_column(Integer)

    __table_args__ = (UniqueConstraint("name", "payload_offset", name="uq_vector_anchor_name_offset"),)


class LayerStatus(Base):
    """Per-layer extraction status from the serialization engine walk.

    Populated for every import: authoritative record count (from header /
    confirmed vector) plus whether the deterministic body walk lands, and the
    exact desync offset when it does not. Drives the explorer's status panel.
    """

    __tablename__ = "layer_status"

    layer: Mapped[str] = mapped_column(String(32), primary_key=True)
    element_type: Mapped[str | None] = mapped_column(String(64))
    authoritative_count: Mapped[int | None] = mapped_column(Integer)
    deterministic: Mapped[bool] = mapped_column(Boolean, nullable=False, default=False)
    declared_count: Mapped[int | None] = mapped_column(Integer)
    parsed_count: Mapped[int | None] = mapped_column(Integer)
    vector_offset: Mapped[int | None] = mapped_column(Integer)
    end_offset: Mapped[int | None] = mapped_column(Integer)
    error_offset: Mapped[int | None] = mapped_column(Integer)
    note: Mapped[str | None] = mapped_column(Text)


class SitePopulation(Base):
    """Site inhabitant / animal populations (from world_site body walk)."""

    __tablename__ = "site_population"

    id: Mapped[int] = mapped_column(Integer, primary_key=True, autoincrement=True)
    site_id: Mapped[int] = mapped_column(Integer, nullable=False)
    race: Mapped[str | None] = mapped_column(String(128))
    race_id: Mapped[int | None] = mapped_column(Integer)
    count: Mapped[int | None] = mapped_column(Integer)
    is_animal: Mapped[bool] = mapped_column(Boolean, nullable=False, default=False)

    __table_args__ = (Index("ix_site_population_site_id", "site_id"),)


class HistoryEvent(Base):
    """Polymorphic history_event records (from the events body walk)."""

    __tablename__ = "history_event"

    event_id: Mapped[int] = mapped_column(Integer, primary_key=True)
    year: Mapped[int | None] = mapped_column(Integer)
    seconds: Mapped[int | None] = mapped_column(Integer)
    event_type: Mapped[str | None] = mapped_column(String(64))
    civ_id: Mapped[int | None] = mapped_column(Integer)
    site_id: Mapped[int | None] = mapped_column(Integer)
    hfid: Mapped[int | None] = mapped_column(Integer)
    fields_json: Mapped[str | None] = mapped_column(Text)

    __table_args__ = (
        Index("ix_history_event_year", "year"),
        Index("ix_history_event_type", "event_type"),
    )


class EntityPosition(Base):
    """entity_position definitions + assignments (from entity body walk)."""

    __tablename__ = "entity_position"

    id: Mapped[int] = mapped_column(Integer, primary_key=True, autoincrement=True)
    entity_id: Mapped[int] = mapped_column(Integer, nullable=False)
    position_id: Mapped[int | None] = mapped_column(Integer)
    name: Mapped[str | None] = mapped_column(Text)
    name_male: Mapped[str | None] = mapped_column(Text)
    name_female: Mapped[str | None] = mapped_column(Text)
    assigned_hfid: Mapped[int | None] = mapped_column(Integer)

    __table_args__ = (Index("ix_entity_position_entity_id", "entity_id"),)


class Artifact(Base):
    """artifact_record headers (from the artifacts body walk)."""

    __tablename__ = "artifact"

    artifact_id: Mapped[int] = mapped_column(Integer, primary_key=True)
    name_display: Mapped[str | None] = mapped_column(Text)
    item_type: Mapped[int | None] = mapped_column(Integer)
    holder_hfid: Mapped[int | None] = mapped_column(Integer)
    site_id: Mapped[int | None] = mapped_column(Integer)


class WrittenContent(Base):
    """written_content records (books, poems, etc.)."""

    __tablename__ = "written_content"

    content_id: Mapped[int] = mapped_column(Integer, primary_key=True)
    title: Mapped[str | None] = mapped_column(Text)
    content_type: Mapped[int | None] = mapped_column(Integer)
    author_hfid: Mapped[int | None] = mapped_column(Integer)


class HistoryEra(Base):
    """history_era spans."""

    __tablename__ = "history_era"

    id: Mapped[int] = mapped_column(Integer, primary_key=True, autoincrement=True)
    name: Mapped[str | None] = mapped_column(Text)
    start_year: Mapped[int | None] = mapped_column(Integer)


class EventCollection(Base):
    """historical_event_collection records (wars, battles, etc.)."""

    __tablename__ = "event_collection"

    collection_id: Mapped[int] = mapped_column(Integer, primary_key=True)
    collection_type: Mapped[str | None] = mapped_column(String(64))
    start_year: Mapped[int | None] = mapped_column(Integer)
    end_year: Mapped[int | None] = mapped_column(Integer)
    name_display: Mapped[str | None] = mapped_column(Text)
