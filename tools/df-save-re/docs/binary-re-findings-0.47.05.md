# Binary RE findings — DF 0.47.05 (`save_version` 1716)

> **STATUS (2026-07-01): partially superseded.** The landmark offsets and
> top-level read order below remain valid, but the **historical-figure /
> figures-vector claims are WRONG** and have been corrected by Ghidra
> decompilation of the Windows `Dwarf Fortress.exe`. Read [`AGENTS.md`](../../../../AGENTS.md)
> first, then [`FUNCTIONS.md`](../../../../FUNCTIONS.md) and the decompiled C
> in [`ghidra_decompiles/`](../ghidra_decompiles/) for the authoritative
> on-disk layouts. Key corrections: the figures vector is **DENSE** (not
> posnull); the histfig header has **no sex pad byte** and **no `figure_id` /
> `art_count` fields** (the id is the vector index). Stale lines below are
> called out inline with `⚠ SUPERSEDED`.

Validated on **Namushul** fixture (`tests/fixtures/small-retired/world.dat`).

## Layout landmarks

| Region | Offset | Notes |
|--------|--------|-------|
| Preamble end | `0x881B` | After generated raws |
| String tables | `0x2A397E` | 20 sections |
| String index end | `0x2B0AF4` | 283 int32 entries |
| First entity header | `0x2F7D79` | id=0 SUBTERRANEAN_ANIMAL_PEOPLES |
| Last catalog entity | `0x51FDA0` | id=203 EVIL |
| First region block | `0x86C157` | `*START REGION SAVE*` |
| History stats echo | `0x15BEB28` | `[113118, 151, 4, 12747, …]` |
| Payload EOF | `0x2AE0005` | ~45 MB decompressed |

## History stats block (`0x15BEB28`)

| Field | Value | Hypothesis |
|-------|-------|------------|
| +0 | 113118 | max event id / event count echo |
| +4 | 151 | TBD (`events_death` or collection count) |
| +8 | 4 | TBD (relationship_event blocks, v0.47.01+) |
| +12 | 12747 | max histfig id echo |
| +24 | 12748 | next histfig id (`+1`) |

This block is **metadata**, not the start of the `world_history` stl-vectors. ⚠ SUPERSEDED: the figures vector is DENSE and sits at the real `world_history` start (events count from `max_ids` followed by a valid event tag), not a posnull block at `0x2131bb0`. See `AGENTS.md` §4 and `scripts/diag_find_worldhistory_start.py`.

## Historical figures (Namushul)

> ⚠ SUPERSEDED — the table below reflects the old posnull hypothesis. The
> figures vector is **DENSE** (`int32 count` + `count` bodies, no presence
> flags). Figure bodies begin immediately after the count. The histfig header
> has **no sex pad** and **no stored `id`/`art_count`** (id = vector index).
> Authoritative layout: `AGENTS.md` §4 + `ghidra_decompiles/14070a9d0.c` (reader)
> and `14070a090.c` (writer).

| Landmark | Offset | Notes |
|----------|--------|-------|
| Stats echo | `0x15BEB28` | event/death/rel/fig counter block |
| `figures` vector | `0x2131BB0` | ⚠ SUPERSEDED — was assumed posnull; actually dense, real start is the world_history events count |
| Figure bodies | `0x2134DD0` | ⚠ SUPERSEDED — no 80-byte posnull prefix; bodies follow the dense count directly |
| `events_death` vector | `0x226009C` | count=151, 95% posnull |

⚠ SUPERSEDED: header layout does **not** match `df.history_figure.xml` through `art_count` — there is no `art_count` field on disk, and the on-disk order diverges from the in-memory struct (see `AGENTS.md` §4). The earlier "id chain 0..14+ validated" was a coincidental misread of the misaligned tail.

## Rulers (Namushul)

- Text export: 71 `[*]` ruler lines with civ + position context (`king List`, etc.).
- Binary: surname `language_name.words` markers in history gap (`0x15BEB28`–`0x2134DD0`); **51/71** matched on fixture (e.g. Likot Goldirons → `(341,433)` @ `0x15D0184`).
- Full ruler→`historical_figure.id` map still requires histfig body walk.

## Events (Namushul)

| Field | Value | Notes |
|-------|-------|-------|
| Event count echo | 113118 | stats block + header `max_ids[9]` |
| `events_death` | `0x226009C` | count=151 posnull vector after figure bodies |
| `events` vector | not confirmed | count echo @ stats is metadata only; no 95%+ posnull prefix |
| Relationship blocks | 4 | stats `field_4` echo |

