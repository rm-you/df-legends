"""Resolve historical_entity language_name fields to display strings."""

from __future__ import annotations

import re
from dataclasses import dataclass

from ..binary_reader import BinaryReader
from .entity_def import HistoricalEntityHeader
from .language_name import LanguageName, read_language_name
from .string_tables import StringTableBlock


@dataclass(frozen=True)
class ResolvedEntityName:
    entity_id: int
    entity_class: str
    language_name: LanguageName
    resolved: str
    source: str  # "words" | "literal" | "empty"


def _word_table(block: StringTableBlock) -> list[str]:
    if len(block.sections) > 8:
        return block.sections[8].names
    return []


def resolve_language_name_display(
    name: LanguageName,
    *,
    words: list[str],
) -> tuple[str, str]:
    """Return (display string, source tag)."""
    literal = " ".join(part for part in (name.first_name, name.nickname) if part).strip()
    if literal:
        return literal, "literal"

    parts: list[str] = []
    for word_idx, pos in zip(name.words, name.parts_of_speech):
        if word_idx < 0:
            continue
        if word_idx < len(words):
            parts.append(words[word_idx])
    if parts:
        return " ".join(parts), "words"
    return "", "empty"


def resolve_entity_name(
    payload: bytes,
    header: HistoricalEntityHeader,
    *,
    words: list[str],
) -> ResolvedEntityName:
    from io import BytesIO

    reader = BinaryReader(BytesIO(payload))
    reader.seek(header.payload_offset + header.header_bytes)
    language_name = read_language_name(reader)
    resolved, source = resolve_language_name_display(language_name, words=words)
    return ResolvedEntityName(
        entity_id=header.entity_id,
        entity_class=header.entity_class,
        language_name=language_name,
        resolved=resolved,
        source=source,
    )


def resolve_named_entities(
    payload: bytes,
    entities: list[HistoricalEntityHeader],
    *,
    block: StringTableBlock,
) -> list[ResolvedEntityName]:
    words = _word_table(block)
    return [
        resolve_entity_name(payload, ent, words=words)
        for ent in entities
        if ent.has_name
    ]


def normalize_civ_name(name: str) -> str:
    """Loose normalization for cross-checking legends text vs language_name words."""
    text = name.upper()
    text = re.sub(r"^THE\s+", "", text)
    text = re.sub(r"[^A-Z0-9 ]+", " ", text)
    text = re.sub(r"\s+", " ", text).strip()
    return text


def civ_name_matches(text_name: str, binary_name: str) -> bool:
    """Return True when a legends text civ title matches a resolved language_name."""
    text = normalize_civ_name(text_name)
    binary = normalize_civ_name(binary_name)
    if not text or not binary:
        return False
    if text == binary or text in binary or binary in text:
        return True
    text_tokens = text.split()
    binary_tokens = binary.split()
    hits = 0
    for token in text_tokens:
        for other in binary_tokens:
            if (
                token == other
                or token.startswith(other)
                or other.startswith(token)
                or (len(token) >= 4 and len(other) >= 4 and token[:4] == other[:4])
            ):
                hits += 1
                break
    need = max(1, min(len(text_tokens), len(binary_tokens)) - 1)
    return hits >= need


def match_civ_name_lists(text_names: list[str], binary_names: list[str]) -> tuple[int, list[str]]:
    """Greedy one-to-one match count and unmatched text civ titles."""
    remaining = list(binary_names)
    unmatched: list[str] = []
    matched = 0
    for text in text_names:
        hit = next((b for b in remaining if civ_name_matches(text, b)), None)
        if hit is None:
            unmatched.append(text)
        else:
            matched += 1
            remaining.remove(hit)
    return matched, unmatched
