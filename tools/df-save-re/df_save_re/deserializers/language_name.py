"""language_name compound (df.language.xml)."""

from __future__ import annotations

from dataclasses import dataclass

from ..binary_reader import BinaryReader
from .primitives import DfString


@dataclass
class LanguageName:
    first_name: str
    nickname: str
    words: list[int]
    parts_of_speech: list[int]
    language: int
    name_type: int
    has_name: bool
    payload_offset: int = 0
    bytes_consumed: int = 0

    @property
    def display_hint(self) -> str:
        parts = [p for p in (self.first_name, self.nickname) if p]
        return " ".join(parts) if parts else ""


def _read_language_name_body(reader: BinaryReader, *, start: int, has_name: bool) -> LanguageName:
    if not has_name:
        end = reader.tell()
        return LanguageName(
            first_name="",
            nickname="",
            words=[],
            parts_of_speech=[],
            language=-1,
            name_type=0,
            has_name=False,
            payload_offset=start,
            bytes_consumed=end - start,
        )

    first_name = DfString.read(reader).value
    nickname = DfString.read(reader).value
    words = [reader.read_int32() for _ in range(7)]
    parts_of_speech = [reader.read_int16() for _ in range(7)]
    language = reader.read_int32()
    name_type = reader.read_int16()
    end = reader.tell()
    return LanguageName(
        first_name=first_name,
        nickname=nickname,
        words=words,
        parts_of_speech=parts_of_speech,
        language=language,
        name_type=name_type,
        has_name=has_name,
        payload_offset=start,
        bytes_consumed=end - start,
    )


def read_language_name(reader: BinaryReader) -> LanguageName:
    """Read a standalone ``language_name`` (leading ``has_name`` byte on disk)."""
    start = reader.tell()
    has_name = reader.read_bool()
    return _read_language_name_body(reader, start=start, has_name=has_name)


def read_entity_language_name(reader: BinaryReader, *, has_name: bool) -> LanguageName:
    """
    Read ``language_name`` embedded in ``historical_entity``.

    The entity header already stores ``has_name``; the on-disk body omits the
    redundant leading flag byte (``FUN_140315ac0`` only when ``+0x72`` is set).
    """
    start = reader.tell()
    return _read_language_name_body(reader, start=start, has_name=has_name)


_MAX_NAME_STRING = 64


def try_read_language_name(reader: BinaryReader) -> LanguageName | None:
    start = reader.tell()
    try:
        has_name = reader.read_uint8()
        if has_name not in (0, 1):
            reader.seek(start)
            return None
        if has_name:
            first_len = reader.read_int16()
            if first_len < 0 or first_len > _MAX_NAME_STRING:
                reader.seek(start)
                return None
        reader.seek(start)
        name = read_language_name(reader)
    except (EOFError, ValueError):
        reader.seek(start)
        return None
    if len(name.first_name) > _MAX_NAME_STRING or len(name.nickname) > _MAX_NAME_STRING:
        reader.seek(start)
        return None
    if name.language < -1 or name.language > 10_000:
        reader.seek(start)
        return None
    if any(w < -1 or w > 500_000 for w in name.words):
        reader.seek(start)
        return None
    return name
