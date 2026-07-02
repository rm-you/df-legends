#!/usr/bin/env python3
"""Smoke-test explorer routes against the imported region2 database."""
from __future__ import annotations

from pathlib import Path

from fastapi.testclient import TestClient

from df_save_re.web.app import create_app

app = create_app(data_dir=Path("data/legends"))
client = TestClient(app)

slug = "sn-nmon"
routes = [
    "/",
    f"/world/{slug}",
    f"/world/{slug}/events",
    f"/world/{slug}/events?event_type=hist_figure_died",
    f"/world/{slug}/events?year=100&page=2",
    f"/world/{slug}/events/226",
    f"/world/{slug}/collections",
    f"/world/{slug}/collections?collection_type=war&named_only=true",
    f"/world/{slug}/collections/18",
    f"/world/{slug}/eras",
    f"/world/{slug}/figures/142",
    f"/world/{slug}/history",
]
ok = True
for r in routes:
    resp = client.get(r)
    marker = "OK " if resp.status_code == 200 else "FAIL"
    if resp.status_code != 200:
        ok = False
    print(marker, resp.status_code, r, f"{len(resp.text):,}B")
raise SystemExit(0 if ok else 1)
