#!/usr/bin/env python3
"""Merge event_vtables_extra.json into event_vtables.json by tag."""
from __future__ import annotations

import json
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
DECOMPILES = ROOT / "ghidra_decompiles"


def main() -> None:
    base_path = DECOMPILES / "event_vtables.json"
    extra_path = DECOMPILES / "event_vtables_extra.json"
    base = json.loads(base_path.read_text(encoding="utf-8"))
    extra = json.loads(extra_path.read_text(encoding="utf-8"))
    by_tag = {e["tag"]: e for e in base}
    for e in extra:
        by_tag[e["tag"]] = e
    merged = [by_tag[t] for t in sorted(by_tag)]
    base_path.write_text(json.dumps(merged, indent=2) + "\n", encoding="utf-8")
    print(f"merged {len(extra)} extra entries -> {len(merged)} total tags")


if __name__ == "__main__":
    main()
