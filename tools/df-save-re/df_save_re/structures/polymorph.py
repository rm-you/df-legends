"""Polymorphic class dispatch from df-structures.

DF serializes a pointer to a polymorphic object (e.g. ``history_event*``,
``histfig_entity_link*``) by writing a discriminator (the type enum) before the
body so the loader can construct the right subclass. This module builds, for a
polymorphic base class, the mapping ``tag value -> concrete subclass``.

Mapping strategy (no game binary available, so derived from df-structures):

1. The discriminator enum is ``{base}_type`` by convention
   (``history_event`` -> ``history_event_type``).
2. Enum items define ``tag value -> item name`` (honoring explicit ``value=``).
3. Each subclass ``class-type`` that ``inherits-from`` the base is matched to an
   enum item by normalizing names (item ``WAR_PEACE_ACCEPTED`` <->
   ``history_event_war_peace_acceptedst`` / ``history_event_war_peace_accepted``).
"""

from __future__ import annotations

import re
import xml.etree.ElementTree as ET
from dataclasses import dataclass, field
from pathlib import Path


@dataclass
class PolymorphRegistry:
    base_type: str
    enum_type: str | None
    tag_to_subclass: dict[int, str] = field(default_factory=dict)
    tag_width: int = 2  # int16 discriminator by default

    def subclass_for(self, tag: int) -> str | None:
        return self.tag_to_subclass.get(tag)


def _norm(text: str) -> str:
    return re.sub(r"[^a-z0-9]", "", text.lower())


_GLOB = "df*.xml"
_BASE_SUBCLASS_CACHE: dict[str, dict[str, list[str]]] = {}
_ENUM_CACHE: dict[str, dict[str, list[tuple[int, str]]]] = {}
_REGISTRY_CACHE: dict[tuple[str, str], PolymorphRegistry | None] = {}


def _scan(xml_dir: Path) -> tuple[dict[str, list[str]], dict[str, list[tuple[int, str]]]]:
    """Return (base -> [subclasses], enum_name -> [(value, item_name)])."""
    key = str(xml_dir.resolve())
    if key in _BASE_SUBCLASS_CACHE:
        return _BASE_SUBCLASS_CACHE[key], _ENUM_CACHE[key]

    subclasses: dict[str, list[str]] = {}
    enums: dict[str, list[tuple[int, str]]] = {}
    for path in sorted(xml_dir.glob(_GLOB)):
        root = ET.parse(path).getroot()
        for elem in root.iter():
            tag = elem.tag
            if tag == "class-type":
                parent = elem.attrib.get("inherits-from")
                name = elem.attrib.get("type-name")
                if parent and name:
                    subclasses.setdefault(parent, []).append(name)
            elif tag == "enum-type":
                name = elem.attrib.get("type-name")
                if not name:
                    continue
                items: list[tuple[int, str]] = []
                value = 0
                for item in elem:
                    if item.tag != "enum-item":
                        continue
                    explicit = item.attrib.get("value")
                    if explicit is not None:
                        try:
                            value = int(explicit, 0)
                        except ValueError:
                            pass
                    item_name = item.attrib.get("name") or item.attrib.get("original-name")
                    if item_name:
                        items.append((value, item_name))
                    value += 1
                if items:
                    enums[name] = items

    _BASE_SUBCLASS_CACHE[key] = subclasses
    _ENUM_CACHE[key] = enums
    return subclasses, enums


def is_polymorphic(base_type: str, xml_dir: Path | str) -> bool:
    subclasses, _ = _scan(Path(xml_dir))
    return bool(subclasses.get(base_type))


def build_registry(base_type: str, xml_dir: Path | str) -> PolymorphRegistry | None:
    xml_dir = Path(xml_dir)
    cache_key = (base_type, str(xml_dir.resolve()))
    if cache_key in _REGISTRY_CACHE:
        return _REGISTRY_CACHE[cache_key]

    subclasses, enums = _scan(xml_dir)
    subs = subclasses.get(base_type)
    if not subs:
        _REGISTRY_CACHE[cache_key] = None
        return None

    enum_type = f"{base_type}_type"
    items = enums.get(enum_type)
    registry = PolymorphRegistry(base_type=base_type, enum_type=enum_type if items else None)

    if items:
        # Index subclasses by normalized name for matching against enum items.
        by_norm: dict[str, str] = {}
        for sub in subs:
            norm = _norm(sub)
            by_norm[norm] = sub
            # also without base prefix and trailing 'st'
            stripped = norm
            if stripped.startswith(_norm(base_type)):
                stripped = stripped[len(_norm(base_type)) :]
            if stripped.endswith("st"):
                stripped = stripped[:-2]
            by_norm.setdefault(stripped, sub)

        base_norm = _norm(base_type)
        for value, item_name in items:
            item_norm = _norm(item_name)
            candidates = [
                item_norm,
                base_norm + item_norm,
                base_norm + item_norm + "st",
            ]
            for cand in candidates:
                if cand in by_norm:
                    registry.tag_to_subclass[value] = by_norm[cand]
                    break

    _REGISTRY_CACHE[cache_key] = registry
    return registry
