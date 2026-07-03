"""Tests for df-save-re (synthetic fixtures — no real save required)."""

import struct
import zlib

import pytest

from df_save_re.binary_reader import BinaryReader
from df_save_re.compression import decompress_file, decompress_file_prefix, read_header
from df_save_re.scan import find_markers
from io import BytesIO


def _make_compressed_save(payload: bytes, save_version: int = 1716) -> bytes:
    compressed = zlib.compress(payload)
    header = struct.pack("<II", save_version, 1)
    block = struct.pack("<I", len(compressed)) + compressed
    return header + block


def test_read_header():
    data = struct.pack("<II", 1716, 1)
    header = read_header(data)
    assert header.save_version == 1716
    assert header.is_compressed is True
    assert header.df_version == "0.47.05"


def test_decompress_roundtrip(tmp_path):
    payload = b"\x00\x00" + b"hello world payload"
    path = tmp_path / "world.dat"
    path.write_bytes(_make_compressed_save(payload))
    dec = decompress_file(path)
    assert dec.payload == payload
    assert len(dec.blocks) == 1


def test_decompress_file_prefix_stops_early(tmp_path):
    block_a = b"A" * 120_000
    block_b = b"B" * 120_000
    path = tmp_path / "world.dat"
    header = struct.pack("<II", 1716, 1)
    chunks = header + struct.pack("<I", len(zlib.compress(block_a))) + zlib.compress(block_a)
    chunks += struct.pack("<I", len(zlib.compress(block_b))) + zlib.compress(block_b)
    chunks += struct.pack("<I", 0)
    path.write_bytes(chunks)

    _, prefix = decompress_file_prefix(path, min_bytes=100_000)
    assert prefix == block_a


def test_binary_reader_string():
    raw = struct.pack("<h", 5) + b"DWARF"
    reader = BinaryReader(BytesIO(raw))
    assert reader.read_fixed_string() == "DWARF"


def test_find_markers():
    payload = b"xxx*START REGION SAVE*yyy"
    hits = find_markers(payload, ["*START REGION SAVE*"])
    assert len(hits) == 1
    assert hits[0].payload_offset == 3
