"""historical_figure vector / header parsing (DF 0.47.05 Path C RE)."""

from __future__ import annotations

import struct
from dataclasses import dataclass, field
from io import BytesIO
from pathlib import Path
import struct

from ..binary_reader import BinaryReader
from .language_name import LanguageName, read_language_name
from .primitives import WorldHeaderHypothesis
from .vector_io import score_posnull_prefix, skip_posnull_pointer_vector


@dataclass(frozen=True)
class HistoricalFigureHeader:
    """Fields through ``id`` / ``art_count`` (df.history_figure.xml)."""

    profession: int
    race: int
    caste: int
    sex: int
    orientation_flags: int
    appeared_year: int
    born_year: int
    born_seconds: int
    curse_year: int
    curse_seconds: int
    birth_year_bias: int
    birth_time_bias: int
    old_year: int
    old_seconds: int
    died_year: int
    died_seconds: int
    name: LanguageName
    civ_id: int
    population_id: int
    breed_id: int
    cultural_identity: int
    family_head_id: int
    flag_indices: list[int]
    unit_id: int
    nemesis_id: int
    figure_id: int
    art_count: int
    payload_offset: int
    header_bytes: int


@dataclass(frozen=True)
class FiguresVectorAnchor:
    """Located ``world_history.figures`` pointer vector on Namushul-style saves."""

    vector_offset: int
    vector_count: int
    present_count: int
    posnull_score: int
    flags_end: int
    prefix_bytes: int
    bodies_start: int
    death_events_offset: int | None = None
    notes: list[str] = field(default_factory=list)


@dataclass
class HistoricalFigureCatalog:
    anchor: FiguresVectorAnchor
    headers: list[HistoricalFigureHeader] = field(default_factory=list)
    id_chain_length: int = 0
    max_id_seen: int = -1
    notes: list[str] = field(default_factory=list)


def _read_flagarray(reader: BinaryReader) -> list[int]:
    count = reader.read_int32()
    if count < 0 or count > 64:
        raise ValueError(f"implausible histfig flagarray count {count} at 0x{reader.tell() - 4:x}")
    # Save writer FUN_14070a090 uses a byte-vector helper for histfig flags,
    # not the in-memory df-flagarray int32 element layout.
    return [reader.read_uint8() for _ in range(count)]


def read_historical_figure_header(reader: BinaryReader) -> HistoricalFigureHeader:
    """Read fixed historical_figure prefix through ``art_count``."""
    start = reader.tell()
    profession = reader.read_int16()
    race = reader.read_int16()
    caste = reader.read_int16()
    # Save writer FUN_14070a090 writes pronoun_type as one byte.
    sex = reader.read_uint8()
    reader.read_uint8()  # one-byte struct pad before the first int32 field
    orientation_flags = reader.read_int32()
    appeared_year = reader.read_int32()
    born_year = reader.read_int32()
    born_seconds = reader.read_int32()
    curse_year = reader.read_int32()
    curse_seconds = reader.read_int32()
    birth_year_bias = reader.read_int32()
    birth_time_bias = reader.read_int32()
    old_year = reader.read_int32()
    old_seconds = reader.read_int32()
    died_year = reader.read_int32()
    died_seconds = reader.read_int32()
    name = read_language_name(reader)
    civ_id = reader.read_int32()
    population_id = reader.read_int32()
    breed_id = reader.read_int32()
    cultural_identity = reader.read_int32()
    family_head_id = reader.read_int32()
    # Save order after family_head_id is not the same as df-structures'
    # in-memory declaration order.
    art_count = reader.read_int32()
    unit_id = reader.read_int32()
    nemesis_id = reader.read_int32()
    flag_indices = _read_flagarray(reader)
    figure_id = reader.read_int32()
    end = reader.tell()
    return HistoricalFigureHeader(
        profession=profession,
        race=race,
        caste=caste,
        sex=sex,
        orientation_flags=orientation_flags,
        appeared_year=appeared_year,
        born_year=born_year,
        born_seconds=born_seconds,
        curse_year=curse_year,
        curse_seconds=curse_seconds,
        birth_year_bias=birth_year_bias,
        birth_time_bias=birth_time_bias,
        old_year=old_year,
        old_seconds=old_seconds,
        died_year=died_year,
        died_seconds=died_seconds,
        name=name,
        civ_id=civ_id,
        population_id=population_id,
        breed_id=breed_id,
        cultural_identity=cultural_identity,
        family_head_id=family_head_id,
        flag_indices=flag_indices,
        unit_id=unit_id,
        nemesis_id=nemesis_id,
        figure_id=figure_id,
        art_count=art_count,
        payload_offset=start,
        header_bytes=end - start,
    )


