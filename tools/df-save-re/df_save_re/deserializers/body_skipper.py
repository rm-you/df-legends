"""Deterministic df-structures serialization engine (read / skip records).

Walks the on-disk byte stream for a struct using the complete field tree from
:mod:`df_save_re.structures.xml_fields`, handling every field kind DF
serializes, inheritance, version gating, unions, and polymorphic pointer
dispatch.

Two entry points:

- :func:`skip_struct` / :func:`skip_struct_bytes` advance the cursor (no values).
- :func:`read_struct` captures scalar field values into a dict.

Serialization conventions (DF 0.47.05 compressed save), several empirically
validated by the existing site / histfig readers:

- ``language_name`` -> dedicated reader; ``coord2d`` -> 2x int32; ``coord`` -> 3x int32.
- ``stl-string`` -> int16 length + bytes.
- primitive ``stl-vector`` -> int32 count + count*width.
- pointer/compound ``stl-vector`` -> int32 count + count presence bytes
  (aligned to 4) + concatenated present bodies (posnull pattern).
- polymorphic ``stl-vector`` -> int32 count + int32 presence flags + bodies.
- owned ``pointer`` -> int32 presence flag + inline body; reference -> int32 id.
- polymorphic element -> int16 type tag + subclass body.
- ``df-flagarray`` -> int32 count + count*4 bytes.
"""

from __future__ import annotations

import struct
from io import BytesIO
from pathlib import Path

from ..binary_reader import BinaryReader
from ..structures.polymorph import build_registry, is_polymorphic
from ..structures.xml_fields import FieldDef, StructDef, enum_storage_width, enum_type_width, load_struct, resolve_fields
from .language_name import read_language_name
from .primitives import DfString

_MAX_VECTOR = 5_000_000


class SkipError(ValueError):
    """Raised when the engine cannot deterministically advance the cursor."""


def default_xml_dir() -> Path:
    return Path(__file__).resolve().parents[4] / "data" / "df-structures"


# Fixed byte widths for scalar field kinds (None => special handling).
_SCALAR_WIDTH: dict[str, int] = {
    "int8_t": 1,
    "uint8_t": 1,
    "bool": 1,
    "flag-bit": 1,
    "int16_t": 2,
    "uint16_t": 2,
    "int32_t": 4,
    "uint32_t": 4,
    "s-float": 4,
    "int64_t": 8,
    "uint64_t": 8,
    "long": 8,
    "size_t": 8,
    "d-float": 8,
}

_PRIMITIVE_TYPE_WIDTH: dict[str, int] = {
    "int8_t": 1,
    "uint8_t": 1,
    "bool": 1,
    "int16_t": 2,
    "uint16_t": 2,
    "int32_t": 4,
    "uint32_t": 4,
    "s-float": 4,
    "int64_t": 8,
    "uint64_t": 8,
    "long": 8,
    "size_t": 8,
}

# Structs with empirically validated fixed layouts (override XML walking).
_SPECIAL_SIZES: dict[str, int] = {
    "coord2d": 8,   # 2x int32 (validated by world_site header reader)
    "coord": 12,    # 3x int32
}

from .save_profiles import (
    HISTFIG_LINKS_MAX_COUNT,
    HISTFIG_TAIL_FIELDS,
    SAVE_EMPTY_POLY_TAIL,
    SAVE_OMIT_FIELDS,
    SAVE_POLYMORPH_BODY_BYTES,
    SAVE_REFERENCE_POINTERS,
    SAVE_STRUCT_BODY_BYTES,
    SAVE_VECTOR_TAIL,
    SAVE_WG_RELATIONSHIP_BODY_BYTES,
    align_histfig_links_start,
    empty_poly_tail,
    get_profile,
    omit_field,
    reference_pointer,
    vector_tail,
)


def _enum_width(base_type: str | None) -> int:
    if base_type in ("int8_t", "uint8_t"):
        return 1
    if base_type in ("int16_t", "uint16_t"):
        return 2
    if base_type in ("int64_t", "uint64_t"):
        return 8
    return 4


def _save_vector_tail(struct_name: str | None, field_name: str) -> int:
    return vector_tail(struct_name, field_name)


