#!/usr/bin/env python3
"""Verify migration 004 tables and history_tail after import."""
from __future__ import annotations

import argparse
import json
import sqlite3
import sys
from pathlib import Path


def check_db(db_path: Path) -> bool:
    conn = sqlite3.connect(db_path)
    ok = True

    def q(sql: str) -> int:
        return int(conn.execute(sql).fetchone()[0])

    hf_link = q("SELECT COUNT(*) FROM hf_link")
    hf_skill = q("SELECT COUNT(*) FROM hf_skill")
    hf_rel = q("SELECT COUNT(*) FROM hf_relationship")
    history_tail = q("SELECT COUNT(*) FROM raw_record WHERE layer='history_tail'")
    figures = q("SELECT COUNT(*) FROM historical_figure")
    events = q("SELECT COUNT(*) FROM history_event")

    era_row = conn.execute(
        "SELECT record_json FROM history_era WHERE record_json IS NOT NULL LIMIT 1"
    ).fetchone()
    era_ok = False
    if era_row and era_row[0]:
        try:
            obj = json.loads(era_row[0])
            era_ok = "title" in obj and "details" in obj
        except json.JSONDecodeError:
            era_ok = False

    print(f"DB: {db_path}")
    print(f"  historical_figure: {figures:,}")
    print(f"  history_event: {events:,}")
    print(f"  hf_link: {hf_link:,}")
    print(f"  hf_skill: {hf_skill:,}")
    print(f"  hf_relationship: {hf_rel:,}")
    print(f"  history_tail raw_record: {history_tail}")
    print(f"  era record_json title+details: {era_ok}")

    if hf_link <= 0:
        print("  FAIL: hf_link empty")
        ok = False
    if hf_skill <= 0:
        print("  FAIL: hf_skill empty")
        ok = False
    if history_tail != 1:
        print(f"  FAIL: expected 1 history_tail row, got {history_tail}")
        ok = False
    if not era_ok:
        print("  FAIL: era record_json missing title/details")
        ok = False
    conn.close()
    return ok


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("dbs", nargs="+", type=Path, help="SQLite database paths")
    args = ap.parse_args()
    all_ok = all(check_db(p) for p in args.dbs)
    return 0 if all_ok else 1


if __name__ == "__main__":
    sys.exit(main())
