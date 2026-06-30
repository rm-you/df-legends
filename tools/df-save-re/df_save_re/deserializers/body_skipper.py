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
- polymorphic element -> int16 type tag + subclass body.
- ``df-flagarray`` -> int32 count + count*4 bytes.
"""

from __future__ import annotations

from io import BytesIO
from pathlib import Path

from ..binary_reader import BinaryReader
from ..structures.polymorph import build_registry, is_polymorphic
from ..structures.xml_fields import FieldDef, StructDef, load_struct, resolve_fields
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


def _enum_width(base_type: str | None) -> int:
    if base_type in ("int8_t", "uint8_t"):
        return 1
    if base_type in ("int16_t", "uint16_t"):
        return 2
    if base_type in ("int64_t", "uint64_t"):
        return 8
    return 4


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


def _skip_primitive_vector(reader: BinaryReader, width: int) -> int:
    count = reader.read_int32()
    if count < 0 or count > _MAX_VECTOR:
        raise SkipError(f"implausible vector count {count} at 0x{reader.tell() - 4:x}")
    if count and width:
        reader.read_bytes(count * width)
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
            skip_field(reader, sub, xml_dir=xml_dir)
        return
    if field.children:
        for sub in field.children:
            skip_field(reader, sub, xml_dir=xml_dir)
        return
    raise SkipError(f"cannot resolve pointer element for field {field.name!r}")


def _skip_pointer_vector(
    reader: BinaryReader,
    field: FieldDef,
    *,
    xml_dir: Path,
) -> int:
    """Skip a posnull stl-vector of pointers: count + flags + present bodies."""
    count = reader.read_int32()
    if count < 0 or count > _MAX_VECTOR:
        raise SkipError(f"implausible pointer vector count {count} at 0x{reader.tell() - 4:x}")
    present = [reader.read_bool() for _ in range(count)]
    _align4(reader)
    for is_present in present:
        if is_present:
            _skip_pointer_body(reader, field, xml_dir=xml_dir)
    return count


def _read_polymorphic(reader: BinaryReader, base_type: str, *, xml_dir: Path) -> str:
    """Read an int16 type tag, then the resolved subclass body."""
    registry = build_registry(base_type, xml_dir)
    tag = reader.read_int16()
    if registry is None:
        raise SkipError(f"no polymorph registry for {base_type!r}")
    subclass = registry.subclass_for(tag)
    if subclass is None:
        raise SkipError(f"unknown {base_type} type tag {tag} at 0x{reader.tell() - 2:x}")
    skip_struct(reader, subclass, xml_dir=xml_dir)
    return subclass


def skip_field(reader: BinaryReader, field: FieldDef, *, xml_dir: Path) -> None:
    kind = field.kind
    if kind in _SCALAR_WIDTH:
        reader.read_bytes(_SCALAR_WIDTH[kind])
        return
    if kind in ("stl-string", "ptr-string"):
        DfString.read(reader)
        return
    if kind == "static-string":
        if field.array_count:
            reader.read_bytes(field.array_count)
        else:
            DfString.read(reader)
        return
    if kind == "enum":
        reader.read_bytes(_enum_width(field.base_type))
        return
    if kind == "bitfield":
        reader.read_bytes(_enum_width(field.base_type) if field.base_type else 4)
        return
    if kind in ("df-flagarray", "df-static-flagarray"):
        count = reader.read_int32()
        if count < 0 or count > _MAX_VECTOR:
            raise SkipError(f"implausible flagarray count {count} at 0x{reader.tell() - 4:x}")
        if count:
            reader.read_bytes(count * 4)
        return
    if kind == "padding":
        if field.array_count:
            reader.read_bytes(field.array_count)
        return
    if kind == "compound":
        if field.type_name:
            skip_struct(reader, field.type_name, xml_dir=xml_dir)
        elif field.is_union:
            # Read only the first member (DF unions are same-sized variants).
            if field.children:
                skip_field(reader, field.children[0], xml_dir=xml_dir)
        else:
            for sub in field.children:
                skip_field(reader, sub, xml_dir=xml_dir)
        return
    if kind == "pointer":
        present = reader.read_bool()
        if not present:
            return
        _skip_pointer_body(reader, field, xml_dir=xml_dir)
        return
    if kind == "static-array":
        count = field.array_count or 0
        elem_type = field.type_name
        for _ in range(count):
            if elem_type and elem_type in _PRIMITIVE_TYPE_WIDTH:
                reader.read_bytes(_PRIMITIVE_TYPE_WIDTH[elem_type])
            elif elem_type:
                skip_struct(reader, elem_type, xml_dir=xml_dir)
            elif field.children:
                for sub in field.children:
                    skip_field(reader, sub, xml_dir=xml_dir)
            else:
                raise SkipError(f"static-array {field.name!r} has no element type")
        return
    if kind in ("stl-vector", "stl-deque", "stl-set"):
        elem_type = _element_type(field)
        if elem_type and elem_type in _PRIMITIVE_TYPE_WIDTH:
            _skip_primitive_vector(reader, _PRIMITIVE_TYPE_WIDTH[elem_type])
        elif field.pointer_type or (
            len(field.children) == 1 and field.children[0].kind == "pointer"
        ):
            _skip_pointer_vector(reader, field, xml_dir=xml_dir)
        elif elem_type:
            # Vector of inline (non-pointer) structs: count + bodies.
            count = reader.read_int32()
            if count < 0 or count > _MAX_VECTOR:
                raise SkipError(f"implausible vector count {count}")
            for _ in range(count):
                skip_struct(reader, elem_type, xml_dir=xml_dir)
        else:
            raise SkipError(f"unsupported stl-vector {field.name!r}")
        return
    if kind == "stl-bit-vector":
        _skip_primitive_vector(reader, 1)
        return
    if kind == "df-array":
        # pointer + count layout; treated as primitive-count vector best-effort.
        _skip_primitive_vector(reader, _PRIMITIVE_TYPE_WIDTH.get(field.type_name or "", 1))
        return
    if kind == "df-linked-list":
        skip_field(reader, FieldDef(name=field.name, kind="pointer", type_name=field.type_name), xml_dir=xml_dir)
        return
    raise SkipError(f"unsupported field kind {kind!r} ({field.name!r})")


def _struct_def(type_name: str, xml_dir: Path) -> StructDef | None:
    return load_struct(type_name, xml_dir)


def skip_struct(reader: BinaryReader, type_name: str, *, xml_dir: Path | None = None) -> int:
    """Skip a struct by df-structures name. Returns bytes consumed."""
    xml_dir = default_xml_dir() if xml_dir is None else Path(xml_dir)
    start = reader.tell()

    if type_name == "language_name":
        read_language_name(reader)
        return reader.tell() - start
    if type_name in _SPECIAL_SIZES:
        reader.read_bytes(_SPECIAL_SIZES[type_name])
        return reader.tell() - start

    struct = _struct_def(type_name, xml_dir)
    if struct is None:
        raise SkipError(f"unknown struct {type_name!r}")
    for fd in resolve_fields(struct, xml_dir):
        skip_field(reader, fd, xml_dir=xml_dir)
    return reader.tell() - start


def read_struct(
    reader: BinaryReader,
    type_name: str,
    *,
    xml_dir: Path | None = None,
) -> tuple[dict[str, int | float | str], int]:
    """Read a struct, capturing top-level scalar field values. Returns (values, bytes)."""
    xml_dir = default_xml_dir() if xml_dir is None else Path(xml_dir)
    start = reader.tell()
    values: dict[str, int | float | str] = {}

    if type_name == "language_name":
        name = read_language_name(reader)
        values["__language_name__"] = name.display_hint
        return values, reader.tell() - start

    struct = _struct_def(type_name, xml_dir)
    if struct is None:
        raise SkipError(f"unknown struct {type_name!r}")

    for fd in resolve_fields(struct, xml_dir):
        if fd.kind in _SCALAR_WIDTH and fd.kind not in ("flag-bit",):
            values[fd.name] = _read_scalar_value(reader, fd.kind)
        elif fd.kind == "enum":
            width = _enum_width(fd.base_type)
            raw = reader.read_bytes(width)
            values[fd.name] = int.from_bytes(raw, "little", signed=width <= 2)
        elif fd.kind in ("stl-string", "ptr-string"):
            values[fd.name] = DfString.read(reader).value
        else:
            skip_field(reader, fd, xml_dir=xml_dir)
    return values, reader.tell() - start


def skip_struct_bytes(
    payload: bytes,
    offset: int,
    type_name: str,
    *,
    xml_dir: Path | None = None,
) -> int:
    reader = BinaryReader(BytesIO(payload))
    reader.seek(offset)
    return skip_struct(reader, type_name, xml_dir=xml_dir)
