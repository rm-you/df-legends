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
from .figure_links import read_figure_links, skip_figure_links
from .histfig_info import read_histfig_info, read_vague_relationships, skip_histfig_info, skip_vague_relationships
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
            rec[name] = reader.read_bytes(length).decode("cp437") if length > 0 else ""
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
# figures (link readers live in figure_links.py)


def read_figure_record(
    reader: BinaryReader,
    *,
    figure_id: int,
    save_version: int = 1716,
) -> tuple[HistoricalFigureHeader, dict[str, Any]]:
    """Read one dense figure body (header + links + info + vague)."""
    header = read_historical_figure_header(reader, save_version=save_version, figure_id=figure_id)
    tail: dict[str, Any] = {
        "orientation_flags": header.orientation_flags,
        "flags": header.flag_indices,
        "global_id": header.global_id,
        "art_count": header.art_count,
    }
    entity_links = read_figure_links(reader, "entity", save_version=save_version)
    site_links = read_figure_links(reader, "site", save_version=save_version)
    histfig_links = read_figure_links(reader, "histfig", save_version=save_version)
    tail["entity_links"] = entity_links
    tail["site_links"] = site_links
    tail["histfig_links"] = histfig_links
    tail["entity_link_count"] = len(entity_links)
    tail["site_link_count"] = len(site_links)
    tail["histfig_link_count"] = len(histfig_links)
    if reader.read_uint8():
        tail["info"] = read_histfig_info(reader, save_version=save_version)
        tail["has_info"] = True
    if save_version > 0x6A0 and reader.read_uint8():
        tail["vague_relationships"] = read_vague_relationships(reader)
        tail["has_vague"] = True
    return header, tail


def skip_figure_record(reader: BinaryReader, *, save_version: int = 1716) -> None:
    read_historical_figure_header(reader, save_version=save_version, figure_id=-1)
    skip_figure_links(reader, "entity", save_version=save_version)
    skip_figure_links(reader, "site", save_version=save_version)
    skip_figure_links(reader, "histfig", save_version=save_version)
    if reader.read_uint8():
        skip_histfig_info(reader, save_version=save_version)
    if save_version > 0x6A0 and reader.read_uint8():
        skip_vague_relationships(reader)


def walk_figures_dense_layer(
    reader: BinaryReader,
    payload: bytes | None = None,
    *,
    save_version: int = 1716,
    limit: int | None = None,
    read_bodies: bool = True,
    on_figure: Callable[[int, HistoricalFigureHeader, dict[str, Any]], None] | None = None,
) -> tuple[int, int]:
    """Walk dense figures vector (i32 count + count bodies)."""
    start = reader.tell()
    count = reader.read_int32()
    n = count if limit is None else min(count, limit)
    for slot in range(n):
        if read_bodies:
            header, tail = read_figure_record(reader, figure_id=slot, save_version=save_version)
        else:
            skip_figure_record(reader, save_version=save_version)
            header = None
            tail = {}
        if on_figure is not None and header is not None:
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
    """history_era body (FUN_14075cd70 + details FUN_14075ccb0)."""

    year: int
    title_type: int
    title_histfig_1: int
    title_histfig_2: int
    title_ordinal: int
    name: str
    details: dict[str, Any] = field(default_factory=dict)

    # Back-compat aliases used by older callbacks/tests.
    @property
    def index(self) -> int:
        return self.year

    @property
    def year_display(self) -> int:
        return self.year


