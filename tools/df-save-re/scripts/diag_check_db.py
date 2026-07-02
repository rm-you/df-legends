#!/usr/bin/env python3
"""Sanity-check a legends SQLite DB produced by import-db."""
from __future__ import annotations

import sqlite3
import sys

db = sqlite3.connect(sys.argv[1] if len(sys.argv) > 1 else r"data\legends\databases\sn-nmon.sqlite")
for t in ("history_event", "historical_figure", "event_collection", "history_era", "layer_status", "world_site", "historical_entity"):
    print(t, db.execute(f"select count(*) from {t}").fetchone()[0])
print()
for row in db.execute("select layer, deterministic, parsed_count, note from layer_status"):
    print(row)
print()
for row in db.execute("select event_id, year, event_type, hfid from history_event where event_type='hist_figure_died' limit 3"):
    print(row)
for row in db.execute("select figure_id, name_display, race, born_year, died_year from historical_figure limit 5"):
    print(row)
for row in db.execute("select collection_id, collection_type, name_display, start_year, end_year from event_collection where name_display is not null limit 5"):
    print(row)
for row in db.execute("select id, name, start_year from history_era"):
    print(row)