Event bodies likely live in pre-stats region blocks (~14 MB entity-gap/mid payload); polymorphic `history_event` body skipper still open. ⚠ UPDATE: the events factory `FUN_14070b7a0` (switch over tag 0x00..0x85, 134 types) is now decompiled in `ghidra_decompiles/`; remaining work is extracting each subclass's `read_file`/`write_file` vtable slots. See `AGENTS.md` §4.

## Sites

- `world_site` vector is **not** a clean `count=350` posnull block in the entity→region gap.
- Site **title word indices** appear in the entity-gap + mid payload (`0x51FDA0`–`0x15BEB28`), typically as `language_name.words` runs.
- Title markers are **not** adjacent to `site_id` / `type` int fields — words appear inside larger world_data / region blobs.
- Text export titles use past-tense glue (`Bristledhollows` → BRISTLE + HOLLOW) and irregular forms (`Stolenveils` → STEAL + VEIL).
- Namushul site **345** `"The Justice of Stances"` stores **`JUST` + `STAND`** @ `0x119460f` (not `JUST`+`ICE` nor `DISTANCE`).
- Title cluster @ `0x1194000`–`0x1195000` shows ~**354-byte** stride between consecutive marker offsets (346–350).

## Irregular word-table mappings (section 8)

| Legends token | Stored words | Example site |
|---------------|--------------|--------------|
| `WINDS` | WIND CLOCK | Raywinds |
| `STANCES` | STAND | The Justice of Stances |
| `JUSTICE` | JUST | The Justice of Stances |
| `STOLE` / `STOLEN` | STEAL | Stolenveils |
| `ENTER` | ENTRY | Enterbad |

## Vectors still open

| Vector | Header count | posnull scan in history tail |
|--------|--------------|------------------------------|
| `history_event` | 113118 | Count echo @ stats; vector not confirmed (bodies pre-stats) |
| `events_death` | 151 | **Vector @ `0x226009c`** after figure bodies |
| `historical_figure` | 12747 | ⚠ SUPERSEDED — figures vector is DENSE (not posnull); see `AGENTS.md` §4. Real start = world_history events count. |
| `world_site` | 350 | Marker-anchored catalog @ name table ~0x1193ae5 stride 354; posnull vector still unconfirmed |

## Site name table (Namushul cluster)

Fixed-stride records in `0x1193ae5` + `site_id_offset * 354` hold `language_name.words` runs for many late site ids (341–350). Earlier sites use scattered marker offsets in the entity→history gap.

Next step: ⚠ DONE — the DF Windows binary and Ghidra are now set up; `world_site::read_file` and the world_history/histfig readers are decompiled in `ghidra_decompiles/`. See `AGENTS.md` §4–5.

---

# Authoritative save read order (for the deterministic engine)

The serialization engine walks the stream sequentially. Two different "orders"
are in play and must not be confused:

1. **Top-level stream order** — the sequence of major sections in `world.dat`.
   This is defined by DF's `world::read_file`/`write_file`, NOT by the
   `world` struct field order in `df.world.xml` (that struct begins with
   runtime-only vectors like `glowing_barriers`/`vermin` that are never saved).
   We treat the top-level order as **empirically anchored** (offsets below).

2. **Within-object field order** — for every *saved object* (`world_data`,
   `world_site`, `historical_figure`, `history_event` + subclasses,
   `historical_entity`, `history_event_collection`, ...), the on-disk field
   order **does** follow the df-structures declaration order. This is the
   invariant the engine relies on: given a correct start offset and a complete
   type definition, the body skipper lands exactly on the next record.

## Top-level stream order (world.dat, save_version 1716)

Empirical order, low → high address (Namushul offsets):

| # | Section | Namushul offset | Discovery today | Engine target |
|---|---------|-----------------|-----------------|---------------|
| 1 | DAT preamble (world header + generated raws) | `0x0` → `0x881B` | deterministic | keep |
| 2 | Post-header raw stream | `0x881B` | deterministic (section loop) | keep |
| 3 | Short-name string tables (20 sections) | `0x2A397E` | heuristic anchor + deterministic body | keep |
| 4 | String index (int32 count + entries) | `0x2B0684` → `0x2B0AF4` | deterministic | keep |
| 5 | Pre-entity gap | `0x2B0AF4` → `0x2F7D79` | **unparsed (~316 KB)** | close via engine walk |
| 6 | Entity catalog (`historical_entity` records) | `0x2F7D79` → `0x51FDA0` | heuristic header scan | engine walk of entity bodies |
| 7 | `world_data` (regions + `sites` + mid blob) | `0x51FDA0`/`0x86C157` → `0x15BEB28` | region marker heuristic; sites scattered | engine walk of `world_data` |
| 8 | History stats echo (metadata, NOT a vector) | `0x15BEB28` | heuristic paired-counter scan | landmark only |
| 9 | `world_history.figures` vector + bodies | `0x2131BB0` / bodies `0x2134DD0` | ⚠ SUPERSEDED — DENSE vector; real start is the world_history events count (row 8 is metadata only). See `AGENTS.md` §4 | engine walk all `max_ids[8]` |
| 10 | `world_history.events_death` vector | `0x226009C` | heuristic | engine walk |
| 11 | Tail (events, collections, eras, artifacts) | → EOF `0x2AE0005` | open | engine walk |

