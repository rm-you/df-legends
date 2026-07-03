"""Scan mounted DF save directories and match them to imported legends databases."""

from __future__ import annotations

from dataclasses import asdict, dataclass
from enum import Enum
from pathlib import Path

from ..db.paths import fortress_slug, legends_db_path
from ..db.registry import LegendsRegistryEntry, list_legends
from ..deserializers.active_save import SavPreamble
from ..save_bundle import index_save_folder, legends_parse_target
from ..save_preamble import resolve_save_payload
from .import_jobs import ImportJobManager, ImportJobState


class RegionStatus(str, Enum):
    IMPORTABLE = "importable"
    READY = "ready"
    IMPORTING = "importing"
    ERROR = "error"
    INVALID = "invalid"


@dataclass
class SaveRegionRow:
    region_name: str
    region_path: str
    world_name: str | None
    slug: str | None
    is_active: bool
    is_retired: bool
    parse_target: str | None
    status: RegionStatus
    error: str | None = None
    entity_count: int | None = None
    site_count: int | None = None
    histfig_header_count: int | None = None
    event_count: int | None = None

    def to_dict(self) -> dict:
        payload = asdict(self)
        payload["status"] = self.status.value
        return payload


def _peek_region_metadata(region_dir: Path) -> tuple[str | None, str | None]:
    """Return (world_name, slug) from a region folder without running a full import."""
    resolved = resolve_save_payload(region_dir)
    preamble = resolved.preamble
    if isinstance(preamble, SavPreamble):
        world_name = preamble.world_name
    elif preamble.header.world_name:
        world_name = preamble.header.world_name.value
    else:
        world_name = None
    slug = fortress_slug(world_name or "unknown")
    return world_name, slug


def list_save_regions(
    saves_dir: Path,
    data_dir: Path,
    *,
    job_manager: ImportJobManager | None = None,
) -> list[SaveRegionRow]:
    """List immediate child region folders under ``saves_dir`` with import status."""
    saves_dir = saves_dir.resolve()
    if not saves_dir.is_dir():
        return []

    registry_by_slug = {entry.slug: entry for entry in list_legends(data_dir)}
    rows: list[SaveRegionRow] = []

    for child in sorted(saves_dir.iterdir()):
        if not child.is_dir():
            continue

        region_name = child.name
        job = job_manager.get_job(region_name) if job_manager else None

        try:
            index = index_save_folder(child)
        except OSError:
            continue

        target = legends_parse_target(index)
        if target is None:
            rows.append(
                SaveRegionRow(
                    region_name=region_name,
                    region_path=str(child),
                    world_name=None,
                    slug=None,
                    is_active=index.is_active,
                    is_retired=index.is_retired,
                    parse_target=None,
                    status=RegionStatus.INVALID,
                    error="No world.dat or world.sav found",
                )
            )
            continue

        world_name: str | None = None
        slug: str | None = None
        peek_error: str | None = None
        try:
            world_name, slug = _peek_region_metadata(child)
        except Exception as exc:  # noqa: BLE001 — surface to UI
            peek_error = str(exc)

        if job is not None and job.state == ImportJobState.RUNNING:
            status = RegionStatus.IMPORTING
            error = None
        elif job is not None and job.state == ImportJobState.ERROR:
            status = RegionStatus.ERROR
            error = job.error
        elif peek_error:
            status = RegionStatus.INVALID
            error = peek_error
        elif slug and _is_imported(slug, registry_by_slug, data_dir):
            status = RegionStatus.READY
            error = None
        else:
            status = RegionStatus.IMPORTABLE
            error = None

        entry = registry_by_slug.get(slug) if slug else None
        rows.append(
            SaveRegionRow(
                region_name=region_name,
                region_path=str(child),
                world_name=world_name,
                slug=slug,
                is_active=index.is_active,
                is_retired=index.is_retired,
                parse_target=target.path.name,
                status=status,
                error=error,
                entity_count=entry.entity_count if entry else None,
                site_count=entry.site_count if entry else None,
                histfig_header_count=entry.histfig_header_count if entry else None,
                event_count=entry.event_count if entry else None,
            )
        )

    return rows


def _is_imported(
    slug: str,
    registry_by_slug: dict[str, LegendsRegistryEntry],
    data_dir: Path,
) -> bool:
    entry = registry_by_slug.get(slug)
    if entry is None:
        return False
    return legends_db_path(data_dir, slug).is_file()


def find_region_dir(saves_dir: Path, region_name: str) -> Path | None:
    """Resolve a region folder under ``saves_dir`` if it has a parse target."""
    region_dir = saves_dir / region_name
    if not region_dir.is_dir():
        return None
    index = index_save_folder(region_dir)
    if legends_parse_target(index) is None:
        return None
    return region_dir
