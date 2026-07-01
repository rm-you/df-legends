"""Tests for full-fidelity record reader and streaming writer."""

from __future__ import annotations

import json
from io import BytesIO
from pathlib import Path

import pytest
from sqlalchemy import create_engine, func, select
from sqlalchemy.orm import Session

from df_save_re.binary_reader import BinaryReader
from df_save_re.db.migrate import apply_migrations
from df_save_re.db.models import HistoricalFigure, RawRecord
from df_save_re.db.stream_writer import StreamWriter
from df_save_re.deserializers.body_skipper import skip_struct, skip_struct_bytes
from df_save_re.deserializers.record_reader import read_struct
from df_save_re.deserializers.save_profiles import get_profile

XML_DIR = Path(__file__).resolve().parents[3] / "data" / "df-structures"


def test_skip_struct_matches_read_struct_bytes():
    if not XML_DIR.exists():
        pytest.skip("df-structures missing")
    body = (0).to_bytes(4, "little") * 3  # coord
    reader = BinaryReader(BytesIO(body))
    values, read_len = read_struct(reader, "coord", xml_dir=XML_DIR)
    skip_len = skip_struct_bytes(body, 0, "coord", xml_dir=XML_DIR)
    assert read_len == skip_len == 12
    assert values["x"] == 0


def test_historical_figure_profile_registered():
    profile = get_profile("historical_figure")
    assert profile is not None
    assert "worldgen_relationships" in profile.field_readers
    assert "info" in profile.field_readers
    assert "vague_relationships" in profile.field_readers
    assert "histfig_links" not in profile.before_field


def test_stream_writer_batches_figures(tmp_path: Path):
    db_path = tmp_path / "stream.sqlite"
    apply_migrations(db_path)
    engine = create_engine(f"sqlite:///{db_path}")
    with Session(engine) as session:
        writer = StreamWriter(session, batch_size=2)
        for i in range(3):
            writer.on_record(
                "figures",
                {"id": i, "name_words": [100 + i], "race": 0, "civ_id": 0},
                payload_offset=0x1000 + i,
            )
        writer.flush()
        session.commit()
        count = session.scalar(select(func.count()).select_from(HistoricalFigure))
        assert count == 3
        row = session.scalar(select(HistoricalFigure).where(HistoricalFigure.figure_id == 1))
        assert row is not None
        assert row.record_json is not None
        parsed = json.loads(row.record_json)
        assert parsed["id"] == 1


def test_stream_writer_raw_fallback(tmp_path: Path):
    db_path = tmp_path / "raw.sqlite"
    apply_migrations(db_path)
    engine = create_engine(f"sqlite:///{db_path}")
    with Session(engine) as session:
        writer = StreamWriter(session, batch_size=10)
        writer.on_record("unknown_layer", {"id": 7}, payload_offset=0x2000)
        writer.flush()
        session.commit()
        raw = session.scalar(select(RawRecord))
        assert raw is not None
        assert raw.layer == "unknown_layer"
