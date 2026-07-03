"""Skip decompile-derived SAVE_LAYOUTS field lists on disk."""

from __future__ import annotations

from ..binary_reader import BinaryReader
from ..deserializers.language_name import read_language_name
from ..deserializers.primitives import DfString

_LINK_BASE_TYPES = {
    "histfig_entity_link": "entity",
    "histfig_site_link": "site",
    "histfig_hf_link": "histfig",
}

_POLYMORPH_BASE_KEYS = {
    "history_event": "history_event",
    "historical_event_collection": "historical_event_collection",
}


def layout_key(base_type: str, tag: int) -> str | None:
    prefix = _POLYMORPH_BASE_KEYS.get(base_type)
    if prefix:
        return f"{prefix}:{tag}"
    link_factory = _LINK_BASE_TYPES.get(base_type)
    if link_factory:
        return f"link:{link_factory}:{tag}"
    return None


def has_layout(base_type: str, tag: int, layouts: dict[str, dict]) -> bool:
    key = layout_key(base_type, tag)
    return key is not None and key in layouts and bool(layouts[key].get("fields"))


def _read_scalar(reader: BinaryReader, field: dict) -> None:
    kind = field.get("kind")
    size = field.get("size")
    if kind == "i16":
        reader.read_int16()
        return
    if kind == "u8":
        reader.read_uint8()
        return
    if kind in ("i32", "scalar") or size == 4:
        reader.read_int32()
        return
    if size == 2:
        reader.read_int16()
        return
    if size == 1:
        reader.read_uint8()
        return
    if isinstance(size, int) and size > 0:
        reader.read_bytes(size)


def read_layout_body(
    reader: BinaryReader,
    fields: list[dict],
    *,
    save_version: int = 1716,
) -> dict:
    """Read one layout field list into a name→value dict."""
    out: dict = {}
    for field in fields:
        vg = field.get("version_gt")
        if vg is not None and save_version <= int(vg, 16):
            continue
        name = field.get("name") or f"f_{field.get('mem_offset')}"
        kind = field.get("kind")
        if kind in ("i32", "scalar") or (kind is None and field.get("size") == 4):
            out[name] = reader.read_int32()
            continue
        if kind == "i16" or (kind is None and field.get("size") == 2):
            out[name] = reader.read_int16()
            continue
        if kind == "u8" or (kind is None and field.get("size") == 1):
            out[name] = reader.read_uint8()
            continue
        if kind == "byte_vector":
            count = reader.read_int32()
            if count < 0 or count > 5_000_000:
                raise ValueError(f"byte_vector count {count}")
            out[name] = list(reader.read_bytes(count))
            continue
        if kind == "i32_vector":
            count = reader.read_int32()
            if count < 0 or count > 5_000_000:
                raise ValueError(f"i32_vector count {count}")
            out[name] = [reader.read_int32() for _ in range(count)]
            continue
        if kind == "i16_vector":
            count = reader.read_int32()
            if count < 0 or count > 5_000_000:
                raise ValueError(f"i16_vector count {count}")
            out[name] = [reader.read_int16() for _ in range(count)]
            continue
        if kind == "string":
            out[name] = DfString.read(reader).value
            continue
        if kind == "stl_string":
            out[name] = reader.read_fixed_string()
            continue
        if kind == "language_name":
            out[name] = read_language_name(reader).words
            continue
        if kind == "temp":
            reader.read_bytes(field.get("size") or 4)
            continue
        if kind == "call":
            continue
        out[name] = reader.read_int32()
    return out


def skip_layout_body(
    reader: BinaryReader,
    fields: list[dict],
    *,
    save_version: int = 1716,
) -> None:
    read_layout_body(reader, fields, save_version=save_version)
