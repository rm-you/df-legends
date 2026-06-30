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


def read_language_name(reader: BinaryReader) -> LanguageName:
    start = reader.tell()
    first_name = DfString.read(reader).value
    nickname = DfString.read(reader).value
    words = [reader.read_int32() for _ in range(7)]
    parts_of_speech = [reader.read_int16() for _ in range(7)]
    language = reader.read_int32()
    name_type = reader.read_int16()
    has_name = reader.read_bool()
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


_MAX_NAME_STRING = 64


def try_read_language_name(reader: BinaryReader) -> LanguageName | None:
    start = reader.tell()
    try:
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
