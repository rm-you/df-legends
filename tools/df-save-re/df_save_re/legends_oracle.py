"""Verify-only legends.xml oracle for field-level validation of binary extraction.

This module is a *ground-truth oracle*. It is NEVER imported by
``extract_legends_snapshot`` or any binary parsing path — it exists purely so
tests and the ``verify`` command can compare deterministic binary output to a
DFHack ``exportlegends`` XML when one is available.

DFHack's ``exportlegends`` writes a ``*-legends.xml`` whose root is
``<df_world>`` containing record lists: ``<historical_figures>``,
``<historical_events>``, ``<sites>``, ``<entities>``, ``<artifacts>``,
``<written_contents>``, ``<historical_event_collections>``,
``<historical_eras>``, ``<regions>``, ``<underground_regions>``.

If no legends XML is present (the common case here — generating one requires
running DF + DFHack), :func:`resolve_oracle` returns ``None`` and callers fall
back to header counters + exact anchor-landing as the correctness signal.
"""

from __future__ import annotations

import xml.etree.ElementTree as ET
from dataclasses import dataclass, field
from pathlib import Path

# Record kind -> (container tag, element tag, id required on element)
_RECORD_KINDS: dict[str, tuple[str, str, bool]] = {
    "sites": ("sites", "site", True),
    "figures": ("historical_figures", "historical_figure", True),
    "events": ("historical_events", "historical_event", True),
    "entities": ("entities", "entity", True),
    "artifacts": ("artifacts", "artifact", True),
    "written_contents": ("written_contents", "written_content", True),
    "event_collections": (
        "historical_event_collections",
        "historical_event_collection",
        True,
    ),
    "eras": ("historical_eras", "historical_era", False),
    "regions": ("regions", "region", True),
    "underground_regions": ("underground_regions", "underground_region", True),
}


@dataclass
class OracleRecords:
    """Per-id field maps for one record kind from legends XML."""

    kind: str
    by_id: dict[int, dict[str, str]] = field(default_factory=dict)

    @property
    def count(self) -> int:
        return len(self.by_id)

    @property
    def max_id(self) -> int | None:
        return max(self.by_id) if self.by_id else None

    def field_value(self, record_id: int, field_name: str) -> str | None:
        rec = self.by_id.get(record_id)
        return rec.get(field_name) if rec else None


@dataclass
class LegendsOracle:
    """Field-level ground truth loaded from a DFHack exportlegends XML."""

    path: str
    world_name: str | None = None
    alt_name: str | None = None
    records: dict[str, OracleRecords] = field(default_factory=dict)
    notes: list[str] = field(default_factory=list)

    def count(self, kind: str) -> int:
        recs = self.records.get(kind)
        return recs.count if recs else 0

    def max_id(self, kind: str) -> int | None:
        recs = self.records.get(kind)
        return recs.max_id if recs else None

    def kind(self, name: str) -> OracleRecords | None:
        return self.records.get(name)

    def counts_summary(self) -> dict[str, int]:
        return {kind: self.count(kind) for kind in _RECORD_KINDS}


def _scalar_fields(elem: ET.Element) -> dict[str, str]:
    """Collect direct scalar child fields (text-only leaves) into a dict."""
    out: dict[str, str] = {}
    for child in elem:
        if len(child) == 0 and child.text is not None:
            text = child.text.strip()
            if text:
                out[child.tag] = text
    return out


def _record_id(fields: dict[str, str]) -> int | None:
    raw = fields.get("id")
    if raw is None:
        return None
    try:
        return int(raw)
    except ValueError:
        return None


def _parse_container_records(
    root: ET.Element,
    *,
    kind: str,
    container_tag: str,
    elem_tag: str,
    id_required: bool,
) -> OracleRecords:
    """Parse top-level records from one exportlegends container section."""
    records = OracleRecords(kind=kind)
    container = root.find(container_tag)
    if container is None:
        return records

    for index, record in enumerate(container.findall(elem_tag)):
        fields = _scalar_fields(record)
        rid = _record_id(fields)
        if rid is None:
            if id_required:
                continue
            rid = index
        records.by_id[rid] = fields
    return records


def parse_legends_oracle(path: Path | str) -> LegendsOracle:
    """Parse a DFHack exportlegends XML into per-id field maps."""
    path = Path(path)
    root = ET.parse(path).getroot()
    oracle = LegendsOracle(path=str(path))

    name = root.find("name")
    if name is not None and name.text:
        oracle.world_name = name.text.strip()
    alt = root.find("altname")
    if alt is not None and alt.text:
        oracle.alt_name = alt.text.strip()

    for kind, (container_tag, elem_tag, id_required) in _RECORD_KINDS.items():
        parsed = _parse_container_records(
            root,
            kind=kind,
            container_tag=container_tag,
            elem_tag=elem_tag,
            id_required=id_required,
        )
        if parsed.by_id:
            oracle.records[kind] = parsed

    if not oracle.records:
        oracle.notes.append(
            f"no recognized legends records in {path.name}; "
            "file may be partial or not an exportlegends XML"
        )
    elif oracle.count("eras") and oracle.max_id("eras") == 0:
        oracle.notes.append(
            "historical_eras have no <id> in exportlegends; stored by section index"
        )
    return oracle


def find_legends_xml(*, save_path: Path | str | None = None) -> Path | None:
    """Locate a ``*-legends.xml`` beside the save (and nearby export dirs)."""
    if save_path is None:
        return None
    from .legends_exports import discover_legends_exports

    bundle = discover_legends_exports(save_path)
    return bundle.legends_xml


def resolve_oracle(*, save_path: Path | str | None = None) -> LegendsOracle | None:
    """Return a parsed oracle if a legends XML is available, else ``None``."""
    xml_path = find_legends_xml(save_path=save_path)
    if xml_path is None:
        return None
    try:
        return parse_legends_oracle(xml_path)
    except (ET.ParseError, OSError):
        return None
