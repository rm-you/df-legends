#!/usr/bin/env python3
"""Parse ghidra_decompiles/14070b7a0.c → event_registry.json.

Extracts tag → {symbol, inst_size, vtable_assign} from the events factory switch.
"""
from __future__ import annotations

import json
import re
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
FACTORY_C = ROOT / "ghidra_decompiles" / "14070b7a0.c"
OUT = ROOT / "ghidra_decompiles" / "event_registry.json"

_CASE = re.compile(r"^\s*case\s+(0x[0-9a-fA-F]+|\d+)\s*:\s*$")
_OPERATOR_NEW = re.compile(r"operator_new\s*\(\s*(0x[0-9a-fA-F]+|\d+)\s*\)")
_VTABLE = re.compile(r"\*\s*\w+\s*=\s*([\w:]+)::vftable\s*;")


def parse_factory(path: Path) -> dict[int, dict]:
    lines = path.read_text(encoding="utf-8", errors="replace").splitlines()
    registry: dict[int, dict] = {}
    current_tag: int | None = None
    pending_size: int | None = None

    for line in lines:
        cm = _CASE.match(line)
        if cm:
            raw = cm.group(1)
            current_tag = int(raw, 16 if raw.lower().startswith("0x") else 10)
            pending_size = None
            continue
        if current_tag is None:
            continue
        nm = _OPERATOR_NEW.search(line)
        if nm:
            raw = nm.group(1)
            pending_size = int(raw, 16 if raw.lower().startswith("0x") else 10)
            continue
        vm = _VTABLE.search(line)
        if vm:
            sym = vm.group(1)
            entry = {
                "tag": current_tag,
                "symbol": sym,
                "inst_size": pending_size,
            }
            registry[current_tag] = entry
            current_tag = None
            pending_size = None
    return registry


def main() -> None:
    if not FACTORY_C.is_file():
        raise SystemExit(f"missing {FACTORY_C}")
    registry = parse_factory(FACTORY_C)
    out_list = [registry[k] for k in sorted(registry)]
    OUT.parent.mkdir(parents=True, exist_ok=True)
    OUT.write_text(json.dumps(out_list, indent=2) + "\n", encoding="utf-8")
    print(f"wrote {len(out_list)} entries to {OUT}")


if __name__ == "__main__":
    main()
