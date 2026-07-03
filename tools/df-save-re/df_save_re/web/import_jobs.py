"""Background import jobs for the legends explorer."""

from __future__ import annotations

import threading
from dataclasses import asdict, dataclass
from datetime import datetime, timezone
from enum import Enum
from pathlib import Path
from typing import Callable

from ..db.store import import_world_dat


class ImportJobState(str, Enum):
    RUNNING = "running"
    DONE = "done"
    ERROR = "error"


@dataclass
class ImportJob:
    region_name: str
    state: ImportJobState
    started_at: str
    finished_at: str | None = None
    slug: str | None = None
    error: str | None = None

    def to_dict(self) -> dict:
        payload = asdict(self)
        payload["state"] = self.state.value
        return payload


class ImportJobManager:
    """Thread-backed import runner with per-region locking."""

    def __init__(self, *, on_complete: Callable[[str], None] | None = None) -> None:
        self._jobs: dict[str, ImportJob] = {}
        self._locks: dict[str, threading.Lock] = {}
        self._global_lock = threading.Lock()
        self._on_complete = on_complete

    def get_job(self, region_name: str) -> ImportJob | None:
        return self._jobs.get(region_name)

    def is_running(self, region_name: str) -> bool:
        job = self._jobs.get(region_name)
        return job is not None and job.state == ImportJobState.RUNNING

    def start_import(
        self,
        region_name: str,
        region_dir: Path,
        *,
        data_dir: Path,
    ) -> ImportJob:
        with self._global_lock:
            if self.is_running(region_name):
                raise RuntimeError(f"Import already running for {region_name}")
            lock = self._locks.setdefault(region_name, threading.Lock())
            if not lock.acquire(blocking=False):
                raise RuntimeError(f"Import already running for {region_name}")

            job = ImportJob(
                region_name=region_name,
                state=ImportJobState.RUNNING,
                started_at=_utc_now(),
            )
            self._jobs[region_name] = job

        thread = threading.Thread(
            target=self._run_import,
            args=(region_name, region_dir, data_dir, lock),
            daemon=True,
            name=f"import-{region_name}",
        )
        thread.start()
        return job

    def _run_import(
        self,
        region_name: str,
        region_dir: Path,
        data_dir: Path,
        lock: threading.Lock,
    ) -> None:
        job = self._jobs[region_name]
        try:
            result = import_world_dat(
                region_dir,
                data_dir=data_dir,
                overwrite=True,
            )
            job.state = ImportJobState.DONE
            job.slug = result.slug
            job.finished_at = _utc_now()
            if self._on_complete and result.slug:
                self._on_complete(result.slug)
        except Exception as exc:  # noqa: BLE001 — show in UI
            job.state = ImportJobState.ERROR
            job.error = f"{type(exc).__name__}: {exc}"
            job.finished_at = _utc_now()
        finally:
            lock.release()


def _utc_now() -> str:
    return datetime.now(timezone.utc).isoformat()
