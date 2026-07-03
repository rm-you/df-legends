"""FastAPI query-parameter helpers."""

from __future__ import annotations

from typing import Annotated, Any
from urllib.parse import urlencode

from pydantic import BeforeValidator


def _empty_to_none_int(value: Any) -> int | None:
    if value is None or value == "":
        return None
    if isinstance(value, int):
        return value
    if isinstance(value, str):
        stripped = value.strip()
        if not stripped:
            return None
        return int(stripped)
    return int(value)


def _empty_to_none_str(value: Any) -> str | None:
    if value is None:
        return None
    if isinstance(value, str):
        stripped = value.strip()
        return stripped or None
    return str(value)


OptionalIntQuery = Annotated[int | None, BeforeValidator(_empty_to_none_int)]
OptionalStrQuery = Annotated[str | None, BeforeValidator(_empty_to_none_str)]


def build_page_query(**kwargs: Any) -> str:
    """Build a relative query string, omitting empty/false values."""
    parts: dict[str, str] = {}
    for key, value in kwargs.items():
        if value is None or value == "" or value is False:
            continue
        if value is True:
            parts[key] = "1"
        else:
            parts[key] = str(value)
    return "?" + urlencode(parts) if parts else "?"
