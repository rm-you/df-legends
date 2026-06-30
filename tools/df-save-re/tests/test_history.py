"""Tests for history event hypothesis readers."""

import struct
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.history import HistoryEventBase, HistoryEventCreatedSite


def _reader(*parts: bytes) -> BinaryReader:
    return BinaryReader(BytesIO(b"".join(parts)))


def test_history_event_base():
    raw = struct.pack("<iii", 250, 1000, 0)  # year, seconds, flag count=0
    raw += struct.pack("<i", 42)  # id
    ev = HistoryEventBase.read(_reader(raw))
    assert ev.year == 250
    assert ev.seconds == 1000
    assert ev.id == 42


def test_history_event_created_site():
    raw = struct.pack("<iii", 100, 500, 0)
    raw += struct.pack("<i", 7)
    raw += struct.pack("<iiiii", 1, 2, 3, 4, 5)
    ev = HistoryEventCreatedSite.read(_reader(raw))
    assert ev.id == 7
    assert ev.site == 4
    assert ev.builder_hf == 5