# Empirical max on Namushul; values like 1703 appear inside opaque blobs, not real headers.
MAX_HISTFIG_ART_COUNT = 20


def header_looks_valid(header: HistoricalFigureHeader, *, expect_id: int | None = None) -> bool:
    if expect_id is not None and header.figure_id != expect_id:
        return False
    if not (0 <= header.figure_id <= 20_000):
        return False
    if header.art_count < 0 or header.art_count > MAX_HISTFIG_ART_COUNT:
        return False
    if not (0 <= header.race <= 500 and 0 <= header.caste <= 50 and -1 <= header.sex <= 2):
        return False
    if header.profession < -1 or header.profession > 200:
        return False
    if not (0 <= header.civ_id <= 500):
        return False
    if header.name.language not in (-1, 0, 1):
        return False
    if len(header.name.first_name) > 64 or len(header.name.nickname) > 64:
        return False
    if any(word > 500_000 or word < -2 for word in header.name.words):
        return False
    return True


def try_read_historical_figure_header(
    reader: BinaryReader,
    *,
    expect_id: int | None = None,
) -> HistoricalFigureHeader | None:
    start = reader.tell()
    try:
        header = read_historical_figure_header(reader)
    except (EOFError, ValueError):
        reader.seek(start)
        return None
    if not header_looks_valid(header, expect_id=expect_id):
        reader.seek(start)
        return None
    return header


def _count_present_flags(payload: bytes, vector_offset: int, count: int) -> tuple[int, int]:
    flags = payload[vector_offset + 4 : vector_offset + 4 + count]
    present = sum(1 for byte in flags if byte != 0)
    posnull_like = sum(1 for byte in flags if byte in (0, 1))
    return present, posnull_like


def _find_death_events_vector(payload: bytes, *, search_start: int, search_end: int) -> int | None:
    """Locate ``events_death`` posnull vector after the figures body region."""
    from .history_events import locate_death_events_vector

    death = locate_death_events_vector(
        payload,
        search_start=search_start,
        search_end=search_end,
    )
    return death.vector_offset if death else None


def _find_first_body_offset(
    payload: bytes,
    *,
    flags_end: int,
    search_limit: int = 512,
) -> int | None:
    """Scan the post-vector prefix for the first plausible ``id=0`` header."""
    best: tuple[int, int] | None = None  # -prefix distance, offset
    for delta in range(search_limit):
        offset = flags_end + delta
        if offset + 200 > len(payload):
            break
        reader = BinaryReader(BytesIO(payload))
        reader.seek(offset)
        header = try_read_historical_figure_header(reader, expect_id=0)
        if header is not None:
            score = (-abs(delta - 80), offset)
            if best is None or score > best:
                best = score
    return best[1] if best is not None else None