def _save_empty_poly_tail(struct_name: str | None, field_name: str) -> int:
    return empty_poly_tail(struct_name, field_name)


def _save_omit_field(struct_name: str, field_name: str) -> bool:
    return omit_field(struct_name, field_name)


def _save_reference_pointer(struct_name: str, field_name: str) -> bool:
    return reference_pointer(struct_name, field_name)


def _align4(reader: BinaryReader) -> None:
    while reader.tell() % 4:
        reader.read_uint8()


def _read_scalar_value(reader: BinaryReader, kind: str) -> int | float:
    if kind in ("int8_t",):
        return reader.read_int8()
    if kind in ("uint8_t", "bool", "flag-bit"):
        return reader.read_uint8()
    if kind == "int16_t":
        return reader.read_int16()
    if kind == "uint16_t":
        return reader.read_uint16()
    if kind in ("int32_t",):
        return reader.read_int32()
    if kind == "uint32_t":
        return reader.read_uint32()
    if kind in ("int64_t", "long"):
        return reader.read_int64()
    if kind in ("uint64_t", "size_t"):
        return reader.read_uint64()
    if kind == "s-float":
        return reader.read_float()
    if kind == "d-float":
        return reader.read_double()
    raise SkipError(f"not a scalar kind: {kind}")


def _skip_primitive_vector(
    reader: BinaryReader,
    width: int,
    *,
    struct_name: str | None = None,
    field_name: str | None = None,
) -> int:
    count = reader.read_int32()
    if count < 0 or count > _MAX_VECTOR:
        raise SkipError(f"implausible vector count {count} at 0x{reader.tell() - 4:x}")
    if count and width:
        reader.read_bytes(count * width)
    if count and struct_name and field_name:
        tail = _save_vector_tail(struct_name, field_name)
        if tail:
            reader.read_bytes(tail)
    return count


def _element_type(field: FieldDef) -> str | None:
    if field.type_name:
        return field.type_name
    if field.pointer_type:
        return field.pointer_type
    # Inline single-pointer child template (e.g. stl-vector of anonymous pointer).
    if len(field.children) == 1 and field.children[0].kind == "pointer":
        ptr = field.children[0]
        return ptr.type_name
    return None


def _skip_pointer_body(
    reader: BinaryReader,
    field: FieldDef,
    *,
    xml_dir: Path,
    struct_name: str | None = None,
) -> None:
    """Skip the body of one present pointer element."""
    elem_type = _element_type(field)
    if elem_type is not None and elem_type in _PRIMITIVE_TYPE_WIDTH:
        reader.read_bytes(_PRIMITIVE_TYPE_WIDTH[elem_type])
        return
    if elem_type is not None:
        if is_polymorphic(elem_type, xml_dir):
            _read_polymorphic(reader, elem_type, xml_dir=xml_dir)
        else:
            skip_struct(reader, elem_type, xml_dir=xml_dir)
        return
    # Inline pointer with anonymous compound children.
    if len(field.children) == 1 and field.children[0].kind == "pointer":
        for sub in field.children[0].children:
            skip_field(reader, sub, xml_dir=xml_dir, struct_name=struct_name)
        return
    if field.children:
        for sub in field.children:
            skip_field(reader, sub, xml_dir=xml_dir, struct_name=struct_name)
        return
    raise SkipError(f"cannot resolve pointer element for field {field.name!r}")


def _skip_pointer_vector(
    reader: BinaryReader,
    field: FieldDef,
    *,
    xml_dir: Path,
    struct_name: str | None = None,
) -> int:
    """Skip a posnull stl-vector of pointers: count + flags + present bodies."""
    count = reader.read_int32()
    if count < 0 or count > _MAX_VECTOR:
        raise SkipError(f"implausible pointer vector count {count} at 0x{reader.tell() - 4:x}")
    elem_type = _element_type(field)
    polymorphic = elem_type is not None and is_polymorphic(elem_type, xml_dir)
    if polymorphic:
        # Polymorphic link vectors use int32 presence flags (validated on histfig entity_links).
        present = [reader.read_int32() != 0 for _ in range(count)]
    else:
        present = [reader.read_bool() for _ in range(count)]
        if count:
            _align4(reader)
    if polymorphic and count == 0:
        tail = _save_empty_poly_tail(struct_name, field.name)
        if tail:
            reader.read_bytes(tail)
    for is_present in present:
        if is_present:
            _skip_pointer_body(reader, field, xml_dir=xml_dir, struct_name=struct_name)
    return count


