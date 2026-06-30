"""Minimal parser for df-structures XML — field order for RE cross-reference."""

from __future__ import annotations

import re
import xml.etree.ElementTree as ET
from dataclasses import dataclass, field
from pathlib import Path

from ..target import TARGET_SAVE_VERSION


@dataclass
class FieldDef:
    name: str
    kind: str
    type_name: str | None = None
    since: str | None = None
    original_name: str | None = None


@dataclass
class StructDef:
    type_name: str
    original_name: str | None
    inherits: str | None
    fields: list[FieldDef] = field(default_factory=list)
    is_class: bool = False


_FIELD_TAGS = {
    "int8_t",
    "int16_t",
    "int32_t",
    "uint8_t",
    "uint16_t",
    "uint32_t",
    "uint64_t",
    "bool",
    "enum",
    "bitfield",
    "compound",
    "pointer",
    "static-array",
    "stl-string",
    "stl-vector",
    "df-flagarray",
    "df-static-flagarray",
    "df-array",
}


def _attr(elem: ET.Element, key: str) -> str | None:
    return elem.attrib.get(key)


def load_structs_from_file(path: Path | str) -> dict[str, StructDef]:
    root = ET.parse(path).getroot()
    out: dict[str, StructDef] = {}
    for elem in root:
        tag = elem.tag
        if tag == "struct-type":
            name = _attr(elem, "type-name")
            if not name:
                continue
            out[name] = StructDef(
                type_name=name,
                original_name=_attr(elem, "original-name"),
                inherits=_attr(elem, "inherits-from"),
                fields=_parse_fields(elem),
            )
        elif tag == "class-type":
            name = _attr(elem, "type-name")
            if not name:
                continue
            fields = _parse_fields(elem)
            # Exclude virtual-methods subtree
            fields = [f for f in fields if f.kind != "virtual-methods"]
            out[name] = StructDef(
                type_name=name,
                original_name=_attr(elem, "original-name"),
                inherits=_attr(elem, "inherits-from"),
                fields=fields,
                is_class=True,
            )
    return out


def _parse_fields(elem: ET.Element) -> list[FieldDef]:
    fields: list[FieldDef] = []
    for child in elem:
        if child.tag in _FIELD_TAGS:
            fields.append(
                FieldDef(
                    name=_attr(child, "name") or child.tag,
                    kind=child.tag,
                    type_name=_attr(child, "type-name"),
                    since=_attr(child, "since"),
                    original_name=_attr(child, "original-name"),
                )
            )
        elif child.tag == "virtual-methods":
            fields.append(FieldDef(name="virtual-methods", kind="virtual-methods"))
    return fields


def load_struct(name: str, xml_dir: Path | str) -> StructDef | None:
    xml_dir = Path(xml_dir)
    # Map type names to files heuristically
    candidates = [
        xml_dir / "df.history_event.xml",
        xml_dir / "df.history_figure.xml",
        xml_dir / "df.history.xml",
        xml_dir / "df.world.xml",
    ]
    for path in candidates:
        if not path.exists():
            continue
        structs = load_structs_from_file(path)
        if name in structs:
            return structs[name]
    return None


def summarize_fields(struct: StructDef, loadversion: int = TARGET_SAVE_VERSION) -> list[str]:
    """Human-readable field list respecting `since` tags where parseable."""
    lines: list[str] = []
    for f in struct.fields:
        if f.kind == "virtual-methods":
            continue
        if f.since:
            m = re.search(r"v0\.(\d+)\.(\d+)", f.since)
            if m:
                major, minor = int(m.group(1)), int(m.group(2))
                # Rough gate: 0.47.05 includes since v0.47.01
                if major > 47 or (major == 47 and minor > 5):
                    continue
        type_part = f.type_name or f.kind
        lines.append(f"  {type_part} {f.name}")
    return lines
