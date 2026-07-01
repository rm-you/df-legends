"""Add record_json columns and raw_record table for full-fidelity streaming."""

from typing import Sequence, Union

import sqlalchemy as sa
from alembic import op

revision: str = "003_record_json"
down_revision: Union[str, None] = "002_engine_layers"
branch_labels: Union[str, Sequence[str], None] = None
depends_on: Union[str, Sequence[str], None] = None

_RECORD_JSON_TABLES = (
    "historical_entity",
    "world_site",
    "historical_figure",
    "history_event",
    "artifact",
    "written_content",
    "history_era",
    "event_collection",
)


def upgrade() -> None:
    for table in _RECORD_JSON_TABLES:
        op.add_column(table, sa.Column("record_json", sa.Text(), nullable=True))

    op.create_table(
        "raw_record",
        sa.Column("id", sa.Integer(), autoincrement=True, nullable=False),
        sa.Column("layer", sa.String(length=32), nullable=False),
        sa.Column("record_id", sa.Integer(), nullable=False),
        sa.Column("payload_offset", sa.Integer(), nullable=False),
        sa.Column("record_json", sa.Text(), nullable=False),
        sa.PrimaryKeyConstraint("id"),
        sa.UniqueConstraint(
            "layer",
            "record_id",
            "payload_offset",
            name="uq_raw_record_layer_id_offset",
        ),
    )
    op.create_index("ix_raw_record_layer", "raw_record", ["layer"])


def downgrade() -> None:
    op.drop_index("ix_raw_record_layer", table_name="raw_record")
    op.drop_table("raw_record")
    for table in reversed(_RECORD_JSON_TABLES):
        op.drop_column(table, "record_json")