def read_era_record(reader: BinaryReader) -> EraRecord:
    year = reader.read_int32()
    title_type = reader.read_int16()
    title_histfig_1 = reader.read_int32()
    title_histfig_2 = reader.read_int32()
    title_ordinal = reader.read_int32()
    name_len = reader.read_int16()
    if name_len < 0 or name_len > 4096:
        raise ValueError(f"implausible era name length {name_len} at 0x{reader.tell() - 2:x}")
    name = reader.read_bytes(name_len).decode("cp437")
    # FUN_14075ccb0 details compound
    living_powers = reader.read_int32()
    living_megabeasts = reader.read_int32()
    living_semimegabeasts = reader.read_int32()
    power_hf1 = reader.read_int32()
    power_hf2 = reader.read_int32()
    power_hf3 = reader.read_int32()
    vec_n = reader.read_int32()
    if vec_n < 0 or vec_n > 1_000_000:
        raise ValueError(f"implausible era civilized_races count {vec_n} at 0x{reader.tell() - 4:x}")
    civilized_races = [reader.read_int32() for _ in range(vec_n)]
    civilized_total = reader.read_int32()
    civilized_mundane = reader.read_int32()
    return EraRecord(
        year=year,
        title_type=title_type,
        title_histfig_1=title_histfig_1,
        title_histfig_2=title_histfig_2,
        title_ordinal=title_ordinal,
        name=name,
        details={
            "living_powers": living_powers,
            "living_megabeasts": living_megabeasts,
            "living_semimegabeasts": living_semimegabeasts,
            "power_hf1": power_hf1,
            "power_hf2": power_hf2,
            "power_hf3": power_hf3,
            "civilized_races": civilized_races,
            "civilized_total": civilized_total,
            "civilized_mundane": civilized_mundane,
        },
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
    read_history_tail(reader, save_version=save_version)


def read_history_tail(reader: BinaryReader, *, save_version: int = 1716) -> dict[str, Any]:
    """Read world_history trailing vectors/scalars after eras (FUN_1407099a0)."""

    def _read_i32_vec(name: str) -> list[int]:
        n = reader.read_int32()
        if n < 0 or n > 50_000_000:
            raise ValueError(f"implausible {name} count {n} at 0x{reader.tell() - 4:x}")
        return [reader.read_int32() for _ in range(n)]

    def _read_i16_vec(name: str) -> list[int]:
        n = reader.read_int32()
        if n < 0 or n > 50_000_000:
            raise ValueError(f"implausible {name} count {n} at 0x{reader.tell() - 4:x}")
        return [reader.read_int16() for _ in range(n)]

    out: dict[str, Any] = {}
    out["discovered_art_image_id"] = _read_i32_vec("discovered_art_image_id")
    out["discovered_art_image_subid"] = _read_i16_vec("discovered_art_image_subid")
    out["total_unk"] = reader.read_int32()
    out["total_powers"] = reader.read_int32()
    out["total_megabeasts"] = reader.read_int32()
    out["total_semimegabeasts"] = reader.read_int32()
    out["unk_14"] = _read_i32_vec("unk_14")
    if save_version > 0x5D7:
        out["unk_v42_1"] = [reader.read_int16() for _ in range(28)]
    if save_version > 0x65C:
        supp_count = reader.read_int32()
        if supp_count < 0 or supp_count > 1_000_000:
            raise ValueError(f"implausible supplement count {supp_count}")
        supplements = []
        for _ in range(supp_count):
            supplements.append(
                {
                    "event": reader.read_int32(),
                    "occasion_type": reader.read_int32(),
                    "site": reader.read_int32(),
                    "unk_1": reader.read_int32(),
                    "unk_2": reader.read_int32(),
                }
            )
        out["relationship_event_supplements"] = supplements
        rel_blocks = []
        block_count = reader.read_int32()
        if block_count < 0 or block_count > 1_000_000:
            raise ValueError(f"implausible relationship block count {block_count}")
        for _ in range(block_count):
            used = reader.read_int32()
            if used < 0 or used > 1024:
                raise ValueError(f"implausible relationship entry count {used}")
            next_element = reader.read_int32()
            entries = []
            for _ in range(used):
                entries.append(
                    {
                        "event": reader.read_int32(),
                        "relationship": reader.read_int16(),
                        "source_hf": reader.read_int32(),
                        "target_hf": reader.read_int32(),
                        "year": reader.read_int32(),
                    }
                )
            rel_blocks.append({"next_element": next_element, "entries": entries})
        out["relationship_events"] = rel_blocks
    if save_version > 0x68F:
        n = reader.read_int32()
        if n < 0 or n > 10_000_000:
            raise ValueError(f"implausible intrigue count {n}")
        intrigues = []
        for _ in range(n):
            rec: dict[str, Any] = {"id": reader.read_int32()}
            if reader.read_uint8():
                rec["body"] = {
                    "f0": reader.read_int32(),
                    "f1": reader.read_int32(),
                    "f2": reader.read_int32(),
                    "f3": reader.read_int16(),
                    "block_a": [reader.read_int32() for _ in range(6)],
                    "f4": reader.read_int16(),
                    "f5": reader.read_int32(),
                }
                if save_version > 0x6A2:
                    rec["body"]["f6"] = [reader.read_int32() for _ in range(3)]
                rec["body"]["block_b"] = [reader.read_int32() for _ in range(10)]
            rec["tail"] = [reader.read_int32() for _ in range(4)]
            intrigues.append(rec)
        out["intrigues"] = intrigues
    out["tail_offset"] = reader.tell()
    return out


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
    search_span = max(40_000_000, (max_fig_id + 1) * 4096)
    search_lo = max(0, len(payload) - search_span)
    for count in (max_fig_id + 1, max_fig_id):
        needle = struct.pack("<i", count)
        pos = search_lo
        while len(out) < 64:
            off = payload.find(needle, pos)
            if off < 0:
                break
            pos = off + 4
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


def _verify_events_landmark(
    payload: bytes,
    count_off: int,
    bodies_start: int,
    events_end: int,
    *,
    save_version: int,
) -> bool:
    """Forward-walk events from ``count_off``; must land exactly on ``events_end``."""
    declared = struct.unpack_from("<i", payload, count_off)[0]
    if declared <= 0 or bodies_start != count_off + 4:
        return False
    if bodies_start >= events_end:
        return False
    reader = BinaryReader(BytesIO(payload))
    reader.seek(bodies_start)
    try:
        for _ in range(declared):
            if reader.tell() >= events_end:
                return False
            tag = reader.read_int32()
            if not (0 <= tag <= 0x85):
                return False
            skip_event_body(reader, tag, save_version=save_version)
    except (ValueError, EOFError):
        return False
    return reader.tell() == events_end


def _event_count_guesses(header: WorldHeaderHypothesis) -> list[int]:
    if len(header.max_ids) <= 9:
        return []
    mx = header.max_ids[9]
    primary = int(mx * 0.775)
    ordered = [primary, primary + 1, primary - 1, mx + 1, mx, mx - 1]
    for ratio in (0.80, 0.85, 0.70, 0.65, 0.60, 0.50):
        ordered.append(int(mx * ratio))
    seen: set[int] = set()
    out: list[int] = []
    for g in ordered:
        if g > 0 and g not in seen:
            seen.add(g)
            out.append(g)
    return out


def _locate_events_start_rfind(
    payload: bytes,
    events_end: int,
    *,
    save_version: int,
    scan_back: int,
    header: WorldHeaderHypothesis | None,
    counts: list[int],
) -> tuple[int, int, int] | None:
    """Fast path: rfind count-echo needles, verify forward walk."""
    lo = max(0, events_end - scan_back)
    for count in counts:
        needle = struct.pack("<i", count)
        pos = events_end
        attempts = 0
        while pos >= lo and attempts < 8:
            off = payload.rfind(needle, lo, pos + 1)
            if off < 0:
                break
            attempts += 1
            if off + 4 <= events_end and _verify_events_landmark(
                payload,
                off,
                off + 4,
                events_end,
                save_version=save_version,
            ):
                return (off, off + 4, count)
            pos = off - 4
    return None


def _locate_events_start_exhaustive(
    payload: bytes,
    events_end: int,
    *,
    save_version: int,
    scan_back: int,
    header: WorldHeaderHypothesis | None,
) -> tuple[int, int, int] | None:
    """Deterministic fallback: scan window for count+tag pairs, verify highest first."""
    lo = max(0, events_end - scan_back)
    ceiling = 50_000_000
    if header is not None and len(header.max_ids) > 9:
        ceiling = min(ceiling, header.max_ids[9] + 1)
    by_declared: dict[int, int] = {}
    # Count prefix is not guaranteed 4-byte aligned (Namushul: 0x11b494a).
    for off in range(lo, events_end - 7):
        bodies_start = off + 4
        span = events_end - bodies_start
        if span < 8:
            continue
        max_decl = min(ceiling, span // 8)
        declared = struct.unpack_from("<i", payload, off)[0]
        if not (0 < declared <= max_decl):
            continue
        tag = struct.unpack_from("<i", payload, bodies_start)[0]
        if not (0 <= tag <= 0x85):
            continue
        prev = by_declared.get(declared)
        if prev is None or off < prev:
            by_declared[declared] = off
    for declared, off in sorted(by_declared.items(), key=lambda item: item[1]):
        if _verify_events_landmark(
            payload,
            off,
            off + 4,
            events_end,
            save_version=save_version,
        ):
            return (off, off + 4, declared)
    return None


def _locate_events_start(
    payload: bytes,
    events_end: int,
    *,
    save_version: int,
    scan_back: int,
    header: WorldHeaderHypothesis | None = None,
    count_guesses: list[int] | None = None,
) -> tuple[int, int, int] | None:
    """Find events count prefix; ratio rfind first, exhaustive chain fallback."""
    if count_guesses is None:
        count_guesses = _event_count_guesses(header) if header else []
    if count_guesses:
        found = _locate_events_start_rfind(
            payload,
            events_end,
            save_version=save_version,
            scan_back=scan_back,
            header=header,
            counts=count_guesses,
        )
        if found is not None:
            return found
    return _locate_events_start_exhaustive(
        payload,
        events_end,
        save_version=save_version,
        scan_back=scan_back,
        header=header,
    )


def locate_world_history(
    payload: bytes,
    header: WorldHeaderHypothesis,
    *,
    save_version: int = 1716,
    scan_back: int | None = None,
) -> WorldHistoryLandmarks | None:
    """Locate events + figures deterministically from the figures count echo."""
    if scan_back is None:
        est_events = header.max_ids[9] if len(header.max_ids) > 9 else 0
        scan_back = min(
            len(payload),
            max(0x1000000, (est_events + 1) * 512),
            0x3000000,  # 48 MiB cap — enough for Waterlures (~21 MiB gap)
        )
    for fig_off in _figures_anchor_candidates(payload, header, save_version=save_version):
        located = _locate_events_start(
            payload,
            fig_off,
            save_version=save_version,
            scan_back=scan_back,
            header=header,
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
    on_history_tail: Callable[[dict[str, Any], int], None] | None = None,
    read_figure_bodies: bool = True,
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
        reader,
        payload,
        save_version=save_version,
        read_bodies=read_figure_bodies,
        on_figure=on_figure,
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

    tail_start = reader.tell()
    tail_rec = read_history_tail(reader, save_version=save_version)
    history_end = reader.tell()
    if on_history_tail is not None:
        on_history_tail(tail_rec, tail_start)

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
