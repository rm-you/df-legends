"""Structured historical figure entries from legends *-world_history*.txt exports."""

from __future__ import annotations

import re
from dataclasses import dataclass, field

_RULER = re.compile(
    r"^\[\*\]\s+(.+?)\s+was\s+(?:a|an)\s+(.+?)\s+of\s+(.+?)\s*$"
)
_NAMED_CIV = re.compile(r"^(.+),\s+(Dwarves|Elves|Humans|Goblins|Kobolds)\s*$")
_SUBTERRANEAN = re.compile(r"^(.+?)\s+men\s*$", re.IGNORECASE)
_RACE_SUFFIXES = ("Dwarves", "Elves", "Humans", "Goblins", "Kobolds")


@dataclass(frozen=True)
class HistoryRulerEntry:
    name: str
    position: str
    entity: str
    birth: str = ""
    death: str = ""
    reign_began: int = -1


@dataclass(frozen=True)
class HistoryNamedCiv:
    name: str
    race: str


@dataclass
class HistoryTextCatalog:
    world_name: str | None = None
    alt_name: str | None = None
    named_civs: list[HistoryNamedCiv] = field(default_factory=list)
    subterranean_peoples: list[str] = field(default_factory=list)
    rulers: list[HistoryRulerEntry] = field(default_factory=list)

    @property
    def named_civ_count(self) -> int:
        return len(self.named_civs)

    @property
    def subterranean_count(self) -> int:
        return len(self.subterranean_peoples)

    @property
    def ruler_count(self) -> int:
        return len(self.rulers)


def parse_history_text_catalog(text: str) -> HistoryTextCatalog:
    """Parse world_history.txt into civ lists and ruler entries."""
    from .history_rulers import parse_ruler_catalog

    lines = [ln.rstrip("\r") for ln in text.splitlines()]
    catalog = HistoryTextCatalog()

    non_empty = [ln for ln in lines if ln.strip()]
    if non_empty:
        catalog.world_name = non_empty[0].strip()
    if len(non_empty) > 1:
        second = non_empty[1].strip()
        if ", " not in second or not any(
            second.endswith(f", {race}") for race in _RACE_SUFFIXES
        ):
            catalog.alt_name = second

    in_preamble = True
    for line in lines:
        stripped = line.strip()
        if not stripped:
            continue
        if stripped.startswith("[*]"):
            continue
        if in_preamble and stripped.endswith("men"):
            catalog.subterranean_peoples.append(stripped)
            continue
        if ", " in stripped and " List" not in stripped:
            for race in _RACE_SUFFIXES:
                if stripped.endswith(f", {race}"):
                    catalog.named_civs.append(
                        HistoryNamedCiv(name=stripped[: -len(race) - 2], race=race)
                    )
                    in_preamble = False
                    break

    ruler_catalog = parse_ruler_catalog(text)
    catalog.rulers = [
        HistoryRulerEntry(
            name=r.name,
            position=r.position,
            entity=r.entity,
            birth=r.birth,
            death=r.death,
            reign_began=r.reign_began,
        )
        for r in ruler_catalog.rulers
    ]

    return catalog
