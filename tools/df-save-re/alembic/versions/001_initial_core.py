"""Initial core schema for per-fortress legends SQLite databases."""

from typing import Sequence, Union

import sqlalchemy as sa
from alembic import op

revision: str = "001_initial_core"
down_revision: Union[str, None] = None
branch_labels: Union[str, Sequence[str], None] = None
depends_on: Union[str, Sequence[str], None] = None


def upgrade() -> None:
    op.create_table(
        "world",
        sa.Column("id", sa.Integer(), nullable=False),
        sa.Column("world_name", sa.String(length=256), nullable=False),
        sa.Column("save_version", sa.Integer(), nullable=True),
        sa.Column("df_version", sa.String(length=32), nullable=True),
        sa.Column("source_path", sa.Text(), nullable=True),
        sa.Column("payload_size", sa.Integer(), nullable=True),
        sa.Column("extracted_at", sa.DateTime(timezone=True), nullable=False),
        sa.Column("parser_version", sa.String(length=32), nullable=False),
        sa.PrimaryKeyConstraint("id"),
    )
    op.create_table(
        "world_header_counter",
        sa.Column("slot", sa.Integer(), nullable=False),
        sa.Column("value", sa.Integer(), nullable=False),
        sa.PrimaryKeyConstraint("slot"),
    )
    op.create_table(
        "extraction_run",
        sa.Column("id", sa.Integer(), autoincrement=True, nullable=False),
        sa.Column("extracted_at", sa.DateTime(timezone=True), nullable=False),
        sa.Column("parser_version", sa.String(length=32), nullable=False),
        sa.Column("source_fingerprint", sa.String(length=64), nullable=True),
        sa.Column("note_count", sa.Integer(), nullable=False),
        sa.PrimaryKeyConstraint("id"),
    )
    op.create_table(
        "extraction_note",
        sa.Column("id", sa.Integer(), autoincrement=True, nullable=False),
        sa.Column("run_id", sa.Integer(), nullable=False),
        sa.Column("line_number", sa.Integer(), nullable=False),
        sa.Column("text", sa.Text(), nullable=False),
        sa.ForeignKeyConstraint(["run_id"], ["extraction_run.id"]),
        sa.PrimaryKeyConstraint("id"),
    )
    op.create_table(
        "layout_landmark",
        sa.Column("region_key", sa.String(length=64), nullable=False),
        sa.Column("payload_offset", sa.Integer(), nullable=True),
        sa.PrimaryKeyConstraint("region_key"),
    )
    op.create_table(
        "layout_region",
        sa.Column("id", sa.Integer(), autoincrement=True, nullable=False),
        sa.Column("name", sa.String(length=64), nullable=False),
        sa.Column("start_offset", sa.Integer(), nullable=False),
        sa.Column("end_offset", sa.Integer(), nullable=False),
        sa.Column("size_bytes", sa.Integer(), nullable=False),
        sa.PrimaryKeyConstraint("id"),
    )
    op.create_table(
        "string_table_section",
        sa.Column("section_index", sa.Integer(), nullable=False),
        sa.Column("entry_count", sa.Integer(), nullable=False),
        sa.Column("first_name", sa.Text(), nullable=True),
        sa.Column("last_name", sa.Text(), nullable=True),
        sa.PrimaryKeyConstraint("section_index"),
    )
    op.create_table(
        "historical_entity",
        sa.Column("entity_id", sa.Integer(), nullable=False),
        sa.Column("entity_type", sa.Integer(), nullable=False),
        sa.Column("entity_class", sa.String(length=128), nullable=False),
        sa.Column("field_16a", sa.Integer(), nullable=True),
        sa.Column("field_16b", sa.Integer(), nullable=True),
        sa.Column("next_entity_id", sa.Integer(), nullable=True),
        sa.Column("short_list_size", sa.Integer(), nullable=True),
        sa.Column("has_name", sa.Boolean(), nullable=False),
        sa.Column("resolved_name", sa.Text(), nullable=True),
        sa.Column("name_source", sa.String(length=16), nullable=True),
        sa.Column("payload_offset", sa.Integer(), nullable=True),
        sa.PrimaryKeyConstraint("entity_id"),
    )
    op.create_index("ix_historical_entity_class", "historical_entity", ["entity_class"], unique=False)
    op.create_table(
        "world_site",
        sa.Column("site_id", sa.Integer(), nullable=False),
        sa.Column("display_name", sa.Text(), nullable=False),
        sa.Column("site_type", sa.Integer(), nullable=True),
        sa.Column("site_type_name", sa.String(length=64), nullable=True),
        sa.Column("civ_id", sa.Integer(), nullable=True),
        sa.Column("cur_owner_id", sa.Integer(), nullable=True),
        sa.Column("pos_x", sa.Integer(), nullable=True),
        sa.Column("pos_y", sa.Integer(), nullable=True),
        sa.Column("word_indices_json", sa.Text(), nullable=True),
        sa.Column("name_marker_offset", sa.Integer(), nullable=True),
        sa.Column("header_offset", sa.Integer(), nullable=True),
        sa.PrimaryKeyConstraint("site_id"),
    )
    op.create_index("ix_world_site_civ_id", "world_site", ["civ_id"], unique=False)
    op.create_index("ix_world_site_display_name", "world_site", ["display_name"], unique=False)
    op.create_index("ix_world_site_coords", "world_site", ["pos_x", "pos_y"], unique=False)
    op.create_table(
        "site_catalog_meta",
        sa.Column("id", sa.Integer(), nullable=False),
        sa.Column("site_count", sa.Integer(), nullable=False),
        sa.Column("header_enriched_count", sa.Integer(), nullable=False),
        sa.Column("name_table_base", sa.Integer(), nullable=True),
        sa.Column("name_table_stride", sa.Integer(), nullable=True),
        sa.Column("search_start", sa.Integer(), nullable=True),
        sa.Column("search_end", sa.Integer(), nullable=True),
        sa.PrimaryKeyConstraint("id"),
    )
    op.create_table(
        "historical_figure_catalog_meta",
        sa.Column("id", sa.Integer(), nullable=False),
        sa.Column("vector_offset", sa.Integer(), nullable=True),
        sa.Column("vector_count", sa.Integer(), nullable=True),
        sa.Column("present_count", sa.Integer(), nullable=True),
        sa.Column("bodies_start", sa.Integer(), nullable=True),
        sa.Column("death_events_offset", sa.Integer(), nullable=True),
        sa.Column("id_chain_length", sa.Integer(), nullable=True),
        sa.Column("max_id_seen", sa.Integer(), nullable=True),
        sa.PrimaryKeyConstraint("id"),
    )
    op.create_table(
        "historical_figure",
        sa.Column("figure_id", sa.Integer(), nullable=False),
        sa.Column("profession", sa.Integer(), nullable=True),
        sa.Column("race", sa.Integer(), nullable=True),
        sa.Column("caste", sa.Integer(), nullable=True),
        sa.Column("sex", sa.Integer(), nullable=True),
        sa.Column("civ_id", sa.Integer(), nullable=True),
        sa.Column("population_id", sa.Integer(), nullable=True),
        sa.Column("breed_id", sa.Integer(), nullable=True),
        sa.Column("cultural_identity", sa.Integer(), nullable=True),
        sa.Column("family_head_id", sa.Integer(), nullable=True),
        sa.Column("unit_id", sa.Integer(), nullable=True),
        sa.Column("nemesis_id", sa.Integer(), nullable=True),
        sa.Column("appeared_year", sa.Integer(), nullable=True),
        sa.Column("born_year", sa.Integer(), nullable=True),
        sa.Column("born_seconds", sa.Integer(), nullable=True),
        sa.Column("died_year", sa.Integer(), nullable=True),
        sa.Column("died_seconds", sa.Integer(), nullable=True),
        sa.Column("curse_year", sa.Integer(), nullable=True),
        sa.Column("curse_seconds", sa.Integer(), nullable=True),
        sa.Column("name_display", sa.Text(), nullable=True),
        sa.Column("name_words_json", sa.Text(), nullable=True),
        sa.Column("payload_offset", sa.Integer(), nullable=True),
        sa.PrimaryKeyConstraint("figure_id"),
    )
    op.create_index("ix_historical_figure_civ_id", "historical_figure", ["civ_id"], unique=False)
    op.create_index("ix_historical_figure_race", "historical_figure", ["race"], unique=False)
    op.create_index("ix_historical_figure_name", "historical_figure", ["name_display"], unique=False)
    op.create_table(
        "history_events_meta",
        sa.Column("id", sa.Integer(), nullable=False),
        sa.Column("event_count", sa.Integer(), nullable=True),
        sa.Column("stats_offset", sa.Integer(), nullable=True),
        sa.Column("events_vector_offset", sa.Integer(), nullable=True),
        sa.Column("death_events_offset", sa.Integer(), nullable=True),
        sa.Column("death_present_count", sa.Integer(), nullable=True),
        sa.PrimaryKeyConstraint("id"),
    )
    op.create_table(
        "history_stats_block",
        sa.Column("id", sa.Integer(), nullable=False),
        sa.Column("payload_offset", sa.Integer(), nullable=False),
        sa.Column("event_counter", sa.Integer(), nullable=False),
        sa.Column("histfig_counter", sa.Integer(), nullable=False),
        sa.Column("field_151", sa.Integer(), nullable=True),
        sa.Column("field_4", sa.Integer(), nullable=True),
        sa.PrimaryKeyConstraint("id"),
    )
    op.create_table(
        "vector_anchor",
        sa.Column("id", sa.Integer(), autoincrement=True, nullable=False),
        sa.Column("name", sa.String(length=64), nullable=False),
        sa.Column("payload_offset", sa.Integer(), nullable=False),
        sa.Column("count", sa.Integer(), nullable=False),
        sa.Column("present_count", sa.Integer(), nullable=True),
        sa.Column("posnull_score", sa.Integer(), nullable=True),
        sa.PrimaryKeyConstraint("id"),
        sa.UniqueConstraint("name", "payload_offset", name="uq_vector_anchor_name_offset"),
    )


def downgrade() -> None:
    op.drop_table("vector_anchor")
    op.drop_table("history_stats_block")
    op.drop_table("history_events_meta")
    op.drop_index("ix_historical_figure_name", table_name="historical_figure")
    op.drop_index("ix_historical_figure_race", table_name="historical_figure")
    op.drop_index("ix_historical_figure_civ_id", table_name="historical_figure")
    op.drop_table("historical_figure")
    op.drop_table("historical_figure_catalog_meta")
    op.drop_table("site_catalog_meta")
    op.drop_index("ix_world_site_coords", table_name="world_site")
    op.drop_index("ix_world_site_display_name", table_name="world_site")
    op.drop_index("ix_world_site_civ_id", table_name="world_site")
    op.drop_table("world_site")
    op.drop_index("ix_historical_entity_class", table_name="historical_entity")
    op.drop_table("historical_entity")
    op.drop_table("string_table_section")
    op.drop_table("layout_region")
    op.drop_table("layout_landmark")
    op.drop_table("extraction_note")
    op.drop_table("extraction_run")
    op.drop_table("world_header_counter")
    op.drop_table("world")
