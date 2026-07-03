"""Recursive full-record reader for df-structures save serialization."""

from __future__ import annotations

import base64
from typing import Any

from ..binary_reader import BinaryReader
from ..structures.polymorph import build_registry, is_polymorphic
from ..structures.layout_dispatch import has_layout, layout_key, skip_layout_body
from ..structures.save_layouts import SAVE_LAYOUTS
from ..structures.xml_fields import FieldDef, enum_storage_width, enum_type_width, load_struct, resolve_fields
from .body_skipper import (
    SkipError,
    _PRIMITIVE_TYPE_WIDTH,
    _SCALAR_WIDTH,
    _SPECIAL_SIZES,
    _align4,
    _element_type,
    _enum_width,
    _read_scalar_value,
    _struct_def,
    default_xml_dir,
)
from .language_name import read_language_name
from .primitives import DfString
from .save_profiles import (
    SAVE_POLYMORPH_BODY_BYTES,
    SAVE_STRUCT_BODY_BYTES,
    empty_poly_tail,
    get_profile,
    omit_field,
    poly_vector_is_dense,
    poly_vector_uses_bool,
    reference_pointer,
    strict_polymorphic_tags,
    vector_tail,
)

_MAX_VECTOR = 5_000_000

RecordValue = int | float | str | bool | None | list[Any] | dict[str, Any]


def _read_polymorphic(reader: BinaryReader, base_type: str, *, xml_dir, save_version: int = 1716) -> dict[str, Any]:
    tag = reader.read_int16()
    key = layout_key(base_type, tag)
    if key and key in SAVE_LAYOUTS and SAVE_LAYOUTS[key].get("fields"):
        start = reader.tell()
        skip_layout_body(reader, SAVE_LAYOUTS[key]["fields"], save_version=save_version)
        return {
            "__type__": SAVE_LAYOUTS[key].get("struct") or base_type,
            "__tag__": tag,
            "__layout_key__": key,
            "__bytes__": reader.tell() - start,
        }
    registry = build_registry(base_type, xml_dir)
    fixed = SAVE_POLYMORPH_BODY_BYTES.get((base_type, tag))
    if fixed is not None:
        raw = reader.read_bytes(fixed)
        return {"__type__": base_type, "__tag__": tag, "__fixed_body_hex__": raw.hex()}
    if registry is None:
        raise SkipError(f"no polymorph registry for {base_type!r}")
    subclass = registry.subclass_for(tag)
    if subclass is None:
        if strict_polymorphic_tags(base_type):
            raise SkipError(f"unknown {base_type!r} polymorphic tag {tag} at 0x{reader.tell() - 2:x}")
        subclass = base_type
    body, _ = read_struct(reader, subclass, xml_dir=xml_dir)
    body["__type__"] = subclass
    body["__tag__"] = tag
    return body


def _read_pointer_body(
    reader: BinaryReader,
    field: FieldDef,
    *,
    xml_dir,
    struct_name: str | None = None,
    payload: bytes | None = None,
) -> RecordValue:
    elem_type = _element_type(field)
    if elem_type is not None and elem_type in _PRIMITIVE_TYPE_WIDTH:
        w = _PRIMITIVE_TYPE_WIDTH[elem_type]
        return int.from_bytes(reader.read_bytes(w), "little", signed=elem_type.startswith("int"))
    if elem_type is not None:
        if is_polymorphic(elem_type, xml_dir):
            return _read_polymorphic(reader, elem_type, xml_dir=xml_dir)
        body, _ = read_struct(reader, elem_type, xml_dir=xml_dir, payload=payload)
        return body
    if len(field.children) == 1 and field.children[0].kind == "pointer":
        out: dict[str, Any] = {}
        for sub in field.children[0].children:
            out[sub.name] = read_field(
                reader, sub, xml_dir=xml_dir, struct_name=struct_name, payload=payload
            )
        return out
    if field.children:
        out = {}
        for sub in field.children:
            out[sub.name] = read_field(
                reader, sub, xml_dir=xml_dir, struct_name=struct_name, payload=payload
            )
        return out
    raise SkipError(f"cannot resolve pointer element for field {field.name!r}")


