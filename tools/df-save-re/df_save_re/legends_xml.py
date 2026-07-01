"""Parse Legends / exportlegends XML for cross-checking save RE."""

from __future__ import annotations

import xml.etree.ElementTree as ET
from dataclasses import dataclass, field
from pathlib import Path

_CONTAINER_TAGS: dict[str, tuple[str, bool]] = {
    "historical_events": ("historical_event", True),
    "historical_figures": ("historical_figure", True),
    "sites": ("site", True),
    "entities": ("entity", True),
    "artifacts": ("artifact", True),
    "written_contents": ("written_content", True),
    "historical_event_collections": ("historical_event_collection", True),
    "historical_eras": ("historical_era", False),
    "regions": ("region", True),
    "underground_regions": ("underground_region", True),
}


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
    written_contents: int = 0
    event_collections: int = 0
    eras: int = 0
    regions: int = 0
    underground_regions: int = 0
    max_event_id: int | None = None
    max_figure_id: int | None = None
    max_site_id: int | None = None
    max_entity_id: int | None = None
    event_types: dict[str, int] = field(default_factory=dict)
    notes: list[str] = field(default_factory=list)

    def counts_dict(self) -> dict[str, int]:
        return {
            "historical_events": self.historical_events,
            "historical_figures": self.historical_figures,
            "sites": self.sites,
            "entities": self.entities,
            "artifacts": self.artifacts,
            "written_contents": self.written_contents,
            "event_collections": self.event_collections,
            "eras": self.eras,
            "regions": self.regions,
            "underground_regions": self.underground_regions,
        }


def _container_count(root: ET.Element, container_tag: str, elem_tag: str) -> int:
    container = root.find(container_tag)
    if container is None:
        return 0
    return len(container.findall(elem_tag))


def _max_id_in_container(root: ET.Element, container_tag: str, elem_tag: str) -> int | None:
    container = root.find(container_tag)
    if container is None:
        return None
    ids: list[int] = []
    for elem in container.findall(elem_tag):
        id_elem = elem.find("id")
        if id_elem is not None and id_elem.text and id_elem.text.lstrip("-").isdigit():
            ids.append(int(id_elem.text))
    return max(ids) if ids else None


def parse_legends_xml(path: Path | str) -> LegendsXmlStats:
    path = Path(path)
    try:
        root = ET.parse(path).getroot()
    except ET.ParseError as exc:
        raise ValueError(f"invalid XML in {path}: {exc}") from exc

    stats = LegendsXmlStats(path=str(path))

    name = root.find("name")
    if name is not None and name.text:
        stats.world_name = name.text.strip()
    alt = root.find("altname")
    if alt is not None and alt.text:
        stats.alt_name = alt.text.strip()

    if stats.world_name is None:
        for tag in ("world_info", "world"):
            wi = root.find(f".//{tag}")
            if wi is not None:
                wname = wi.find("name")
                if wname is not None and wname.text:
                    stats.world_name = wname.text.strip()
                    break

    if stats.world_name is None and root.tag:
        stats.notes.append(f"root tag={root.tag!r}; no top-level <name> element")

    stats.historical_events = _container_count(root, "historical_events", "historical_event")
    stats.historical_figures = _container_count(root, "historical_figures", "historical_figure")
    stats.sites = _container_count(root, "sites", "site")
    stats.entities = _container_count(root, "entities", "entity")
    stats.artifacts = _container_count(root, "artifacts", "artifact")
    stats.written_contents = _container_count(root, "written_contents", "written_content")
    stats.event_collections = _container_count(
        root, "historical_event_collections", "historical_event_collection"
    )
    stats.eras = _container_count(root, "historical_eras", "historical_era")
    stats.regions = _container_count(root, "regions", "region")
    stats.underground_regions = _container_count(
        root, "underground_regions", "underground_region"
    )

    stats.max_event_id = _max_id_in_container(root, "historical_events", "historical_event")
    stats.max_figure_id = _max_id_in_container(root, "historical_figures", "historical_figure")
    stats.max_site_id = _max_id_in_container(root, "sites", "site")
    stats.max_entity_id = _max_id_in_container(root, "entities", "entity")

    if stats.historical_events == 0 and stats.historical_figures == 0:
        stats.notes.append(
            "no historical_event or historical_figure elements — "
            "file may be a partial export, wrong format, or not legends XML"
        )
    if stats.artifacts and stats.written_contents:
        stats.notes.append(
            "artifacts section includes books/scrolls; DF UI 'Artifacts' count is smaller"
        )

    events_container = root.find("historical_events")
    if events_container is not None:
        for event in events_container.findall("historical_event"):
            type_elem = event.find("type")
            if type_elem is not None and type_elem.text:
                key = type_elem.text.strip()
                stats.event_types[key] = stats.event_types.get(key, 0) + 1

    return stats


def _within_tolerance(actual: int, expected: int, *, pct: float = 0.01, floor: int = 10) -> bool:
    return abs(actual - expected) <= max(floor, int(expected * pct))


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

    if max_histfig is not None and xml_stats.historical_figures:
        # Header max_ids[8] is the next figure id slot; export count is usually max_id+1.
        figure_ok = (
            _within_tolerance(xml_stats.historical_figures, max_histfig)
            or xml_stats.historical_figures == max_histfig + 1
            or (
                xml_stats.max_figure_id is not None
                and xml_stats.max_figure_id + 1 == xml_stats.historical_figures
                and _within_tolerance(max_histfig, xml_stats.max_figure_id + 1, floor=2)
            )
        )
        if not figure_ok:
            lines.append(
                f"histfig count: save max_ids[8]={max_histfig:,} "
                f"xml figures={xml_stats.historical_figures:,} "
                f"(max id {xml_stats.max_figure_id})"
            )

    if max_event is not None and xml_stats.historical_events:
        # max_ids[9] echoes next event id; compare to max event id first, then count.
        event_ok = False
        if xml_stats.max_event_id is not None:
            event_ok = _within_tolerance(xml_stats.max_event_id + 1, max_event, floor=2) or (
                xml_stats.max_event_id < max_event
                and _within_tolerance(xml_stats.historical_events, max_event)
            )
        if not event_ok and not _within_tolerance(xml_stats.historical_events, max_event):
            lines.append(
                f"event count: save max_ids[9]={max_event:,} "
                f"xml events={xml_stats.historical_events:,} "
                f"(max id {xml_stats.max_event_id})"
            )

    if max_event is not None and xml_stats.max_event_id is not None:
        if xml_stats.max_event_id >= max_event + max(1000, int(max_event * 0.05)):
            lines.append(
                f"max event id: save header {max_event:,} xml max id {xml_stats.max_event_id:,}"
            )
    if max_histfig is not None and xml_stats.max_figure_id is not None:
        if xml_stats.max_figure_id > max_histfig + max(10, int(max_histfig * 0.01)):
            lines.append(
                f"max figure id: save header {max_histfig:,} xml max id {xml_stats.max_figure_id:,}"
            )
    return lines
