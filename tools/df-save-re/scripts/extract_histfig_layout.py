#!/usr/bin/env python3
"""Extract historical_figure on-disk layout from FUN_14070a9d0 decompile."""
from __future__ import annotations

import json
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
READER_C = ROOT / "ghidra_decompiles" / "14070a9d0.c"
OUT = ROOT / "ghidra_decompiles" / "histfig_header_layout.json"

# Definitive order from FUN_14070a9d0 (reader) / FUN_14070a090 (writer).
LAYOUT = {
    "struct": "historical_figure",
    "source": "FUN_14070a9d0",
    "fields": [
        {"name": "profession", "type": "int16", "mem_offset": 0x0},
        {"name": "race", "type": "int16", "mem_offset": 0x2},
        {"name": "caste", "type": "int16", "mem_offset": 0x4},
        {"name": "sex", "type": "uint8", "mem_offset": 0x6},
        {"name": "orientation_flags", "type": "int32", "mem_offset": 0x8},
        {"name": "appeared_year", "type": "int32", "mem_offset": 0xC},
        {"name": "born_year", "type": "int32", "mem_offset": 0x10},
        {"name": "born_seconds", "type": "int32", "mem_offset": 0x14},
        {"name": "curse_year", "type": "int32", "mem_offset": 0x18},
        {"name": "curse_seconds", "type": "int32", "mem_offset": 0x1C},
        {"name": "birth_year_bias", "type": "int32", "mem_offset": 0x20},
        {"name": "birth_time_bias", "type": "int32", "mem_offset": 0x24},
        {"name": "old_year", "type": "int32", "mem_offset": 0x28},
        {"name": "old_seconds", "type": "int32", "mem_offset": 0x2C},
        {"name": "died_year", "type": "int32", "mem_offset": 0x30},
        {"name": "died_seconds", "type": "int32", "mem_offset": 0x34},
        {"name": "name", "type": "language_name", "mem_offset": 0x38},
        {"name": "civ_id", "type": "int32", "mem_offset": 0xB0},
        {"name": "population_id", "type": "int32", "mem_offset": 0xB4},
        {"name": "breed_id", "type": "int32", "mem_offset": 0xB8},
        {"name": "cultural_identity", "type": "int32", "mem_offset": 0xBC},
        {
            "name": "family_head_id",
            "type": "int32",
            "mem_offset": 0xC0,
            "version_gt": "0x618",
        },
        {"name": "field_e4", "type": "int32", "mem_offset": 0xE4, "xml_alias": "unit_id"},
        {"name": "field_d8", "type": "int32", "mem_offset": 0xD8, "xml_alias": "nemesis_id"},
        {"name": "field_dc", "type": "int32", "mem_offset": 0xDC},
        {"name": "flags", "type": "byte_vector", "mem_offset": 0xC8, "helper": "FUN_140002380"},
        {"name": "field_e0", "type": "int32", "mem_offset": 0xE0},
    ],
    "omitted_on_disk": ["pool_id", "figure_id", "art_count"],
    "tail": [
        {"name": "entity_links", "type": "dense_polymorphic_vector", "factory": "FUN_140707820"},
        {"name": "site_links", "type": "dense_polymorphic_vector", "factory": "FUN_140707c90"},
        {"name": "histfig_links", "type": "dense_polymorphic_vector", "factory": "FUN_140708160"},
        {"name": "info", "type": "owned_optional", "reader": "FUN_14070b110"},
        {
            "name": "vague_relationships",
            "type": "owned_optional",
            "reader": "FUN_1406fb120",
            "version_gt": "0x6a0",
        },
    ],
    "figures_vector": {"encoding": "dense", "pattern": "int32 count + count bodies"},
}


def main() -> None:
    if not READER_C.is_file():
        raise SystemExit(f"missing {READER_C}")
    OUT.write_text(json.dumps(LAYOUT, indent=2) + "\n", encoding="utf-8")
    print(f"wrote {OUT}")


if __name__ == "__main__":
    main()
