"""Extract human-readable legends-related data from world.dat payloads."""

from __future__ import annotations

import struct
from dataclasses import dataclass, field
from io import BytesIO

from .binary_reader import BinaryReader
from .deserializers.entity_def import EntityScanResult, HistoricalEntityHeader, catalog_entity_block, scan_entities
from .deserializers.primitives import WorldHeaderHypothesis
from .deserializers.string_index import StringIndexTable
from .deserializers.string_tables import StringTableBlock, parse_string_table_block
from .deserializers.world_dat import DatPreamble


@dataclass
class HistoryStatsBlock:
    """Header counter echo block (Namushul @ 0x15beb28) — not the events vector."""

    payload_offset: int
    event_counter: int
    field_151: int
    field_4: int
    histfig_counter: int


@dataclass
class LegendsSnapshot:
    world_name: str | None
    header: WorldHeaderHypothesis
    preamble: DatPreamble
    string_tables: StringTableBlock
    string_index: StringIndexTable
    entities: EntityScanResult
    entity_catalog: list[HistoricalEntityHeader] = field(default_factory=list)
    entity_class_counts: dict[str, int] = field(default_factory=dict)
    history_stats: HistoryStatsBlock | None = None
    notes: list[str] = field(default_factory=list)


def find_history_stats_block(
    payload: bytes,
    header: WorldHeaderHypothesis,
) -> HistoryStatsBlock | None:
    """Locate paired max event / histfig counters (Namushul-style layout)."""
    if len(header.max_ids) < 10:
        return None
    event_counter = header.max_ids[9]
    histfig_counter = header.max_ids[8]
    needle = struct.pack("<i", event_counter)
    pos = 0x100000  # skip header region
    while True:
        off = payload.find(needle, pos)
        if off < 0:
            return None
        fig_off = off + 12
        if fig_off + 4 <= len(payload) and struct.unpack_from("<i", payload, fig_off)[0] == histfig_counter:
            return HistoryStatsBlock(
                payload_offset=off,
                event_counter=event_counter,
                field_151=struct.unpack_from("<i", payload, off + 4)[0],
                field_4=struct.unpack_from("<i", payload, off + 8)[0],
                histfig_counter=histfig_counter,
            )
        pos = off + 4


def extract_legends_snapshot(
    payload: bytes,
    *,
    preamble: DatPreamble,
    max_entities: int = 50,
    catalog_entities: bool = True,
) -> LegendsSnapshot:
    block = parse_string_table_block(payload)
    reader = BinaryReader(BytesIO(payload))
    reader.seek(block.payload_offset + block.bytes_consumed)
    index = StringIndexTable.read(reader)

    entities = scan_entities(payload, max_entities=max_entities)
    stats = find_history_stats_block(payload, preamble.header)

    catalog: list[HistoricalEntityHeader] = []
    class_counts: dict[str, int] = {}
    if catalog_entities:
        search_end = stats.payload_offset if stats else None
        catalog_result = catalog_entity_block(payload, search_end=search_end)
        catalog = catalog_result.entities
        for ent in catalog:
            class_counts[ent.entity_class] = class_counts.get(ent.entity_class, 0) + 1

    notes = [
        f"string tables: {block.section_count} sections, {block.total_names:,} names",
        f"string index: {index.entry_count} int32 entries",
    ]
    if entities.first_entity_offset is not None:
        notes.append(
            f"entities: first @ 0x{entities.first_entity_offset:x}, "
            f"parsed {len(entities.entities)} consecutive headers"
        )
    else:
        notes.append("entities: first civ header not found")
    if catalog:
        named = sum(1 for ent in catalog if ent.has_name)
        max_id = max(ent.entity_id for ent in catalog)
        header_civ = preamble.header.max_ids[4] if len(preamble.header.max_ids) > 4 else None
        notes.append(
            f"entity catalog: {len(catalog)} validated civ headers "
            f"(ids 0..{max_id}, {named} named"
            + (f"; header max_ids[4]={header_civ:,}" if header_civ is not None else "")
            + ")"
        )
    if stats:
        notes.append(
            f"history stats block @ 0x{stats.payload_offset:x} "
            f"(events={stats.event_counter:,}, figs={stats.histfig_counter:,}; "
            f"not verified as world_history vector start)"
        )

    return LegendsSnapshot(
        world_name=preamble.header.world_name.value if preamble.header.world_name else None,
        header=preamble.header,
        preamble=preamble,
        string_tables=block,
        string_index=index,
        entities=entities,
        entity_catalog=catalog,
        entity_class_counts=class_counts,
        history_stats=stats,
        notes=notes,
    )


def snapshot_to_dict(snapshot: LegendsSnapshot) -> dict:
    materials = snapshot.string_tables.sections[0].names if snapshot.string_tables.sections else []
    creatures = (
        snapshot.string_tables.sections[4].names
        if len(snapshot.string_tables.sections) > 4
        else []
    )
    return {
        "world_name": snapshot.world_name,
        "header": {
            "max_histfig": snapshot.header.max_ids[8],
            "max_event": snapshot.header.max_ids[9],
            "max_civ": snapshot.header.max_ids[4],
        },
        "offsets": {
            "preamble_end": snapshot.preamble.world_data_offset,
            "string_tables": snapshot.string_tables.payload_offset,
            "string_tables_end": snapshot.entities.string_tables_end,
            "string_index_end": snapshot.entities.string_index_end,
            "first_entity": snapshot.entities.first_entity_offset,
            "history_stats": (
                snapshot.history_stats.payload_offset if snapshot.history_stats else None
            ),
        },
        "string_tables": [
            {
                "index": i,
                "count": sec.entry_count,
                "first": sec.names[0] if sec.names else None,
                "last": sec.names[-1] if sec.names else None,
            }
            for i, sec in enumerate(snapshot.string_tables.sections)
        ],
        "materials": materials[:20],
        "creatures_sample": creatures[:20],
        "entities": [
            {
                "id": ent.entity_id,
                "class": ent.entity_class,
                "next_id": ent.next_entity_id,
                "has_name": ent.has_name,
                "offset": ent.payload_offset,
            }
            for ent in snapshot.entities.entities
        ],
        "entity_catalog": {
            "count": len(snapshot.entity_catalog),
            "named_count": sum(1 for ent in snapshot.entity_catalog if ent.has_name),
            "max_id_found": (
                max(ent.entity_id for ent in snapshot.entity_catalog)
                if snapshot.entity_catalog
                else None
            ),
            "class_counts": snapshot.entity_class_counts,
            "named_entities": [
                {
                    "id": ent.entity_id,
                    "class": ent.entity_class,
                    "offset": ent.payload_offset,
                }
                for ent in snapshot.entity_catalog
                if ent.has_name
            ],
        },
        "history_stats": (
            {
                "offset": snapshot.history_stats.payload_offset,
                "event_counter": snapshot.history_stats.event_counter,
                "histfig_counter": snapshot.history_stats.histfig_counter,
                "field_151": snapshot.history_stats.field_151,
                "field_4": snapshot.history_stats.field_4,
            }
            if snapshot.history_stats
            else None
        ),
        "notes": snapshot.notes,
    }
