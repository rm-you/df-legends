"""Walk world_history layers using Ghidra-confirmed on-disk order (FUN_1407099a0).

On-disk world_history stream (save path, FUN_140709410 / load FUN_1407099a0):

1. events:      i32 count, then per event i32 tag + body (factory FUN_14070b7a0)
2. figures:     i32 count, then count dense bodies (FUN_14070a9d0)
3. collections: i32 count, then per item i32 tag + body (factory FUN_140763aa0)
4. eras:        i32 count, then per era FUN_14075cd70 body
5. tail:        i32 vec, i16 vec, 4 scalars, i32 vec, version-gated blocks

Location is fixture-independent: the figures count (max_ids[8] echo) anchors the
events end; events start is recovered by backward-chaining event bodies until a
count prefix matches the chain length.
"""

from __future__ import annotations

import struct
from dataclasses import dataclass, field
from io import BytesIO
from typing import Any, Callable

from ..binary_reader import BinaryReader
from .event_collections import read_collection_record
from .histfig_info import skip_histfig_info, skip_vague_relationships
from .historical_figures import HistoricalFigureHeader, read_historical_figure_header
from .primitives import WorldHeaderHypothesis
from ..structures.layout_dispatch import skip_layout_body
from ..structures.save_layouts import SAVE_LAYOUTS


@dataclass(frozen=True)
class WorldHistoryLandmarks:
    """Resolved offsets for all world_history sub-layers."""

    events_count_offset: int
    events_bodies_start: int
    events_end: int
    event_count: int
    figures_count_offset: int
    figures_bodies_start: int
    figure_count: int
    figures_end: int | None = None
    collections_count_offset: int | None = None
    collection_count: int | None = None
    collections_end: int | None = None
    eras_count_offset: int | None = None
    era_count: int | None = None
    eras_end: int | None = None
    history_end: int | None = None


# ---------------------------------------------------------------------------
# events


def read_event_record(
    reader: BinaryReader,
    tag: int,
    *,
    save_version: int = 1716,
) -> dict[str, Any]:
    """Read one event body into a typed record (after the i32 tag).

    Field names come from df-structures via the mem_offset mapping baked into
    ``SAVE_LAYOUTS`` (``scripts/build_event_field_names.py``). Unnamed fields
    fall back to ``f_<mem_offset>``.
    """
    layout = SAVE_LAYOUTS.get(f"history_event:{tag}")
    fields = (layout or {}).get("fields")
    if not fields:
        raise ValueError(f"missing layout for history_event:{tag}")
    # Meta keys are underscore-prefixed: some events have fields named
    # "type"/"tag" in df-structures which would otherwise collide.
    rec: dict[str, Any] = {
        "_tag": tag,
        "_type": (layout.get("struct") or f"history_event_{tag}").removeprefix("history_event_").removesuffix("st"),
    }
    for fd in fields:
        vg = fd.get("version_gt")
        if vg is not None and save_version <= int(vg, 16):
            continue
        name = fd.get("name") or f"f_{fd.get('mem_offset')}"
        kind = fd.get("kind")
        if kind == "i32":
            rec[name] = reader.read_int32()
        elif kind == "i16":
            rec[name] = reader.read_int16()
        elif kind == "u8":
            rec[name] = reader.read_uint8()
        elif kind == "byte_vector":
            n = reader.read_int32()
            if n < 0 or n > 5_000_000:
                raise ValueError(f"byte_vector count {n} at 0x{reader.tell() - 4:x}")
            rec[name] = list(reader.read_bytes(n))
        elif kind == "i32_vector":
            n = reader.read_int32()
            if n < 0 or n > 5_000_000:
                raise ValueError(f"i32_vector count {n} at 0x{reader.tell() - 4:x}")
            rec[name] = [reader.read_int32() for _ in range(n)]
        elif kind == "i16_vector":
            n = reader.read_int32()
            if n < 0 or n > 5_000_000:
                raise ValueError(f"i16_vector count {n} at 0x{reader.tell() - 4:x}")
            rec[name] = [reader.read_int16() for _ in range(n)]
        elif kind in ("string", "stl_string"):
            length = reader.read_int16()
            rec[name] = reader.read_bytes(length).decode("latin-1") if length > 0 else ""
        elif kind == "temp":
            reader.read_bytes(fd.get("size") or 4)
        elif kind == "scalar":
            size = fd.get("size") or 4
            if size == 2:
                rec[name] = reader.read_int16()
            elif size == 1:
                rec[name] = reader.read_uint8()
            else:
                rec[name] = reader.read_int32()
        else:
            raise ValueError(f"unhandled event field kind {kind!r} for history_event:{tag}")
    return rec