Note the stats echo at `#8` is **metadata**, not the start of the
`world_history` vectors; the real `figures`/`events_death` vectors sit later in
the tail. The engine anchors on the confirmed `figures` vector and validates by
landing exactly on `events_death`.

## Within-object field order (saved objects)

These declaration orders (from the vendored 0.47.05-r8 df-structures) are what
the body skipper follows. Version-gated fields are included only when the
`since=`/`before=` predicate holds for save_version 1716 (DF 0.47.05).

### `world_data` (`df.world-data.xml`)

`name` (language_name) → `unk1[15]` → `next_site_id` → `next_site_unk130_id`
→ `next_resource_allotment_id` → `next_breed_id` → `next_battlefield_id`
(v0.34.01) → ... → `region_details` vector → `constructions` →
`entity_claims1/2` → **`sites` vector (`world_site`)** → `site_unk130` →
`resource_allotments` → `breeds` → `battlefields` → `region_weather` →
`object_data` → `landmasses` → `regions` (`world_region`) →
`underground_regions` → `geo_biomes` → `mountain_peaks` → `rivers` →
`region_map` pointer → ... → `active_site` → `feature_map`.

Key fact: the top-level `world_data.sites` vector holds the canonical site
records (count = `next_site_id`). It comes **after** `constructions` /
`entity_claims`, **before** `landmasses`/`regions`.

### `world_history` (`df.history.xml`)

`events` → `events_death` → `relationship_events` (v0.47.01) →
`relationship_event_supplements` (v0.47.01) → **`figures`** →
`event_collections` { `all` + `other[18]` } → `eras` →
`discovered_art_image_id/subid` → counters → live-megabeast lists → ...

### `world_site` (`df.world-site.xml`)

`name` → `civ_id` → `cur_owner_id` → `type` (int16 enum) → `pos` (coord2d) →
`id` → `unk_1` { `nemesis`, `artifacts`, `animals` (`world_population`),
`inhabitants` (`world_site_inhabitant`), `units`, `unk_d4`, v0.40.01 vectors }
→ `index` → region bounds → seeds → `resident_count` → ... → realization data.

### `historical_figure` (`df.history_figure.xml`)

> ⚠ SUPERSEDED — the on-disk order is **not** the df-structures declaration
> order. The authoritative on-disk layout (from `FUN_14070a090` writer /
> `FUN_14070a9d0` reader) is in `AGENTS.md` §4 and `FUNCTIONS.md`. In
> particular: no `sex` pad, no stored `id`/`art_count`, version-gated
> `family_head_id` (>0x618) and `vague_relationships` (>0x6a0), three dense
> polymorphic link vectors, then byte-flagged `info` and `vague_relationships`.

Fixed prefix through `art_count` (already parsed today), then variable tail:
`entity_links`, `site_links`, `histfig_links` (all polymorphic pointer
vectors), `info` pointer, `vague_relationships`, worldgen pointers, temp vars,
`gen_material_skill_ip_sum`/`defensive_skill_ip_sum` (v0.40.17-19),
`pool_id` (size_t).

### `history_event` (`df.history_event.xml`)

Base fields `year`, `seconds`, `flags` (df-flagarray), `id`, then the subclass
payload selected by the `history_event_type` (int16) discriminator written
before the body. ~128 subclasses; the engine dispatches on the type tag.

## Engine strategy implied by this order

- Walk **within** each object deterministically using complete df-structures.
- Anchor each top-level layer on a confirmed offset, then **prove correctness by
  landing exactly on the next anchor** (e.g. figures bodies must end at
  `events_death`; sites vector must consume exactly `next_site_id` records).
- Close the pre-entity gap (#5) and the region/mid blob (#7) as a byproduct of
  walking `world_data` end-to-end once the engine is complete.
