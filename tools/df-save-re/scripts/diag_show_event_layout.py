#!/usr/bin/env python3
"""Inspect event layout entries."""
import json
import sys

d = json.load(open("ghidra_decompiles/event_layouts.json", encoding="utf-8"))
print(type(d).__name__, len(d))
key = sys.argv[1] if len(sys.argv) > 1 else None
if isinstance(d, dict):
    k = key or sorted(d)[0]
    print(k, json.dumps(d[k], indent=1)[:3000])
else:
    print(json.dumps(d[int(key or 0)], indent=1)[:3000])
