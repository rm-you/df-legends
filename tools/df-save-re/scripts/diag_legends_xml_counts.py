#!/usr/bin/env python3
"""Cross-check walked world_history counts against a DF legends XML export."""
from __future__ import annotations

import re
import sys

path = sys.argv[1]
x = open(path, "rb").read().decode("latin-1")
for tag in (
    "historical_figure",
    "historical_event",
    "historical_event_collection",
    "historical_era",
    "entity",
    "artifact",
    "written_content",
    "site",
    "region",
):
    print(tag, x.count(f"<{tag}>"))
eras = re.findall(r"<historical_era>\s*<name>(.*?)</name>", x, re.S)
print("era names:", eras)
