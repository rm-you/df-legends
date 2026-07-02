#!/usr/bin/env python3
"""Build link_layouts.json from entity/site/histfig link factory vtables."""
from __future__ import annotations

import json
import subprocess
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
DECOMPILES = ROOT / "ghidra_decompiles"

FACTORIES = [
    ("entity", "link_entity_vtables.json", "140707820"),
    ("site", "link_site_vtables.json", "140707c90"),
    ("histfig", "link_histfig_vtables.json", "140708160"),
]


def main() -> None:
    merged: dict[str, list[dict]] = {}
    for name, vfile, factory in FACTORIES:
        tmp = DECOMPILES / f"_tmp_{name}_layouts.json"
        subprocess.check_call(
            [
                sys.executable,
                str(ROOT / "scripts" / "extract_polymorph_layouts.py"),
                "--vtables",
                vfile,
                "--out",
                tmp.name,
                "--read-slot",
                "slot_0x18",
                "--write-slot",
                "slot_0x10",
            ],
            cwd=ROOT,
        )
        entries = json.loads(tmp.read_text())
        tmp.unlink(missing_ok=True)
        for e in entries:
            e["factory"] = factory
            e["factory_name"] = name
        merged[name] = entries

    out = {"factories": FACTORIES, "links": merged}
    (DECOMPILES / "link_layouts.json").write_text(json.dumps(out, indent=1))
    total = sum(len(v) for v in merged.values())
    print(f"wrote link_layouts.json: {total} link subtype layouts")


if __name__ == "__main__":
    main()
