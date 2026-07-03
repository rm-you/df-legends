"""Alembic migration helpers for legends SQLite databases."""

from __future__ import annotations

from pathlib import Path

from alembic import command
from alembic.config import Config
from sqlalchemy import create_engine, event
from sqlalchemy.engine import Engine


def _alembic_ini_path() -> Path:
    return Path(__file__).resolve().parents[2] / "alembic.ini"


def sqlite_url(db_path: Path) -> str:
    return f"sqlite:///{db_path.resolve()}"


def _enable_sqlite_foreign_keys(dbapi_conn, _connection_record) -> None:
    cursor = dbapi_conn.cursor()
    cursor.execute("PRAGMA foreign_keys=ON")
    cursor.close()


def make_engine(db_path: Path) -> Engine:
    engine = create_engine(
        sqlite_url(db_path),
        connect_args={"check_same_thread": False},
    )
    event.listen(engine, "connect", _enable_sqlite_foreign_keys)
    return engine


def apply_migrations(db_path: Path, *, revision: str = "head") -> None:
    """Run Alembic upgrades against ``db_path`` (file may not exist yet)."""
    db_path.parent.mkdir(parents=True, exist_ok=True)
    ini_path = _alembic_ini_path()
    cfg = Config(str(ini_path))
    cfg.set_main_option("script_location", str(ini_path.parent / "alembic"))
    cfg.set_main_option("sqlalchemy.url", sqlite_url(db_path))
    command.upgrade(cfg, revision)


def create_legends_database(db_path: Path, *, overwrite: bool = False) -> Engine:
    """
    Create (or replace) a fortress SQLite file and apply all migrations.

    Returns a SQLAlchemy engine bound to the new database.
    """
    if db_path.exists():
        if not overwrite:
            raise FileExistsError(f"legends database already exists: {db_path}")
        db_path.unlink()
    apply_migrations(db_path)
    return make_engine(db_path)
