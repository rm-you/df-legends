"""Engine layer status + record tables (events, populations, positions, artifacts, eras, collections)."""

from typing import Sequence, Union

import sqlalchemy as sa
from alembic import op

revision: str = "002_engine_layers"
down_revision: Union[str, None] = "001_initial_core"
branch_labels: Union[str, Sequence[str], None] = None
depends_on: Union[str, Sequence[str], None] = None


def upgrade() -> None:
    op.create_table(
        "layer_status",
        sa.Column("layer", sa.String(length=32), nullable=False),
        sa.Column("element_type", sa.String(length=64), nullable=True),
        sa.Column("authoritative_count", sa.Integer(), nullable=True),
        sa.Column("deterministic", sa.Boolean(), nullable=False),
        sa.Column("declared_count", sa.Integer(), nullable=True),
        sa.Column("parsed_count", sa.Integer(), nullable=True),
        sa.Column("vector_offset", sa.Integer(), nullable=True),
        sa.Column("end_offset", sa.Integer(), nullable=True),
        sa.Column("error_offset", sa.Integer(), nullable=True),
        sa.Column("note", sa.Text(), nullable=True),
        sa.PrimaryKeyConstraint("layer"),
    )
    op.create_table(
        "site_population",
        sa.Column("id", sa.Integer(), autoincrement=True, nullable=False),
        sa.Column("site_id", sa.Integer(), nullable=False),
        sa.Column("race", sa.String(length=128), nullable=True),
        sa.Column("race_id", sa.Integer(), nullable=True),
        sa.Column("count", sa.Integer(), nullable=True),
        sa.Column("is_animal", sa.Boolean(), nullable=False),
        sa.PrimaryKeyConstraint("id"),
    )
    op.create_index("ix_site_population_site_id", "site_population", ["site_id"])
    op.create_table(
        "history_event",
        sa.Column("event_id", sa.Integer(), nullable=False),
        sa.Column("year", sa.Integer(), nullable=True),
        sa.Column("seconds", sa.Integer(), nullable=True),
        sa.Column("event_type", sa.String(length=64), nullable=True),
        sa.Column("civ_id", sa.Integer(), nullable=True),
        sa.Column("site_id", sa.Integer(), nullable=True),
        sa.Column("hfid", sa.Integer(), nullable=True),
        sa.Column("fields_json", sa.Text(), nullable=True),
        sa.PrimaryKeyConstraint("event_id"),
    )
    op.create_index("ix_history_event_year", "history_event", ["year"])
    op.create_index("ix_history_event_type", "history_event", ["event_type"])
    op.create_table(
        "entity_position",
        sa.Column("id", sa.Integer(), autoincrement=True, nullable=False),
        sa.Column("entity_id", sa.Integer(), nullable=False),
        sa.Column("position_id", sa.Integer(), nullable=True),
        sa.Column("name", sa.Text(), nullable=True),
        sa.Column("name_male", sa.Text(), nullable=True),
        sa.Column("name_female", sa.Text(), nullable=True),
        sa.Column("assigned_hfid", sa.Integer(), nullable=True),
        sa.PrimaryKeyConstraint("id"),
    )
    op.create_index("ix_entity_position_entity_id", "entity_position", ["entity_id"])
    op.create_table(
        "artifact",
        sa.Column("artifact_id", sa.Integer(), nullable=False),
        sa.Column("name_display", sa.Text(), nullable=True),
        sa.Column("item_type", sa.Integer(), nullable=True),
        sa.Column("holder_hfid", sa.Integer(), nullable=True),
        sa.Column("site_id", sa.Integer(), nullable=True),
        sa.PrimaryKeyConstraint("artifact_id"),
    )
    op.create_table(
        "written_content",
        sa.Column("content_id", sa.Integer(), nullable=False),
        sa.Column("title", sa.Text(), nullable=True),
        sa.Column("content_type", sa.Integer(), nullable=True),
        sa.Column("author_hfid", sa.Integer(), nullable=True),
        sa.PrimaryKeyConstraint("content_id"),
    )
    op.create_table(
        "history_era",
        sa.Column("id", sa.Integer(), autoincrement=True, nullable=False),
        sa.Column("name", sa.Text(), nullable=True),
        sa.Column("start_year", sa.Integer(), nullable=True),
        sa.PrimaryKeyConstraint("id"),
    )
    op.create_table(
        "event_collection",
        sa.Column("collection_id", sa.Integer(), nullable=False),
        sa.Column("collection_type", sa.String(length=64), nullable=True),
        sa.Column("start_year", sa.Integer(), nullable=True),
        sa.Column("end_year", sa.Integer(), nullable=True),
        sa.Column("name_display", sa.Text(), nullable=True),
        sa.PrimaryKeyConstraint("collection_id"),
    )


def downgrade() -> None:
    op.drop_table("event_collection")
    op.drop_table("history_era")
    op.drop_table("written_content")
    op.drop_table("artifact")
    op.drop_index("ix_entity_position_entity_id", table_name="entity_position")
    op.drop_table("entity_position")
    op.drop_index("ix_history_event_type", table_name="history_event")
    op.drop_index("ix_history_event_year", table_name="history_event")
    op.drop_table("history_event")
    op.drop_index("ix_site_population_site_id", table_name="site_population")
    op.drop_table("site_population")
    op.drop_table("layer_status")
