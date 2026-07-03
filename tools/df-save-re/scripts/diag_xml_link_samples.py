#!/usr/bin/env python3
import xml.etree.ElementTree as ET
from pathlib import Path

root = ET.parse(Path("../../data/saves/region2/region2-00250-01-01-legends.xml")).getroot()
seen = set()
for hf in root.findall(".//historical_figure"):
    fid = hf.findtext("id")
    for child in hf:
        if not child.tag.endswith("_link"):
            continue
        key = child.tag
        if key in seen:
            continue
        seen.add(key)
        print(f"=== {key} figure {fid} ===")
        for sub in child:
            print(f"  {sub.tag}: {sub.text}")
