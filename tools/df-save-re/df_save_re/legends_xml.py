"""Parse Legends / exportlegends XML for cross-checking save RE."""

from __future__ import annotations

import xml.etree.ElementTree as ET
from dataclasses import dataclass, field
from pathlib import Path


@dataclass
class LegendsXmlStats:
    path: str
    world_name: str | None = None
    alt_name: str | None = None
    historical_events: int = 0
    historical_figures: int = 0
    sites: int = 0
    entities: int = 0
    artifacts: int = 0
    max_event_id: int | None = None
    max_figure_id: int | None = None
    event_types: dict[str, int] = field(default_factory=dict)
    notes: list[str] = field(default_factory=list)


def _max_id(parent_tag: str, root: ET.Element) -> int | None:
    ids: list[int] = []
    for elem in root.iter(parent_tag):
        id_elem = elem.find("id")
        if id_elem is not None and id_elem.text and id_elem.text.isdigit():
            ids.append(int(id_elem.text))
    return max(ids) if ids else None


def _count_tag(root: ET.Element, tag: str) -> int:
    return sum(1 for _ in root.iter(tag))


def parse_legends_xml(path: Path | str) -> LegendsXmlStats:
    path = Path(path)
    root = ET.parse(path).getroot()
    stats = LegendsXmlStats(path=str(path))

    # DF 0.47 legends.xml root is often <df_world> or similar; exportlegends may differ.
    name = root.find("name")
    if name is not None and name.text:
        stats.world_name = name.text.strip()
    alt = root.find("altname")
    if alt is not None and alt.text:
        stats.alt_name = alt.text.strip()

    if stats.world_name is None and root.tag:
        stats.notes.append(f"root tag={root.tag!r}; no <name> element")

    stats.historical_events = _count_tag(root, "historical_event")
    stats.historical_figures = _count_tag(root, "historical_figure")
    stats.sites = _count_tag(root, "site")
    stats.entities = _count_tag(root, "entity")
    stats.artifacts = _count_tag(root, "artifact")
    stats.max_event_id = _max_id("historical_event", root)
    stats.max_figure_id = _max_id("historical_figure", root)

    for event in root.iter("historical_event"):
        type_elem = event.find("type")
        if type_elem is not None and type_elem.text:
            key = type_elem.text.strip()
            stats.event_types[key] = stats.event_types.get(key, 0) + 1

    return stats


def compare_with_save_header(
    xml_stats: LegendsXmlStats,
    *,
    world_name: str | None,
    max_histfig: int | None,
    max_event: int | None,
) -> list[str]:
    """Return human-readable comparison lines (empty = all checked fields match)."""
    lines: list[str] = []
    if world_name and xml_stats.world_name and xml_stats.world_name != world_name:
        lines.append(
            f"world name: save={world_name!r} xml={xml_stats.world_name!r}"
            + (f" alt={xml_stats.alt_name!r}" if xml_stats.alt_name else "")
        )
    if max_event is not None and xml_stats.historical_events:
        if abs(xml_stats.historical_events - max_event) > max(10, max_event * 0.01):
            lines.append(
                f"event count: save max_ids[9]={max_event:,} "
                f"xml events={xml_stats.historical_events:,}"
            )
    if max_histfig is not None and xml_stats.historical_figures:
        if abs(xml_stats.historical_figures - max_histfig) > max(10, max_histfig * 0.01):
            lines.append(
                f"histfig count: save max_ids[8]={max_histfig:,} "
                f"xml figures={xml_stats.historical_figures:,}"
            )
    if max_event is not None and xml_stats.max_event_id is not None:
        if xml_stats.max_event_id > max_event:
            lines.append(
                f"max event id: save header {max_event:,} xml max id {xml_stats.max_event_id:,}"
            )
    if max_histfig is not None and xml_stats.max_figure_id is not None:
        if xml_stats.max_figure_id > max_histfig:
            lines.append(
                f"max figure id: save header {max_histfig:,} xml max id {xml_stats.max_figure_id:,}"
            )
    return lines