def _read_polymorphic(reader: BinaryReader, base_type: str, *, xml_dir: Path) -> str:
    """Read an int16 type tag, then the resolved subclass body."""
    registry = build_registry(base_type, xml_dir)
    tag = reader.read_int16()
    fixed = SAVE_POLYMORPH_BODY_BYTES.get((base_type, tag))
    if fixed is not None:
        reader.read_bytes(fixed)
        return base_type
    if registry is None:
        raise SkipError(f"no polymorph registry for {base_type!r}")
    subclass = registry.subclass_for(tag)
    if subclass is None:
        subclass = base_type
    skip_struct(reader, subclass, xml_dir=xml_dir)
    return subclass


def skip_field(
    reader: BinaryReader,
    field: FieldDef,
    *,
    xml_dir: Path,
    struct_name: str | None = None,
    payload: bytes | None = None,
) -> None:
    """Skip one field by fully reading it (unified with :func:`read_field`)."""
    from .record_reader import read_field

    read_field(
        reader,
        field,
        xml_dir=xml_dir,
        struct_name=struct_name,
        payload=payload,
    )


def _struct_def(type_name: str, xml_dir: Path) -> StructDef | None:
    return load_struct(type_name, xml_dir)


def skip_struct(
    reader: BinaryReader,
    type_name: str,
    *,
    xml_dir: Path | None = None,
    payload: bytes | None = None,
) -> int:
    """Skip a struct by fully reading it and discarding values. Returns bytes consumed."""
    from .record_reader import read_struct as _read_struct_full

    xml_dir = default_xml_dir() if xml_dir is None else Path(xml_dir)
    _, consumed = _read_struct_full(reader, type_name, xml_dir=xml_dir, payload=payload)
    return consumed


_HISTFIG_TEMP_FIELDS = frozenset({
    "temp_var",
    "temp_flag",
    "gen_material_skill_ip_sum",
    "defensive_skill_ip_sum",
})


def _align_histfig_links_start(reader: BinaryReader, payload: bytes, *, max_pad: int = 3) -> None:
    align_histfig_links_start(reader, payload, max_pad=max_pad)


def skip_historical_figure_body(
    reader: BinaryReader,
    payload: bytes,
    *,
    xml_dir: Path | None = None,
    next_anchor: int | None = None,
    scan_stop: int | None = None,
    scan_limit: int = 65_536,
    expected_next_id: int | None = None,
    figure_id: int | None = None,
    save_version: int = 1716,
) -> tuple[int, int]:
    """Skip one historical_figure by fully reading it (values discarded)."""
    from .record_reader import read_historical_figure_record

    xml_dir = default_xml_dir() if xml_dir is None else Path(xml_dir)
    start = reader.tell()
    record, consumed = read_historical_figure_record(
        reader,
        payload,
        xml_dir=xml_dir,
        next_anchor=next_anchor,
        scan_stop=scan_stop,
        scan_limit=scan_limit,
        expected_next_id=expected_next_id,
        figure_id=figure_id,
        save_version=save_version,
    )
    return consumed, int(record["id"])


def read_struct(
    reader: BinaryReader,
    type_name: str,
    *,
    xml_dir: Path | None = None,
) -> tuple[dict, int]:
    """Read a complete struct (delegates to :mod:`record_reader`)."""
    from .record_reader import read_struct as _read_struct_full

    xml_dir = default_xml_dir() if xml_dir is None else Path(xml_dir)
    return _read_struct_full(reader, type_name, xml_dir=xml_dir, payload=None)


def skip_struct_bytes(
    payload: bytes,
    offset: int,
    type_name: str,
    *,
    xml_dir: Path | None = None,
) -> int:
    reader = BinaryReader(BytesIO(payload))
    reader.seek(offset)
    return skip_struct(reader, type_name, xml_dir=xml_dir, payload=payload)