def locate_figures_vector(
    payload: bytes,
    header: WorldHeaderHypothesis,
    *,
    search_start: int,
    search_end: int | None = None,
) -> FiguresVectorAnchor | None:
    """
    Find the ``figures`` stl-vector by count echo + posnull prefix + ``id=0`` body.

    On Namushul: vector @ ``0x2131bb0``, bodies @ ``0x2134dd0``, death @ ``0x226009c``.
    """
    if len(header.max_ids) < 9:
        return None
    figure_count = header.max_ids[8]
    search_end = len(payload) if search_end is None else search_end

    best: tuple[int, int, int, int] | None = None  # score, present, offset, flags_end
    for offset in range(search_start, search_end - 4, 4):
        if int.from_bytes(payload[offset : offset + 4], "little", signed=True) != figure_count:
            continue
        score = score_posnull_prefix(payload, offset, sample=min(figure_count, 20_000))
        present, _ = _count_present_flags(payload, offset, figure_count)
        if best is None or score > best[0]:
            reader = BinaryReader(BytesIO(payload))
            reader.seek(offset)
            try:
                skip_posnull_pointer_vector(reader)
            except ValueError:
                continue
            flags_end = reader.tell()
            best = (score, present, offset, flags_end)

    if best is None:
        return None

    score, present, vector_offset, flags_end = best
    bodies_start = _find_first_body_offset(payload, flags_end=flags_end)
    if bodies_start is None:
        return None

    death_offset = None
    tail_bytes = len(payload) - bodies_start
    if tail_bytes > 0:
        if len(payload) < 80_000_000:
            d_start = bodies_start + 1_150_000
            d_end = min(len(payload), bodies_start + 1_280_000)
        else:
            d_start = bodies_start + max(90_000_000, tail_bytes // 2)
            d_end = min(len(payload), bodies_start + tail_bytes)
        death_offset = _find_death_events_vector(
            payload,
            search_start=d_start,
            search_end=d_end,
        )

    notes = [
        f"vector count={figure_count:,} posnull_score={score:,}",
        f"present flags (nonzero)={present:,}",
        f"bodies start @ 0x{bodies_start:x} (+{bodies_start - flags_end} after flags)",
    ]
    if death_offset is not None:
        notes.append(f"events_death vector @ 0x{death_offset:x}")

    return FiguresVectorAnchor(
        vector_offset=vector_offset,
        vector_count=figure_count,
        present_count=present,
        posnull_score=score,
        flags_end=flags_end,
        prefix_bytes=bodies_start - flags_end,
        bodies_start=bodies_start,
        death_events_offset=death_offset,
        notes=notes,
    )


def _quick_histfig_header_check(payload: bytes, offset: int) -> bool:
    """Reject scan candidates before expensive ``language_name`` parsing.

    Header byte layout (confirmed by save writer ``FUN_14070a090`` and the
    ``language_name`` writer ``FUN_1403159b0``):
      ``+0`` int16 profession, ``+2`` int16 race, ``+4`` int16 caste,
      ``+6`` uint8 sex, ``+7`` pad, ``+8..+55`` ten int32 year/time fields,
      ``+56`` uint8 has_name. When ``has_name == 0`` the name section is one
      byte; when ``has_name == 1`` it is first-string, nickname, then the
      word/parts_of_speech/language/name_type block.
    """
    if offset + 57 > len(payload):
        return False
    prof, race, caste = struct.unpack_from("<hhh", payload, offset)
    sex = payload[offset + 6]
    if not (-1 <= prof <= 200 and 0 <= race <= 500 and 0 <= caste <= 50 and -1 <= sex <= 2):
        return False
    has_name = payload[offset + 56]
    if has_name not in (0, 1):
        return False
    if has_name == 0:
        return True
    pos = offset + 57
    if pos + 2 > len(payload):
        return False
    first_len = struct.unpack_from("<h", payload, pos)[0]
    if first_len < 0 or first_len > 64:
        return False
    pos += 2 + first_len
    if pos + 2 > len(payload):
        return False
    nick_len = struct.unpack_from("<h", payload, pos)[0]
    if nick_len < 0 or nick_len > 64:
        return False
    return True



def _find_next_figure_start(
    payload: bytes,
    *,
    scan_start: int,
    previous_id: int,
    stop_before: int,
    max_scan: int = 2_000_000,
    art_count: int = 0,
    xml_dir: Path | None = None,
    expected_id: int | None = None,
) -> int | None:
    """Scan forward for the next figure header (minimum ``figure_id`` > ``previous_id``)."""
    del art_count, xml_dir
    scan_end = min(scan_start + max_scan, stop_before)
    best_off: int | None = None
    best_id = 2_000_000
    for candidate in range(scan_start, scan_end):
        if not _quick_histfig_header_check(payload, candidate):
            continue
        reader = BinaryReader(BytesIO(payload))
        reader.seek(candidate)
        header = try_read_historical_figure_header(reader)
        if header is None or header.figure_id <= previous_id:
            continue
        if expected_id is not None and header.figure_id != expected_id:
            continue
        if header.figure_id < best_id:
            best_id = header.figure_id
            best_off = candidate
    return best_off


def build_figure_body_starts(
    payload: bytes,
    *,
    bodies_start: int,
    stop_before: int,
    max_bodies: int,
    scan_limit: int = 2_000_000,
    min_body_gap: int = 600,
    xml_dir: Path | None = None,
) -> list[int]:
    """Locate present figure body starts using tail skip + min-id header scan."""
    from .body_skipper import SkipError, default_xml_dir as _default_xml, skip_historical_figure_body

    xml_dir = _default_xml() if xml_dir is None else Path(xml_dir)
    starts: list[int] = []
    offset = bodies_start
    while len(starts) < max_bodies and offset < stop_before:
        reader = BinaryReader(BytesIO(payload))
        reader.seek(offset)
        header = try_read_historical_figure_header(reader)
        if header is None:
            break
        starts.append(offset)
        if len(starts) >= max_bodies:
            break
        reader.seek(offset)
        try:
            skip_historical_figure_body(
                reader,
                payload,
                xml_dir=xml_dir,
                next_anchor=stop_before if len(starts) >= max_bodies - 1 else None,
                scan_stop=stop_before,
                scan_limit=scan_limit,
            )
        except SkipError:
            break
        nxt = reader.tell()
        if nxt <= offset or nxt > stop_before:
            break
        offset = nxt
    return starts


def walk_figure_id_chain(
    payload: bytes,
    *,
    start_offset: int,
    max_scan_per_body: int = 2_000_000,
    max_figures: int = 12747,
    stop_before: int | None = None,
) -> tuple[list[HistoricalFigureHeader], int]:
    """
    Walk consecutive ``figure_id`` values by scanning after each header.

    Bodies are variable-size; this validates header layout without a full body skipper.
    Returns (headers found, last id reached).
    """
    stop_before = len(payload) if stop_before is None else stop_before
    headers: list[HistoricalFigureHeader] = []

    reader = BinaryReader(BytesIO(payload))
    reader.seek(start_offset)
    first = try_read_historical_figure_header(reader, expect_id=0)
    if first is None:
        return [], -1

    headers.append(first)
    body_end = first.payload_offset + first.header_bytes
    expected_id = 1

    while expected_id < max_figures and len(headers) < max_figures:
        scan_end = min(body_end + max_scan_per_body, stop_before)
        found: HistoricalFigureHeader | None = None
        best_off: int | None = None
        best_id = 2_000_000
        for candidate in range(body_end, scan_end):
            if not _quick_histfig_header_check(payload, candidate):
                continue
            reader = BinaryReader(BytesIO(payload))
            reader.seek(candidate)
            header = try_read_historical_figure_header(reader, expect_id=None)
            if header is None or header.figure_id <= headers[-1].figure_id:
                continue
            if header.figure_id < best_id:
                best_id = header.figure_id
                best_off = candidate
                found = header
        if found is None or best_off is None:
            break
        headers.append(found)
        body_end = best_off + found.header_bytes
        expected_id = found.figure_id + 1

    last_id = headers[-1].figure_id if headers else -1
    return headers, last_id


def build_historical_figure_catalog(
    payload: bytes,
    header: WorldHeaderHypothesis,
    *,
    search_start: int,
    id_chain_limit: int = 32,
) -> HistoricalFigureCatalog | None:
    anchor = locate_figures_vector(payload, header, search_start=search_start)
    if anchor is None:
        return None

    stop = anchor.death_events_offset or len(payload)
    chain, last_id = walk_figure_id_chain(
        payload,
        start_offset=anchor.bodies_start,
        max_figures=id_chain_limit,
        stop_before=stop,
    )

    notes = list(anchor.notes)
    if chain:
        notes.append(
            f"id chain 0..{last_id} validated ({len(chain)} headers parsed)"
        )

    return HistoricalFigureCatalog(
        anchor=anchor,
        headers=chain,
        id_chain_length=len(chain),
        max_id_seen=last_id,
        notes=notes,
    )