def skip_event_body(reader: BinaryReader, tag: int, *, save_version: int = 1716) -> None:
    fields = SAVE_LAYOUTS.get(f"history_event:{tag}", {}).get("fields")
    if not fields:
        raise ValueError(f"missing layout for history_event:{tag}")
    _skip_event_fields(reader, fields, save_version=save_version)


def _skip_event_fields(
    reader: BinaryReader,
    fields: list[dict],
    *,
    save_version: int = 1716,
) -> None:
    """Skip one event body; matches verified read_event_id landing."""
    from ..structures.layout_dispatch import _read_scalar

    for idx, fd in enumerate(fields):
        vg = fd.get("version_gt")
        if vg is not None and save_version <= int(vg, 16):
            continue
        mem = fd.get("mem_offset")
        if fd.get("base") and mem == 0x20 and fd.get("kind") in ("i32", "scalar"):
            _read_scalar(reader, fd)
            rest = fields[idx + 1 :]
            if rest:
                skip_layout_body(reader, rest, save_version=save_version)
            return
        skip_layout_body(reader, [fd], save_version=save_version)


def walk_events_layer(
    reader: BinaryReader,
    *,
    save_version: int = 1716,
    limit: int | None = None,
) -> tuple[int, int]:
    """Skip events vector; return (parsed_count, bytes_consumed)."""
    start = reader.tell()
    count = reader.read_int32()
    n = count if limit is None else min(count, limit)
    for _ in range(n):
        tag = reader.read_int32()
        if not (0 <= tag <= 0x85):
            raise ValueError(f"bad history_event tag {tag} at 0x{reader.tell() - 4:x}")
        skip_event_body(reader, tag, save_version=save_version)
    return n, reader.tell() - start


# ---------------------------------------------------------------------------
# figures


def skip_figure_links(reader: BinaryReader, factory: str, *, save_version: int = 1716) -> int:
    """Skip one dense polymorphic link vector (entity/site/histfig)."""
    count = reader.read_int32()
    if count < 0 or count > 100_000:
        raise ValueError(f"implausible {factory} link count {count} at 0x{reader.tell() - 4:x}")
    for _ in range(count):
        tag = reader.read_int16()
        layout = SAVE_LAYOUTS.get(f"link:{factory}:{tag}")
        if not layout or not layout.get("fields"):
            raise ValueError(f"no layout for link:{factory}:{tag} at 0x{reader.tell() - 2:x}")
        skip_layout_body(reader, layout["fields"], save_version=save_version)
    return count


def read_figure_record(
    reader: BinaryReader,
    *,
    figure_id: int,
    save_version: int = 1716,
) -> tuple[HistoricalFigureHeader, dict[str, Any]]:
    """Read one dense figure body (header parsed, tail skipped with exact layout)."""
    header = read_historical_figure_header(reader, save_version=save_version, figure_id=figure_id)
    tail: dict[str, Any] = {}
    tail["entity_link_count"] = skip_figure_links(reader, "entity", save_version=save_version)
    tail["site_link_count"] = skip_figure_links(reader, "site", save_version=save_version)
    tail["histfig_link_count"] = skip_figure_links(reader, "histfig", save_version=save_version)
    if reader.read_uint8():
        skip_histfig_info(reader, save_version=save_version)
        tail["has_info"] = True
    if save_version > 0x6A0 and reader.read_uint8():
        skip_vague_relationships(reader)
        tail["has_vague"] = True
    return header, tail


