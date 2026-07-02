# Legends coverage matrix — binary extract vs text verify

What we extract from `world.dat` today, and what's still pending. Text exports
(`*-world_history*`, `*-world_sites_and_pops*`, `*-world_gen_param*`) are
**verify-only** — `extract_legends_snapshot()` never reads them.

See [`../../AGENTS.md`](../../AGENTS.md) §5 for status and the next step.

## Per-field coverage (Namushul)

| Field | Text export | Binary extract | Status |
|-------|-------------|----------------|--------|
| World name | yes | yes | PASS — `world_header.world_name` |
| DF version | world_gen | yes | PASS — `world_header.df_version` |
| Named civ count/names | history | yes | PASS — `entities.*` |
| Subterranean peoples | history | yes | PASS — `entities.subterranean_civ_count` |
| Civ worship lists | history | — | open |
| Site count (350) | sites | via header `max_ids[26]+4` | PASS (count); ~315/350 names discovered |
| Site name/type/civ/owner/coords | sites | partial | partial — `sites.world_site_catalog` |
| Site populations | sites | — | open (needs `world_site` body walk) |
| Ruler count (71) | history | — | open (binary positions) |
| Event count (113118) | header echo | via header `max_ids[9]` | PASS (count) |
| Event records | — | layout dispatch wired | pending — per-layer walk not landing |
| Histfig count (12747) | header echo | via header `max_ids[8]` | PASS (count) |
| Histfig records | — | header fixed; tail open | pending — link/info/vague tail |
| Artifacts | — | — | open |

Status key: **PASS** = binary matches export today; **partial** = count or
subset; **open** = not yet from binary.

## Layout RE (2026-07-01)

| Artifact | Entries | Parser |
|----------|---------|--------|
| `event_layouts.json` | 128 tags | `SAVE_LAYOUTS["history_event:N"]` |
| `collection_layouts.json` | 14 tags | `SAVE_LAYOUTS["historical_event_collection:N"]` |
| `link_layouts.json` | 39 tags | `SAVE_LAYOUTS["link:{factory}:N"]` |
| `histfig_info_layouts.json` | 14 readers | keyed by subprofile |
| `era_layout.json` | 1 struct + tail notes | `SAVE_LAYOUTS["world_history_era"]` |
| `ghidra_decompiles/index.json` | 320 functions | world section readers labeled |

Fast test suite: **106 passed**, 4 skipped (`pytest -m "not slow"`).

## Engine status (the keystone)

The deterministic engine (`structures/xml_fields.py` +
`deserializers/body_skipper.py`) parses the full vendored df-structures
(0.47.05-r8). Polymorphic bodies now prefer decompile-derived layouts in
`structures/save_layouts.py` via `structures/layout_dispatch.py` before
falling back to XML walking.

The self-validating harness (`deserializers/engine_walk.py`) walks a record
vector and asserts exact landing on the next anchor, or reports the first
desync record + offset.

### Measured (Namushul)

| Layer | Authoritative count | Body walk |
|-------|---------------------|-----------|
| figures | 12,747 index / 4,595 present | pending — tail fields after header |
| events | 113,118 (`max_ids[9]`) | pending — pre-stats region blocks |
| collections | stream count | pending — 14/18 layouts |
| eras | stream count | pending |
| sites | 350 (`max_ids[26]+4`) | pending |
| entities | 7,949 capacity (`max_ids[4]`) | pending |

**Counts are authoritative.** Exact-landing body walks remain the gap.

## Root cause (histfig bodies)

Header layout is fixed (no sex pad; no on-disk `figure_id`/`art_count`). Remaining
walk failures are in post-header tail: dense polymorphic link vectors, optional
`info` subprofiles, optional `vague_relationships`. Layout JSON for links and
partial info profiles is in place; full tail skip still needs integration testing
via `engine_walk.walk_pointer_vector` on present figure bodies @ `0x2134DD9`.

Figures **index** is posnull (`int32 count` + presence bytes); present bodies are
packed densely after the index gap (~89 bytes on Namushul).

## Reliability (0.47.05)

Cross-fixture smoke tests cover Namushul DAT, Waterlures DAT, and Ironhand SAV.
