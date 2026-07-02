#!/usr/bin/env python3
"""Extract histfig info subprofile layouts keyed by reader address."""
from __future__ import annotations

import json
from pathlib import Path

from extract_polymorph_layouts import extract_fields

ROOT = Path(__file__).resolve().parents[1]
DECOMPILES = ROOT / "ghidra_decompiles"

# Order from FUN_14070b110 optional profile flags (param_1 indices).
INFO_PROFILES: list[tuple[str, str, str]] = [
    ("known_info", "140002140", "inline i16 vector at profile start"),
    ("skills", "1406f8600", "skills subprofile"),
    ("likes", "140002140", "likes i16 vector only"),
    ("personality", "1406f68a0", "personality values"),
    ("preferences", "1406f7f00", "food prefs / kills"),
    ("goals", "1406f8040", "goal vectors + FUN_1406f5460"),
    ("masterpieces", "1407ab630", "masterpiece list"),
    ("entity_reputation", "1407ac1c0", "entity reputation"),
    ("reputation", "1407aae80", "general reputation"),
    ("wounds", "1406f9200", "wound records"),
    ("secret", "1407b4ee0", "secret identity"),
    ("books", "140010740", "book authorship init only"),
    ("curse", "1406f9d70", "curse init only"),
]

EXTRA = [
    ("relationships", "1406f5460", "nested under goals reader"),
    ("personality_vectors", "1401b7c10", "personality init helper"),
]


def main() -> None:
    out: dict[str, dict] = {}
    missing: list[str] = []
    for info_field, addr, note in INFO_PROFILES + EXTRA:
        cpath = DECOMPILES / f"{addr}.c"
        entry: dict = {
            "info_field": info_field,
            "reader": addr,
            "note": note,
        }
        if not cpath.exists():
            entry["error"] = "decompile missing"
            missing.append(addr)
            out[addr] = entry
            continue
        fields, unknowns = extract_fields(cpath.read_text(encoding="utf-8", errors="replace"), self_addr=addr)
        entry["fields"] = fields
        if unknowns:
            entry["unknown_calls"] = unknowns
        out[addr] = entry

    (DECOMPILES / "histfig_info_layouts.json").write_text(json.dumps(out, indent=1))
    with_fields = sum(1 for e in out.values() if e.get("fields"))
    print(f"wrote histfig_info_layouts.json: {len(out)} readers, {with_fields} with fields, {len(missing)} missing")


if __name__ == "__main__":
    main()
