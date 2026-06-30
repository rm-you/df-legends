"""Parse vanilla Legends mode text exports (p key) for save cross-check."""

from __future__ import annotations

import re
from dataclasses import dataclass, field
from pathlib import Path

from .target import TARGET_DF_VERSION


@dataclass
class LegendsTextHistory:
    path: str
    world_name: str | None = None
    alt_name: str | None = None
    civ_blocks: int = 0
    ruler_entries: int = 0
    notes: list[str] = field(default_factory=list)


@dataclass
class LegendsTextSites:
    path: str
    total_population: int | None = None
    site_count: int = 0
    notes: list[str] = field(default_factory=list)


@dataclass
class LegendsTextWorldGen:
    path: str
    df_version: str | None = None
    end_year: int | None = None
    dim: str | None = None
    notes: list[str] = field(default_factory=list)


@dataclass
class LegendsTextBundle:
    history: LegendsTextHistory | None = None
    sites: LegendsTextSites | None = None
    world_gen: LegendsTextWorldGen | None = None
    export_kind: str = "legends_text_p"
    notes: list[str] = field(default_factory=list)


def is_world_history_text(path: Path) -> bool:
    name = path.name.lower()
    return name.endswith("-world_history.txt") or "-world_history_" in name


def is_world_sites_text(path: Path) -> bool:
    name = path.name.lower()
    return name.endswith("-world_sites_and_pops.txt") or "-world_sites_and_pops_" in name


def is_world_gen_text(path: Path) -> bool:
    name = path.name.lower()
    return name.endswith("-world_gen_param.txt") or "-world_gen_param_" in name


def classify_legends_text(path: Path) -> str | None:
    if is_world_history_text(path):
        return "history"
    if is_world_sites_text(path):
        return "sites"
    if is_world_gen_text(path):
        return "world_gen"
    return None


def discover_legends_text_exports(directory: Path | str) -> list[Path]:
    """Return recognized p-key export files in a directory."""
    directory = Path(directory)
    if not directory.is_dir():
        return []
    return sorted(p for p in directory.iterdir() if p.is_file() and classify_legends_text(p))


def parse_world_history_text(path: Path | str) -> LegendsTextHistory:
    path = Path(path)
    text = path.read_text(encoding="utf-8", errors="replace")
    lines = [ln.rstrip("\r") for ln in text.splitlines()]
    stats = LegendsTextHistory(path=str(path))

    non_empty = [ln for ln in lines if ln.strip()]
    if non_empty:
        stats.world_name = non_empty[0].strip()
    if len(non_empty) > 1 and not non_empty[1].startswith(" "):
        stats.alt_name = non_empty[1].strip()

    stats.civ_blocks = sum(
        1
        for ln in lines
        if ln and not ln.startswith((" ", "\t", "[", "*")) and "," in ln and " List" not in ln
    )
    stats.ruler_entries = sum(1 for ln in lines if ln.lstrip().startswith("[*]"))
    return stats


def parse_world_sites_text(path: Path | str) -> LegendsTextSites:
    path = Path(path)
    text = path.read_text(encoding="utf-8", errors="replace")
    stats = LegendsTextSites(path=str(path))

    total_match = re.search(r"^\s*Total:\s*(\d+)\s*$", text, re.MULTILINE)
    if total_match:
        stats.total_population = int(total_match.group(1))

    stats.site_count = len(re.findall(r"^\d+:\s", text, re.MULTILINE))
    return stats


def parse_world_gen_text(path: Path | str) -> LegendsTextWorldGen:
    path = Path(path)
    text = path.read_text(encoding="utf-8", errors="replace")
    stats = LegendsTextWorldGen(path=str(path))

    version_match = re.search(r"Created in DF v([\d.]+)", text)
    if version_match:
        stats.df_version = version_match.group(1)

    end_year_match = re.search(r"\[END_YEAR:(\d+)\]", text)
    if end_year_match:
        stats.end_year = int(end_year_match.group(1))

    dim_match = re.search(r"\[DIM:(\d+):(\d+)\]", text)
    if dim_match:
        stats.dim = f"{dim_match.group(1)}x{dim_match.group(2)}"

    return stats


def load_legends_text(path: Path | str) -> LegendsTextBundle:
    """Load one text export file, or a directory containing the p-key export set."""
    path = Path(path)
    bundle = LegendsTextBundle()

    if path.is_dir():
        files = discover_legends_text_exports(path)
        if not files:
            raise ValueError(f"no legends text exports found in {path}")
    else:
        if classify_legends_text(path) is None:
            raise ValueError(
                f"{path} is not a recognized legends text export "
                "(expected *-world_history*.txt, *-world_sites_and_pops*.txt, "
                "or *-world_gen_param*.txt)"
            )
        files = [path]

    for file in files:
        kind = classify_legends_text(file)
        if kind == "history":
            bundle.history = parse_world_history_text(file)
        elif kind == "sites":
            bundle.sites = parse_world_sites_text(file)
        elif kind == "world_gen":
            bundle.world_gen = parse_world_gen_text(file)

    if bundle.history is None and len(files) == 1:
        raise ValueError(
            "world_history text export is required for validation "
            "(pass a directory with all p-key files, or the *world_history* file)"
        )

    if bundle.history is None:
        bundle.notes.append("world_history.txt missing — world name cannot be cross-checked")

    return bundle


def compare_text_with_save(
    bundle: LegendsTextBundle,
    *,
    world_name: str | None,
    target_df_version: str = TARGET_DF_VERSION,
) -> list[str]:
    """Return validation mismatches (empty list = checks passed)."""
    lines: list[str] = []
    if bundle.history and world_name and bundle.history.world_name:
        if bundle.history.world_name.strip() != world_name.strip():
            lines.append(
                f"world name: save={world_name!r} text={bundle.history.world_name!r}"
            )
    elif bundle.history is None:
        lines.append("world_history export missing — cannot verify world name")

    if bundle.world_gen and bundle.world_gen.df_version:
        if not bundle.world_gen.df_version.startswith(target_df_version.rsplit(".", 1)[0]):
            # Allow 0.47.05 vs 0.47 prefix match
            major = ".".join(target_df_version.split(".")[:2])
            if not bundle.world_gen.df_version.startswith(major):
                lines.append(
                    f"df version: export={bundle.world_gen.df_version!r} "
                    f"target={target_df_version!r}"
                )

    return lines


def text_bundle_to_dict(bundle: LegendsTextBundle) -> dict:
    return {
        "kind": bundle.export_kind,
        "world_name": bundle.history.world_name if bundle.history else None,
        "alt_name": bundle.history.alt_name if bundle.history else None,
        "ruler_entries": bundle.history.ruler_entries if bundle.history else None,
        "site_count": bundle.sites.site_count if bundle.sites else None,
        "total_population": bundle.sites.total_population if bundle.sites else None,
        "df_version": bundle.world_gen.df_version if bundle.world_gen else None,
        "end_year": bundle.world_gen.end_year if bundle.world_gen else None,
        "dim": bundle.world_gen.dim if bundle.world_gen else None,
        "notes": bundle.notes,
    }
