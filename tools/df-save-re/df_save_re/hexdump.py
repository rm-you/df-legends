"""Payload inspection utilities for iterative RE."""

from __future__ import annotations

from dataclasses import dataclass


@dataclass
class HexdumpLine:
    offset: int
    hex_bytes: str
    ascii: str


def hexdump(data: bytes, *, start: int = 0, length: int | None = None, width: int = 16) -> list[HexdumpLine]:
    if length is None:
        chunk = data[start:]
    else:
        chunk = data[start : start + length]
    lines: list[HexdumpLine] = []
    for i in range(0, len(chunk), width):
        row = chunk[i : i + width]
        hex_part = " ".join(f"{b:02x}" for b in row)
        ascii_part = "".join(chr(b) if 32 <= b < 127 else "." for b in row)
        lines.append(HexdumpLine(offset=start + i, hex_bytes=hex_part, ascii=ascii_part))
    return lines


def format_hexdump(data: bytes, **kwargs) -> str:
    return "\n".join(
        f"{line.offset:08x}  {line.hex_bytes:<{kwargs.get('width', 16) * 3}}  {line.ascii}"
        for line in hexdump(data, **kwargs)
    )


def read_le_int32(data: bytes, offset: int) -> int:
    return int.from_bytes(data[offset : offset + 4], "little", signed=True)


def scan_int32_values(data: bytes, start: int = 0, end: int | None = None, *, min_val: int = 0, max_val: int = 10_000_000):
    """Find offsets where int32 looks like plausible ID/count in early payload."""
    end = end if end is not None else min(len(data), start + 4096)
    hits: list[tuple[int, int]] = []
    for off in range(start, max(start, end - 3), 4):
        val = read_le_int32(data, off)
        if min_val <= val <= max_val:
            hits.append((off, val))
    return hits
