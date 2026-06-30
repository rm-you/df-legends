"""Probe decompressed save payloads using RE-derived structure guesses."""

from __future__ import annotations

from dataclasses import dataclass, field
from io import BytesIO
from pathlib import Path

from ..binary_reader import BinaryReader
from ..compression import decompress_file, read_header
from ..target import TARGET_SAVE_VERSION
from ..save_bundle import SaveKind, classify_filename
from .active_save import WorldHeaderSavHypothesis
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
    save_kind: SaveKind
    payload_size: int
    marker_offsets: dict[str, list[int]]
    world_header: WorldHeaderHypothesis | None = None
    world_header_error: str | None = None
    sav_header: WorldHeaderSavHypothesis | None = None
    sav_header_error: str | None = None
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
    path_obj = Path(path)
    kind, _ = classify_filename(path_obj.name)
    dec = decompress_file(path)
    payload = dec.payload
    markers = find_markers(payload)

    result = ProbeResult(
        path=str(path_obj),
        save_kind=kind,
        payload_size=len(payload),
        marker_offsets=markers,
    )

    if kind == SaveKind.WORLD_SAV:
        result.notes.append(
            "world.sav: uses SAV world header + Game data (not DAT WorldHeaderHypothesis); "
            "legends data is inside Game data — see docs/save-formats-0.47.05.md"
        )
    elif kind == SaveKind.WORLD_DAT:
        result.notes.append("world.dat: Track A — DAT world header + World data (legends-first target)")
    elif kind not in (SaveKind.WORLD_DAT, SaveKind.WORLD_SAV):
        result.notes.append(f"sidecar/other ({kind.value}); main history is in world.sav/dat")

    if kind == SaveKind.WORLD_DAT:
        try:
            file_header = read_header(Path(path).read_bytes())
            reader = BinaryReader(BytesIO(payload))
            result.world_header = WorldHeaderHypothesis.read(
                reader,
                save_version=file_header.save_version,
            )
            wh = result.world_header
            result.notes.append(
                f"DAT world header hypothesis consumed {wh.bytes_consumed} bytes "
                f"({len(wh.max_ids)} id counters, save_version {file_header.save_version})"
            )
            if wh.world_name and wh.world_name.value.startswith("["):
                result.notes.append(
                    "warning: world_name looks like generated raws — header alignment may be wrong"
                )
        except (EOFError, ValueError) as exc:
            result.world_header_error = str(exc)
    elif kind == SaveKind.WORLD_SAV:
        try:
            reader = BinaryReader(BytesIO(payload))
            result.sav_header = WorldHeaderSavHypothesis.read(reader)
            result.notes.append(
                f"SAV world header hypothesis consumed {reader.tell()} bytes "
                f"({len(result.sav_header.fields)} int32 fields)"
            )
        except (EOFError, ValueError) as exc:
            result.sav_header_error = str(exc)

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
