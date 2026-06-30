"""Integration tests against real DF 0.47.05 world.dat fixtures."""

from __future__ import annotations

from io import BytesIO
from pathlib import Path

import pytest

from df_save_re.binary_reader import BinaryReader
from df_save_re.compression import decompress_file, read_header
from df_save_re.deserializers.primitives import WorldHeaderHypothesis
from df_save_re.target import TARGET_SAVE_VERSION, TARGET_WORLD_HEADER_ID_COUNT
from fixture_paths import resolve_fixture

# Validated against decompressed payloads (header uses 50 int32 ID counters @ 1716).
WORLD_DAT_EXPECTED: dict[str, dict] = {
    "waterlures": {
        "world_name": "Minbazkar",
        "bytes_consumed": 0xE5,
        "histfig_range": (10_000, 200_000),
        "event_range": (100_000, 2_000_000),
    },
    "small": {
        "world_name": "Namushul",
        "bytes_consumed": 0xE4,
        "histfig_range": (1_000, 50_000),
        "event_range": (10_000, 500_000),
    },
}


@pytest.fixture(params=list(WORLD_DAT_EXPECTED.keys()))
def world_dat_case(request):
    subdirs = {
        "waterlures": ("waterlures-retired", "world.dat"),
        "small": ("small-retired", "world.dat"),
    }
    subdir, filename = subdirs[request.param]
    path = resolve_fixture(subdir, filename)
    if path is None:
        pytest.skip(
            f"{request.param} world.dat not found — run: python3 scripts/fetch_fixtures.py"
        )
    return request.param, path


def test_world_dat_header_alignment(world_dat_case):
    case_name, path = world_dat_case
    expected = WORLD_DAT_EXPECTED[case_name]

    raw = path.read_bytes()
    header = read_header(raw)
    assert header.save_version == TARGET_SAVE_VERSION

    payload = decompress_file(path).payload
    reader = BinaryReader(BytesIO(payload))
    wh = WorldHeaderHypothesis.read(reader, save_version=header.save_version)

    assert wh.unknown_int16 == 0
    assert len(wh.max_ids) == TARGET_WORLD_HEADER_ID_COUNT
    assert wh.has_name is False
    assert wh.world_name is not None
    assert wh.world_name.value == expected["world_name"]
    assert wh.bytes_consumed == expected["bytes_consumed"]
    assert reader.tell() == wh.bytes_consumed

    lo, hi = expected["histfig_range"]
    assert lo < wh.max_ids[8] < hi
    lo, hi = expected["event_range"]
    assert lo < wh.max_ids[9] < hi

    next_int = reader.read_int32()
    assert next_int == 42
    assert not payload[wh.bytes_consumed : wh.bytes_consumed + 4].startswith(b"[")


def test_world_dat_probe(world_dat_case):
    from df_save_re.deserializers.probe import probe_save
    from df_save_re.save_bundle import SaveKind

    case_name, path = world_dat_case
    expected = WORLD_DAT_EXPECTED[case_name]

    result = probe_save(str(path))
    assert result.save_kind == SaveKind.WORLD_DAT
    assert result.world_header is not None
    assert result.world_header_error is None
    assert result.world_header.world_name
    assert result.world_header.world_name.value == expected["world_name"]
