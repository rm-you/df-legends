"""Complete df-structures XML parser for the deterministic serialization engine.

Parses ``df.*.xml`` struct/class definitions into a field tree that mirrors the
on-disk save layout, including:

- every primitive and container field kind DF serializes,
- inline ``stl-vector`` / ``static-array`` / ``pointer`` / ``compound`` children
  (element templates),
- ``inherits-from`` (resolved by :func:`resolve_fields`),
- ``since=`` / ``before=`` version gating,
- ``is-union`` flagging,
- enum / bitfield ``base-type`` widths,
- ``size_t`` and other previously-dropped kinds.

This module only describes layout; :mod:`df_save_re.deserializers.body_skipper`
consumes the tree to read/skip bytes.
"""

from __future__ import annotations

import re
import xml.etree.ElementTree as ET
from dataclasses import dataclass, field
from pathlib import Path

from ..target import TARGET_DF_VERSION

# Field tags that represent a serialized member (carry bytes on disk).
_FIELD_TAGS = {
    "int8_t",
    "uint8_t",
    "int16_t",
    "uint16_t",
    "int32_t",
    "uint32_t",
    "int64_t",
    "uint64_t",
    "long",
    "size_t",
    "s-float",
    "d-float",
    "bool",
    "flag-bit",
    "enum",
    "bitfield",
    "compound",
    "pointer",
    "static-array",
    "stl-string",
    "ptr-string",
    "static-string",
    "stl-vector",
    "stl-bit-vector",
    "stl-deque",
    "stl-set",
    "df-flagarray",
    "df-static-flagarray",
    "df-array",
    "df-linked-list",
    "padding",
}

# Tags that terminate the serialized prefix of a class (methods carry no bytes).
_STOP_TAGS = {"virtual-methods", "comment", "code-helper", "custom-methods", "extra-include"}


@dataclass
class FieldDef:
    name: str
    kind: str
    type_name: str | None = None
    pointer_type: str | None = None
    base_type: str | None = None
    array_count: int | None = None
    since: str | None = None
    before: str | None = None
    is_union: bool = False
    index_enum: str | None = None
    ref_type: str | None = None
    original_name: str | None = None
    children: list["FieldDef"] = field(default_factory=list)


@dataclass
class StructDef:
    type_name: str
    original_name: str | None
    inherits: str | None
    fields: list[FieldDef] = field(default_factory=list)
    is_class: bool = False
    is_union: bool = False


def _attr(elem: ET.Element, key: str) -> str | None:
    return elem.attrib.get(key)


def _int_attr(elem: ET.Element, key: str) -> int | None:
    raw = elem.attrib.get(key)
    if raw is None:
        return None
    raw = raw.strip()
    try:
        return int(raw, 0)
    except ValueError:
        return None


def _is_union(elem: ET.Element) -> bool:
    return _attr(elem, "is-union") == "true"


# Tags that may carry inline child field templates worth parsing.
_CONTAINER_TAGS = {
    "compound",
    "pointer",
    "stl-vector",
    "static-array",
    "stl-deque",
    "stl-set",
    "df-linked-list",
    "df-array",
}


def _parse_field(child: ET.Element) -> FieldDef | None:
    tag = child.tag
    if tag == "padding":
        return FieldDef(
            name=_attr(child, "name") or "padding",
            kind="padding",
            array_count=_int_attr(child, "size"),
        )
    if tag not in _FIELD_TAGS:
        return None
    # Parse inline children for container-like fields lacking an explicit type.
    children: list[FieldDef] = []
    if tag in _CONTAINER_TAGS:
        children = _parse_fields(child)
    return FieldDef(
        name=_attr(child, "name") or tag,
        kind=tag,
        type_name=_attr(child, "type-name"),
        pointer_type=_attr(child, "pointer-type"),
        base_type=_attr(child, "base-type"),
        array_count=_int_attr(child, "count"),
        since=_attr(child, "since"),
        before=_attr(child, "before"),
        is_union=_is_union(child),
        index_enum=_attr(child, "index-enum"),
        ref_type=_attr(child, "ref-target"),
        original_name=_attr(child, "original-name"),
        children=children,
    )


def _parse_fields(elem: ET.Element) -> list[FieldDef]:
    fields: list[FieldDef] = []
    for child in elem:
        if child.tag == "virtual-methods":
            fields.append(FieldDef(name="virtual-methods", kind="virtual-methods"))
            continue
        if child.tag in _STOP_TAGS:
            continue
        fd = _parse_field(child)
        if fd is not None:
            fields.append(fd)
    return fields


