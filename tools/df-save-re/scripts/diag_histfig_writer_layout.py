#!/usr/bin/env python3
"""Compare current vs Ghidra-derived historical_figure header layout."""

from __future__ import annotations

from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.historical_figures import locate_figures_vector, read_historical_figure_header
from df_save_re.deserializers.language_name import read_language_name
from df_save_re.deserializers.world_layout import discover_layout_landmarks, resolve_history_search_start
from df_save_re.save_preamble import resolve_save_payload


def read_new(reader: BinaryReader) -> dict[str, object]:
    start = reader.tell()
    profession = reader.read_int16()
    race = reader.read_int16()
    caste = reader.read_int16()
    sex = reader.read_uint8()
    reader.read_uint8()
    orientation_flags = reader.read_int32()
    years = [reader.read_int32() for _ in range(11)]
    name = read_language_name(reader)
    civ_id = reader.read_int32()
    population_id = reader.read_int32()
    breed_id = reader.read_int32()
    cultural_identity = reader.read_int32()
    family_head_id = reader.read_int32()
    art_count = reader.read_int32()
    unit_id = reader.read_int32()
    nemesis_id = reader.read_int32()
    flag_count = reader.read_int32()
    flags = [reader.read_uint8() for _ in range(flag_count)]
    figure_id = reader.read_int32()
    return {
        "start": start,
        "end": reader.tell(),
        "profession": profession,
        "race": race,
        "caste": caste,
        "sex": sex,
        "orientation_flags": orientation_flags,
        "years": years,
        "name_first": name.first_name,
        "name_nick": name.nickname,
        "name_words": name.words,
        "civ_id": civ_id,
        "population_id": population_id,
        "breed_id": breed_id,
        "cultural_identity": cultural_identity,
        "family_head_id": family_head_id,
        "art_count": art_count,
        "unit_id": unit_id,
        "nemesis_id": nemesis_id,
        "flag_count": flag_count,
        "flags": flags,
        "figure_id": figure_id,
    }


def main() -> int:
    pre = resolve_save_payload("tests/fixtures/small-retired/world.dat")
    payload = pre.payload
    layout = discover_layout_landmarks(payload, pre.preamble)
    search_start = resolve_history_search_start(payload, layout, pre.preamble.header)
    anchor = locate_figures_vector(payload, pre.preamble.header, search_start=search_start)
    assert anchor is not None
    print(anchor)
    starts = [anchor.bodies_start, anchor.bodies_start + 1, anchor.bodies_start + 2]
    # Current parser can find the next old-layout candidate; use it only to sample.
    r = BinaryReader(BytesIO(payload))
    r.seek(anchor.bodies_start)
    old = read_historical_figure_header(r)
    starts.append(r.tell())
    for start in starts:
        print(f"\n@ {start:#x}")
        r = BinaryReader(BytesIO(payload))
        r.seek(start)
        try:
            old = read_historical_figure_header(r)
            print("old", old.figure_id, old.art_count, old.name.first_name, old.name.words[:4], "end", f"{r.tell():#x}")
        except Exception as exc:
            print("old error", exc)
        r = BinaryReader(BytesIO(payload))
        r.seek(start)
        try:
            new = read_new(r)
            print(
                "new",
                {
                    "end": hex(new["end"]),
                    "profession": new["profession"],
                    "race": new["race"],
                    "caste": new["caste"],
                    "sex": new["sex"],
                    "orientation_flags": new["orientation_flags"],
                    "years": new["years"],
                    "name_first": new["name_first"],
                    "name_nick": new["name_nick"],
                    "name_words": new["name_words"],
                    "civ_id": new["civ_id"],
                    "population_id": new["population_id"],
                    "breed_id": new["breed_id"],
                    "cultural_identity": new["cultural_identity"],
                    "family_head_id": new["family_head_id"],
                    "art_count": new["art_count"],
                    "unit_id": new["unit_id"],
                    "nemesis_id": new["nemesis_id"],
                    "flag_count": new["flag_count"],
                    "flags": new["flags"],
                    "figure_id": new["figure_id"],
                },
            )
        except Exception as exc:
            print("new error", exc)
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
