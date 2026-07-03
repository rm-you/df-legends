"""Unified world.dat / world.sav preamble resolution."""

from __future__ import annotations

from dataclasses import dataclass
from enum import Enum
from io import BytesIO
from pathlib import Path
from typing import Union

from .binary_reader import BinaryReader
from .compression import decompress_file, read_header
from .save_bundle import SaveKind, classify_filename, index_save_folder
from .deserializers.active_save import SavPreamble, parse_sav_preamble
from .deserializers.world_dat import DatPreamble, parse_dat_preamble

SavePreamble = Union[DatPreamble, SavPreamble]


class SavePreambleKind(str, Enum):
    DAT = "world.dat"
    SAV = "world.sav"


@dataclass(frozen=True)
class ResolvedSavePayload:
    path: Path
    save_kind: SavePreambleKind
    payload: bytes
    save_version: int
    preamble: SavePreamble


def resolve_save_path(path: Path | str) -> Path:
    """Return world.dat or world.sav from a file path or region folder."""
    path = Path(path)
    if path.is_file():
        return path
    if path.is_dir():
        index = index_save_folder(path)
        target = index.world_blob
        if target is None:
            raise FileNotFoundError(f"no world.sav or world.dat in {path}")
        return target.path
    raise FileNotFoundError(path)


def preamble_kind_for_path(path: Path | str) -> SavePreambleKind:
    path = Path(path)
    if path.is_dir():
        index = index_save_folder(path)
        if index.is_active:
            return SavePreambleKind.SAV
        if index.is_retired:
            return SavePreambleKind.DAT
        blob = index.world_blob
        if blob is None:
            raise FileNotFoundError(f"no world blob in {path}")
        kind, _ = classify_filename(blob.path.name)
        if kind == SaveKind.WORLD_SAV:
            return SavePreambleKind.SAV
        if kind == SaveKind.WORLD_DAT:
            return SavePreambleKind.DAT
        raise ValueError(f"unsupported save blob in folder: {blob.path.name}")

    kind, _ = classify_filename(path.name)
    if kind == SaveKind.WORLD_SAV:
        return SavePreambleKind.SAV
    if kind == SaveKind.WORLD_DAT:
        return SavePreambleKind.DAT
    raise ValueError(f"not a world save blob: {path}")


def parse_save_preamble(
    payload: bytes,
    *,
    kind: SavePreambleKind,
    save_version: int | None = None,
) -> SavePreamble:
    if kind == SavePreambleKind.DAT:
        return parse_dat_preamble(payload, save_version=save_version)
    return parse_sav_preamble(payload, save_version=save_version)


def peek_save_world_name(path: Path | str) -> str | None:
    """
    Return the world name from a save folder or blob without a full decompress/import.

    Reads only the first ~64 KiB of decompressed payload — enough for the header /
    SAV name block — and streams compressed blocks from disk.
    """
    from io import BytesIO

    from .binary_reader import BinaryReader
    from .compression import decompress_file_prefix
    from .deserializers.active_save import peek_sav_world_name
    from .deserializers.primitives import WorldHeaderHypothesis

    blob_path = resolve_save_path(path)
    header, prefix = decompress_file_prefix(blob_path)
    kind = preamble_kind_for_path(blob_path)
    if kind == SavePreambleKind.DAT:
        world_header = WorldHeaderHypothesis.read(
            BinaryReader(BytesIO(prefix)),
            save_version=header.save_version,
        )
        if world_header.world_name and world_header.world_name.value:
            return world_header.world_name.value
        return None
    return peek_sav_world_name(prefix, save_version=header.save_version)


def resolve_save_payload(path: Path | str) -> ResolvedSavePayload:
    """Decompress a world blob and parse the appropriate preamble."""
    blob_path = resolve_save_path(path)
    raw = blob_path.read_bytes()
    save_version = read_header(raw).save_version
    payload = decompress_file(blob_path).payload
    kind = preamble_kind_for_path(blob_path)
    preamble = parse_save_preamble(payload, kind=kind, save_version=save_version)
    return ResolvedSavePayload(
        path=blob_path,
        save_kind=kind,
        payload=payload,
        save_version=save_version,
        preamble=preamble,
    )


def preamble_end_offset(preamble: SavePreamble) -> int:
    return preamble.world_data_offset