def _read_primitive_vector(
    reader: BinaryReader,
    width: int,
    *,
    struct_name: str | None = None,
    field_name: str | None = None,
) -> list[int]:
    count = reader.read_int32()
    if count < 0 or count > _MAX_VECTOR:
        raise SkipError(f"implausible vector count {count} at 0x{reader.tell() - 4:x}")
    values: list[int] = []
    if count and width:
        raw = reader.read_bytes(count * width)
        for i in range(count):
            chunk = raw[i * width : (i + 1) * width]
            values.append(int.from_bytes(chunk, "little", signed=width <= 2))
    if count and struct_name and field_name:
        tail = vector_tail(struct_name, field_name)
        if tail:
            reader.read_bytes(tail)
    return values


def _read_pointer_vector(
    reader: BinaryReader,
    field: FieldDef,
    *,
    xml_dir,
    struct_name: str | None = None,
    payload: bytes | None = None,
) -> list[Any]:
    count = reader.read_int32()
    if count < 0 or count > _MAX_VECTOR:
        raise SkipError(f"implausible pointer vector count {count} at 0x{reader.tell() - 4:x}")
    elem_type = _element_type(field)
    polymorphic = elem_type is not None and is_polymorphic(elem_type, xml_dir)
    if polymorphic:
        if poly_vector_is_dense(struct_name, field.name):
            if count == 0:
                tail = empty_poly_tail(struct_name, field.name)
                if tail:
                    reader.read_bytes(tail)
                return []
            return [
                _read_pointer_body(
                    reader, field, xml_dir=xml_dir, struct_name=struct_name, payload=payload
                )
                for _ in range(count)
            ]
        if poly_vector_uses_bool(struct_name, field.name):
            present = [reader.read_bool() for _ in range(count)]
            if count:
                _align4(reader)
        else:
            present = [reader.read_int32() != 0 for _ in range(count)]
    else:
        present = [reader.read_bool() for _ in range(count)]
        if count:
            _align4(reader)
    if polymorphic and count == 0:
        tail = empty_poly_tail(struct_name, field.name)
        if tail:
            reader.read_bytes(tail)
    items: list[Any] = []
    for is_present in present:
        if is_present:
            items.append(
                _read_pointer_body(
                    reader, field, xml_dir=xml_dir, struct_name=struct_name, payload=payload
                )
            )
    return items


def _pack_opaque_blob(raw: bytes) -> dict[str, Any]:
    """Opaque post-tail bytes; decode format later (Ghidra / magic sniff)."""
    magic = raw[:4]
    magic_ascii = magic.decode("latin-1", errors="replace") if len(magic) == 4 else ""
    return {
        "size": len(raw),
        "magic_hex": raw[:16].hex() if raw else "",
        "magic_ascii": magic_ascii,
        "body_b64": base64.b64encode(raw).decode("ascii") if raw else "",
    }


