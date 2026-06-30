"""Tests for hexdump and xml field parser."""

from pathlib import Path

from df_save_re.hexdump import format_hexdump, scan_int32_values
from df_save_re.structures.xml_fields import load_struct, summarize_fields


def test_format_hexdump():
    out = format_hexdump(b"ABCdef", length=6)
    assert "41 42 43" in out
    assert "ABCdef" in out


def test_scan_int32_values():
    data = b"\x00" * 4 + b"\x05\x00\x00\x00" + b"\x00" * 4
    hits = scan_int32_values(data, start=0, end=len(data))
    assert (4, 5) in hits


def test_load_history_event_struct():
    xml_dir = Path(__file__).resolve().parents[3] / "data" / "df-structures"
    if not xml_dir.exists():
        return
    struct = load_struct("history_event", xml_dir)
    assert struct is not None
    lines = summarize_fields(struct)
    assert any("year" in line for line in lines)
    assert any("id" in line for line in lines)