def load_structs_from_file(path: Path | str) -> dict[str, StructDef]:
    root = ET.parse(path).getroot()
    out: dict[str, StructDef] = {}
    for elem in root:
        if elem.tag not in ("struct-type", "class-type"):
            continue
        name = _attr(elem, "type-name")
        if not name:
            continue
        out[name] = StructDef(
            type_name=name,
            original_name=_attr(elem, "original-name"),
            inherits=_attr(elem, "inherits-from"),
            fields=_parse_fields(elem),
            is_class=elem.tag == "class-type",
            is_union=_is_union(elem),
        )
    return out


_STRUCT_XML_GLOB = "df*.xml"
_FILE_CACHE: dict[str, dict[str, StructDef]] = {}
_INDEX_CACHE: dict[str, dict[str, StructDef]] = {}


def _load_all_structs(xml_dir: Path) -> dict[str, StructDef]:
    """Load and merge all struct/class definitions under ``xml_dir`` (cached)."""
    key = str(xml_dir.resolve())
    if key in _INDEX_CACHE:
        return _INDEX_CACHE[key]
    index: dict[str, StructDef] = {}
    for path in sorted(xml_dir.glob(_STRUCT_XML_GLOB)):
        pkey = str(path)
        if pkey not in _FILE_CACHE:
            _FILE_CACHE[pkey] = load_structs_from_file(path)
        for name, struct in _FILE_CACHE[pkey].items():
            index.setdefault(name, struct)
    _INDEX_CACHE[key] = index
    return index


def load_struct(name: str, xml_dir: Path | str) -> StructDef | None:
    return _load_all_structs(Path(xml_dir)).get(name)


# --- version gating ---------------------------------------------------------

_VERSION_RE = re.compile(r"v?0\.(\d+)\.(\d+)")


def _parse_version(text: str | None) -> tuple[int, int, int] | None:
    if not text:
        return None
    m = _VERSION_RE.search(text)
    if not m:
        return None
    return (0, int(m.group(1)), int(m.group(2)))


def _target_version() -> tuple[int, int, int]:
    v = _parse_version(TARGET_DF_VERSION)
    return v or (0, 47, 5)


def field_active(fd: FieldDef, target: tuple[int, int, int] | None = None) -> bool:
    """True if a field is present in the save for the target DF version."""
    target = target or _target_version()
    since = _parse_version(fd.since)
    before = _parse_version(fd.before)
    if since is not None and target < since:
        return False
    if before is not None and target >= before:
        return False
    return True


def resolve_fields(
    struct: StructDef,
    xml_dir: Path | str,
    *,
    target: tuple[int, int, int] | None = None,
    _seen: set[str] | None = None,
) -> list[FieldDef]:
    """Return effective on-disk fields: base classes first, version-gated.

    Stops at the first ``virtual-methods`` marker (no bytes past the vtable for
    the serialized prefix the engine reads).
    """
    target = target or _target_version()
    _seen = _seen or set()
    xml_dir = Path(xml_dir)

    resolved: list[FieldDef] = []
    if struct.inherits and struct.inherits not in _seen:
        _seen.add(struct.inherits)
        parent = load_struct(struct.inherits, xml_dir)
        if parent is not None:
            resolved.extend(
                resolve_fields(parent, xml_dir, target=target, _seen=_seen)
            )

    for fd in struct.fields:
        if fd.kind == "virtual-methods":
            break
        if not field_active(fd, target):
            continue
        resolved.append(fd)
    return resolved


def summarize_fields(struct: StructDef, loadversion: str = TARGET_DF_VERSION) -> list[str]:
    """Human-readable effective field list (for the ``fields`` CLI command)."""
    lines: list[str] = []
    target = _parse_version(loadversion) or _target_version()
    for f in struct.fields:
        if f.kind == "virtual-methods":
            continue
        if not field_active(f, target):
            continue
        type_part = f.type_name or f.pointer_type or f.base_type or f.kind
        suffix = ""
        if f.kind in ("stl-vector", "stl-deque", "stl-set"):
            suffix = f"[]<{f.pointer_type or f.type_name or '?'}>"
        elif f.kind == "static-array":
            suffix = f"[{f.array_count}]"
        lines.append(f"  {type_part} {f.name}{suffix}")
    return lines
