#!/usr/bin/env python3
"""Survey field kinds used by history_event_* classes in df-structures."""
from __future__ import annotations

import json
from collections import Counter
from pathlib import Path

from df_save_re.structures.xml_fields import load_struct, resolve_fields

XML_DIR = Path(__file__).resolve().parent.parent.parent.parent / "data" / "df-structures"

layouts = json.loads(
    (Path(__file__).resolve().parent.parent / "ghidra_decompiles" / "event_layouts.json").read_text(encoding="utf-8")
)

kinds = Counter()
missing = []
for e in layouts:
    sym = e["symbol"]
    s = load_struct(sym, XML_DIR)
    if s is None:
        missing.append(sym)
        continue
    for fd in resolve_fields(s, XML_DIR):
        kinds[fd.kind] += 1
        if fd.kind in ("compound", "static-array", "pointer", "stl-vector") and fd.children:
            kinds[f"{fd.kind}+children"] += 1

print("missing structs:", missing)
for k, n in kinds.most_common():
    print(f"{k}: {n}")
