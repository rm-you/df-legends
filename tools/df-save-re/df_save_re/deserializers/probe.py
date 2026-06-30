"""Probe decompressed save payloads using RE-derived structure guesses."""

from __future__ import annotations

from dataclasses import dataclass, field
from io import BytesIO

from ..binary_reader import BinaryReader
from ..compression import decompress_file
from .primitives import BlockWithByteVector, WorldHeaderHypothesis

REGION_MARKERS = [
    "*START REGION SAVE*",
    "*START REGION DIM SAVE*",
    "*START REGION MAP SAVE*",
    "*START REGION GEOLOGY SAVE*",
    "*START REGION SUBREGION SAVE*",
]


@dataclass
class ProbeResult:
    path: str
    payload_size: int
    marker_offsets: dict[str, list[int]]
    world_header: WorldHeaderHypothesis | None = None
    world_header_error: str | None = None
    block_at_markers: dict[str, BlockWithByteVector | str] = field(default_factory=dict)
    notes: list[str] = field(default_factory=list)


def find_markers(payload: bytes) -> dict[str, list[int]]:
    found: dict[str, list[int]] = {}
    for marker in REGION_MARKERS:
        needle = marker.encode("latin-1")
        offsets: list[int] = []
        start = 0
        while True:
            idx = payload.find(needle, start)
            if idx < 0:
                break
            offsets.append(idx)
            start = idx + 1
        if offsets:
            found[marker] = offsets
    return found


def probe_save(path: str) -> ProbeResult:
    dec = decompress_file(path)
    payload = dec.payload
    markers = find_markers(payload)

    result = ProbeResult(
        path=path,
        payload_size=len(payload),
        marker_offsets=markers,
    )

    # Attempt Andux world header at payload start (hypothesis — may fail)
    try:
        reader = BinaryReader(BytesIO(payload))
        result.world_header = WorldHeaderHypothesis.read(reader)
        result.notes.append(
            f"world header hypothesis consumed {reader.tell()} bytes from payload start"
        )
    except (EOFError, ValueError) as exc:
        result.world_header_error = str(exc)

    # At each region marker, try reading BlockWithByteVector backward/forward.
    # Markers appear INSIDE the magic string field — offset points at '*' char.
    for marker, offsets in markers.items():
        for off in offsets[:3]:  # first few occurrences only
            try:
                # Magic is stored as length-prefixed string starting at off
                reader = BinaryReader(BytesIO(payload))
                reader.seek(off)
                block = BlockWithByteVector.read(reader)
                result.block_at_markers[f"{marker}@{off:#x}"] = block
            except (EOFError, ValueError) as exc:
                result.block_at_markers[f"{marker}@{off:#x}"] = f"parse error: {exc}"

    return result
