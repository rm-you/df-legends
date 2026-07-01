#!/usr/bin/env python3
"""List section reader/writer addresses from world reader/writer decompiles."""
from __future__ import annotations

import json
import re
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
READER = ROOT / "ghidra_decompiles" / "140330310.c"
WRITER = ROOT / "ghidra_decompiles" / "1405f3a60.c"
INDEX = ROOT / "ghidra_decompiles" / "index.json"
OUT = ROOT / "ghidra_decompiles" / "world_section_addrs.json"

_CALL = re.compile(r"FUN_140([0-9a-f]{6,7})\(")


def callees_from_header(path: Path) -> list[str]:
    addrs: list[str] = []
    for line in path.read_text(encoding="utf-8", errors="replace").splitlines():
        if line.startswith("//   -> "):
            m = re.search(r"140[0-9a-f]+", line)
            if m:
                addrs.append(m.group(0).lower())
        elif line.startswith("void ") or line.startswith("/*"):
            break
    return addrs


def stream_calls(path: Path) -> list[str]:
    """FUN_140 calls in function body order (excluding EXTERNAL)."""
    text = path.read_text(encoding="utf-8", errors="replace")
    body = text.split("\n\n", 1)[-1]
    seen: list[str] = []
    for m in _CALL.finditer(body):
        addr = "140" + m.group(1)
        if addr.startswith("140d") or addr.startswith("140de"):
            continue
        if addr not in seen:
            seen.append(addr)
    return seen


def main() -> None:
    idx = {e["addr"]: e for e in json.loads(INDEX.read_text(encoding="utf-8"))}
    reader_callees = callees_from_header(READER)
    writer_callees = callees_from_header(WRITER)
    reader_stream = stream_calls(READER)
    writer_stream = stream_calls(WRITER)
    all_addrs = sorted(set(reader_callees + writer_callees + reader_stream + writer_stream))
    missing = [a for a in all_addrs if a not in idx]
    out = {
        "reader_root": "140330310",
        "writer_root": "1405f3a60",
        "reader_stream_order": reader_stream,
        "writer_stream_order": writer_stream,
        "reader_callees": reader_callees,
        "writer_callees": writer_callees,
        "missing_decompile": missing,
        "decompiled_count": len(all_addrs) - len(missing),
        "total_unique": len(all_addrs),
    }
    OUT.write_text(json.dumps(out, indent=2) + "\n", encoding="utf-8")
    print(f"wrote {OUT} ({len(missing)} missing / {len(all_addrs)} unique)")


if __name__ == "__main__":
    main()
