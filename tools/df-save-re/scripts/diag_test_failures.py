#!/usr/bin/env python3
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.compression import decompress_file
from df_save_re.deserializers.entity_def import catalog_entity_block, find_entity_by_id
from df_save_re.deserializers.entity_names import resolve_entity_name
from df_save_re.deserializers.historical_figures import locate_figures_vector
from df_save_re.deserializers.history_events import build_history_events_catalog
from df_save_re.deserializers.language_name import read_language_name
from df_save_re.deserializers.string_tables import parse_string_table_block
from df_save_re.deserializers.world_dat import parse_dat_preamble
from df_save_re.deserializers.world_layout import discover_layout_landmarks
from fixture_paths import resolve_fixture


def main() -> None:
    p = resolve_fixture("small-retired", "world.dat")
    payload = decompress_file(p).payload
    pre = parse_dat_preamble(payload)
    layout = discover_layout_landmarks(payload, pre)
    block = parse_string_table_block(payload)
    words = block.sections[8].names
    catalog = catalog_entity_block(payload, search_end=0x15BEB28)
    ent = find_entity_by_id(
        payload,
        67,
        entity_classes=set(catalog.entity_classes),
        search_start=catalog.string_index_end,
        search_end=0x15BEB28,
    )
    print("ent offset", hex(ent.payload_offset), "header_bytes", ent.header_bytes)
    off = ent.payload_offset + ent.header_bytes
    print("name at", hex(off))
    r = BinaryReader(BytesIO(payload))
    r.seek(off)
    name = read_language_name(r)
    print("name", repr(name.first_name), name.words[:4], "consumed", name.bytes_consumed)
    resolved = resolve_entity_name(payload, ent, words=words)
    print("resolved", repr(resolved.resolved), resolved.source)

    fig = locate_figures_vector(payload, pre.header, search_start=layout.history_stats)
    print("bodies", hex(fig.bodies_start) if fig else None)
    print("death", hex(fig.death_events_offset) if fig and fig.death_events_offset else None)

    cat = build_history_events_catalog(payload, pre.header, search_start=layout.history_stats)
    print("catalog death", cat.death_events if cat else None)


if __name__ == "__main__":
    main()
