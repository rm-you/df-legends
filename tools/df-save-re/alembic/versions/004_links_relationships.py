"""Add hf_link, hf_relationship, hf_skill tables for queryable figure tails."""

from typing import Sequence, Union

import sqlalchemy as sa
from alembic import op

revision: str = "004_links_relationships"
down_revision: Union[str, None] = "003_record_json"
branch_labels: Union[str, Sequence[str], None] = None
depends_on: Union[str, Sequence[str], None] = None


def upgrade() -> None:
    op.create_table(
        "hf_link",
        sa.Column("id", sa.Integer(), autoincrement=True, nullable=False),
        sa.Column("figure_id", sa.Integer(), nullable=False),
        sa.Column("category", sa.String(length=16), nullable=False),
        sa.Column("link_type", sa.String(length=64), nullable=False),
        sa.Column("tag", sa.Integer(), nullable=False),
        sa.Column("target_id", sa.Integer(), nullable=True),
        sa.Column("extra_json", sa.Text(), nullable=True),
        sa.PrimaryKeyConstraint("id"),
    )
    op.create_index("ix_hf_link_figure_id", "hf_link", ["figure_id"])
    op.create_index("ix_hf_link_target_id", "hf_link", ["target_id"])

    op.create_table(
        "hf_relationship",
        sa.Column("id", sa.Integer(), autoincrement=True, nullable=False),
        sa.Column("source_hf", sa.Integer(), nullable=False),
        sa.Column("target_hf", sa.Integer(), nullable=False),
        sa.Column("relationship_type", sa.Integer(), nullable=True),
        sa.Column("year", sa.Integer(), nullable=True),
        sa.Column("event_id", sa.Integer(), nullable=True),
        sa.Column("source", sa.String(length=32), nullable=False),
        sa.PrimaryKeyConstraint("id"),
    )
    op.create_index("ix_hf_relationship_source_hf", "hf_relationship", ["source_hf"])
    op.create_index("ix_hf_relationship_target_hf", "hf_relationship", ["target_hf"])

    op.create_table(
        "hf_skill",
        sa.Column("id", sa.Integer(), autoincrement=True, nullable=False),
        sa.Column("figure_id", sa.Integer(), nullable=False),
        sa.Column("skill_id", sa.Integer(), nullable=False),
        sa.Column("rating", sa.Integer(), nullable=True),
        sa.Column("experience", sa.Integer(), nullable=True),
        sa.PrimaryKeyConstraint("id"),
    )
    op.create_index("ix_hf_skill_figure_id", "hf_skill", ["figure_id"])


def downgrade() -> None:
    op.drop_index("ix_hf_skill_figure_id", table_name="hf_skill")
    op.drop_table("hf_skill")
    op.drop_index("ix_hf_relationship_target_hf", table_name="hf_relationship")
    op.drop_index("ix_hf_relationship_source_hf", table_name="hf_relationship")
    op.drop_table("hf_relationship")
    op.drop_index("ix_hf_link_target_id", table_name="hf_link")
    op.drop_index("ix_hf_link_figure_id", table_name="hf_link")
    op.drop_table("hf_link")
