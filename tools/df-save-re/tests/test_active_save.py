"""Tests for world.sav header hypothesis stubs."""

import struct
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.active_save import WorldHeaderSavHypothesis


def test_world_header_sav_hypothesis():
    values = list(range(13))
    raw = struct.pack("<" + "i" * len(values), *values)
    header = WorldHeaderSavHypothesis.read(BinaryReader(BytesIO(raw)))
    assert header.fields == values
