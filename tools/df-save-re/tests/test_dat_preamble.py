"""Tests for world.dat preamble (header + generated raws)."""

from __future__ import annotations

from pathlib import Path

import pytest

from df_save_re.compression import decompress_file, read_header
from df_save_re.deserializers.world_dat import parse_dat_preamble
from df_save_re.target import TARGET_SAVE_VERSION
from fixture_paths import resolve_fixture

EXPECTED = {
    "small-retired": {
        "world_name": "Namushul",
        "header_bytes": 0xE4,
        "preamble_bytes": 0x881B,
        "world_data_offset": 0x881B,
        "post_raws_int32": 0,
        "section_count": 42,
        "section0_count": 47,
        "section0_first": "inorganic_generated",
        "generated_raws_bytes": 34611,
        "first_region_marker_min": 0x800000,
    },
    "waterlures-retired": {
        "world_name": "Minbazkar",
        "header_bytes": 0xE5,
        "preamble_bytes": 0x809B,
        "world_data_offset": 0x809B,
        "post_raws_int32": 0,
        "section_count": 42,
        "section0_count": 47,
        "section0_first": "inorganic_generated",
        "generated_raws_bytes": 32690,
        "first_region_marker_min": 0x800000,
    },
}


@pytest.fixture(params=list(EXPECTED.keys()))
def preamble_case(request):
    subdir, _ = request.param, "world.dat"
    path = resolve_fixture(request.param, "world.dat")
    if path is None:
        pytest.skip("fixture missing — run scripts/fetch_fixtures.py")
    return request.param, path


def test_dat_preamble(preamble_case):
    case_name, path = preamble_case
    expected = EXPECTED[case_name]

    file_header = read_header(path.read_bytes())
    assert file_header.save_version == TARGET_SAVE_VERSION

    payload = decompress_file(path).payload
    pre = parse_dat_preamble(payload, save_version=file_header.save_version)

    assert pre.header.world_name
    assert pre.header.world_name.value == expected["world_name"]
    assert pre.header.bytes_consumed == expected["header_bytes"]
    assert pre.bytes_consumed == expected["preamble_bytes"]
    assert pre.world_data_offset == expected["world_data_offset"]
    assert pre.post_raws_int32 == expected["post_raws_int32"]

    gr = pre.generated_raws
    assert gr.section_count == expected["section_count"]
    assert gr.bytes_consumed == expected["generated_raws_bytes"]
    assert gr.sections[0].string_count == expected["section0_count"]
    assert gr.sections[0].strings[0] == expected["section0_first"]
    assert gr.total_strings > 100

    marker = payload.find(b"*START REGION SAVE*")
    assert marker >= expected["first_region_marker_min"]
