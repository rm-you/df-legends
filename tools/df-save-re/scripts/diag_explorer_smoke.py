#!/usr/bin/env python3
"""Smoke-test explorer routes against an imported legends database."""
from __future__ import annotations

import sys
from pathlib import Path

from fastapi.testclient import TestClient

from df_save_re.web.app import create_app

app = create_app(data_dir=Path("data/legends"))
client = TestClient(app)

slug = sys.argv[1] if len(sys.argv) > 1 else "sn-nmon"
event_id = sys.argv[2] if len(sys.argv) > 2 else "226"
collection_id = sys.argv[3] if len(sys.argv) > 3 else "18"
figure_id = sys.argv[4] if len(sys.argv) > 4 else "142"
routes = [
    "/",
    f"/world/{slug}",
    f"/world/{slug}/events",
    f"/world/{slug}/events?event_type=hist_figure_died",
    f"/world/{slug}/events?year=100&page=2",
    f"/world/{slug}/events/{event_id}",
    f"/world/{slug}/collections",
    f"/world/{slug}/collections?collection_type=war&named_only=true",
    f"/world/{slug}/collections/{collection_id}",
    f"/world/{slug}/eras",
    f"/world/{slug}/figures/{figure_id}",
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
