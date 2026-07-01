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
| Event records | — | engine walk wired | pending — bodies not landing |
| Histfig count (12747) | header echo | via header `max_ids[8]` | PASS (count) |
| Histfig records | — | engine walk wired | pending — bodies not landing |
| Artifacts | — | — | open |

Status key: **PASS** = binary matches export today; **partial** = count or
subset; **open** = not yet from binary.

## Engine status (the keystone)

The deterministic engine (`structures/xml_fields.py` +
`deserializers/body_skipper.py`) parses the full vendored df-structures
(0.47.05-r8) and reads/skips any struct — inheritance, version gating, unions,
and polymorphic pointer dispatch (`structures/polymorph.py` maps the
`history_event` / `histfig_entity_link` / `history_event_collection` /
`abstract_building` subtypes).

The self-validating harness (`deserializers/engine_walk.py`) walks a record
vector and asserts exact landing on the next anchor, or reports the first
desync record + offset. `deserializers/engine_layers.py` runs it per layer;
results are on `LegendsSnapshot.engine_walks` and surfaced in the explorer.

### Measured (Namushul)

| Layer | Authoritative count | Body walk |
|-------|---------------------|-----------|
| figures | 12,747 (`max_ids[8]`) | pending — see root cause below |
| events | 113,118 (`max_ids[9]`) | pending |
| sites | 350 (`max_ids[26]+4`) | pending — canonical `world_data.sites` vector walk |
| entities | 7,949 capacity (`max_ids[4]`) | pending — reference vector in entity body |

**Counts are authoritative.** Bodies are the gap.

## Root cause (known, mechanical)

The body-walk failure is **not** mysterious save-specific pointer
serialization. Decompilation (`AGENTS.md` §4) showed the parser made three
wrong assumptions:

1. A 1-byte **sex pad** after `uint8 sex` — there is none.
2. Stored **`figure_id`/`art_count`** fields — neither exists (id = vector index).
3. A **posnull** figures vector — it is **DENSE** (count + bodies).

Fixing the histfig parser to the definitive layout and walking the dense
figures vector from the real `world_history` start is the single
highest-leverage next step. The decompiles in `ghidra_decompiles/` give the
exact field order for every function in the pipeline.

## Reliability (0.47.05)

Cross-fixture smoke tests (`tests/test_cross_fixture_reliability.py`) cover
Namushul DAT, Waterlures DAT, and Ironhand SAV. Extraction locates string
tables, entities, region blocks, histfig/event vector anchors, and sites on all
three without text exports.

Not yet world-agnostic: site id ceiling is header-derived (`max_ids[26]+4`,
validated on Namushul + Waterlures); history stats echo uses Namushul's 12-byte
paired layout (Waterlures falls back to header counters + region anchor); SAV
string tables anchor on common plant names.
