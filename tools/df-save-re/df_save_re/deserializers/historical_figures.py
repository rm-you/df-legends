"""historical_figure vector / header parsing (DF 0.47.05 Path C RE)."""

from __future__ import annotations

from dataclasses import dataclass, field
from io import BytesIO

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
    return [reader.read_int32() for _ in range(count)]


def read_historical_figure_header(reader: BinaryReader) -> HistoricalFigureHeader:
    """Read fixed historical_figure prefix through ``art_count``."""
    start = reader.tell()
    profession = reader.read_int16()
    race = reader.read_int16()
    caste = reader.read_int16()
    sex = reader.read_int16()
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
    flag_indices = _read_flagarray(reader)
    unit_id = reader.read_int32()
    nemesis_id = reader.read_int32()
    figure_id = reader.read_int32()
    art_count = reader.read_int32()
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


def header_looks_valid(header: HistoricalFigureHeader, *, expect_id: int | None = None) -> bool:
    if expect_id is not None and header.figure_id != expect_id:
        return False
    if not (0 <= header.figure_id <= 200_000):
        return False
    if not (0 <= header.race <= 500 and 0 <= header.caste <= 50 and -1 <= header.sex <= 2):
        return False
    if header.profession < -1 or header.profession > 500:
        return False
    if not (0 <= header.civ_id <= 500):
        return False
    if header.name.language not in (-1, 0, 1):
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
    """Locate ``events_death`` posnull vector (count=151 on Namushul)."""
    for offset in range(search_start, search_end - 4, 4):
        if int.from_bytes(payload[offset : offset + 4], "little", signed=True) != 151:
            continue
        sample = payload[offset + 4 : offset + 4 + 151]
        if len(sample) < 151:
            continue
        quality = sum(1 for byte in sample if byte in (0, 1)) / 151
        if quality >= 0.95:
            return offset
    return None


def _find_first_body_offset(
    payload: bytes,
    *,
    flags_end: int,
    search_limit: int = 512,
) -> int | None:
    """Scan the post-vector prefix for the first plausible ``id=0`` header."""
    for delta in range(0, search_limit, 2):
        offset = flags_end + delta
        if offset + 200 > len(payload):
            break
        reader = BinaryReader(BytesIO(payload))
        reader.seek(offset)
        header = try_read_historical_figure_header(reader, expect_id=0)
        if header is not None:
            return offset
    return None


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

    death_offset = _find_death_events_vector(
        payload,
        search_start=bodies_start,
        search_end=min(len(payload), bodies_start + 20_000_000),
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


def walk_figure_id_chain(
    payload: bytes,
    *,
    start_offset: int,
    max_scan_per_body: int = 500_000,
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
        for candidate in range(body_end, scan_end, 2):
            reader = BinaryReader(BytesIO(payload))
            reader.seek(candidate)
            header = try_read_historical_figure_header(reader, expect_id=expected_id)
            if header is not None:
                found = header
                break
        if found is None:
            break
        headers.append(found)
        body_end = found.payload_offset + found.header_bytes
        expected_id += 1

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