def read_field(
    reader: BinaryReader,
    field: FieldDef,
    *,
    xml_dir,
    struct_name: str | None = None,
    payload: bytes | None = None,
    save_version: int = 1716,
) -> RecordValue:
    profile = get_profile(struct_name) if struct_name else None
    if profile and field.name in profile.before_field:
        if payload is None:
            raise SkipError(f"before_field hook for {field.name!r} requires payload")
        profile.before_field[field.name](reader, payload)
    if profile and field.name in profile.field_readers:
        hook = profile.field_readers[field.name]
        try:
            return hook(reader, save_version=save_version)
        except TypeError:
            return hook(reader)

    kind = field.kind
    if kind in _SCALAR_WIDTH:
        return _read_scalar_value(reader, kind)
    if kind in ("stl-string", "ptr-string"):
        return DfString.read(reader).value
    if kind == "static-string":
        if field.array_count:
            return reader.read_bytes(field.array_count).decode("cp437", errors="replace")
        return DfString.read(reader).value
    if kind == "enum":
        width = enum_storage_width(field, xml_dir)
        raw = reader.read_bytes(width)
        return int.from_bytes(raw, "little", signed=width <= 2)
    if kind == "bitfield":
        width = _enum_width(field.base_type) if field.base_type else 4
        return int.from_bytes(reader.read_bytes(width), "little")
    if kind in ("df-flagarray", "df-static-flagarray"):
        count = reader.read_int32()
        if count < 0 or count > _MAX_VECTOR:
            raise SkipError(f"implausible flagarray count {count}")
        return [reader.read_int32() for _ in range(count)] if count else []
    if kind == "padding":
        if field.array_count:
            reader.read_bytes(field.array_count)
        return None
    if kind == "compound":
        if field.type_name:
            body, _ = read_struct(reader, field.type_name, xml_dir=xml_dir, payload=payload)
            return body
        if field.is_union:
            if field.children:
                return read_field(
                    reader,
                    field.children[0],
                    xml_dir=xml_dir,
                    struct_name=struct_name,
                    payload=payload,
                )
            return None
        out: dict[str, Any] = {}
        for sub in field.children:
            out[sub.name] = read_field(
                reader, sub, xml_dir=xml_dir, struct_name=struct_name, payload=payload
            )
        return out
    if kind == "pointer":
        if struct_name and reference_pointer(struct_name, field.name):
            return reader.read_int32()
        present = reader.read_int32() != 0
        if not present:
            return None
        return _read_pointer_body(
            reader, field, xml_dir=xml_dir, struct_name=struct_name, payload=payload
        )
    if kind == "static-array":
        count = field.array_count or 0
        elem_type = field.type_name
        enum_w = enum_type_width(elem_type, xml_dir) if elem_type else None
        if enum_w is not None:
            return _read_primitive_vector(reader, enum_w)
        if field.pointer_type:
            return [reader.read_int32() for _ in range(count)]
        items: list[Any] = []
        for _ in range(count):
            if elem_type and elem_type in _PRIMITIVE_TYPE_WIDTH:
                w = _PRIMITIVE_TYPE_WIDTH[elem_type]
                items.append(
                    int.from_bytes(reader.read_bytes(w), "little", signed=elem_type.startswith("int"))
                )
            elif elem_type:
                body, _ = read_struct(reader, elem_type, xml_dir=xml_dir, payload=payload)
                items.append(body)
            elif field.children:
                row: dict[str, Any] = {}
                for sub in field.children:
                    row[sub.name] = read_field(
                        reader, sub, xml_dir=xml_dir, struct_name=struct_name, payload=payload
                    )
                items.append(row)
            else:
                raise SkipError(f"static-array {field.name!r} has no element type")
        return items
    if kind in ("stl-vector", "stl-deque", "stl-set"):
        if field.type_name:
            enum_w = enum_type_width(field.type_name, xml_dir)
            if enum_w is not None:
                return _read_primitive_vector(
                    reader, enum_w, struct_name=struct_name, field_name=field.name
                )
        if field.children and len(field.children) == 1 and field.children[0].kind == "enum":
            return _read_primitive_vector(
                reader,
                enum_storage_width(field.children[0], xml_dir),
                struct_name=struct_name,
                field_name=field.name,
            )
        elem_type = _element_type(field)
        if elem_type and elem_type in _PRIMITIVE_TYPE_WIDTH:
            return _read_primitive_vector(
                reader,
                _PRIMITIVE_TYPE_WIDTH[elem_type],
                struct_name=struct_name,
                field_name=field.name,
            )
        if field.pointer_type or (len(field.children) == 1 and field.children[0].kind == "pointer"):
            return _read_pointer_vector(
                reader, field, xml_dir=xml_dir, struct_name=struct_name, payload=payload
            )
        if elem_type:
            enum_w = enum_type_width(elem_type, xml_dir)
            if enum_w is not None:
                return _read_primitive_vector(
                    reader, enum_w, struct_name=struct_name, field_name=field.name
                )
            if _struct_def(elem_type, xml_dir) is not None:
                count = reader.read_int32()
                if count < 0 or count > _MAX_VECTOR:
                    raise SkipError(f"implausible vector count {count}")
                return [
                    read_struct(reader, elem_type, xml_dir=xml_dir, payload=payload)[0]
                    for _ in range(count)
                ]
            raise SkipError(f"unsupported stl-vector element {elem_type!r} ({field.name!r})")
        raise SkipError(f"unsupported stl-vector {field.name!r}")
    if kind == "stl-bit-vector":
        return _read_primitive_vector(reader, 1)
    if kind == "df-array":
        return _read_primitive_vector(reader, _PRIMITIVE_TYPE_WIDTH.get(field.type_name or "", 1))
    if kind == "df-linked-list":
        return read_field(
            reader,
            FieldDef(name=field.name, kind="pointer", type_name=field.type_name),
            xml_dir=xml_dir,
            struct_name=struct_name,
            payload=payload,
        )
    raise SkipError(f"unsupported field kind {kind!r} ({field.name!r})")


