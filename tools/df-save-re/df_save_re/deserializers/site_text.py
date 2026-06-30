"""Structured site records from legends *-world_sites_and_pops*.txt exports."""

from __future__ import annotations

import re
from dataclasses import dataclass, field

_SITE_HEADER = re.compile(
    r"^(\d+):\s+([^,]+),\s+\"([^\"]+)\",\s+(.+)\s*$"
)
_OWNER = re.compile(r"^\s*Owner:\s*(.+)$")
_PARENT = re.compile(r"^\s*Parent Civ:\s*(.+)$")
_POP = re.compile(r"^\s*(\d+)\s+(.+)$")


@dataclass(frozen=True)
class SitePopulationLine:
    count: int
    label: str


@dataclass
class SiteTextRecord:
    site_id: int
    civ_name: str
    display_name: str
    site_type: str
    owner: str | None = None
    parent_civ: str | None = None
    populations: list[SitePopulationLine] = field(default_factory=list)


@dataclass
class SiteTextCatalog:
    records: list[SiteTextRecord]
    total_population: int | None = None

    @property
    def site_count(self) -> int:
        return len(self.records)

    def by_id(self) -> dict[int, SiteTextRecord]:
        return {rec.site_id: rec for rec in self.records}


def parse_site_text_catalog(text: str) -> SiteTextCatalog:
    """Parse a full world_sites_and_pops text export into structured records."""
    total_match = re.search(r"^\s*Total:\s*(\d+)\s*$", text, re.MULTILINE)
    total_population = int(total_match.group(1)) if total_match else None

    records: list[SiteTextRecord] = []
    current: SiteTextRecord | None = None

    for line in text.splitlines():
        header = _SITE_HEADER.match(line)
        if header:
            if current is not None:
                records.append(current)
            current = SiteTextRecord(
                site_id=int(header.group(1)),
                civ_name=header.group(2).strip(),
                display_name=header.group(3).strip(),
                site_type=header.group(4).strip(),
            )
            continue
        if current is None:
            continue
        owner = _OWNER.match(line)
        if owner:
            current.owner = owner.group(1).strip()
            continue
        parent = _PARENT.match(line)
        if parent:
            current.parent_civ = parent.group(1).strip()
            continue
        pop = _POP.match(line)
        if pop:
            current.populations.append(
                SitePopulationLine(count=int(pop.group(1)), label=pop.group(2).strip())
            )

    if current is not None:
        records.append(current)

    return SiteTextCatalog(records=records, total_population=total_population)
