"""SQLite persistence for extracted legends data."""

from .migrate import apply_migrations, create_legends_database
from .paths import DEFAULT_DATA_DIR, fortress_slug, legends_db_path
from .registry import LegendsRegistryEntry, list_legends, register_legends
from .store import ImportResult, import_world_dat, persist_snapshot

__all__ = [
    "DEFAULT_DATA_DIR",
    "ImportResult",
    "LegendsRegistryEntry",
    "apply_migrations",
    "create_legends_database",
    "fortress_slug",
    "import_world_dat",
    "legends_db_path",
    "list_legends",
    "persist_snapshot",
    "register_legends",
]
