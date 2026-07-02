#!/usr/bin/env python3
"""Report event tags whose layouts are missing from SAVE_LAYOUTS."""
import json

d = json.load(open("ghidra_decompiles/event_vtables.json"))
tags = {e["tag"] for e in d}
print("vtable tags count:", len(tags))
for t in (3, 52, 54, 110, 122, 131):
    m = [e for e in d if e["tag"] == t]
    if m:
        e = m[0]
        print(t, e.get("symbol"), "read:", e.get("slot_0x120"), e.get("slot_0x120_name"))
    else:
        print(t, "MISSING from vtables")

layouts = json.load(open("ghidra_decompiles/event_layouts.json"))
lt = {e["tag"]: e for e in layouts} if isinstance(layouts, list) else layouts
for t in (3, 52, 54, 110, 122, 131):
    key = t if t in lt else str(t)
    e = lt.get(key)
    print("layout", t, ":", (e.get("fields") if isinstance(e, dict) else e) if e else "NONE")
