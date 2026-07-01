"""Tests for XML body skipper."""

from io import BytesIO
from pathlib import Path

import pytest

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.body_skipper import skip_struct_bytes
from df_save_re.deserializers.language_name import read_language_name

XML_DIR = Path(__file__).resolve().parents[3] / "data" / "df-structures"


def test_skip_language_name_roundtrip():
    if not XML_DIR.exists():
        pytest.skip("df-structures missing")
    parts = [b"\x01", b"\x05\x00", b"Urist", b"\x00\x00"]
    parts.extend([b"\x01\x00\x00\x00"] * 7)
    parts.extend([b"\x00\x00"] * 7)
    parts.extend([b"\x00\x00\x00\x00", b"\x00\x00", b"\x01\x00"])
    payload = b"".join(parts)

    consumed = skip_struct_bytes(payload, 0, "language_name", xml_dir=XML_DIR)
    assert consumed == len(payload)

    reader = BinaryReader(BytesIO(payload))
    name = read_language_name(reader)
    assert name.first_name == "Urist"
