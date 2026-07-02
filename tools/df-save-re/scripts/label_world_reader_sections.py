#!/usr/bin/env python3
"""Add struct keys to world_reader_sections.json stream_order entries."""
from __future__ import annotations

import json
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
PATH = ROOT / "ghidra_decompiles" / "world_reader_sections.json"

STRUCT_BY_SEQ = {
    1: "world_preamble",
    2: "world_header_extension",
    3: "world_block",
    4: "world_block",
    5: "historical_entityst",
    6: "world_scalar_tail",
    7: "world_history",
    8: "post_world_history_block",
    9: "world_conditional_block",
    10: "world_conditional_block",
    11: "world_data_sub_block",
    12: "world_block",
    13: "world_block",
    14: "world_regionst",
    15: "world_regionst",
    16: "world_regionst",
    17: "geo_biome_map",
    18: "world_region_map",
    19: "world_region_map",
    20: "world_region_map",
    21: "world_region_map",
    22: "world_region_map",
    23: "world_region_map",
    24: "world_region_map",
    25: "world_region_map",
    26: "world_region_map",
    27: "world_region_map",
    28: "world_constructionst",
    29: "world_constructionst",
    30: "world_constructionst",
    31: "world_constructionst",
    32: "world_constructionst",
    33: "world_constructionst",
    34: "world_file_tail",
}


def main() -> None:
    data = json.loads(PATH.read_text(encoding="utf-8"))
    for entry in data["stream_order"]:
        seq = entry["seq"]
        entry["struct"] = STRUCT_BY_SEQ.get(seq, "unknown")
    PATH.write_text(json.dumps(data, indent=2) + "\n", encoding="utf-8")
    print(f"labeled {len(data['stream_order'])} stream_order entries")


if __name__ == "__main__":
    main()
