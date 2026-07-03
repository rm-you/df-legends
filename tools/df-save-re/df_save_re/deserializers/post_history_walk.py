"""Walk world.dat sections immediately after world_history (FUN_140330310 case 9 tail).

Hand-transcribed from ``14030b9e0.c``, ``140309da0.c``, ``14030bd50.c``.
"""

from __future__ import annotations

from dataclasses import dataclass, field
from io import BytesIO
from typing import Any, Callable

from ..binary_reader import BinaryReader


@dataclass
class PostHistoryWalkResult:
    start_offset: int
    end_offset: int
    sections: list[dict[str, Any]] = field(default_factory=list)
    notes: list[str] = field(default_factory=list)


def _read_i32_vec(reader: BinaryReader, *, label: str, limit: int = 50_000_000) -> list[int]:
    n = reader.read_int32()
    if n < 0 or n > limit:
        raise ValueError(f"implausible {label} count {n} at 0x{reader.tell() - 4:x}")
    return [reader.read_int32() for _ in range(n)]


def read_post_block_14030b9e0(reader: BinaryReader) -> dict[str, Any]:
    """336 iterations × six i32 vectors (FUN_14030b9e0)."""
    blocks: list[dict[str, list[int]]] = []
    for _ in range(0x150):
        block: dict[str, list[int]] = {}
        for i in range(6):
            block[f"v{i}"] = _read_i32_vec(reader, label=f"post8_v{i}")
        blocks.append(block)
    return {"kind": "post_block_14030b9e0", "block_count": len(blocks)}


def read_string_vec_140309da0(reader: BinaryReader) -> dict[str, Any]:
    """String + 2×i32 vector (FUN_140309da0, save_version > 0x5cc)."""
    n = reader.read_int32()
    if n < 0 or n > 1_000_000:
        raise ValueError(f"implausible string vec count {n}")
    items: list[dict[str, Any]] = []
    for _ in range(n):
        length = reader.read_int16()
        if length < 0 or length > 8192:
            raise ValueError(f"implausible string length {length}")
        text = reader.read_bytes(length).decode("cp437", errors="replace")
        items.append(
            {
                "text": text,
                "f0": reader.read_int32(),
                "f1": reader.read_int32(),
            }
        )
    return {"kind": "string_vec_140309da0", "count": n, "items": items}


def walk_post_history(
    payload: bytes,
    history_end: int,
    *,
    save_version: int = 1716,
    on_section: Callable[[dict[str, Any], int], None] | None = None,
) -> PostHistoryWalkResult:
    """Walk seq 8–10 immediately following ``history_end``."""
    reader = BinaryReader(BytesIO(payload))
    reader.seek(history_end)
    start = history_end
    sections: list[dict[str, Any]] = []

    sec = read_post_block_14030b9e0(reader)
    sec["start"] = start
    sec["end"] = reader.tell()
    sections.append(sec)
    if on_section:
        on_section(sec, start)

    if save_version > 0x5CC:
        off = reader.tell()
        sec = read_string_vec_140309da0(reader)
        sec["start"] = off
        sec["end"] = reader.tell()
        sections.append(sec)
        if on_section:
            on_section(sec, off)

    notes: list[str] = []
    if save_version > 0x619:
        notes.append("seq10 FUN_14030bd50 skipped — needs FUN_14030bc20 decompile")

    return PostHistoryWalkResult(
        start_offset=start,
        end_offset=reader.tell(),
        sections=sections,
        notes=notes,
    )
