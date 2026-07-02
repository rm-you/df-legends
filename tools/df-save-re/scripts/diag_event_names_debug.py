#!/usr/bin/env python3
"""Debug computed in-memory offsets for selected event classes."""
from __future__ import annotations

import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
from build_event_field_names import compute_names, XML_DIR
from df_save_re.structures.xml_fields import _load_enum_bases

for sym in (
    "history_event_war_destroyed_sitest",
    "history_event_hist_figure_diedst",
    "history_event_artifact_createdst",
):
    print(f"--- {sym}")
    names = compute_names(sym)
    for off in sorted(names):
        print(f"  {off}: {names[off]}")

bases = _load_enum_bases(XML_DIR)
for en in ("item_type", "death_type", "unit_thought_type", "history_event_reason"):
    print(en, "->", bases.get(en, "<missing>"))
