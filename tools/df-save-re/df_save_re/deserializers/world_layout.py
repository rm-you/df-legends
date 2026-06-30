"""Known landmarks in decompressed world.dat payloads (0.47.05 Path C)."""

from __future__ import annotations

import struct
from dataclasses import dataclass

from .entity_def import catalog_entity_block
from .primitives import WorldHeaderHypothesis
from .string_tables import parse_string_table_block
from .world_dat import DatPreamble


@dataclass(frozen=True)
class PayloadRegion:
    """Named byte range inside decompressed world.dat payload."""

    name: str
    start: int
    end: int

    @property
    def size(self) -> int:
        return self.end - self.start


@dataclass(frozen=True)
class WorldLayoutLandmarks:
    """Offsets discovered on Namushul; useful for continued RE."""

    string_tables: int
    string_index_end: int
    first_entity: int | None
    last_catalog_entity: int | None
    first_region_block: int | None
    history_stats: int | None
    payload_size: int

    @property
    def entity_to_region_gap(self) -> int | None:
        if self.last_catalog_entity is None or self.first_region_block is None:
            return None
        return self.first_region_block - self.last_catalog_entity

    @property
    def history_tail_size(self) -> int | None:
        if self.history_stats is None:
            return None
        return self.payload_size - self.history_stats

    @property
    def regions(self) -> list[PayloadRegion]:
        """Bounded regions for layer-specific binary scans."""
        out: list[PayloadRegion] = [
            PayloadRegion("preamble", 0, self.string_tables),
            PayloadRegion("string_tables", self.string_tables, self.string_index_end),
        ]
        ent_start = self.first_entity or self.string_index_end
        ent_end = self.last_catalog_entity or self.first_region_block or self.payload_size
        if self.first_entity is not None:
            out.append(PayloadRegion("entity_catalog", ent_start, ent_end))
        if self.last_catalog_entity is not None and self.first_region_block is not None:
            out.append(
                PayloadRegion(
                    "entity_gap",
                    self.last_catalog_entity,
                    self.first_region_block,
                )
            )
        if self.first_region_block is not None and self.history_stats is not None:
            out.append(
                PayloadRegion(
                    "region_and_mid",
                    self.first_region_block,
                    self.history_stats,
                )
            )
        if self.history_stats is not None:
            out.append(
                PayloadRegion(
                    "history_tail",
                    self.history_stats,
                    self.payload_size,
                )
            )
        return out

    def region(self, name: str) -> PayloadRegion | None:
        for region in self.regions:
            if region.name == name:
                return region
        return None


def find_first_region_block(payload: bytes, *, search_start: int) -> int | None:
    needle = b"*START REGION SAVE*"
    off = payload.find(needle, search_start)
    return None if off < 0 else off


def find_history_stats_block(payload: bytes, header: WorldHeaderHypothesis) -> int | None:
    if len(header.max_ids) < 10:
        return None
    event_counter = header.max_ids[9]
    histfig_counter = header.max_ids[8]
    needle = struct.pack("<i", event_counter)
    pos = 0x100000
    while True:
        off = payload.find(needle, pos)
        if off < 0:
            return None
        fig_off = off + 12
        if fig_off + 4 <= len(payload) and struct.unpack_from("<i", payload, fig_off)[0] == histfig_counter:
            return off
        pos = off + 4


def discover_layout_landmarks(payload: bytes, preamble: DatPreamble) -> WorldLayoutLandmarks:
    block = parse_string_table_block(payload)
    tables_end = block.payload_offset + block.bytes_consumed
    from io import BytesIO

    from ..binary_reader import BinaryReader
    from .string_index import StringIndexTable

    reader = BinaryReader(BytesIO(payload))
    reader.seek(tables_end)
    StringIndexTable.read(reader)
    index_end = reader.tell()

    stats_off = find_history_stats_block(payload, preamble.header)
    catalog = catalog_entity_block(payload, search_end=stats_off)
    last_entity = max((e.payload_offset for e in catalog.entities), default=None)
    region_off = find_first_region_block(payload, search_start=index_end)

    return WorldLayoutLandmarks(
        string_tables=block.payload_offset,
        string_index_end=index_end,
        first_entity=catalog.first_entity_offset,
        last_catalog_entity=last_entity,
        first_region_block=region_off,
        history_stats=stats_off,
        payload_size=len(payload),
    )
