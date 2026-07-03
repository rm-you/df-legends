#!/usr/bin/env python3
import xml.etree.ElementTree as ET
from pathlib import Path

root = ET.parse(Path("../../data/saves/region2/region2-00250-01-01-legends.xml")).getroot()
for tag in ("artifact", "written_content", "site", "historical_figure"):
    print(tag, len(root.findall(f".//{tag}")))
