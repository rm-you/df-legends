"""Verify region3 (kar-minbaz) import against the DF text exports.

No legends XML exists for this world, so we cross-check what the plain-text
exports give us: site count/names from world_sites_and_pops.txt and era/civ
names from world_history.txt, plus internal DB consistency.
"""

from __future__ import annotations

import json
import re
import sqlite3
import sys
from pathlib import Path

DB = Path(r"data\legends\databases\kar-minbaz.sqlite")
SAVES = Path(r"C:\Users\rm_yo\CursorProjects\df-legends\data\saves")
SITES_TXT = SAVES / "region3-00250-01-01-world_sites_and_pops.txt"
HIST_TXT = SAVES / "region3-00250-01-01-world_history.txt"


def main() -> None:
    con = sqlite3.connect(DB)
    cur = con.cursor()

    print("== table counts ==")
    for (name,) in cur.execute(
        "select name from sqlite_master where type='table' order by name"
    ).fetchall():
        n = cur.execute(f"select count(*) from {name}").fetchone()[0]
        print(f"  {name}: {n}")

    text = SITES_TXT.read_text(encoding="cp437", errors="replace")
    site_lines = re.findall(r"^(\d+): ([^,]+), ", text, re.M)
    print(f"\n== sites_and_pops export: {len(site_lines)} sites, max id {max(int(i) for i, _ in site_lines)} ==")

    db_sites = cur.execute(
        "select count(*), max(site_id) from world_site"
    ).fetchone()
    print(f"   DB world_site: count={db_sites[0]} max_id={db_sites[1]}")

    # name overlap: export names are like "sitename" quoted? format: `1: Sitename, "Translation", type`
    export_names = {}
    for m in re.finditer(r'^(\d+): ([^,]+), "([^"]+)"', text, re.M):
        export_names[int(m.group(1))] = (m.group(2).strip(), m.group(3).strip())

    db_names = dict(
        cur.execute("select site_id, display_name from world_site where display_name is not null")
    )
    for offset in (0, -1):
        matched = mismatched = 0
        examples = []
        for sid, (native, translated) in export_names.items():
            dbn = db_names.get(sid + offset)
            if dbn is None:
                continue
            if dbn.lower() in (native.lower(), translated.lower()):
                matched += 1
            else:
                mismatched += 1
                if len(examples) < 5:
                    examples.append((sid, native, translated, dbn))
        print(
            f"   name match vs export (db_id = export_id{offset:+d}): "
            f"{matched} matched, {mismatched} mismatched (of {len(export_names)} export sites)"
        )
        for ex in examples:
            print(f"     mismatch: {ex}")

    hist = HIST_TXT.read_text(encoding="cp437", errors="replace")
    first_lines = [ln for ln in hist.splitlines()[:6] if ln.strip()]
    print("\n== world_history export header ==")
    for ln in first_lines:
        print("  ", ln)

    eras = cur.execute("select record_json from history_era").fetchall()
    print("\n== DB eras ==")
    for (rj,) in eras:
        print("  ", rj[:200])

    # internal consistency: event years within era bounds, figure names non-empty
    named = cur.execute(
        "select count(*) from historical_figure where name_display is not null and name_display != ''"
    ).fetchone()[0]
    total_figs = cur.execute("select count(*) from historical_figure").fetchone()[0]
    print(f"\n== figures: {total_figs} total, {named} named ==")

    yr = cur.execute("select min(year), max(year) from history_event where year >= 0").fetchone()
    print(f"== event years (>=0): {yr[0]}..{yr[1]} ==")

    types = cur.execute(
        "select event_type, count(*) from history_event group by event_type order by count(*) desc limit 10"
    ).fetchall()
    print("== top event types ==")
    for t, n in types:
        print(f"   {t}: {n}")

    con.close()


if __name__ == "__main__":
    sys.stdout.reconfigure(errors="backslashreplace")
    main()