def skip_figure_record(reader: BinaryReader, *, save_version: int = 1716) -> None:
    read_figure_record(reader, figure_id=-1, save_version=save_version)


def walk_figures_dense_layer(
    reader: BinaryReader,
    payload: bytes | None = None,
    *,
    save_version: int = 1716,
    limit: int | None = None,
    on_figure: Callable[[int, HistoricalFigureHeader, dict[str, Any]], None] | None = None,
) -> tuple[int, int]:
    """Walk dense figures vector (i32 count + count bodies)."""
    start = reader.tell()
    count = reader.read_int32()
    n = count if limit is None else min(count, limit)
    for slot in range(n):
        header, tail = read_figure_record(reader, figure_id=slot, save_version=save_version)
        if on_figure is not None:
            on_figure(slot, header, tail)
    return n, reader.tell() - start


# ---------------------------------------------------------------------------
# collections


def walk_collections_layer(
    reader: BinaryReader,
    *,
    save_version: int = 1716,
    limit: int | None = None,
    on_collection: Callable[[int, dict[str, Any]], None] | None = None,
) -> tuple[int, int]:
    """Walk event_collection vector (i32 count, then i32 tag + body per item)."""
    start = reader.tell()
    count = reader.read_int32()
    if count < 0 or count > 10_000_000:
        raise ValueError(f"implausible collection count {count} at 0x{start:x}")
    n = count if limit is None else min(count, limit)
    for idx in range(n):
        tag = reader.read_int32()
        rec = read_collection_record(reader, tag, save_version=save_version)
        if on_collection is not None:
            on_collection(idx, rec)
    return n, reader.tell() - start


# ---------------------------------------------------------------------------
# eras


@dataclass(frozen=True)
class EraRecord:
    """history_era body (FUN_14075cd70 + appearance FUN_14075ccb0)."""

    index: int
    year: int
    name: str
    scalars: list[int] = field(default_factory=list)
    appearance: dict[str, Any] = field(default_factory=dict)


def read_era_record(reader: BinaryReader) -> EraRecord:
    idx = reader.read_int32()
    kind = reader.read_int16()
    a = reader.read_int32()
    b = reader.read_int32()
    year = reader.read_int32()
    name_len = reader.read_int16()
    if name_len < 0 or name_len > 4096:
        raise ValueError(f"implausible era name length {name_len} at 0x{reader.tell() - 2:x}")
    name = reader.read_bytes(name_len).decode("latin-1")
    # FUN_14075ccb0: 6x i32, i32 vector, 2x i32
    head = [reader.read_int32() for _ in range(6)]
    vec_n = reader.read_int32()
    if vec_n < 0 or vec_n > 1_000_000:
        raise ValueError(f"implausible era vector count {vec_n} at 0x{reader.tell() - 4:x}")
    vec = [reader.read_int32() for _ in range(vec_n)]
    tail = [reader.read_int32() for _ in range(2)]
    return EraRecord(
        index=idx,
        year=year,
        name=name,
        scalars=[kind, a, b],
        appearance={"head": head, "vec": vec, "tail": tail},
    )


def walk_eras_layer(
    reader: BinaryReader,
    *,
    on_era: Callable[[int, EraRecord], None] | None = None,
) -> tuple[int, int]:
    start = reader.tell()
    count = reader.read_int32()
    if count < 0 or count > 10_000:
        raise ValueError(f"implausible era count {count} at 0x{start:x}")
    for idx in range(count):
        rec = read_era_record(reader)
        if on_era is not None:
            on_era(idx, rec)
    return count, reader.tell() - start


