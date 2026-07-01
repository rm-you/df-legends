"""Batched SQLite writer for streaming binary record extraction."""

from __future__ import annotations

from collections import defaultdict
from typing import Any, Callable

from sqlalchemy.orm import Session

from . import record_extract as rx
from .models import (
    Artifact,
    EventCollection,
    HistoricalEntity,
    HistoricalFigure,
    HistoryEra,
    HistoryEvent,
    RawRecord,
    WrittenContent,
    WorldSite,
)

DEFAULT_BATCH_SIZE = 2000

_LAYER_INSERTERS: dict[str, Callable[[Session, list[dict[str, Any]]], None]] = {}


def _register_defaults() -> None:
    _LAYER_INSERTERS.update(
        {
            "figures": lambda s, rows: s.bulk_insert_mappings(HistoricalFigure, rows),
            "events_death": lambda s, rows: s.bulk_insert_mappings(HistoryEvent, rows),
            "events": lambda s, rows: s.bulk_insert_mappings(HistoryEvent, rows),
            "sites": lambda s, rows: s.bulk_insert_mappings(WorldSite, rows),
            "entities": lambda s, rows: s.bulk_insert_mappings(HistoricalEntity, rows),
            "artifacts": lambda s, rows: s.bulk_insert_mappings(Artifact, rows),
            "written_content": lambda s, rows: s.bulk_insert_mappings(WrittenContent, rows),
            "event_collections": lambda s, rows: s.bulk_insert_mappings(EventCollection, rows),
            "eras": lambda s, rows: s.bulk_insert_mappings(HistoryEra, rows),
        }
    )


_register_defaults()


class StreamWriter:
    """Accumulates record rows and flushes with executemany-style bulk inserts."""

    def __init__(self, session: Session, *, batch_size: int = DEFAULT_BATCH_SIZE) -> None:
        self.session = session
        self.batch_size = batch_size
        self._buffers: dict[str, list[dict[str, Any]]] = defaultdict(list)
        self._raw_buffer: list[dict[str, Any]] = []
        self._seq: dict[str, int] = defaultdict(int)
        self.records_written = 0
        self._sqlite_configured = False

    def _configure_sqlite(self) -> None:
        if self._sqlite_configured:
            return
        try:
            conn = self.session.connection()
            conn.exec_driver_sql("PRAGMA journal_mode=WAL")
            conn.exec_driver_sql("PRAGMA synchronous=NORMAL")
            self._sqlite_configured = True
        except Exception:
            # PRAGMAs cannot run mid-transaction; bulk load still works.
            pass

    def     on_record(self, layer: str, record: dict[str, Any], payload_offset: int) -> None:
        """Callback compatible with :func:`walk_pointer_vector`."""
        if not self._sqlite_configured:
            self._configure_sqlite()
        seq = self._seq[layer]
        self._seq[layer] = seq + 1

        if layer == "figures":
            row = rx.historical_figure_row(record, payload_offset=payload_offset)
        elif layer in ("events_death", "events"):
            row = rx.history_event_row(record, payload_offset=payload_offset, fallback_id=seq)
        elif layer == "sites":
            row = rx.world_site_row(record, payload_offset=payload_offset, fallback_id=seq)
        elif layer == "entities":
            row = rx.historical_entity_row(record, payload_offset=payload_offset, fallback_id=seq)
        elif layer == "artifacts":
            row = rx.artifact_row(record, payload_offset=payload_offset, fallback_id=seq)
        elif layer == "written_content":
            row = rx.written_content_row(record, payload_offset=payload_offset, fallback_id=seq)
        elif layer == "event_collections":
            row = rx.event_collection_row(record, payload_offset=payload_offset, fallback_id=seq)
        elif layer == "eras":
            row = rx.history_era_row(record, payload_offset=payload_offset, fallback_id=seq)
        else:
            row = None

        if row is not None and layer in _LAYER_INSERTERS:
            self._buffers[layer].append(row)
            if len(self._buffers[layer]) >= self.batch_size:
                self._flush_layer(layer)
        else:
            self._raw_buffer.append(
                rx.raw_record_row(layer, record, payload_offset=payload_offset, record_id=seq)
            )
            if len(self._raw_buffer) >= self.batch_size:
                self._flush_raw()

        self.records_written += 1

    def _flush_layer(self, layer: str) -> None:
        rows = self._buffers.get(layer)
        if not rows:
            return
        inserter = _LAYER_INSERTERS.get(layer)
        if inserter is None:
            return
        inserter(self.session, rows)
        self.session.flush()
        rows.clear()

    def _flush_raw(self) -> None:
        if not self._raw_buffer:
            return
        self.session.bulk_insert_mappings(RawRecord, self._raw_buffer)
        self.session.flush()
        self._raw_buffer.clear()

    def flush(self) -> None:
        """Flush all pending buffers."""
        for layer in list(self._buffers):
            self._flush_layer(layer)
        self._flush_raw()
