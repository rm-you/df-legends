"""Check the accented-name ruler misses by matching on years only."""

import sqlite3
import sys

DB = r"data\legends\databases\kar-minbaz.sqlite"

CASES = [
    ("lòr", 154, 231),
    ("lèma", None, 146),
    ("båx", None, 26),
    ("stosbûb", None, 33),
]


def main() -> None:
    con = sqlite3.connect(DB)
    for first, born, died in CASES:
        q = "select figure_id, name_display, born_year, died_year from historical_figure where died_year = ?"
        args = [died]
        if born is not None:
            q += " and born_year = ?"
            args.append(born)
        rows = con.execute(q, args).fetchall()
        print(f"export {first!r} b.{born} d.{died}: {len(rows)} candidates")
        for r in rows[:6]:
            name_bytes = r[1].encode("unicode_escape").decode()
            print(f"   id={r[0]} name={r[1]!r} (escaped: {name_bytes}) born={r[2]} died={r[3]}")


if __name__ == "__main__":
    sys.stdout.reconfigure(errors="backslashreplace")
    main()
