#!/usr/bin/env python3
"""Download DFFD save fixtures for df-save-re integration tests."""

from __future__ import annotations

import argparse
import shutil
import sys
import zipfile
from pathlib import Path
from urllib.request import urlretrieve

ROOT = Path(__file__).resolve().parents[1]
FIXTURES = ROOT / "tests" / "fixtures"

DOWNLOADS = {
    "waterlures-retired": {
        "url": "https://dffd.bay12games.com/download.php?id=17772&f=waterlures+-+summer+391.zip",
        "archive_name": "waterlures.zip",
        "find": ("world.dat",),
        "dest_dir": "waterlures-retired",
    },
    "ironhand-active": {
        "url": "https://dffd.bay12games.com/download.php?id=15468&f=Df+OldGen+05c+Ironhand+save,+has+crashed+3+times.+region5.zip",
        "archive_name": "ironhand.zip",
        "find": ("world.sav",),
        "dest_dir": "ironhand-active",
    },
}


def _extract_member(archive: zipfile.ZipFile, suffix: str, dest: Path) -> None:
    matches = [n for n in archive.namelist() if n.endswith(suffix) and not n.endswith("/")]
    if not matches:
        raise FileNotFoundError(f"no {suffix} in archive")
    matches.sort(key=len)
    dest.parent.mkdir(parents=True, exist_ok=True)
    with archive.open(matches[0]) as src, dest.open("wb") as out:
        shutil.copyfileobj(src, out)
    print(f"wrote {dest} ({dest.stat().st_size:,} bytes) from {matches[0]!r}")


def fetch_one(key: str, *, cache_dir: Path) -> None:
    spec = DOWNLOADS[key]
    cache_dir.mkdir(parents=True, exist_ok=True)
    archive_path = cache_dir / spec["archive_name"]
    if not archive_path.exists():
        print(f"downloading {key} …")
        urlretrieve(spec["url"], archive_path)
    else:
        print(f"using cached {archive_path}")

    dest_dir = FIXTURES / spec["dest_dir"]
    with zipfile.ZipFile(archive_path) as zf:
        for suffix in spec["find"]:
            _extract_member(zf, suffix, dest_dir / suffix)


def main(argv: list[str] | None = None) -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument(
        "--all",
        action="store_true",
        help="also fetch ironhand active world.sav",
    )
    parser.add_argument(
        "--cache-dir",
        type=Path,
        default=ROOT / ".fixture-cache",
        help="where to store downloaded zips",
    )
    args = parser.parse_args(argv)

    fetch_one("waterlures-retired", cache_dir=args.cache_dir)
    if args.all:
        fetch_one("ironhand-active", cache_dir=args.cache_dir)
    print(f"fixtures ready under {FIXTURES}")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
