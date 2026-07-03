"""Read dense polymorphic histfig link vectors (entity/site/histfig)."""

from __future__ import annotations

from typing import Any

from ..binary_reader import BinaryReader
from ..structures.layout_dispatch import read_layout_body, skip_layout_body
from ..structures.save_layouts import SAVE_LAYOUTS

# Tag -1 base bodies (FUN_1406fbb40 entity/histfig, FUN_1406fbbb0 site).
_BASE_LINK_FIELDS = {
    "entity": [
        {"mem_offset": 8, "kind": "i32", "size": 4, "name": "target_id"},
        {"mem_offset": 12, "kind": "i16", "size": 2, "name": "link_strength"},
    ],
    "site": [
        {"mem_offset": 8, "kind": "i32", "size": 4, "name": "site_id"},
        {"mem_offset": 12, "kind": "i32", "size": 4, "name": "sub_id"},
        {"mem_offset": 16, "kind": "i32", "size": 4, "name": "entity_id"},
    ],
    "histfig": [
        {"mem_offset": 8, "kind": "i32", "size": 4, "name": "target_id"},
        {"mem_offset": 12, "kind": "i16", "size": 2, "name": "link_strength"},
    ],
}

# Extra field names by factory+tag beyond base target/strength (df.history_figure.xml).
_EXTRA_FIELD_NAMES: dict[tuple[str, int], list[str]] = {
    ("entity", 10): ["assignment_id", "start_year"],
    ("entity", 11): ["assignment_id", "start_year", "end_year"],
    ("entity", 12): ["assignment_id", "start_year"],
    ("entity", 13): ["squad_id", "squad_position", "start_year"],
    ("entity", 14): ["squad_id", "squad_position", "start_year", "end_year"],
    ("entity", 15): ["occupation_id", "start_year"],
    ("entity", 16): ["occupation_id", "start_year", "end_year"],
    ("site", 0): ["occupation_id"],
    ("histfig", 10): ["agreement_id", "agreement_party_id"],
}


def _link_type_name(factory: str, tag: int, symbol: str | None) -> str:
    if tag == -1:
        return "base"
    if symbol:
        prefix = {
            "entity": "histfig_entity_link_",
            "site": "histfig_site_link_",
            "histfig": "histfig_hf_link_",
        }[factory]
        name = symbol.removeprefix(prefix).removesuffix("st")
        return name.replace("_", " ")
    return f"tag_{tag}"


def _layout_fields(factory: str, tag: int) -> list[dict]:
    if tag == -1:
        return _BASE_LINK_FIELDS[factory]
    layout = SAVE_LAYOUTS.get(f"link:{factory}:{tag}")
    if not layout or not layout.get("fields"):
        raise ValueError(f"no layout for link:{factory}:{tag}")
    fields = layout["fields"]
    symbol = layout.get("symbol")
    extras = _EXTRA_FIELD_NAMES.get((factory, tag), [])
    out: list[dict] = []
    scalar_idx = 0
    for fd in fields:
        kind = fd.get("kind")
        if kind not in ("i32", "i16", "u8", "scalar"):
            continue
        if scalar_idx == 0:
            name = "target_id" if factory != "site" else "site_id"
        elif scalar_idx == 1:
            name = "link_strength" if factory != "site" else "sub_id"
        elif scalar_idx == 2 and factory == "site":
            name = "entity_id"
        elif scalar_idx - (3 if factory == "site" else 2) < len(extras):
            name = extras[scalar_idx - (3 if factory == "site" else 2)]
        else:
            name = f"f_{fd.get('mem_offset')}"
        out.append({**fd, "name": name})
        scalar_idx += 1
    if not out:
        raise ValueError(f"no scalar fields for link:{factory}:{tag}")
    return out


def read_figure_links(
    reader: BinaryReader,
    factory: str,
    *,
    save_version: int = 1716,
) -> list[dict[str, Any]]:
    """Read one dense polymorphic link vector; return typed link dicts."""
    count = reader.read_int32()
    if count < 0 or count > 100_000:
        raise ValueError(f"implausible {factory} link count {count} at 0x{reader.tell() - 4:x}")
    links: list[dict[str, Any]] = []
    for _ in range(count):
        tag = reader.read_int16()
        layout = SAVE_LAYOUTS.get(f"link:{factory}:{tag}") if tag != -1 else None
        symbol = (layout or {}).get("symbol") or (layout or {}).get("struct")
        fields = _layout_fields(factory, tag)
        body = read_layout_body(reader, fields, save_version=save_version)
        link_type = _link_type_name(factory, tag, symbol)
        target_id = body.get("target_id") or body.get("site_id")
        rec: dict[str, Any] = {
            "category": factory,
            "tag": tag,
            "link_type": link_type,
            "target_id": target_id,
            **body,
        }
        links.append(rec)
    return links


def skip_figure_links(reader: BinaryReader, factory: str, *, save_version: int = 1716) -> int:
    """Skip one link vector; return count."""
    count = reader.read_int32()
    if count < 0 or count > 100_000:
        raise ValueError(f"implausible {factory} link count {count} at 0x{reader.tell() - 4:x}")
    for _ in range(count):
        tag = reader.read_int16()
        fields = _layout_fields(factory, tag)
        skip_layout_body(reader, fields, save_version=save_version)
    return count
