"""Tests for RE-derived deserializers."""

import struct
from io import BytesIO

import pytest

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.primitives import (
    BlockWithByteVector,
    DfString,
    MultiStringRecord0x50,
    WorldHeaderHypothesis,
)


def _reader(*chunks: bytes) -> BinaryReader:
    return BinaryReader(BytesIO(b"".join(chunks)))


def test_block_with_byte_vector():
    raw = (
        struct.pack("<h", len("*START REGION SAVE*"))
        + b"*START REGION SAVE*"
        + struct.pack("<i", 42)
        + struct.pack("<i", 3)
        + b"\x01\x02\x03"
    )
    block = BlockWithByteVector.read(_reader(raw))
    assert block.magic.value == "*START REGION SAVE*"
    assert block.field_8 == 42
    assert block.payload == b"\x01\x02\x03"


def test_multi_string_record_0x50():
    def s(text: str) -> bytes:
        b = text.encode("latin-1")
        return struct.pack("<h", len(b)) + b

    raw = (
        struct.pack("<h", 7)
        + b"\x00" * 6
        + s("alpha")
        + struct.pack("<i", 100)
        + s("beta")
        + s("gamma")
        + s("delta")
        + s("epsilon")
        + struct.pack("<hhh", 1, 2, 3)
        + struct.pack("<ii", 9, 10)
    )
    rec = MultiStringRecord0x50.read(_reader(raw))
    assert rec.field_0 == 7
    assert rec.string_8.value == "alpha"
    assert rec.field_10 == 100
    assert rec.string_30.value == "epsilon"
    assert rec.field_4c == 10


def test_world_header_hypothesis_minimal():
    def s(text: str) -> bytes:
        b = text.encode("latin-1")
        return struct.pack("<h", len(b)) + b

    raw = (
        struct.pack("<h", 0)
        + struct.pack("<" + "i" * 23, *range(23))
        + struct.pack("<b", 0)  # has_name false
        + struct.pack("<B", 0)  # post_name_byte
        + struct.pack("<h", 0)
        + struct.pack("<iii", 1, 2, 3)
        + s("The Age of Testing")
    )
    wh = WorldHeaderHypothesis.read(_reader(raw), id_count=23)
    assert wh.max_ids[9] == 9
    assert wh.world_name.value == "The Age of Testing"
