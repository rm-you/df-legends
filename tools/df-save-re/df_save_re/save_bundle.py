"""Save folder inventory and world.dat vs world.sav classification."""

from __future__ import annotations

import re
from dataclasses import dataclass, field
from enum import Enum
from pathlib import Path


class SaveKind(str, Enum):
    WORLD_DAT = "world.dat"
    WORLD_SAV = "world.sav"
    SITE = "site"
    UNIT = "unit"
    FEATURE = "feature"
    REGION_SNAPSHOT = "region_snapshot"
    WORLD_GEN_PARAMS = "world_gen_params"
    LEGENDS_XML = "legends_xml"
    LEGENDS_TEXT = "legends_text"
    OTHER = "other"


@dataclass(frozen=True)
class SaveFileEntry:
    path: Path
    kind: SaveKind
    index: int | None = None  # for site-3.dat → 3


@dataclass
class SaveFolderIndex:
    folder: Path
    region_name: str
    entries: list[SaveFileEntry] = field(default_factory=list)

    @property
    def world_blob(self) -> SaveFileEntry | None:
        for kind in (SaveKind.WORLD_SAV, SaveKind.WORLD_DAT):
            for e in self.entries:
                if e.kind == kind:
                    return e
        return None

    @property
    def is_active(self) -> bool:
        return any(e.kind == SaveKind.WORLD_SAV for e in self.entries)

    @property
    def is_retired(self) -> bool:
        return any(e.kind == SaveKind.WORLD_DAT for e in self.entries) and not self.is_active

    @property
    def sidecars(self) -> list[SaveFileEntry]:
        return [e for e in self.entries if e.kind not in (SaveKind.WORLD_DAT, SaveKind.WORLD_SAV, SaveKind.OTHER)]


_PATTERNS: list[tuple[re.Pattern[str], SaveKind]] = [
    (re.compile(r"^world\.dat$", re.I), SaveKind.WORLD_DAT),
    (re.compile(r"^world\.sav$", re.I), SaveKind.WORLD_SAV),
    (re.compile(r"^site-(\d+)\.dat$", re.I), SaveKind.SITE),
    (re.compile(r"^unit-(\d+)\.dat$", re.I), SaveKind.UNIT),
    (re.compile(r"^feature-(\d+)-(\d+)\.dat$", re.I), SaveKind.FEATURE),
    (re.compile(r"^region_snapshot-(\d+)\.dat$", re.I), SaveKind.REGION_SNAPSHOT),
    (re.compile(r"world_gen_param", re.I), SaveKind.WORLD_GEN_PARAMS),
    (re.compile(r".*-legends\.xml$", re.I), SaveKind.LEGENDS_XML),
    (re.compile(r".*world_history", re.I), SaveKind.LEGENDS_TEXT),
    (re.compile(r".*world_sites_and_pops", re.I), SaveKind.LEGENDS_TEXT),
]


def classify_filename(name: str) -> tuple[SaveKind, int | None]:
    for pattern, kind in _PATTERNS:
        m = pattern.search(name)
        if not m:
            continue
        idx = int(m.group(1)) if m.lastindex and m.lastindex >= 1 else None
        return kind, idx
    return SaveKind.OTHER, None


def index_save_folder(folder: Path | str) -> SaveFolderIndex:
    folder = Path(folder)
    entries: list[SaveFileEntry] = []
    if not folder.is_dir():
        raise NotADirectoryError(folder)

    for path in sorted(folder.iterdir()):
        if not path.is_file():
            continue
        kind, idx = classify_filename(path.name)
        entries.append(SaveFileEntry(path=path, kind=kind, index=idx))

    return SaveFolderIndex(folder=folder, region_name=folder.name, entries=entries)


def legends_parse_target(index: SaveFolderIndex) -> SaveFileEntry | None:
    """Best file to start legends RE against (active → world.sav, retired → world.dat)."""
    preferred = (
        (SaveKind.WORLD_SAV, SaveKind.WORLD_DAT)
        if index.is_active
        else (SaveKind.WORLD_DAT, SaveKind.WORLD_SAV)
    )
    for kind in preferred:
        for e in index.entries:
            if e.kind == kind:
                return e
    return None
