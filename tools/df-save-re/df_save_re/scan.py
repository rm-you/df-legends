"""Scan decompressed save payloads for known markers and structure hints."""

from __future__ import annotations

from dataclasses import dataclass
from pathlib import Path

from .compression import DecompressedSave, decompress_file

# Magic strings embedded in world save blocks (confirmed in DF 0.47.05 binary via `strings`)
REGION_BLOCK_MARKERS = [
    "*START REGION SAVE*",
    "*START REGION DIM SAVE*",
    "*START REGION MAP SAVE*",
    "*START REGION GEOLOGY SAVE*",
    "*START REGION SUBREGION SAVE*",
]

# XML tag strings present in Legends export code paths inside the binary
LEGENDS_XML_MARKERS = [
    "<historical_figures>",
    "<historical_events>",
    "<historical_event_collections>",
    "<entities>",
    "<sites>",
    "<artifacts>",
]


@dataclass(frozen=True)
class MarkerHit:
    marker: str
    payload_offset: int


@dataclass(frozen=True)
class ScanReport:
    path: str
    header_summary: str
    payload_size: int
    block_count: int
    markers: list[MarkerHit]
    int32_at_offset_8: int | None
    notes: list[str]


def find_markers(payload: bytes, markers: list[str]) -> list[MarkerHit]:
    hits: list[MarkerHit] = []
    for marker in markers:
        needle = marker.encode("latin-1")
        start = 0
        while True:
            idx = payload.find(needle, start)
            if idx < 0:
                break
            hits.append(MarkerHit(marker=marker, payload_offset=idx))
            start = idx + 1
    hits.sort(key=lambda h: h.payload_offset)
    return hits


def scan_save(path: Path | str) -> ScanReport:
    path = Path(path)
    dec = decompress_file(path)
    all_markers = REGION_BLOCK_MARKERS + LEGENDS_XML_MARKERS
    hits = find_markers(dec.payload, all_markers)

    notes: list[str] = []
    int32_at_8: int | None = None
    if len(dec.payload) >= 12:
        int32_at_8 = int.from_bytes(dec.payload[8:12], "little", signed=True)
        notes.append(
            "bytes 8-11 (first payload int32 after header): "
            f"{int32_at_8} (0x{int32_at_8 & 0xFFFFFFFF:08x})"
        )

    if not hits:
        notes.append("no known block markers found — may be fort-active world.sav layout or newer format")

    region_hits = [h for h in hits if h.marker.startswith("*START")]
    if region_hits:
        notes.append(f"found {len(region_hits)} region block marker(s) — geography section likely present")

    return ScanReport(
        path=str(path),
        header_summary=(
            f"save_version={dec.header.save_version} "
            f"({dec.header.df_version or 'unknown'}), "
            f"compressed={dec.header.is_compressed}"
        ),
        payload_size=len(dec.payload),
        block_count=len(dec.blocks),
        markers=hits,
        int32_at_offset_8=int32_at_8,
        notes=notes,
    )
