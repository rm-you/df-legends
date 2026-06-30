"""Self-validating record-vector walker for the serialization engine.

This is the harness that converts "did we parse correctly?" into a deterministic
offset assertion: walk a posnull pointer vector of records and report whether
the cursor lands exactly on a known next anchor. When it desyncs, the first
failing record index and offset are reported so the exact field can be fixed.
"""

from __future__ import annotations

from dataclasses import dataclass, field
from io import BytesIO
from pathlib import Path

from ..binary_reader import BinaryReader
from ..structures.polymorph import build_registry, is_polymorphic
from .body_skipper import (
    SkipError,
    default_xml_dir,
    read_struct,
    skip_struct,
)


@dataclass
class WalkResult:
    element_type: str
    vector_offset: int
    declared_count: int
    present_count: int
    parsed_count: int
    flags_end: int
    bodies_start: int
    end_offset: int
    ok: bool
    landed_on_anchor: bool | None
    error: str | None = None
    error_offset: int | None = None
    records: list[dict] = field(default_factory=list)

    @property
    def desync_index(self) -> int | None:
        if self.ok:
            return None
        return self.parsed_count


def _read_presence_flags(reader: BinaryReader, count: int) -> list[bool]:
    flags = [reader.read_bool() for _ in range(count)]
    while reader.tell() % 4:
        reader.read_uint8()
    return flags


def walk_pointer_vector(
    payload: bytes,
    *,
    vector_offset: int,
    element_type: str,
    expected_count: int | None = None,
    next_anchor: int | None = None,
    bodies_start: int | None = None,
    capture: bool = False,
    capture_limit: int = 0,
    xml_dir: Path | None = None,
    max_count: int = 5_000_000,
) -> WalkResult:
    """Walk a posnull pointer vector and report exact-landing / desync.

    Layout: int32 count + count presence bytes (aligned to 4) + present bodies.
    Polymorphic element types read an int16 tag before each body. ``bodies_start``
    overrides where bodies begin when an inter-gap follows the presence flags
    (e.g. the figures vector has an 0x50 gap before bodies on Namushul).
    """
    xml_dir = default_xml_dir() if xml_dir is None else Path(xml_dir)
    reader = BinaryReader(BytesIO(payload))
    reader.seek(vector_offset)

    declared = reader.read_int32()
    if declared < 0 or declared > max_count:
        return WalkResult(
            element_type=element_type,
            vector_offset=vector_offset,
            declared_count=declared,
            present_count=0,
            parsed_count=0,
            flags_end=reader.tell(),
            bodies_start=reader.tell(),
            end_offset=reader.tell(),
            ok=False,
            landed_on_anchor=None,
            error=f"implausible vector count {declared}",
            error_offset=vector_offset,
        )

    flags = _read_presence_flags(reader, declared)
    flags_end = reader.tell()
    if bodies_start is not None:
        reader.seek(bodies_start)
    else:
        bodies_start = flags_end
    present_count = sum(1 for f in flags if f)

    polymorphic = is_polymorphic(element_type, xml_dir)
    registry = build_registry(element_type, xml_dir) if polymorphic else None

    records: list[dict] = []
    parsed = 0
    error: str | None = None
    error_offset: int | None = None

    for idx, is_present in enumerate(flags):
        if not is_present:
            continue
        body_start = reader.tell()
        try:
            if polymorphic:
                tag = reader.read_int16()
                subclass = registry.subclass_for(tag) if registry else None
                if subclass is None:
                    raise SkipError(f"unknown {element_type} tag {tag}")
                if capture and len(records) < capture_limit:
                    values, _ = read_struct(reader, subclass, xml_dir=xml_dir)
                    values["__type__"] = subclass
                    records.append(values)
                else:
                    skip_struct(reader, subclass, xml_dir=xml_dir)
            else:
                if capture and len(records) < capture_limit:
                    values, _ = read_struct(reader, element_type, xml_dir=xml_dir)
                    records.append(values)
                else:
                    skip_struct(reader, element_type, xml_dir=xml_dir)
            parsed += 1
        except (SkipError, EOFError, ValueError) as exc:
            error = f"{type(exc).__name__}: {exc}"
            error_offset = body_start
            break

    end_offset = reader.tell()
    ok = error is None and parsed == present_count
    landed = None
    if next_anchor is not None:
        landed = ok and end_offset == next_anchor
        if not landed and ok:
            ok = False
            error = f"landed at 0x{end_offset:x}, expected anchor 0x{next_anchor:x}"
            error_offset = end_offset

    return WalkResult(
        element_type=element_type,
        vector_offset=vector_offset,
        declared_count=declared,
        present_count=present_count,
        parsed_count=parsed,
        flags_end=flags_end,
        bodies_start=bodies_start,
        end_offset=end_offset,
        ok=ok,
        landed_on_anchor=landed,
        error=error,
        error_offset=error_offset,
        records=records,
    )


def walk_inline_vector(
    payload: bytes,
    *,
    vector_offset: int,
    element_type: str,
    next_anchor: int | None = None,
    xml_dir: Path | None = None,
    max_count: int = 5_000_000,
) -> WalkResult:
    """Walk an stl-vector of inline (non-pointer) structs: count + bodies."""
    xml_dir = default_xml_dir() if xml_dir is None else Path(xml_dir)
    reader = BinaryReader(BytesIO(payload))
    reader.seek(vector_offset)
    declared = reader.read_int32()
    bodies_start = reader.tell()
    parsed = 0
    error = None
    error_offset = None
    if declared < 0 or declared > max_count:
        error = f"implausible vector count {declared}"
        error_offset = vector_offset
    else:
        for _ in range(declared):
            body_start = reader.tell()
            try:
                skip_struct(reader, element_type, xml_dir=xml_dir)
                parsed += 1
            except (SkipError, EOFError, ValueError) as exc:
                error = f"{type(exc).__name__}: {exc}"
                error_offset = body_start
                break
    end_offset = reader.tell()
    ok = error is None and parsed == declared
    landed = None
    if next_anchor is not None and ok:
        landed = end_offset == next_anchor
        if not landed:
            ok = False
            error = f"landed at 0x{end_offset:x}, expected anchor 0x{next_anchor:x}"
            error_offset = end_offset
    return WalkResult(
        element_type=element_type,
        vector_offset=vector_offset,
        declared_count=declared,
        present_count=declared,
        parsed_count=parsed,
        flags_end=bodies_start,
        bodies_start=bodies_start,
        end_offset=end_offset,
        ok=ok,
        landed_on_anchor=landed,
        error=error,
        error_offset=error_offset,
    )
