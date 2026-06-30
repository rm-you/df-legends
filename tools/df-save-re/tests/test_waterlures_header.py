"""Integration tests against real DF 0.47.05 world.dat (Waterlures)."""

from __future__ import annotations

from io import BytesIO
from pathlib import Path

from df_save_re.binary_reader import BinaryReader
from df_save_re.compression import decompress_file, read_header
from df_save_re.deserializers.primitives import WorldHeaderHypothesis
from df_save_re.target import TARGET_SAVE_VERSION, TARGET_WORLD_HEADER_ID_COUNT


def test_waterlures_header_alignment(waterlures_world_dat: Path):
    raw = waterlures_world_dat.read_bytes()
    header = read_header(raw)
    assert header.save_version == TARGET_SAVE_VERSION

    payload = decompress_file(waterlures_world_dat).payload
    reader = BinaryReader(BytesIO(payload))
    wh = WorldHeaderHypothesis.read(reader, save_version=header.save_version)

    assert wh.unknown_int16 == 0
    assert len(wh.max_ids) == TARGET_WORLD_HEADER_ID_COUNT
    assert wh.has_name is False
    assert wh.world_name is not None
    assert wh.world_name.value == "Minbazkar"
    assert wh.bytes_consumed == 0xE5
    assert reader.tell() == wh.bytes_consumed

    # Sanity: plausible max IDs (order of magnitude from Legends-scale world)
    assert 10_000 < wh.max_ids[8] < 200_000  # histfig
    assert 100_000 < wh.max_ids[9] < 2_000_000  # events

    # Generated raws should follow immediately (vector count, not raw tag text)
    next_int = reader.read_int32()
    assert next_int == 42
    assert not payload[wh.bytes_consumed : wh.bytes_consumed + 4].startswith(b"[")


def test_waterlures_probe_save_kind(waterlures_world_dat: Path):
    from df_save_re.deserializers.probe import probe_save
    from df_save_re.save_bundle import SaveKind

    result = probe_save(str(waterlures_world_dat))
    assert result.save_kind == SaveKind.WORLD_DAT
    assert result.world_header is not None
    assert result.world_header_error is None
    assert result.world_header.world_name
    assert result.world_header.world_name.value == "Minbazkar"
