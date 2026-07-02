#!/usr/bin/env python3
"""Build df_save_re/structures/save_layouts.py from RE JSON artifacts."""
from __future__ import annotations

import json
from pathlib import Path
from textwrap import indent

ROOT = Path(__file__).resolve().parent.parent
DECOMP = ROOT / "ghidra_decompiles"
OUT = ROOT / "df_save_re" / "structures" / "save_layouts.py"

EVENT_BASE_CALL = "140019190"
COLLECTION_BASE_CALL = "140083d80"

# FUN_140019190 reads the shared prefix year/seconds/flags/id AND the four
# history_event_masterpiecest scalars at +0x28..+0x34 (only masterpiece events
# call it; other events inline just the 8..32 prefix).
EVENT_BASE_FIELDS = [
    {"mem_offset": 8, "kind": "i32", "size": 4, "base": True},
    {"mem_offset": 12, "kind": "i32", "size": 4, "base": True},
    {"mem_offset": 16, "kind": "byte_vector", "size": None, "base": True},
    {"mem_offset": 32, "kind": "i32", "size": 4, "base": True},
    {"mem_offset": 40, "kind": "i32", "size": 4},
    {"mem_offset": 44, "kind": "i32", "size": 4},
    {"mem_offset": 48, "kind": "i32", "size": 4},
    {"mem_offset": 52, "kind": "i32", "size": 4},
]

COLLECTION_BASE_FIELDS = [
    {"mem_offset": 8, "kind": "i32_vector", "size": None},
    {"mem_offset": 32, "kind": "i32_vector", "size": None},
    {"mem_offset": 56, "kind": "i32", "size": 4},
    {"mem_offset": 60, "kind": "i32", "size": 4},
    {"mem_offset": 64, "kind": "i32", "size": 4},
    {"mem_offset": 68, "kind": "i32", "size": 4},
    {"mem_offset": 72, "kind": "byte_vector", "size": None},
    {"mem_offset": 88, "kind": "i32", "size": 4},
]


def _load(name: str):
    p = DECOMP / name
    if not p.is_file():
        return None
    return json.loads(p.read_text(encoding="utf-8"))


def _expand_calls(fields: list[dict], *, base_map: dict[str, list[dict]]) -> list[dict]:
    out: list[dict] = []
    for f in fields:
        if f.get("kind") == "call":
            target = str(f.get("target", ""))
            base = base_map.get(target)
            if base:
                out.extend(dict(x) for x in base)
            continue
        out.append(dict(f))
    return out


def _event_layouts() -> dict[str, dict]:
    raw = _load("event_layouts.json")
    if not raw:
        return {}
    names = _load("event_field_names.json") or {}
    layouts: dict[str, dict] = {}
    for e in raw:
        tag = e["tag"]
        key = f"history_event:{tag}"
        fields = _expand_calls(e.get("fields") or [], base_map={EVENT_BASE_CALL: EVENT_BASE_FIELDS})
        tag_names = (names.get(str(tag)) or {}).get("names") or {}
        for f in fields:
            nm = tag_names.get(str(f.get("mem_offset")))
            if nm:
                f["name"] = nm
        layouts[key] = {
            "struct": e.get("symbol"),
            "tag": tag,
            "read_file": e.get("read_file"),
            "fields": fields,
        }
    return layouts


def _collection_layouts() -> dict[str, dict]:
    raw = _load("collection_layouts.json")
    if not raw:
        return {}
    layouts: dict[str, dict] = {}
    for e in raw:
        tag = e["tag"]
        key = f"historical_event_collection:{tag}"
        fields = _expand_calls(
            e.get("fields") or [],
            base_map={COLLECTION_BASE_CALL: COLLECTION_BASE_FIELDS},
        )
        layouts[key] = {
            "struct": e.get("symbol"),
            "tag": tag,
            "read_file": e.get("read_file"),
            "fields": fields,
        }
    return layouts


def _link_layouts() -> dict[str, dict]:
    raw = _load("link_layouts.json")
    if not raw:
        return {}
    layouts: dict[str, dict] = {}
    for factory_name, entries in raw.get("links", {}).items():
        for e in entries:
            tag = e["tag"]
            key = f"link:{factory_name}:{tag}"
            layouts[key] = {
                "struct": e.get("symbol"),
                "factory": e.get("factory"),
                "factory_name": factory_name,
                "tag": tag,
                "read_file": e.get("read_file"),
                "fields": e.get("fields") or [],
            }
    return layouts


def _info_layouts() -> dict[str, dict]:
    raw = _load("histfig_info_layouts.json")
    if not raw:
        return {}
    if isinstance(raw, dict) and raw.get("slots"):
        return {
            "histfig_info": {
                "source": raw.get("source", "FUN_14070b110"),
                "slot_count": raw.get("slot_count", len(raw["slots"])),
                "slots": raw["slots"],
            }
        }
    layouts: dict[str, dict] = {}
    for addr, e in raw.items():
        if not e.get("fields"):
            continue
        key = f"histfig_info:{e.get('info_field', addr)}"
        layouts[key] = {
            "info_field": e.get("info_field"),
            "reader": addr,
            "fields": e["fields"],
        }
    return layouts


def _vague_layout() -> dict[str, dict]:
    raw = _load("vague_layout.json")
    if not raw:
        return {}
    return {"vague_relationships": raw}


def main() -> None:
    layouts: dict[str, dict] = {}
    histfig = _load("histfig_header_layout.json")
    if histfig:
        layouts["historical_figure"] = histfig

    event_reg = _load("event_registry.json")
    if event_reg:
        layouts["history_event_registry"] = {
            "source": "event_registry.json",
            "count": len(event_reg),
            "tags": {e["tag"]: e["symbol"] for e in event_reg},
        }

    era = _load("era_layout.json")
    if era:
        layouts["world_history_era"] = era

    layouts.update(_event_layouts())
    layouts.update(_collection_layouts())
    layouts.update(_link_layouts())
    layouts.update(_info_layouts())
    layouts.update(_vague_layout())

    print("build_layout_spec summary:")
    print(f"  total SAVE_LAYOUTS keys: {len(layouts)}")
    print(f"  history_event:* = {sum(1 for k in layouts if k.startswith('history_event:'))}")
    print(f"  historical_event_collection:* = {sum(1 for k in layouts if k.startswith('historical_event_collection:'))}")
    print(f"  link:* = {sum(1 for k in layouts if k.startswith('link:'))}")

    body = repr(layouts)
    lines = [
        '"""Decompile-derived on-disk save layouts (generated/curated from Ghidra RE)."""',
        "",
        "# Generated by scripts/build_layout_spec.py — do not hand-edit; re-run script.",
        f"SAVE_LAYOUTS: dict[str, dict] = {body}",
        "",
    ]
    OUT.write_text("\n".join(lines), encoding="utf-8")
    print(f"  wrote {OUT}")


if __name__ == "__main__":
    main()
