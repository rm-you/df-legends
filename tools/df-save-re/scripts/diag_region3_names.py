"""Cross-check region3 figure names in the DB against the world_history text export."""

from __future__ import annotations

import re
import sqlite3
import sys
from pathlib import Path

HIST = Path(r"C:\Users\rm_yo\CursorProjects\df-legends\data\saves\region3-00250-01-01-world_history.txt")
DB = Path(r"data\legends\databases\kar-minbaz.sqlite")


def main() -> None:
    hist = HIST.read_text(encoding="cp437", errors="replace")

    rulers: set[str] = set()
    for m in re.finditer(r"^\s+\[\*\] (.+?) \(b\.", hist, re.M):
        rulers.add(m.group(1).strip())
    deities: set[str] = set()
    for m in re.finditer(r"^\s+(.+?), deity:", hist, re.M):
        deities.add(m.group(1).strip())
    civs: set[str] = set()
    for m in re.finditer(r"^(\S.+?), (?:Dwarves|Humans|Elves|Goblins|Kobolds)$", hist, re.M):
        civs.add(m.group(1).strip())

    con = sqlite3.connect(DB)
    db_fig_names = {
        n.lower()
        for (n,) in con.execute(
            "select name_display from historical_figure where name_display is not null"
        )
    }

    for label, names in (("rulers", rulers), ("deities", deities)):
        hit = sorted(n for n in names if n.lower() in db_fig_names)
        miss = sorted(n for n in names if n.lower() not in db_fig_names)
        print(f"{label}: {len(hit)}/{len(names)} matched in historical_figure")
        print("  sample misses:", miss[:10])

    print("export civs:", len(civs), sorted(civs))
    cols = [r[1] for r in con.execute("pragma table_info(historical_entity)")]
    print("historical_entity columns:", cols)
    name_col = next((c for c in cols if "name" in c.lower()), None)
    if name_col:
        db_civ_names = [
            r[0]
            for r in con.execute(
                f"select {name_col} from historical_entity where {name_col} is not null"
            )
        ]
        print("db entities:", db_civ_names[:40])

    print("\nsample DB figure names:")
    for r in con.execute(
        "select figure_id, name_display from historical_figure "
        "where name_display like '% %' limit 15"
    ):
        print("  ", r)
    print("\nruler (first_name, born, died) triple match:")
    # export lines: "[*] Thob Boredoil (b.7 d. 170, Reign Began: 69)"
    triples = []
    for m in re.finditer(
        r"^\s+\[\*\] (\S+) \S.*? \(b\.(\?\?\?|\d+)(?: d\. (\d+))?,", hist, re.M
    ):
        first = m.group(1).lower()
        born = None if m.group(2) == "???" else int(m.group(2))
        died = int(m.group(3)) if m.group(3) else None
        triples.append((first, born, died))
    print(f"  parsed {len(triples)} ruler entries from export")

    figs = {}
    for fid, name, by, dy in con.execute(
        "select figure_id, name_display, born_year, died_year from historical_figure "
        "where name_display is not null"
    ):
        figs.setdefault(name.lower(), []).append((fid, by, dy))

    full = partial = missing = 0
    miss_examples = []
    for first, born, died in triples:
        cands = figs.get(first, [])
        ok = False
        for fid, by, dy in cands:
            born_ok = born is None or by == born
            died_ok = died is None or dy == died
            if born_ok and died_ok:
                ok = True
                break
        if ok:
            full += 1
        elif cands:
            partial += 1
            if len(miss_examples) < 5:
                miss_examples.append((first, born, died, cands[:3]))
        else:
            missing += 1
            if len(miss_examples) < 5:
                miss_examples.append((first, born, died, None))
    print(f"  full match (name+years): {full}, name-only: {partial}, no name: {missing}")
    for ex in miss_examples:
        print("   ", ex)


if __name__ == "__main__":
    sys.stdout.reconfigure(errors="backslashreplace")
    main()
