#!/usr/bin/env python3
"""Compare hf_link rows against region2 legends.xml figure link blocks."""
from __future__ import annotations

import argparse
import re
import sqlite3
import sys
import xml.etree.ElementTree as ET
from collections import defaultdict
from pathlib import Path


def _norm_link_type(name: str) -> str:
    return name.strip().lower().replace(" ", "_").replace("-", "_")


def _parse_xml_links(xml_path: Path) -> dict[int, list[tuple[str, int]]]:
    root = ET.parse(xml_path).getroot()
    out: dict[int, list[tuple[str, int]]] = defaultdict(list)
    for hf in root.findall(".//historical_figure"):
        fid = int(hf.get("id", "-1"))
        for tag in ("entity_link", "site_link", "hf_link"):
            for node in hf.findall(tag):
                ltype = node.get("link_type") or node.get("type") or tag.replace("_link", "")
                target = node.get("target") or node.get("site") or node.get("hf")
                if target is None:
                    continue
                out[fid].append((_norm_link_type(ltype), int(target)))
    for fid in out:
        out[fid].sort()
    return dict(out)


def _parse_db_links(db_path: Path) -> dict[int, list[tuple[str, int]]]:
    conn = sqlite3.connect(db_path)
    cur = conn.execute(
        "SELECT figure_id, link_type, target_id FROM hf_link ORDER BY figure_id, link_type, target_id"
    )
    out: dict[int, list[tuple[str, int]]] = defaultdict(list)
    for figure_id, link_type, target_id in cur.fetchall():
        if target_id is None:
            continue
        out[int(figure_id)].append((_norm_link_type(link_type or ""), int(target_id)))
    conn.close()
    for fid in out:
        out[fid].sort()
    return dict(out)


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("--xml", type=Path, required=True)
    ap.add_argument("--db", type=Path, required=True)
    args = ap.parse_args()

    xml_links = _parse_xml_links(args.xml)
    db_links = _parse_db_links(args.db)
    xml_ids = set(xml_links)
    db_ids = set(db_links)
    missing_in_db = sorted(xml_ids - db_ids)
    extra_in_db = sorted(db_ids - xml_ids)
    mismatches = []
    for fid in sorted(xml_ids & db_ids):
        if xml_links[fid] != db_links[fid]:
            mismatches.append((fid, xml_links[fid], db_links[fid]))

    print(f"xml figures with links: {len(xml_ids)}")
    print(f"db figures with links: {len(db_ids)}")
    print(f"missing in db: {len(missing_in_db)}")
    print(f"extra in db: {len(extra_in_db)}")
    print(f"count mismatches: {len(mismatches)}")
    for fid, xml_l, db_l in mismatches[:20]:
        print(f"  figure {fid}: xml={xml_l} db={db_l}")
    ok = not missing_in_db and not mismatches
    return 0 if ok else 1


if __name__ == "__main__":
    sys.exit(main())
