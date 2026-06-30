# Legends coverage matrix — binary extract vs text verify

Exports (`*-world_history*`, `*-world_sites_and_pops*`, `*-world_gen_param*`) are **verify-only**.
`extract_legends_snapshot()` must not read them.

| Field | Text export | Binary extract | Verify check |
|-------|-------------|----------------|--------------|
| World name | yes | PASS | `world_header.world_name` |
| DF version | world_gen | PASS | `world_header.df_version` |
| Named civ count/names | history | PASS | `entities.*` |
| Subterranean peoples | history | PASS | `entities.subterranean_civ_count` |
| Civ worship lists | history | open | TBD `entities.worship_lists` |
| Site count (350) | sites | PASS via header `max_ids[26]+4`; ~315/350 names discovered | `sites.site_count` |
| Site name/type/civ/owner/coords | sites | partial | `sites.world_site_catalog` |
| Site populations | sites | open (needs world_site body walk) | TBD `sites.populations` |
| Ruler count (71) | history | open (binary positions) | `historical_figures.ruler_entries` |
| Ruler name/position/civ/reign | history | open | TBD |
| Event count (113118) | header echo | PASS (header `max_ids[9]`) | `world_history.historical_event_count` |
| Event records | not in export | engine walk wired; body desync localized | TBD |
| Histfig count (12747) | header echo | PASS (vector + header `max_ids[8]`) | `world_history.historical_figure_count` |
| Histfig records | not in export | engine walk wired; body desync localized | body walk |
| Artifacts | not in export | open | blocked |

## Serialization engine status (the keystone)

The deterministic engine (`structures/xml_fields.py` + `deserializers/body_skipper.py`)
parses the complete vendored df-structures (0.47.05-r8) and reads/skips any struct,
including inheritance, version gating, unions, and polymorphic pointer dispatch
(`structures/polymorph.py` maps 127/128 `history_event` subtypes and all
`histfig_entity_link` / `history_event_collection` / `abstract_building` types).

The self-validating harness (`deserializers/engine_walk.py`) walks a record vector and
asserts exact landing on the next anchor, or reports the first desync record + offset.
`deserializers/engine_layers.py` runs it per layer; results are on
`LegendsSnapshot.engine_walks` and surfaced in the explorer.

**Measured on Namushul (`engine_walks`):**

| Layer | Authoritative count | Engine body walk |
|-------|---------------------|------------------|
| figures | 12,747 (`max_ids[8]`, vector confirmed) | desync at figure 1 tail (`0x21353a3`) |
| events_death | total events 113,118 (`max_ids[9]`) | desync after 3 death events (`0x22601de`) |
| sites | 350 (`max_ids[26]+4`) | canonical `world_data.sites` posnull vector not located |
| entities | capacity 7,949 (`max_ids[4]`) | desync at reference vector in entity body (`0x8a7773`) |

**Counts are authoritative.** Full record-body landing is uniformly blocked by DF's
save-specific pointer serialization (owned vs reference pointers, has-bad-pointers,
nested optional substructs) which the in-memory df-structures layout does not fully
describe. Closing it is a binary-disassembly task (Ghidra trace of each `read_file`),
which the harness now localizes to exact offsets per layer.

## Reliability (0.47.05)

Cross-fixture smoke tests (`tests/test_cross_fixture_reliability.py`) cover Namushul DAT,
Waterlures DAT, and Ironhand SAV. Extraction must locate string tables, entities, region
blocks, histfig/event vector anchors, and sites on all three without text exports.

**Not yet world-agnostic:** site id ceiling is header-derived (`max_ids[26]+4`, validated on
Namushul + Waterlures); history stats echo uses Namushul's 12-byte paired layout (Waterlures
falls back to header counters + region anchor); SAV string tables anchor on common plant
names; full record bodies (events, figs, pops, rulers, artifacts) remain blocked on
save-specific pointer serialization (see engine status above).

Status key: **PASS** = binary matches export today; **partial** = count or subset; **open** = not yet from binary.
