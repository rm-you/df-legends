"""Ruler entries from legends text + binary name-marker scan."""

from __future__ import annotations

import re
import struct
from dataclasses import dataclass, field

from .history_text import HistoryRulerEntry, HistoryTextCatalog
from .site_names import decompose_display_name_candidates, decompose_display_name_to_word_indices

_RULER_LINE = re.compile(
    r"^\[\*\]\s+(.+?)\s+\(b\.(?P<birth>[^)]*)\s+d\.\s*(?P<death>[^,)]*),"
    r"\s*Reign Began:\s*(?P<reign>\d+)\)",
    re.IGNORECASE,
)
_POSITION_LIST = re.compile(r"^\s*(.+?)\s+List\s*$")
_RACE_SUFFIXES = ("Dwarves", "Elves", "Humans", "Goblins", "Kobolds")


@dataclass(frozen=True)
class ParsedRulerEntry:
    """Structured ruler row from *-world_history*.txt."""

    name: str
    position: str
    entity: str
    birth: str
    death: str
    reign_began: int
    raw_line: str


@dataclass(frozen=True)
class RulerNameMarker:
    """language_name word run located in world.dat."""

    ruler_name: str
    word_indices: tuple[int, ...]
    payload_offset: int
    match_kind: str  # "words" | "prefix"


@dataclass
class RulerCatalog:
    rulers: list[ParsedRulerEntry] = field(default_factory=list)
    markers: list[RulerNameMarker] = field(default_factory=list)
    notes: list[str] = field(default_factory=list)

    @property
    def ruler_count(self) -> int:
        return len(self.rulers)

    @property
    def marker_count(self) -> int:
        return len(self.markers)

    @property
    def matched_count(self) -> int:
        return len({m.ruler_name for m in self.markers})


def parse_ruler_catalog(text: str) -> RulerCatalog:
    """Parse ruler lines with civ/position context from world_history.txt."""
    lines = [ln.rstrip("\r") for ln in text.splitlines()]
    catalog = RulerCatalog()
    current_entity = ""
    current_position = ""

    for line in lines:
        stripped = line.strip()
        if not stripped:
            continue

        pos_match = _POSITION_LIST.match(line)
        if pos_match and not stripped.startswith("[*]"):
            current_position = pos_match.group(1).strip().lower()
            continue

        if ", " in stripped and " List" not in stripped:
            for race in _RACE_SUFFIXES:
                if stripped.endswith(f", {race}"):
                    current_entity = stripped[: -len(race) - 2].strip()
                    break

        if not stripped.startswith("[*]"):
            continue

        raw = stripped[3:].strip()
        match = _RULER_LINE.match(stripped)
        if match:
            catalog.rulers.append(
                ParsedRulerEntry(
                    name=match.group(1).strip(),
                    position=current_position,
                    entity=current_entity,
                    birth=match.group("birth").strip(),
                    death=match.group("death").strip(),
                    reign_began=int(match.group("reign")),
                    raw_line=raw,
                )
            )
        else:
            name = raw.split("(")[0].strip() if "(" in raw else raw
            catalog.rulers.append(
                ParsedRulerEntry(
                    name=name,
                    position=current_position,
                    entity=current_entity,
                    birth="",
                    death="",
                    reign_began=-1,
                    raw_line=raw,
                )
            )

    return catalog


def _find_word_run(payload: bytes, words: tuple[int, ...], *, start: int, end: int) -> int | None:
    if len(words) < 2:
        return None
    needle = struct.pack(f"<{len(words)}i", *words)
    hit = payload.find(needle, start, end)
    return hit if hit >= 0 else None


def scan_ruler_name_markers(
    payload: bytes,
    rulers: list[ParsedRulerEntry],
    *,
    words: list[str],
    search_start: int,
    search_end: int,
) -> list[RulerNameMarker]:
    """
    Locate ruler surname word runs in the history gap (stats echo → figure bodies).

    Dwarf/king names often store surnames as ``language_name.words`` without a
    contiguous literal first name in this region.
    """
    markers: list[RulerNameMarker] = []
    seen: set[tuple[str, int]] = set()

    for ruler in rulers:
        candidates = decompose_display_name_candidates(ruler.name, words=words)
        parts = ruler.name.split()
        if len(parts) >= 2:
            surname = parts[-1]
            candidates.extend(
                decompose_display_name_candidates(surname, words=words)
            )
        deduped: list[tuple[int, ...]] = []
        seen_c: set[tuple[int, ...]] = set()
        for cand in candidates:
            if cand not in seen_c:
                seen_c.add(cand)
                deduped.append(cand)
        candidates = deduped
        if not candidates:
            idx = decompose_display_name_to_word_indices(ruler.name, words=words)
            if idx:
                candidates = [idx]

        for word_indices in candidates:
            offset = _find_word_run(
                payload,
                word_indices,
                start=search_start,
                end=search_end,
            )
            if offset is None and len(word_indices) >= 2:
                offset = _find_word_run(
                    payload,
                    word_indices[:2],
                    start=search_start,
                    end=search_end,
                )
                kind = "prefix"
            else:
                kind = "words"
            if offset is None:
                continue
            key = (ruler.name, offset)
            if key in seen:
                break
            seen.add(key)
            markers.append(
                RulerNameMarker(
                    ruler_name=ruler.name,
                    word_indices=word_indices[: len(word_indices)],
                    payload_offset=offset,
                    match_kind=kind,
                )
            )
            break

    return markers


def build_ruler_catalog(
    text: str,
    payload: bytes,
    *,
    words: list[str],
    search_start: int,
    search_end: int,
) -> RulerCatalog:
    catalog = parse_ruler_catalog(text)
    catalog.markers = scan_ruler_name_markers(
        payload,
        catalog.rulers,
        words=words,
        search_start=search_start,
        search_end=search_end,
    )
    if catalog.markers:
        catalog.notes.append(
            f"{catalog.matched_count}/{catalog.ruler_count} rulers have "
            f"name word markers in 0x{search_start:x}–0x{search_end:x}"
        )
    else:
        catalog.notes.append(
            "no ruler name word markers in history gap — "
            "histfig id map still requires body walk"
        )
    return catalog


def ruler_entries_from_text_catalog(catalog: HistoryTextCatalog) -> list[HistoryRulerEntry]:
    """Convert legacy history_text catalog entries (name-only rows)."""
    return list(catalog.rulers)
