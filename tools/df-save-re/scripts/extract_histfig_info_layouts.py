#!/usr/bin/env python3
"""Extract histfig info layouts keyed by slot from FUN_14070b110."""
from __future__ import annotations

import json
from pathlib import Path

from extract_polymorph_layouts import extract_fields

ROOT = Path(__file__).resolve().parents[1]
DECOMPILES = ROOT / "ghidra_decompiles"


def _addr(name: str) -> str:
    return name.removeprefix("FUN_")


def _reader_fields(addr: str, *, expand_depth: int = 3) -> tuple[list[dict], list[str]]:
    cpath = DECOMPILES / f"{addr}.c"
    if not cpath.exists():
        return [], [f"FUN_{addr}"]
    fields, unknowns = extract_fields(cpath.read_text(encoding="utf-8", errors="replace"), self_addr=addr)
    if expand_depth <= 0:
        return fields, unknowns
    expanded: list[dict] = []
    for f in fields:
        if f.get("kind") == "call":
            target = str(f.get("target", ""))
            sub_fields, sub_unknowns = _reader_fields(target, expand_depth=expand_depth - 1)
            expanded.extend(sub_fields)
            unknowns.extend(sub_unknowns)
        else:
            expanded.append(dict(f))
    return expanded, sorted(set(unknowns))


def _inline_slot(slot: int, name: str, fields: list[dict], *, note: str = "") -> dict:
    return {"slot": slot, "name": name, "flag": "u8", "inline": True, "note": note, "body": fields}


def _reader_slot(slot: int, name: str, reader: str, *, note: str = "", extra: list[dict] | None = None) -> dict:
    body, unknowns = _reader_fields(reader)
    if extra:
        body = list(body) + list(extra)
    entry: dict = {
        "slot": slot,
        "name": name,
        "flag": "u8",
        "reader": reader,
        "note": note,
        "body": body,
    }
    if unknowns:
        entry["unknown_calls"] = unknowns
    return entry


def build_slots() -> list[dict]:
    return [
        _inline_slot(
            0,
            "known_info",
            [
                {"mem_offset": 0, "kind": "i16_vector", "size": None, "version_gt": None},
                {"mem_offset": 24, "kind": "i32_vector", "size": None, "version_gt": "0x67d"},
            ],
            note="FUN_140002140; if save_version>0x67d FUN_140002250",
        ),
        _reader_slot(1, "skills", "1406f8600", note="skills subprofile"),
        _inline_slot(2, "likes", [{"mem_offset": 0, "kind": "i16_vector", "size": None, "version_gt": None}]),
        _reader_slot(
            3,
            "personality",
            "1406f68a0",
            extra=[{"mem_offset": 0x31, "kind": "i16", "size": 2, "version_gt": "0x615"}],
            note="init FUN_1401b7c10; read FUN_1406f68a0",
        ),
        _inline_slot(
            4,
            "preferences_vectors",
            [
                {"mem_offset": 0, "kind": "i32_vector", "size": None, "version_gt": None},
                {"mem_offset": 24, "kind": "i32_vector", "size": None, "version_gt": None},
                {"mem_offset": 48, "kind": "i32_vector", "size": None, "version_gt": "0x605"},
                {"mem_offset": 72, "kind": "i16_vector", "size": None, "version_gt": "0x605"},
            ],
            note="two i32 vecs; if >0x605 add i32+i16 vecs",
        ),
        _reader_slot(5, "food_prefs", "1406f7f00", note="14 scalars + gated tail"),
        _inline_slot(
            6,
            "goal_vectors",
            [
                {"mem_offset": 0, "kind": "i32_vector", "size": None, "version_gt": None},
                {"mem_offset": 24, "kind": "i16_vector", "size": None, "version_gt": None},
                {"mem_offset": 48, "kind": "i16_vector", "size": None, "version_gt": None},
                {"mem_offset": 72, "kind": "i32_vector", "size": None, "version_gt": None},
                {"mem_offset": 96, "kind": "i32_vector", "size": None, "version_gt": None},
                {"mem_offset": 120, "kind": "i32_vector", "size": None, "version_gt": None},
                {"mem_offset": 144, "kind": "i16_vector", "size": None, "version_gt": None},
                {"mem_offset": 168, "kind": "i32_vector", "size": None, "version_gt": None},
            ],
            note="inline 8 vectors from 14070b110 slot 6",
        ),
        {
            "slot": 7,
            "name": "goals",
            "flag": "u8",
            "note": "FUN_140002250 + FUN_1406f5460(relationship flags) + scalars",
            "body": [
                {"mem_offset": 0, "kind": "i32_vector", "size": None, "version_gt": None},
                {"mem_offset": 24, "kind": "byte_vector", "size": None, "version_gt": None},
                {"mem_offset": 56, "kind": "i32", "size": 4, "version_gt": None},
                {"mem_offset": 60, "kind": "i32", "size": 4, "version_gt": None},
                {"mem_offset": 64, "kind": "i32", "size": 4, "version_gt": "0x5c1"},
            ],
        },
        _reader_slot(8, "masterpieces", "1407ab630"),
        _reader_slot(9, "entity_reputation", "1407ac1c0"),
        _reader_slot(10, "reputation", "1407aae80"),
        _reader_slot(11, "wounds", "1406f9200"),
        _reader_slot(12, "secret", "1407b4ee0"),
    ]


def main() -> None:
    slots = build_slots()
    out = {
        "source": "FUN_14070b110",
        "slot_count": len(slots),
        "slots": slots,
    }
    (DECOMPILES / "histfig_info_layouts.json").write_text(json.dumps(out, indent=1) + "\n", encoding="utf-8")
    with_body = sum(1 for s in slots if s.get("body"))
    unknown_total = sum(len(s.get("unknown_calls", [])) for s in slots)
    print(f"wrote histfig_info_layouts.json: {len(slots)} slots, {with_body} with body, {unknown_total} unknown calls")


if __name__ == "__main__":
    main()
