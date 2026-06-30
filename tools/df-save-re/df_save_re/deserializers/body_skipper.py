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

# Minimal stubs for types missing from bundled df-structures (skip-only RE).
_STUB_STRUCTS: dict[str, list[FieldDef]] = {
    "artifact_record": [FieldDef(name="id", kind="int32_t")],
    "nemesis_record": [FieldDef(name="id", kind="int32_t")],
    "occupation": [
        FieldDef(name="id", kind="int32_t"),
        FieldDef(name="histfig_id", kind="int32_t"),
        FieldDef(name="site_id", kind="int32_t"),
        FieldDef(name="location_id", kind="int32_t"),
    ],
    "entity_site_link": [
        FieldDef(name="site_id", kind="int32_t"),
        FieldDef(name="entity_id", kind="int32_t"),
        FieldDef(name="link_type", kind="int32_t"),
    ],
    "entity_event": [
        FieldDef(name="id", kind="int32_t"),
        FieldDef(name="year", kind="int32_t"),
    ],
    "interaction": [FieldDef(name="id", kind="int32_t")],
    "entity_population": [FieldDef(name="id", kind="int32_t")],
    "unit": [FieldDef(name="id", kind="int32_t")],
    "building": [FieldDef(name="id", kind="int32_t")],
    "architectural_element": [FieldDef(name="id", kind="int32_t")],
    "world_site_unk130": [FieldDef(name="index", kind="int32_t")],
    "historical_figure": [FieldDef(name="id", kind="int32_t")],
}


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
        reader.read_int32()
    elif kind == "uint64_t":
        reader.read_bytes(8)
    elif kind == "bool":
        reader.read_bool()
    elif kind == "stl-string":
        DfString.read(reader)
    elif kind == "df-flagarray":
        count = reader.read_int32()
        if count < 0:
            return
        if count > 256:
            raise ValueError(f"implausible flagarray count {count}")
        reader.read_bytes(count * 4)
    elif kind == "enum":
        if field.base_type == "int16_t":
            reader.read_int16()
        else:
            reader.read_int32()
    elif kind == "bitfield":
        reader.read_int32()
    elif kind == "compound":
        if field.type_name:
            skip_struct(reader, field.type_name, xml_dir=xml_dir)
        elif field.children:
            for child in field.children:
                skip_field(reader, child, xml_dir=xml_dir)
        else:
            raise ValueError(f"anonymous compound {field.name!r} needs manual skip")
    elif kind == "padding":
        size = field.array_count or 0
        if size:
            reader.read_bytes(size)
    elif kind == "pointer":
        present = reader.read_bool()
        while reader.tell() % 4:
            reader.read_uint8()
        if not present:
            return
        if field.type_name:
            skip_struct(reader, field.type_name, xml_dir=xml_dir)
        elif field.children:
            for child in field.children:
                skip_field(reader, child, xml_dir=xml_dir)
    elif kind == "static-array":
        elem_type = field.type_name or "int32_t"
        count = field.array_count or 0
        for _ in range(count):
            if elem_type == "int32_t":
                reader.read_int32()
            elif elem_type == "int16_t":
                reader.read_int16()
            elif elem_type == "compound":
                raise ValueError(f"anonymous static-array compound {field.name!r} needs manual skip")
            else:
                skip_field(
                    FieldDef(name=field.name, kind=elem_type, type_name=elem_type),
                    xml_dir=xml_dir,
                )
    elif kind == "stl-vector":
        elem_type = field.type_name or field.pointer_type
        if elem_type in ("int32_t", "int16_t", "uint8_t"):
            if elem_type == "int32_t":
                skip_stl_int32_vector(reader)
            elif elem_type == "int16_t":
                skip_stl_int16_vector(reader)
            else:
                skip_stl_byte_vector(reader)
            return
        count = reader.read_int32()
        if count < 0:
            return
        inline_pointer = (
            field.children[0]
            if len(field.children) == 1 and field.children[0].kind == "pointer"
            else None
        )
        for _ in range(count):
            if not reader.read_bool():
                while reader.tell() % 4:
                    reader.read_uint8()
                continue
            while reader.tell() % 4:
                reader.read_uint8()
            if elem_type:
                skip_struct(reader, elem_type, xml_dir=xml_dir)
            elif inline_pointer is not None:
                if inline_pointer.type_name:
                    skip_struct(reader, inline_pointer.type_name, xml_dir=xml_dir)
                else:
                    for child in inline_pointer.children:
                        skip_field(reader, child, xml_dir=xml_dir)
            else:
                raise ValueError(f"unsupported stl-vector {field.name!r}")
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
    if type_name == "coord":
        reader.read_int32()
        reader.read_int32()
        reader.read_int32()
        return reader.tell() - start

    struct = _get_struct(type_name, xml_dir)
    if struct is None:
        stub = _STUB_STRUCTS.get(type_name)
        if stub is not None:
            for field in stub:
                skip_field(reader, field, xml_dir=xml_dir)
            return reader.tell() - start
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
