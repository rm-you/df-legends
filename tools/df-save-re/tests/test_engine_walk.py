"""Tests for the self-validating engine walk harness.

Uses a synthetic struct + payload so the harness is validated deterministically
without depending on gitignored save fixtures.
"""

from __future__ import annotations

import struct
from pathlib import Path

from df_save_re.deserializers.engine_walk import walk_inline_vector, walk_pointer_vector

XML_DIR = Path(__file__).resolve().parents[1] / "data" / "df-structures"


def _posnull_vector(bodies: list[bytes]) -> bytes:
    """Build a posnull pointer vector: count + presence bytes (aligned) + bodies."""
    count = len(bodies)
    out = struct.pack("<i", count)
    out += b"".join(b"\x01" for _ in bodies)  # all present
    while len(out) % 4:
        out += b"\x00"
    out += b"".join(bodies)
    return out


def test_walk_pointer_vector_exact_landing() -> None:
    # world_population is a concrete (non-polymorphic) struct; build records by
    # skipping it once to learn its size, then assert exact landing.
    # Use a simple concrete type with a fixed prefix we control: coord (3x int32).
    body = struct.pack("<iii", 1, 2, 3)  # coord = 12 bytes
    payload = _posnull_vector([body, body, body])
    next_anchor = len(payload)

    result = walk_pointer_vector(
        payload,
        vector_offset=0,
        element_type="coord",
        next_anchor=next_anchor,
        xml_dir=XML_DIR,
    )
    assert result.declared_count == 3
    assert result.present_count == 3
    assert result.parsed_count == 3
    assert result.ok is True
    assert result.landed_on_anchor is True
    assert result.end_offset == next_anchor


def test_walk_pointer_vector_desync_detected() -> None:
    body = struct.pack("<iii", 1, 2, 3)
    payload = _posnull_vector([body, body, body])
    # Wrong anchor -> harness must flag desync, not silently pass.
    result = walk_pointer_vector(
        payload,
        vector_offset=0,
        element_type="coord",
        next_anchor=len(payload) - 4,
        xml_dir=XML_DIR,
    )
    assert result.ok is False
    assert result.landed_on_anchor is False
    assert result.error is not None


def test_walk_inline_vector_landing() -> None:
    body = struct.pack("<iii", 7, 8, 9)
    payload = struct.pack("<i", 2) + body + body
    result = walk_inline_vector(
        payload,
        vector_offset=0,
        element_type="coord",
        next_anchor=len(payload),
        xml_dir=XML_DIR,
    )
    assert result.parsed_count == 2
    assert result.ok is True
    assert result.landed_on_anchor is True


def test_walk_polymorphic_smoke() -> None:
    # history_event is polymorphic; an empty vector must parse cleanly.
    payload = struct.pack("<i", 0)
    result = walk_pointer_vector(
        payload,
        vector_offset=0,
        element_type="history_event",
        next_anchor=len(payload),
        xml_dir=XML_DIR,
    )
    assert result.declared_count == 0
    assert result.ok is True
    assert result.landed_on_anchor is True