# ---------------------------------------------------------------------------
# gated tail vectors (rest of FUN_1407099a0)


def skip_history_tail(reader: BinaryReader, *, save_version: int = 1716) -> None:
    """Skip world_history trailing vectors/scalars after eras (FUN_1407099a0)."""

    def _vec(width: int, what: str) -> int:
        n = reader.read_int32()
        if n < 0 or n > 50_000_000:
            raise ValueError(f"implausible {what} count {n} at 0x{reader.tell() - 4:x}")
        reader.read_bytes(width * n)
        return n

    _vec(4, "history_tail_i32")
    _vec(2, "history_tail_i16")
    reader.read_bytes(16)  # 4x i32 scalars
    _vec(4, "history_tail_i32b")
    if save_version > 0x5D7:
        reader.read_bytes(56)  # 14x i32 scalars
    if save_version > 0x65C:
        _vec(20, "history_tail_5xi32")  # per-item 5x i32
        n = reader.read_int32()
        if n < 0 or n > 1_000_000:
            raise ValueError(f"implausible relationship block count {n} at 0x{reader.tell() - 4:x}")
        for _ in range(n):
            # FUN_1406fedd0: i32 used, i32, then used x (i32+i16+i32+i32+i32)
            used = reader.read_int32()
            if used < 0 or used > 1024:
                raise ValueError(f"implausible relationship entry count {used} at 0x{reader.tell() - 4:x}")
            reader.read_int32()
            reader.read_bytes(18 * used)
    if save_version > 0x68F:
        n = reader.read_int32()
        if n < 0 or n > 10_000_000:
            raise ValueError(f"implausible gated tail count {n} at 0x{reader.tell() - 4:x}")
        for _ in range(n):
            # FUN_1406fefc0: i32, u8 has_body, [body FUN_1406feab0], 4x i32
            reader.read_int32()
            if reader.read_uint8():
                reader.read_bytes(12)
                reader.read_int16()
                reader.read_bytes(24)
                reader.read_int16()
                reader.read_bytes(4)
                if save_version > 0x6A2:
                    reader.read_bytes(12)
                reader.read_bytes(40)
            reader.read_bytes(16)


# ---------------------------------------------------------------------------
# location (fixture-independent)


def _figures_anchor_candidates(
    payload: bytes,
    header: WorldHeaderHypothesis,
    *,
    save_version: int,
) -> list[int]:
    """Offsets where i32 == expected figure count and a figure body parses at +4."""
    if len(header.max_ids) < 9:
        return []
    max_fig_id = header.max_ids[8]
    out: list[int] = []
    for count in (max_fig_id + 1, max_fig_id):
        needle = struct.pack("<i", count)
        pos = 0
        while True:
            off = payload.find(needle, pos)
            if off < 0:
                break
            pos = off + 1
            reader = BinaryReader(BytesIO(payload))
            reader.seek(off + 4)
            try:
                for _ in range(min(3, count)):
                    skip_figure_record(reader, save_version=save_version)
            except (ValueError, EOFError):
                continue
            out.append(off)
        if out:
            break
    return out


def _locate_events_start(
    payload: bytes,
    events_end: int,
    *,
    save_version: int,
    scan_back: int,
) -> tuple[int, int, int] | None:
    """Backward-chain event bodies to (count_offset, bodies_start, count)."""
    lo = max(0, events_end - scan_back)
    reader = BinaryReader(BytesIO(payload))
    chain: dict[int, int] = {events_end: 0}
    best: tuple[int, int, int] | None = None
    for s in range(events_end - 4, lo - 1, -1):
        tag = struct.unpack_from("<i", payload, s)[0]
        if not (0 <= tag <= 0x85):
            continue
        reader.seek(s + 4)
        try:
            skip_event_body(reader, tag, save_version=save_version)
        except (ValueError, EOFError):
            continue
        nxt = reader.tell()
        if nxt not in chain:
            continue
        n = chain[nxt] + 1
        chain[s] = n
        if s - 4 >= 0 and struct.unpack_from("<i", payload, s - 4)[0] == n:
            best = (s - 4, s, n)
    return best


