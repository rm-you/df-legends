#!/usr/bin/env python3
import re
from pathlib import Path

p = Path("../../data/saves/region2/region2-00250-01-01-legends.xml")
text = p.read_text(encoding="utf-8", errors="replace")
tags = sorted(set(re.findall(r"<([a-z_]+_link)>", text)))
for t in tags:
    print(t)
