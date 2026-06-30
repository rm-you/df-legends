#!/usr/bin/env python3
"""Download save fixtures for df-save-re integration tests."""

from __future__ import annotations

import argparse
import hashlib
import shutil
import zipfile
from pathlib import Path
from urllib.request import urlretrieve

ROOT = Path(__file__).resolve().parents[1]
FIXTURES = ROOT / "tests" / "fixtures"

# Discord CDN links expire; replace via SMALL_WORLD_DAT_URL env if needed.
DEFAULT_SMALL_WORLD_DAT_URL = (
    "https://cdn.discordapp.com/attachments/881235641478819860/"
    "1521313154456621287/world.dat"
    "?ex=6a4460c8&is=6a430f48&hm=fdb15efd3ca76c418db057a2ded036a09ed6086640caa0f7619cbc3de3e9e1d2&"
)
SMALL_WORLD_DAT_SHA256 = "f9cee2642831252bcb09c71cc4f10450505e174abc0aa6806a1f9c79745d8714"

ZIP_DOWNLOADS = {
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


def _sha256(path: Path) -> str:
    h = hashlib.sha256()
    with path.open("rb") as f:
        for chunk in iter(lambda: f.read(1024 * 1024), b""):
            h.update(chunk)
    return h.hexdigest()


def _extract_member(archive: zipfile.ZipFile, suffix: str, dest: Path) -> None:
    matches = [n for n in archive.namelist() if n.endswith(suffix) and not n.endswith("/")]
    if not matches:
        raise FileNotFoundError(f"no {suffix} in archive")
    matches.sort(key=len)
    dest.parent.mkdir(parents=True, exist_ok=True)
    with archive.open(matches[0]) as src, dest.open("wb") as out:
        shutil.copyfileobj(src, out)
    print(f"wrote {dest} ({dest.stat().st_size:,} bytes) from {matches[0]!r}")


def fetch_zip(key: str, *, cache_dir: Path) -> None:
    spec = ZIP_DOWNLOADS[key]
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


def fetch_small_world(*, cache_dir: Path, url: str) -> None:
    cache_dir.mkdir(parents=True, exist_ok=True)
    cache_path = cache_dir / "small-world.dat"
    dest = FIXTURES / "small-retired" / "world.dat"

    if dest.is_file() and _sha256(dest) == SMALL_WORLD_DAT_SHA256:
        print(f"using existing {dest}")
        return

    if not cache_path.exists() or _sha256(cache_path) != SMALL_WORLD_DAT_SHA256:
        print("downloading small-retired world.dat …")
        urlretrieve(url, cache_path)
        digest = _sha256(cache_path)
        if digest != SMALL_WORLD_DAT_SHA256:
            raise SystemExit(
                f"small world.dat checksum mismatch: got {digest}, "
                f"expected {SMALL_WORLD_DAT_SHA256} — set SMALL_WORLD_DAT_URL or copy file manually"
            )

    dest.parent.mkdir(parents=True, exist_ok=True)
    shutil.copy2(cache_path, dest)
    print(f"wrote {dest} ({dest.stat().st_size:,} bytes)")


def main(argv: list[str] | None = None) -> int:
    import os

    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument(
        "--all",
        action="store_true",
        help="also fetch ironhand active world.sav",
    )
    parser.add_argument(
        "--waterlures-only",
        action="store_true",
        help="skip small world.dat (fetch Waterlures + optional ironhand only)",
    )
    parser.add_argument(
        "--cache-dir",
        type=Path,
        default=ROOT / ".fixture-cache",
        help="where to store downloaded archives",
    )
    args = parser.parse_args(argv)

    if not args.waterlures_only:
        url = os.environ.get("SMALL_WORLD_DAT_URL", DEFAULT_SMALL_WORLD_DAT_URL)
        fetch_small_world(cache_dir=args.cache_dir, url=url)

    fetch_zip("waterlures-retired", cache_dir=args.cache_dir)
    if args.all:
        fetch_zip("ironhand-active", cache_dir=args.cache_dir)
    print(f"fixtures ready under {FIXTURES}")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
