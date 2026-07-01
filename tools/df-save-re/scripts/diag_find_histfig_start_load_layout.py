"""Search for historical_figure body starts using the binary load layout."""

from __future__ import annotations

import argparse
from dataclasses import dataclass

from df_save_re.deserializers.historical_figures import locate_figures_vector
from df_save_re.deserializers.world_layout import discover_layout_landmarks, resolve_history_search_start
from df_save_re.save_preamble import resolve_save_payload


@dataclass
class Candidate:
    start: int
    end: int
    pad_after_sex: bool
    profession: int
    race: int
    caste: int
    sex: int
    scalars: list[int]
    has_name: int
    ids: list[int]
    art_count: int
    unit_id: int
    nemesis_id: int
    flag_count: int
    figure_id: int
    counts: tuple[int, int, int]
    tags: tuple[int | None, int | None, int | None]


def _i16(payload: bytes, offset: int) -> int:
    return int.from_bytes(payload[offset : offset + 2], "little", signed=True)


def _u8(payload: bytes, offset: int) -> int:
    return payload[offset]


def _i32(payload: bytes, offset: int) -> int:
    return int.from_bytes(payload[offset : offset + 4], "little", signed=True)


def _read_string(payload: bytes, offset: int) -> tuple[str, int] | None:
    length = _i16(payload, offset)
    offset += 2
    if length < 0 or length > 64:
        return None
    raw = payload[offset : offset + length]
    if len(raw) != length:
        return None
    return raw.decode("latin-1", errors="replace"), offset + length


def _parse_candidate(payload: bytes, start: int, *, pad_after_sex: bool) -> Candidate | None:
    try:
        offset = start
        profession = _i16(payload, offset)
        race = _i16(payload, offset + 2)
        caste = _i16(payload, offset + 4)
        sex = _u8(payload, offset + 6)
        offset += 7
        if pad_after_sex:
            offset += 1
        if not (-1 <= profession <= 200 and 0 <= race <= 500 and 0 <= caste <= 50 and 0 <= sex <= 2):
            return None
        scalars = [_i32(payload, offset + i * 4) for i in range(12)]
        offset += 48
        has_name = _u8(payload, offset)
        offset += 1
        if has_name not in (0, 1):
            return None
        if has_name:
            first = _read_string(payload, offset)
            if first is None:
                return None
            _, offset = first
            nick = _read_string(payload, offset)
            if nick is None:
                return None
            _, offset = nick
            words = [_i32(payload, offset + i * 4) for i in range(7)]
            if any(word < -2 or word > 500_000 for word in words):
                return None
            offset += 28 + 14 + 4 + 2
        ids = [_i32(payload, offset + i * 4) for i in range(5)]
        offset += 20
        art_count = _i32(payload, offset)
        unit_id = _i32(payload, offset + 4)
        nemesis_id = _i32(payload, offset + 8)
        offset += 12
        flag_count = _i32(payload, offset)
        offset += 4
        if not (0 <= flag_count <= 64):
            return None
        offset += flag_count
        figure_id = _i32(payload, offset)
        offset += 4
        counts = (_i32(payload, offset), _i32(payload, offset + 4), _i32(payload, offset + 8))
        tags = tuple(
            _i16(payload, offset + 4 + idx * 4) if 0 < count < 100 else None
            for idx, count in enumerate(counts)
        )
    except (IndexError, ValueError):
        return None
    if figure_id != 0:
        return None
    if art_count < 0 or art_count > 20:
        return None
    if any(count < 0 or count > 100 for count in counts):
        return None
    return Candidate(
        start=start,
        end=offset,
        pad_after_sex=pad_after_sex,
        profession=profession,
        race=race,
        caste=caste,
        sex=sex,
        scalars=scalars,
        has_name=has_name,
        ids=ids,
        art_count=art_count,
        unit_id=unit_id,
        nemesis_id=nemesis_id,
        flag_count=flag_count,
        figure_id=figure_id,
        counts=counts,
        tags=tags,
    )


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument("--radius", type=lambda value: int(value, 0), default=0x4000)
    args = parser.parse_args()

    pre = resolve_save_payload("tests/fixtures/small-retired/world.dat")
    payload = pre.payload
    layout = discover_layout_landmarks(payload, pre.preamble)
    search_start = resolve_history_search_start(payload, layout, pre.preamble.header)
    anchor = locate_figures_vector(payload, pre.preamble.header, search_start=search_start)
    assert anchor is not None
    start = anchor.flags_end
    end = min(len(payload), anchor.flags_end + args.radius)
    print(f"flags_end=0x{anchor.flags_end:x} old_bodies_start=0x{anchor.bodies_start:x}")
    for offset in range(start, end):
        for pad in (False, True):
            candidate = _parse_candidate(payload, offset, pad_after_sex=pad)
            if candidate is None:
                continue
            print(
                f"start=0x{candidate.start:x} end=0x{candidate.end:x} pad={candidate.pad_after_sex} "
                f"prof/race/caste/sex=({candidate.profession},{candidate.race},"
                f"{candidate.caste},{candidate.sex}) scalars={candidate.scalars} "
                f"has_name={candidate.has_name} ids={candidate.ids} art={candidate.art_count} "
                f"unit={candidate.unit_id} nem={candidate.nemesis_id} flags={candidate.flag_count} "
                f"counts={candidate.counts} tags={candidate.tags}"
            )


if __name__ == "__main__":
    main()
