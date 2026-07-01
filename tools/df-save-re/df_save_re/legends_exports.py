"""Discover Legends mode exports beside a save for verify-only cross-checks."""

from __future__ import annotations

import os
import re
from dataclasses import dataclass, field
from pathlib import Path

from .legends_text import classify_legends_text, discover_legends_text_exports

_LEGENDS_XML = re.compile(r".*-legends\.xml$", re.I)
_REGION_PREFIX = re.compile(r"^(region\d+)", re.I)


@dataclass
class LegendsExportBundle:
    """Paths to optional verify-only exports near a save folder."""

    save_folder: Path
    region_name: str | None = None
    legends_xml: Path | None = None
    world_history: Path | None = None
    world_sites: Path | None = None
    world_gen: Path | None = None
    search_dirs: list[str] = field(default_factory=list)
    notes: list[str] = field(default_factory=list)

    @property
    def has_oracle(self) -> bool:
        return self.legends_xml is not None and self.legends_xml.is_file()

    @property
    def has_text(self) -> bool:
        return self.world_history is not None and self.world_history.is_file()

    @property
    def text_directory(self) -> Path | None:
        """Best directory to pass to :func:`load_legends_text`."""
        if self.has_text and self.world_history is not None:
            return self.world_history.parent
        for directory in self.search_dirs:
            found = discover_legends_text_exports(directory)
            if found:
                return Path(directory)
        return None

    def to_dict(self) -> dict:
        return {
            "save_folder": str(self.save_folder),
            "region_name": self.region_name,
            "legends_xml": str(self.legends_xml) if self.legends_xml else None,
            "world_history": str(self.world_history) if self.world_history else None,
            "world_sites": str(self.world_sites) if self.world_sites else None,
            "world_gen": str(self.world_gen) if self.world_gen else None,
            "search_dirs": self.search_dirs,
            "notes": self.notes,
        }


def save_folder_for(path: Path | str) -> Path:
    """Return the fortress save directory for a world blob path or folder."""
    path = Path(path).resolve()
    if path.is_dir():
        return path
    return path.parent


def _region_prefix(name: str) -> str | None:
    match = _REGION_PREFIX.match(name)
    return match.group(1).lower() if match else None


def _search_directories(save_folder: Path) -> list[Path]:
    dirs: list[Path] = [save_folder]
    parent = save_folder.parent
    if parent != save_folder:
        dirs.append(parent)
    extra = os.environ.get("DF_LEGENDS_EXPORT_DIRS", "")
    for part in extra.split(os.pathsep):
        part = part.strip()
        if part:
            candidate = Path(part)
            if candidate.is_dir() and candidate not in dirs:
                dirs.append(candidate)
    uploads = Path("/home/ubuntu/.cursor/projects/workspace/uploads")
    if uploads.is_dir() and uploads not in dirs:
        dirs.append(uploads)
    return dirs


def _pick_newest(paths: list[Path]) -> Path | None:
    existing = [p for p in paths if p.is_file()]
    if not existing:
        return None
    return max(existing, key=lambda p: p.stat().st_mtime)


def _find_legends_xml(save_folder: Path, search_dirs: list[Path]) -> Path | None:
    candidates: list[Path] = []
    for directory in search_dirs:
        candidates.extend(sorted(directory.glob("*-legends.xml")))
        candidates.extend(sorted(directory.glob("*legends.xml")))
    region = save_folder.name.lower()
    if region:
        for directory in search_dirs:
            candidates.extend(sorted(directory.glob(f"{region}*-legends.xml")))
    # Prefer XML inside the save folder over parent-directory copies.
    in_save = [p for p in candidates if p.parent.resolve() == save_folder.resolve()]
    if in_save:
        return _pick_newest(in_save)
    return _pick_newest(candidates)


def _find_text_export(
    kind: str,
    *,
    save_folder: Path,
    search_dirs: list[Path],
    region_prefix: str | None,
) -> Path | None:
    candidates: list[Path] = []
    for directory in search_dirs:
        for path in directory.iterdir() if directory.is_dir() else []:
            if not path.is_file():
                continue
            if classify_legends_text(path) != kind:
                continue
            if path.parent.resolve() == save_folder.resolve():
                candidates.append(path)
                continue
            if region_prefix and path.name.lower().startswith(region_prefix):
                candidates.append(path)
    in_save = [p for p in candidates if p.parent.resolve() == save_folder.resolve()]
    if in_save:
        return _pick_newest(in_save)
    return _pick_newest(candidates)


def discover_legends_exports(path: Path | str) -> LegendsExportBundle:
    """Locate legends XML and p-key text exports near a save folder or world blob."""
    save_folder = save_folder_for(path)
    search_dirs = _search_directories(save_folder)
    region_name = save_folder.name if save_folder.name else None
    region = _region_prefix(region_name or "")

    bundle = LegendsExportBundle(
        save_folder=save_folder,
        region_name=region_name,
        search_dirs=[str(d) for d in search_dirs],
    )

    bundle.legends_xml = _find_legends_xml(save_folder, search_dirs)
    bundle.world_history = _find_text_export(
        "history", save_folder=save_folder, search_dirs=search_dirs, region_prefix=region
    )
    bundle.world_sites = _find_text_export(
        "sites", save_folder=save_folder, search_dirs=search_dirs, region_prefix=region
    )
    bundle.world_gen = _find_text_export(
        "world_gen", save_folder=save_folder, search_dirs=search_dirs, region_prefix=region
    )

    if bundle.legends_xml is None:
        bundle.notes.append("no *-legends.xml found (optional DFHack exportlegends oracle)")
    if bundle.world_history is None:
        bundle.notes.append("no *-world_history*.txt found (Legends [p] export)")
    elif bundle.world_history.parent.resolve() != save_folder.resolve():
        bundle.notes.append(f"world_history found outside save folder: {bundle.world_history.name}")
    if bundle.world_sites is None:
        bundle.notes.append("no *-world_sites_and_pops*.txt found")
    if bundle.world_gen is None:
        bundle.notes.append("no *-world_gen_param*.txt found")

    return bundle
