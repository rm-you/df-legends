"""DF save file envelope: header + zlib-compressed blocks."""

from __future__ import annotations

import struct
import zlib
from dataclasses import dataclass
from pathlib import Path


# From DFHack devel/save-version.lua (0.47.05 era)
SAVE_VERSIONS: dict[int, str] = {
    1710: "0.47.01",
    1711: "0.47.02",
    1713: "0.47.03",
    1715: "0.47.04",
    1716: "0.47.05",
}


@dataclass(frozen=True)
class SaveHeader:
    save_version: int
    is_compressed: bool
    df_version: str | None

    @property
    def header_size(self) -> int:
        return 8


@dataclass(frozen=True)
class CompressedBlock:
    index: int
    file_offset: int
    compressed_size: int
    decompressed_size: int


@dataclass
class DecompressedSave:
    header: SaveHeader
    blocks: list[CompressedBlock]
    payload: bytes


def describe_save_version(save_version: int) -> str:
    if save_version in SAVE_VERSIONS:
        return f"{SAVE_VERSIONS[save_version]} ({save_version})"
    if save_version < min(SAVE_VERSIONS):
        return f"unknown old (< {min(SAVE_VERSIONS)}): {save_version}"
    if save_version > max(SAVE_VERSIONS):
        return f"unknown new (> {max(SAVE_VERSIONS)}): {save_version}"
    return f"unknown in 0.47.x range: {save_version}"


def read_header(data: bytes) -> SaveHeader:
    if len(data) < 8:
        raise ValueError("file too small for save header")
    save_version, is_compressed_flag = struct.unpack("<II", data[:8])
    return SaveHeader(
        save_version=save_version,
        is_compressed=bool(is_compressed_flag),
        df_version=SAVE_VERSIONS.get(save_version),
    )


def decompress_file(path: Path | str) -> DecompressedSave:
    """Decompress a world.sav/world.dat file into a single logical byte stream."""
    path = Path(path)
    raw = path.read_bytes()
    header = read_header(raw)

    if not header.is_compressed:
        return DecompressedSave(header=header, blocks=[], payload=raw[8:])

    blocks: list[CompressedBlock] = []
    chunks: list[bytes] = []
    offset = 8
    index = 0

    while offset < len(raw):
        if offset + 4 > len(raw):
            break
        (compressed_size,) = struct.unpack("<I", raw[offset : offset + 4])
        offset += 4
        if compressed_size == 0:
            break
        if offset + compressed_size > len(raw):
            raise ValueError(
                f"block {index}: compressed_size {compressed_size} exceeds file "
                f"(offset {offset}, file size {len(raw)})"
            )
        compressed = raw[offset : offset + compressed_size]
        offset += compressed_size
        try:
            decompressed = zlib.decompress(compressed)
        except zlib.error as exc:
            raise ValueError(f"block {index}: zlib decompress failed at offset {offset}") from exc
        blocks.append(
            CompressedBlock(
                index=index,
                file_offset=offset - compressed_size - 4,
                compressed_size=compressed_size,
                decompressed_size=len(decompressed),
            )
        )
        chunks.append(decompressed)
        index += 1

    return DecompressedSave(header=header, blocks=blocks, payload=b"".join(chunks))
