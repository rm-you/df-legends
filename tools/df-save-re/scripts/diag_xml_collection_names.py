#!/usr/bin/env python3
"""Print name/type of selected event collections from a legends XML export."""
from __future__ import annotations

import re
import sys

path = sys.argv[1]
ids = [int(v) for v in sys.argv[2:]] or [18, 19, 22, 23, 25]
x = open(path, "rb").read().decode("latin-1")
for i in ids:
    m = re.search(
        rf"<historical_event_collection>\s*<id>{i}</id>(.*?)</historical_event_collection>",
        x,
        re.S,
    )
    if not m:
        print(i, "NOT FOUND")
        continue
    body = m.group(1)
    fields = dict(re.findall(r"<(\w+)>([^<]*)</\1>", body))
    print(i, {k: fields.get(k) for k in ("name", "type", "start_year", "end_year") if k in fields})
