# Binary RE findings — DF 0.47.05 (`save_version` 1716)

Empirical save-layout findings for the **Namushul** fixture
(`tests/fixtures/small-retired/world.dat`), confirmed against Ghidra
decompilation of the Windows `Dwarf Fortress.exe`. The authoritative function
map is [`../../FUNCTIONS.md`](../../FUNCTIONS.md) and the decompiled C in
[`../ghidra_decompiles/`](../ghidra_decompiles/); read [`../../AGENTS.md`](../../AGENTS.md)
for the goal and critical findings.

## Save/load pipeline (call chain)

Confirmed by decompilation:

```
Writer (save)                          Reader (load)
FUN_1405f3a60  world writer            FUN_140330310  world reader
  -> FUN_140709410 world_history writer  -> FUN_1407099a0 world_history reader
       -> FUN_14070a090 histfig writer        -> FUN_14070a9d0 histfig reader
              -> FUN_14070a5d0 info writer           -> FUN_14070b110 info reader
              -> FUN_1406fb080 vague writer          -> FUN_1406fb120 vague reader
       -> FUN_14070b7a0 events factory (switch)
```

- `FUN_1405bb7c0` / `FUN_1405bba90` — primitive byte writer/reader
  `(file_compressor, data_ptr, byte_count)`. No implicit padding.
- `FUN_1403159b0` / `FUN_140315ac0` — `language_name` writer/reader: one-byte
  `has_name` flag; if set, first string, nickname string, 7×int32 words,
  7×int16 parts-of-speech, int32 language, int16 name type.

## Layout landmarks (Namushul)

| Region | Offset | Notes |
|--------|--------|-------|
| Preamble end | `0x881B` | After generated raws |
| String tables | `0x2A397E` | 20 sections |
| String index end | `0x2B0AF4` | 283 int32 entries |
| First entity header | `0x2F7D79` | id=0 SUBTERRANEAN_ANIMAL_PEOPLES |
| Last catalog entity | `0x51FDA0` | id=203 EVIL |
| First region block | `0x86C157` | `*START REGION SAVE*` |
| History stats echo | `0x15BEB28` | `[113118, 151, 4, 12747, …]` — metadata, NOT a vector |
| Payload EOF | `0x2AE0005` | ~45 MB decompressed |

The history stats echo at `0x15BEB28` is a metadata counter block (events,
death, relationship, figures), **not** the start of the `world_history`
vectors. The real `world_history` start is the events count (from `max_ids`)
followed by a valid 4-byte event tag — locate it with
`scripts/diag_find_worldhistory_start.py`.

## `world_history` section order

From `FUN_140709410` (writer) / `FUN_1407099a0` (reader):

1. `events` vector — `int32 count`, then `count` events. Each event is a 4-byte
   tag dispatched by the events factory `FUN_14070b7a0` (switch over
   `0x00`..`0x85`, **134 event types**) to a `history_event_*` subclass, then
   the subclass's `read_file` (vtable `+0x120`).
2. `figures` vector — **DENSE**: `int32 count`, then `count` bodies via
   `FUN_14070a9d0`. **No presence-flag array.**
3. `event_collections` { `all` + `other[18]` } → `eras` →
   `discovered_art_image_id/subid` → counters → live-megabeast lists → …

## Historical figure on-disk layout

Definitive, from `FUN_14070a090` (writer) + `FUN_14070a9d0` (reader). The
figure's **id is its vector index** — it is NOT stored in the stream. There is
**no sex pad byte** and **no `art_count`/`figure_id` field** on disk.

1. `int16 profession`
2. `int16 race`
3. `int16 caste`
4. `uint8 sex`
5. `int32 orientation_flags` (immediately after `sex` — no pad)
6. 11× `int32` year/identity scalars (in-memory `+0x0c`..`+0x34`)
7. `language_name` (`has_name` byte + body)
8. `int32 civ_id`, `int32 population_id`, `int32 breed_id`, `int32 cultural_identity`
9. `int32 family_head_id` — **version-gated: only if save_version > 0x618**
10. 4× `int32` (in-memory `+0xe4`, `+0xd8`, `+0xdc`, `+0xe0`; includes
    nemesis_id/unit_id, exact names TBD)
11. flags byte-vector via `FUN_140002380` (in-memory `+0xc8`)
12. `int32 count` + `count` entity_links — factory `FUN_140707820`, dense
    polymorphic (`int16 type_tag` + body)
13. `int32 count` + `count` site_links — factory `FUN_140707c90`
14. `int32 count` + `count` histfig_links — factory `FUN_140708160`
15. `uint8 has_info` — if set, `info` body via `FUN_14070b110` (owned, inline)
16. `uint8 has_vague` — **version-gated: only if save_version > 0x6a0**; if
    set, `vague_relationships` via `FUN_1406fb120`

Namushul `save_version` 1716 (`0x6b4`) → **all** version-gated fields present.

Link-vector tags (active vtables): entity `-1`..`16`, hf `-1`..`15`,
site `-1`..`9` — see `FUNCTIONS.md` for the full name maps.

## Events

`FUN_14070b7a0` is the events factory: a switch over a 4-byte tag
(`0x00`..`0x85` = 134 types) that `operator_new`s the matching
`history_event_*` subclass and assigns its vtable. To walk event bodies we
still need each subclass's `read_file` (`+0x120`) / `write_file` (`+0x118`) —
extract the vtable slots with `ghidra_scripts/EnumerateEventVtables.java`,
then batch-decompile with `DecompileWithCallees.java`.

## Top-level stream order (world.dat, save_version 1716)

Empirical, low → high address (Namushul):

| # | Section | Namushul offset | Engine target |
|---|---------|-----------------|---------------|
| 1 | DAT preamble (header + generated raws) | `0x0` → `0x881B` | keep |
| 2 | Post-header raw stream | `0x881B` | keep |
| 3 | Short-name string tables (20 sections) | `0x2A397E` | keep |
| 4 | String index (int32 count + entries) | `0x2B0684` → `0x2B0AF4` | keep |
| 5 | Pre-entity gap | `0x2B0AF4` → `0x2F7D79` | close via engine walk |
| 6 | Entity catalog (`historical_entity`) | `0x2F7D79` → `0x51FDA0` | engine walk of entity bodies |
| 7 | `world_data` (regions + `sites` + mid blob) | `0x51FDA0`/`0x86C157` → `0x15BEB28` | engine walk of `world_data` |
| 8 | History stats echo (metadata) | `0x15BEB28` | landmark only |
| 9 | `world_history` (events vector, then figures, …) | after stats echo | engine walk — events then dense figures |
| 10 | Tail (collections, eras, artifacts) | → EOF `0x2AE0005` | engine walk |

## Serialization quirks (engine preserves these)

- `coord2d` = 2×int32 (not int16); `coord` = 3×int32.
- `df-flagarray` = count×int32.
- Pointer vectors may be **posnull** (count + presence bytes + bodies) for
  some layers — but the **figures** vector is **DENSE** (count + bodies).
- df-structures XML is the *in-memory* layout; it does **not** give the
  on-disk order. Always confirm field order from the decompiled
  `read_file`/`write_file` before encoding a parser override.