def read_struct(
    reader: BinaryReader,
    type_name: str,
    *,
    xml_dir=None,
    payload: bytes | None = None,
    field_filter: set[str] | None = None,
) -> tuple[dict[str, Any], int]:
    """Read a complete struct into a nested dict. Returns (values, bytes consumed)."""
    xml_dir = default_xml_dir() if xml_dir is None else xml_dir
    start = reader.tell()
    values: dict[str, Any] = {}

    if type_name == "language_name":
        name = read_language_name(reader)
        values["__language_name__"] = name.display_hint
        values["words"] = list(name.words)
        return values, reader.tell() - start

    if type_name in _SPECIAL_SIZES:
        raw = reader.read_bytes(_SPECIAL_SIZES[type_name])
        if type_name == "coord2d":
            values["x"] = int.from_bytes(raw[0:4], "little", signed=True)
            values["y"] = int.from_bytes(raw[4:8], "little", signed=True)
        elif type_name == "coord":
            values["x"] = int.from_bytes(raw[0:4], "little", signed=True)
            values["y"] = int.from_bytes(raw[4:8], "little", signed=True)
            values["z"] = int.from_bytes(raw[8:12], "little", signed=True)
        else:
            values["__raw__"] = raw.hex()
        return values, reader.tell() - start

    if type_name in _PRIMITIVE_TYPE_WIDTH:
        w = _PRIMITIVE_TYPE_WIDTH[type_name]
        raw = reader.read_bytes(w)
        values["__value__"] = int.from_bytes(raw, "little", signed=type_name.startswith("int"))
        return values, reader.tell() - start

    if type_name in ("stl-string", "ptr-string"):
        values["__value__"] = DfString.read(reader).value
        return values, reader.tell() - start

    struct = _struct_def(type_name, xml_dir)
    if struct is None:
        raise SkipError(f"unknown struct {type_name!r}")

    fixed_body = SAVE_STRUCT_BODY_BYTES.get(type_name)
    if fixed_body is not None:
        values["__fixed_body_hex__"] = reader.read_bytes(fixed_body).hex()
        return values, reader.tell() - start

    profile = get_profile(type_name)
    allowed = field_filter
    if allowed is None and profile and profile.tail_field_names is not None:
        allowed = set(profile.tail_field_names)

    for fd in resolve_fields(struct, xml_dir):
        if omit_field(type_name, fd.name):
            continue
        if allowed is not None and fd.name not in allowed:
            continue
        values[fd.name] = read_field(
            reader, fd, xml_dir=xml_dir, struct_name=type_name, payload=payload
        )
    return values, reader.tell() - start