def locate_world_history(
    payload: bytes,
    header: WorldHeaderHypothesis,
    *,
    save_version: int = 1716,
    scan_back: int = 0x1000000,
) -> WorldHistoryLandmarks | None:
    """Locate events + figures deterministically from the figures count echo."""
    for fig_off in _figures_anchor_candidates(payload, header, save_version=save_version):
        located = _locate_events_start(
            payload, fig_off, save_version=save_version, scan_back=scan_back
        )
        if located is None:
            continue
        count_off, bodies_start, event_count = located
        figure_count = struct.unpack_from("<i", payload, fig_off)[0]
        return WorldHistoryLandmarks(
            events_count_offset=count_off,
            events_bodies_start=bodies_start,
            events_end=fig_off,
            event_count=event_count,
            figures_count_offset=fig_off,
            figures_bodies_start=fig_off + 4,
            figure_count=figure_count,
        )
    return None


def walk_world_history(
    payload: bytes,
    header: WorldHeaderHypothesis,
    *,
    save_version: int = 1716,
    landmarks: WorldHistoryLandmarks | None = None,
    on_event: Callable[[int, int, int], None] | None = None,
    on_figure: Callable[[int, HistoricalFigureHeader, dict[str, Any]], None] | None = None,
    on_collection: Callable[[int, dict[str, Any]], None] | None = None,
    on_era: Callable[[int, EraRecord], None] | None = None,
) -> WorldHistoryLandmarks:
    """Walk the full world_history section, invoking callbacks per record.

    ``on_event(index, tag, body_offset)`` is called per event (bodies are skipped;
    typed event reads layer on top of the layouts separately).
    """
    lm = landmarks or locate_world_history(payload, header, save_version=save_version)
    if lm is None:
        raise ValueError("could not locate world_history events/figures layers")

    reader = BinaryReader(BytesIO(payload))
    reader.seek(lm.events_bodies_start)
    for idx in range(lm.event_count):
        tag = reader.read_int32()
        if not (0 <= tag <= 0x85):
            raise ValueError(f"bad history_event tag {tag} at 0x{reader.tell() - 4:x}")
        body_off = reader.tell()
        skip_event_body(reader, tag, save_version=save_version)
        if on_event is not None:
            on_event(idx, tag, body_off)
    if reader.tell() != lm.events_end:
        raise ValueError(
            f"events walk desync: ended 0x{reader.tell():x}, expected 0x{lm.events_end:x}"
        )

    fig_count, _ = walk_figures_dense_layer(
        reader, payload, save_version=save_version, on_figure=on_figure
    )
    figures_end = reader.tell()

    collections_count_offset = reader.tell()
    coll_count, _ = walk_collections_layer(
        reader, save_version=save_version, on_collection=on_collection
    )
    collections_end = reader.tell()

    eras_count_offset = reader.tell()
    era_count, _ = walk_eras_layer(reader, on_era=on_era)
    eras_end = reader.tell()

    skip_history_tail(reader, save_version=save_version)
    history_end = reader.tell()

    return WorldHistoryLandmarks(
        events_count_offset=lm.events_count_offset,
        events_bodies_start=lm.events_bodies_start,
        events_end=lm.events_end,
        event_count=lm.event_count,
        figures_count_offset=lm.figures_count_offset,
        figures_bodies_start=lm.figures_bodies_start,
        figure_count=fig_count,
        figures_end=figures_end,
        collections_count_offset=collections_count_offset,
        collection_count=coll_count,
        collections_end=collections_end,
        eras_count_offset=eras_count_offset,
        era_count=era_count,
        eras_end=eras_end,
        history_end=history_end,
    )
