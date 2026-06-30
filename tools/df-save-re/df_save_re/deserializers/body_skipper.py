"""XML-guided field skipping for df-structures RE (DF 0.47.05)."""

from __future__ import annotations

from io import BytesIO
from pathlib import Path

from ..binary_reader import BinaryReader
from ..structures.xml_fields import FieldDef, StructDef, load_struct
from .language_name import read_language_name
from .primitives import DfString
from .vector_io import skip_stl_byte_vector, skip_stl_int16_vector, skip_stl_int32_vector

_STRUCT_CACHE: dict[str, StructDef] = {}


def default_xml_dir() -> Path:
    return Path(__file__).resolve().parents[4] / "data" / "df-structures"


def _get_struct(type_name: str, xml_dir: Path) -> StructDef | None:
    if type_name in _STRUCT_CACHE:
        return _STRUCT_CACHE[type_name]
    struct = load_struct(type_name, xml_dir)
    if struct is not None:
        _STRUCT_CACHE[type_name] = struct
    return struct


def skip_field(reader: BinaryReader, field: FieldDef, *, xml_dir: Path) -> None:
    """Skip one df-structures field (best-effort)."""
    kind = field.kind
    if kind in ("int8_t", "uint8_t"):
        reader.read_int8() if kind == "int8_t" else reader.read_uint8()
    elif kind in ("int16_t", "uint16_t"):
        reader.read_int16() if kind == "int16_t" else reader.read_uint16()
    elif kind in ("int32_t", "uint32_t"):
        reader.read_int32() if kind == "int32_t" else reader.read_uint32()
    elif kind == "uint64_t":
        reader.read_uint64()
    elif kind == "bool":
        reader.read_bool()
    elif kind == "stl-string":
        DfString.read(reader)
    elif kind == "df-flagarray":
        count = reader.read_int32()
        if count < 0 or count > 256:
            raise ValueError(f"implausible flagarray count {count}")
        reader.read_bytes(count * 4)
    elif kind == "enum":
        reader.read_int32()
    elif kind == "bitfield":
        reader.read_uint32()
    elif kind == "compound":
        if field.type_name:
            skip_struct(reader, field.type_name, xml_dir=xml_dir)
        else:
            raise ValueError(f"anonymous compound {field.name!r} needs manual skip")
    elif kind == "pointer":
        if not reader.read_bool():
            return
        while reader.tell() % 4:
            reader.read_uint8()
        if field.type_name:
            skip_struct(reader, field.type_name, xml_dir=xml_dir)
    elif kind == "stl-vector":
        if field.type_name == "int32_t":
            skip_stl_int32_vector(reader)
        elif field.type_name == "int16_t":
            skip_stl_int16_vector(reader)
        elif field.type_name == "uint8_t":
            skip_stl_byte_vector(reader)
        elif field.type_name:
            count = reader.read_int32()
            if count < 0:
                raise ValueError(f"negative vector length {count}")
            for _ in range(count):
                if not reader.read_bool():
                    continue
                while reader.tell() % 4:
                    reader.read_uint8()
                skip_struct(reader, field.type_name, xml_dir=xml_dir)
        else:
            raise ValueError(f"unsupported stl-vector {field.type_name!r}")
    else:
        raise ValueError(f"unsupported field kind {kind!r}")


def skip_struct(reader: BinaryReader, type_name: str, *, xml_dir: Path | None = None) -> int:
    """Skip a struct by df-structures name. Returns bytes consumed."""
    xml_dir = default_xml_dir() if xml_dir is None else xml_dir
    start = reader.tell()
    if type_name == "language_name":
        read_language_name(reader)
        return reader.tell() - start
    if type_name == "coord2d":
        reader.read_int32()
        reader.read_int32()
        return reader.tell() - start

    struct = _get_struct(type_name, xml_dir)
    if struct is None:
        raise ValueError(f"unknown struct {type_name!r}")
    for field in struct.fields:
        if field.kind == "virtual-methods":
            break
        skip_field(reader, field, xml_dir=xml_dir)
    return reader.tell() - start


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