def read_historical_figure_record(
    reader: BinaryReader,
    payload: bytes,
    *,
    xml_dir=None,
    next_anchor: int | None = None,
    scan_stop: int | None = None,
    scan_limit: int = 65_536,
    expected_next_id: int | None = None,
    figure_id: int | None = None,
    save_version: int = 1716,
) -> tuple[dict[str, Any], int]:
    """Read one complete historical_figure body including save-path tail."""
    from .historical_figures import read_historical_figure_header

    xml_dir = default_xml_dir() if xml_dir is None else xml_dir
    start = reader.tell()
    fid = figure_id if figure_id is not None else (expected_next_id if expected_next_id is not None else 0)
    header = read_historical_figure_header(
        reader,
        save_version=save_version,
        figure_id=fid,
    )
    record: dict[str, Any] = {
        "id": fid,
        "profession": header.profession,
        "race": header.race,
        "caste": header.caste,
        "sex": header.sex,
        "orientation_flags": header.orientation_flags,
        "appeared_year": header.appeared_year,
        "born_year": header.born_year,
        "born_seconds": header.born_seconds,
        "curse_year": header.curse_year,
        "curse_seconds": header.curse_seconds,
        "birth_year_bias": header.birth_year_bias,
        "birth_time_bias": header.birth_time_bias,
        "old_year": header.old_year,
        "old_seconds": header.old_seconds,
        "died_year": header.died_year,
        "died_seconds": header.died_seconds,
        "name_words": list(header.name.words),
        "civ_id": header.civ_id,
        "population_id": header.population_id,
        "breed_id": header.breed_id,
        "cultural_identity": header.cultural_identity,
        "family_head_id": header.family_head_id,
        "flag_indices": list(header.flag_indices),
        "unit_id": header.unit_id,
        "nemesis_id": header.nemesis_id,
        "field_dc": header.global_id,
        "field_e0": header.art_count,
        "global_id": header.global_id,
        "art_count": header.art_count,
        "art_count": header.art_count,
        "payload_offset": header.payload_offset,
    }

    profile = get_profile("historical_figure")
    tail_names = set(profile.tail_field_names) if profile and profile.tail_field_names else None
    header_end = reader.tell()
    tail_error: Exception | None = None
    tail_error_offset = header_end
    struct = _struct_def("historical_figure", xml_dir)
    if struct is None:
        tail_error = SkipError("unknown struct 'historical_figure'")
    else:
        for fd in resolve_fields(struct, xml_dir):
            if omit_field("historical_figure", fd.name):
                continue
            if tail_names is not None and fd.name not in tail_names:
                continue
            field_start = reader.tell()
            try:
                record[fd.name] = read_field(
                    reader,
                    fd,
                    xml_dir=xml_dir,
                    struct_name="historical_figure",
                    payload=payload,
                    save_version=save_version,
                )
                value = record[fd.name]
                if isinstance(value, dict) and value.get("__partial__"):
                    tail_error = SkipError(f"partial historical_figure field {fd.name!r}")
                    tail_error_offset = reader.tell()
                    break
            except (SkipError, ValueError, EOFError) as exc:
                tail_error = exc
                tail_error_offset = field_start
                reader.seek(field_start)
                break
    if tail_error is not None:
        stop = scan_stop if scan_stop is not None else len(payload)
        from .historical_figures import _find_next_figure_start

        found = _find_next_figure_start(
            payload,
            scan_start=tail_error_offset,
            previous_id=fid,
            stop_before=stop,
            max_scan=scan_limit,
            expected_id=expected_next_id,
            save_version=save_version,
        )
        if found is None:
            raise SkipError(
                f"no historical_figure header after tail parse failure id={header.figure_id} "
                f"from 0x{tail_error_offset:x}: {tail_error}"
            ) from tail_error
        record["body_parse_error"] = str(tail_error)
        record["body_blob"] = _pack_opaque_blob(payload[tail_error_offset:found])
        reader.seek(found)
        return record, reader.tell() - start

    tail_end = reader.tell()
    if next_anchor is not None:
        if tail_end < next_anchor:
            gap = next_anchor - tail_end
            if gap > 0:
                record["post_tail_blob"] = _pack_opaque_blob(payload[tail_end:next_anchor])
            reader.seek(next_anchor)
    # Dense figure bodies are back-to-back; cursor is already at the next body.

    return record, reader.tell() - start
