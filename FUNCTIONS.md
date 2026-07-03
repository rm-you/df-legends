# Reverse-Engineered Function Map

This file tracks DF 0.47.05 save/load functions discovered while reverse-engineering compressed save extraction. Addresses are for `Dwarf Fortress.exe` from `C:\Users\rm_yo\Downloads\df_47_05_win`.

The canonical, machine-usable function map is the decompiled C in
`tools/df-save-re/ghidra_decompiles/` (one `<addr>.c` per function, plus
`index.json` with `addr/name/entry/callees/decompile_file`). This file is the
curated human-readable summary; regenerate the artifacts with
`tools/df-save-re/ghidra_scripts/DecompileWithCallees.java`. Read `AGENTS.md`
first for the goal, paths, and the findings that supersede earlier guesses.

## Save/Load Pipeline (call chain)

```
Writer (save)                          Reader (load)
FUN_1405f3a60  world writer            FUN_140330310  world reader
  -> FUN_140709410 world_history writer  -> FUN_1407099a0 world_history reader
       -> FUN_14070a090 histfig writer        -> FUN_14070a9d0 histfig reader
              -> FUN_14070a5d0 info writer           -> FUN_14070b110 info reader
              -> FUN_1406fb080 vague writer          -> FUN_1406fb120 vague reader
       -> FUN_14070b7a0 events factory (switch)
```

## Save Writer Primitives

- `FUN_1405bb7c0`: primitive byte writer. Signature pattern is `(file_compressor, data_ptr, byte_count)`. Writes exactly `byte_count` bytes; no implicit padding/alignment.
- `FUN_1405bba90`: primitive byte reader counterpart. Signature pattern is `(file_compressor, data_ptr, byte_count)`.
- `FUN_1400020a0`: int16 vector writer. Writes `int32 count`, then `count` int16 elements.
- `FUN_1400021b0`: int32 vector writer. Writes `int32 count`, then `count` int32 elements.
- `FUN_1400022f0`: byte vector writer. Writes `int32 count`, then `count` raw bytes. Used by `historical_figure.flags`.

## Shared Save Helpers

- `FUN_1403159b0`: `language_name` writer. Writes one-byte `has_name` flag from offset `+0x72`; if nonzero, writes first string, nickname string, seven int32 words, seven int16 parts of speech, int32 language, and int16 name type.
- `FUN_140315ac0`: `language_name` reader counterpart. Reads the same one-byte `has_name` flag first and skips the rest of the name body when absent.

## World / History Writers

- `FUN_1405f3a60`: main `world.dat` writer/export orchestrator. Calls world/history component writers.
- `FUN_140709410`: `world_history` writer section containing `figures`. It writes the events vector, then the **figures vector as DENSE** (`int32 count` then `count` bodies via `FUN_14070a090`), then collections/eras/etc. NOT posnull — no presence-flag array.
- `FUN_1407099a0`: `world_history` reader counterpart. Full section order confirmed from the decompile:
  1. `events` — `int32 count`, then per element: `FUN_14070b7a0` (factory) → `event->read_file` (vtable +0x120) → `FUN_1407c8470` (push into vector) → `event->?` (vtable +0x100).
  2. `figures` — `int32 count`, then per element: `operator_new(0x178)` → `FUN_140708460` (init) → `FUN_14070a9d0` (histfig reader) → `FUN_1400715b0` (push). DENSE, no presence flags.
  3. `event_collections` — `int32 count`, then per element: `FUN_140763aa0` (collection factory) → `collection->read_file` (vtable +0x18) → `collection->?` (vtable +0x20). Polymorphic.
  4. `eras` — `int32 count`, then per element: `operator_new(0x78)` + `FUN_1406ff0e0` init → `FUN_14075cd70` (era reader).
  5. Two `int32`-counted primitive vectors (elements 4 bytes then 2 bytes) + four scalar `int32` fields (in-memory +0x51/+0x52 and byte offsets +0x28c/+0x294) + another `int32`-counted 4-byte vector.
  6. Version-gated block (`save_version >= 0x5d8`): seven more `int32`/vector fields (in-memory +0x56..+0x5c); zeroed when older.
  7. Version-gated (`> 0x65c`): two vectors — `int32 id`-quad records (`operator_new(0x14)`) and large `operator_new(0x4808)` records via `FUN_1406fedd0`.
  8. Version-gated (`> 0x68f`): vector of `operator_new(0x20)` records via `FUN_1406fefc0`.
  Confirms the figures vector is DENSE.
- `FUN_140763aa0`: `history_event_collection` factory (18 tags 0–17). Vtables in `collection_vtables.json` (18/18 via `LookupVtableSlots.java` for war/battle/abduction/theft); on-disk bodies share base prefix via `FUN_140083d80` (see `collection_layouts.json`, 18/18 with fields). **The auto-extracted layouts drop nested calls** (`language_name` in war/battle, `FUN_1406fc080` war tallies, purge string) — the authoritative Python readers are hand-transcribed in `df_save_re/deserializers/event_collections.py` (validated exact-landing on Namushul 8,201 + region2 10,315).
- `FUN_140083d80`: shared `history_event_collection` base reader (two i32 vectors, four i32 scalars, byte flags vector, trailing i32). Called from most collection subclass `read_file` implementations.
- Collection subclass readers (tag → function): 0 war `FUN_1407699e0` (name + 2 civ vecs + gated vec + tallies `FUN_1406fc080`: i16vec+4×i32vec+i32, i16vec+3×i32vec+i32, i16vec+2×i32vec+i32); 1 battle `FUN_140084360` (name, 4×i32, 2×i16, hf/civ/squad vecs with `>=0x66e`/`>=0x670` gates, i16 outcome, `>0x66f` trailer); 2 duel `FUN_140085420`; 3 site_conquered `FUN_140085710`; 4 abduction `FUN_140085a80`; 5 theft `FUN_140085ec0` (12 vectors + i32); 6 beast_attack `FUN_1400c5260`; 7 journey `FUN_1404907b0`; 8/9/16/17 insurrection/occasion/persecution/entity_overthrown `FUN_1401ba540` (3×i32); 10–13 performance/competition/procession/ceremony `FUN_1406fe760` (5×i32); 14 purge `FUN_140490630` (i32 + string + i32); 15 raid `FUN_1400866a0`.
- `FUN_14075cd70`: `history_era` reader — `i32 year`, `i16 title.type`, `i32 title.histfig_1`, `i32 title.histfig_2`, `i32 title.ordinal`, `stl_string title.name`, nested `details` @ +0x40 via `FUN_14075ccb0` (`living_powers`, `living_megabeasts`, `living_semimegabeasts`, `power_hf1..3`, `civilized_races` vec, `civilized_total`, `civilized_mundane`).
- `FUN_14075ccb0`: era nested details — six `i32` scalars + `i32_vector` + two trailing `i32`.
- `FUN_1406fedd0`: version-gated (`>0x65c`) intrigue-update element reader — count @ +0x4800, per-entry five parallel arrays (i32, i16, i32×3) indexed by count.
- `FUN_1406fefc0`: version-gated (`>0x68f`) relationship-update element reader — leading `i32`, optional nested struct, four trailing `i32`.
- `FUN_14070a090`: `historical_figure` writer. **Definitive save order (matches reader exactly, NO sex pad, NO figure_id, NO art_count):**
  - `int16 profession`, `int16 race`, `int16 caste`, `uint8 sex`
  - `int32 orientation_flags` (immediately after sex — **no pad byte**)
  - 11× `int32` year/identity scalars (in-memory +0x0c..+0x34)
  - `language_name` (`FUN_1403159b0`)
  - `int32 civ_id`, `int32 population_id`, `int32 breed_id`, `int32 cultural_identity`
  - `int32 family_head_id` — **version-gated: only if save_version > 0x618**
  - 4× `int32` on disk after `family_head_id` (>0x618): **`unit_id`** (+0xe4), **`nemesis_id`** (+0xd8), **`global_id`** (+0xdc), then byte flags (+0xc8), **`art_count`** (+0xe0). RAM order in df.history_figure.xml differs; save order from `FUN_14070a9d0`.
  - flags byte-vector via `FUN_1400022f0` (in-memory +0xc8)
  - 3 dense polymorphic link vectors (see below)
  - `uint8 has_info` → if set, `info` body via `FUN_14070a5d0`
  - `uint8 has_vague` → **version-gated: only if save_version > 0x6a0**; if set, `vague_relationships` via `FUN_1406fb080`
- `FUN_14070a9d0`: `historical_figure` reader counterpart. **Confirms the layout above** — `uint8 sex` then `int32 orientation_flags` directly (no pad), version-gated `family_head_id` (>0x618), 3 link-vector factories `FUN_140707820`/`FUN_140707c90`/`FUN_140708160`, byte-flagged `info` (`FUN_14070b110`), then version-gated byte-flagged `vague_relationships` (`FUN_1406fb120`, >0x6a0). The figure's id is its **vector index** — it is NOT stored in the stream.
- `FUN_14070a5d0`: `historical_figure_info` writer candidate. Decompile shows 13 one-byte optional profile pointers matching `historical_figure_info` fields, with custom writer calls per present subprofile.
- `FUN_1406fb080`: `relationship_quick_infost` writer candidate. Writes count, then `count` pairs of `int32 hfid` and `int16 relationship`.
- `FUN_1406f8520`: one `historical_figure_info` subprofile writer. Writes int16/int32 vector pairs plus scalar fields and an optional nested pointer.
- `FUN_1406f61a0`, `FUN_1406f7d60`, `FUN_1406f5380`, `FUN_1407ab230`, `FUN_1407abe00`, `FUN_1407aacf0`, `FUN_1406f9080`, `FUN_1407b4c50`: additional `historical_figure_info` subprofile writers called by `FUN_14070a5d0`; precise field names still in progress.

## Layout artifacts (machine-readable)

| File | Coverage |
|------|----------|
| `event_layouts.json` | 128/128 `history_event` tags |
| `collection_layouts.json` | 18/18 collection tags |
| `link_layouts.json` | 39 link subtypes (entity/site/histfig factories) |
| `histfig_info_layouts.json` | 14 info subprofile readers |
| `era_layout.json` | `history_era` + tail-vector notes |
| `save_layouts.py` | Generated `SAVE_LAYOUTS` dict (192 keys); parser dispatches via `layout_dispatch.py` |

Link factories: `FUN_140707820` (entity, tags 0–16), `FUN_140707c90` (site, -1..9), `FUN_140708160` (histfig, -1..15). Most link bodies are `i32` target id + `i16` strength; site links add assignment ids; position variants use `FUN_1406fb950`.

## Historical Figure Link Writers

- Histfig link vectors in `FUN_14070a090` are dense polymorphic vectors: `int32 count`, then for each element `int16 type_tag` followed by the subtype writer body. They do not use posnull/presence flag arrays.
- `FUN_14070a090` writes the three link-vector counts back-to-back. No empty-vector tail/shim is emitted between `site_links` and the third vector in this writer.
- `FUN_1406fb7f0`: base `histfig_hf_link.write_file`. Writes `int32 target_hf`, then `int16 link_strength`.
- `FUN_1406fb850`: base `histfig_hf_link.read_file` counterpart. Reads `int32 target_hf`, then `int16 link_strength`.
- `FUN_1406fb8c0`: `histfig_hf_link_companionst.write_file`. Writes the base `histfig_hf_link` fields (`int32 target_hf`, `int16 link_strength`) plus `int32 agreement_id` and `int32 agreement_party_id`.
- `FUN_1406fb950`: `histfig_hf_link_companionst.read_file` counterpart.
- `FUN_1406fbb40`: base `histfig_site_link.write_file`. Writes three int32 fields from offsets `+8`, `+0xc`, `+0x10`.
- `FUN_1406fbbb0`: base `histfig_site_link.read_file` counterpart.
- `FUN_1406fbc30`: `histfig_site_link_occupationst.write_file`. Calls base site-link writer, then writes `int32 occupation_id`.
- `FUN_1406fbc70`: `histfig_site_link_occupationst.read_file` counterpart.
- Active vtable-derived `histfig_entity_link` tags:
  - `-1`: base `histfig_entity_linkst`
  - `0..16`: `member`, `former_member`, `mercenary`, `former_mercenary`, `slave`, `former_slave`, `prisoner`, `former_prisoner`, `enemy`, `criminal`, `position`, `former_position`, `position_claim`, `squad`, `former_squad`, `occupation`, `former_occupation`
- Active vtable-derived `histfig_hf_link` tags:
  - `-1`: base `histfig_hf_linkst`
  - `0..15`: `mother`, `father`, `spouse`, `child`, `deity`, `lover`, `prisoner`, `imprisoner`, `master`, `apprentice`, `companion`, `former_master`, `former_apprentice`, `pet_owner`, `former_spouse`, `deceased_spouse`
- Active vtable-derived `histfig_site_link` tags:
  - `-1`: base `histfig_site_linkst`
  - `0..9`: `occupation`, `seat_of_power`, `hangout`, `home_site_abstract_building`, `home_site_realization_building`, `lair`, `home_site_realization_sul`, `home_site_saved_civzone`, `prison_abstract_building`, `prison_site_building_profile`
- Observed `0x45` / `69` near fig0's third post-header vector is not a valid histfig entity/site/HF link tag. Known active vtables with tag `69` are `history_event_change_hf_body_statest` and `item_powder_miscst`; neither currently confirms the third vector's type. Treat the region as opaque until the actual field is identified.

## History Events

- `FUN_14070b7a0`: events factory. Reads a 4-byte event tag (`0x00`..`0x85`, 134 types), `operator_new`s the matching `history_event_*` subclass, assigns its vtable, and returns it. The world_history reader then calls the event's `read_file` (vtable +0x120). The full tag→subclass map is derivable from this function's switch; vtable addresses for each subclass are extracted by `ghidra_scripts/EnumerateEventVtables.java` (walks the factory's data refs and dumps vtable slots [0x0]=dtor, [0x100], [0x118]=write_file, [0x120]=read_file).
- **DONE 2026-07-01**: all 128 event subclass `read_file`/`write_file` functions decompiled (111 unique addresses; 66 read, 45 write — subclasses share impls). Per-tag on-disk layouts extracted to `ghidra_decompiles/event_layouts.json` by `scripts/extract_event_layouts.py` (128/128 tags, zero unknown helper calls).
- `FUN_140019190`: the common **event base reader** — `+0x08 i32 year`, `+0x0c i32 seconds`, `+0x10 flags byte-vector` (`FUN_140002380`), `+0x20 i32 id`, then `+0x28/+0x2c/+0x30/+0x34` i32s. Nearly every subclass inlines this prefix; the 7 masterpiece events call it directly (recorded as `kind:"call"` in the layout JSON).
- Event-body helper readers seen in subclass `read_file`s: `FUN_140002380` byte vector, `FUN_140002250` int32 vector, `FUN_140002140` int16 vector (each: i32 count + count×elem via `FUN_1405bba90`).

## Full world reader case map (FUN_140330310) — 2026-07-03

The world reader is a state machine over `*(param_1+0x168)` (case 0..0x23),
one case per frame. Stream sections in order (all decompiled; the whole
reachable callee closure is committed — see `scripts/decompile_closure.py`):

- **case 0** — raw FILE header (via istream, NOT payload): `i32 save_version`
  + `i32 compressed_flag`. Decompressed payload then starts: `i16 unknown`,
  world header `FUN_140306a00`, string tables `FUN_14030aa20`.
  - `FUN_140306a00` (header): **28 unconditional `i32` id-counter slots**
    (+0xa8..+0x114), then gated: +3 if sv>0x5cb, +2 if >0x5cc, +1 if >0x5d4,
    +1 if >0x622, +2 if >0x67d ⇒ **37 slots at sv 1716** (this supersedes the
    old `WorldHeaderHypothesis` 50-slot guess); then `language_name`
    (`FUN_140315ac0`), 15 flag bytes (+0x98..), save-folder string
    (`FUN_1405bb6d0`).
  - `FUN_14030aa20` (string tables): 5 unconditional `vector<vector<string>>`
    tables, +1 gated sv>0x5cb, +1 unconditional, +1 gated sv>0x58e; then 20
    unconditional `vector<string>` raw-category name lists in fixed order
    (inorganic, plant, creaturebody, creaturebodygloss, creature, item,
    entity, word, symbol, translation, color, shape, color_pattern, reaction,
    material_template, tissue_template, body_detail_plan, building,
    creature_variation, interaction — order confirmed by the raw-match
    validator `FUN_140d20680`); then `i32 count` × 0x40-byte records
    (`FUN_140309c40`: 16×i32, fields +0x28/+0x2c only when sv>0x5cb).
- **case 1** — no stream reads (copies header max_ids into globals).
- **case 2** — `FUN_140aafe60` **object registry**: for each world object
  vector, `i32 count` then per element `i32 id` (+ for items/buildings the
  factory reads an extra `i32 type` tag). Stream order of the 29 vectors
  (gates as noted): items (factory `FUN_140812580`), buildings (factory
  `FUN_1401961d0`), 0x2038-objects (`FUN_1404958d0` ctor), 0x68-objects
  (`FUN_1409079f0` ctor, `DAT_141c67348`, written-content-like), 0x128-objects
  (`FUN_140812440` ctor, `DAT_141c68028`, artifact-like), count-only 0x24
  objects, squads (`FUN_140c14ef0` ctor 0x1d0, `DAT_141d64d38`), 4-byte ids
  (`DAT_141d64d68`), 0x28-objects ×2, 0xa8 (`FUN_140df49e0`), 0xe8, 0x118
  (`FUN_1407d60f0`), 0x118 (`FUN_140140ca0`), 0x40, 0x148 (`FUN_1400978f0`),
  0xc8, 0x798, `FUN_140305410`, 0x50; gated sv>0x5cb: 0x100, `FUN_140301700`,
  0x178 (`FUN_140143620`); gated sv>0x5cc: 0x758, 0x40; gated sv>0x5d4/0x622/
  0x67d/0x67d: 4 more. These counts size the vectors that cases 3-6 and
  0xd-0x1f iterate (their body loops read no counts).
- **case 3** — item bodies: per registry item, virtual `read_file`
  (vtable+0x438). 65 subtypes enumerated in
  `ghidra_decompiles/item_vtables.json`; **37 share the generic reader
  `FUN_140820540`**, 25 distinct impls total.
- **case 4** — building bodies: vtable+0x218; 36 subtypes in
  `building_vtables.json` (base body `FUN_1401662b0` et al).
- **case 5** — 0x2038-object bodies via `FUN_1404aaa30` (large; army/unit-like).
- **case 6** — 0x24-object bodies via `FUN_1401b6b20`.
- **case 7** — historical entities `FUN_140a62e80` (reads own count).
- **case 8** — 4 scalars (`i32,i16,i32,i16`) + `i32 count` + dense
  `world_site` bodies `FUN_1403066f0` (buildings nested via `FUN_1403021d0`).
- **case 9** — world_history `FUN_1407099a0`, then `FUN_14030b9e0`
  (336×6 i32-vectors), gated sv>0x5cc `FUN_140309da0` (string+2×i32 vector),
  gated sv>0x619 `FUN_14030bd50` (elements `FUN_14030bc20`).
- **case 0xa** — `FUN_140305a20` + `i32` + string (`FUN_1405bb6d0`).
- **case 0xb / 0xc** — artifact-like bodies `FUN_140323f70` (`FUN_14031fd40`
  per element) / written-content-like `FUN_140323e70` (`FUN_1409085c0`),
  iterating the registry vectors from case 2 (no counts re-read).
- **cases 0xd..0x1f** — per-registry-vector body loops (no counts): 0xd squads
  `FUN_140c15720`, 0xe `FUN_1403047a0`-loop, ..., version gates mirror the
  registry gates (0x1b: >0x5cb ×3 + >0x5cc ×2; 0x1c >0x5d4; 0x1d >0x622;
  0x1e/0x1f >0x67d).
- **case 0x20** — `u8` + 3×`i32` tail + (sv<0x610 in-memory fixup, no reads) +
  `FUN_1405bbd50` (stream-state check, no payload bytes).
- **cases 0x21-0x23** — post-load fixups, no stream reads.

### Item body base chain (validated from decompiles)

- `FUN_140315cd0` (item base): `i16 x`, `i16 y`, `i16 z`, `i32 flags1`
  (masked `&0xcfffffff` on load), `i32 flags2`, `i32 age`, `i32 id`, then
  `FUN_140314d40` (+0x20 compound), `FUN_140315500` (+0x38, sv-gated), `i32
  +0x50`, `i32 +0x54`.
- `FUN_140315dd0` (+contaminants): base, `i32 stack_size(+0x78)`,
  `u8 has` → `i32 n` × contaminant (`FUN_140223440`: `i16 mat_type`,
  `i32 mat_index`, 3×`i16`, `i32`, sv>0x5b5 `i16 flags`; plus 2×`i16` per
  entry read by caller), `u8 has` → `u8 has` → nested `FUN_140830840`,
  `u8 has` → `i32 n` × (3×`i16`+`i32`), 3×`i16` (+0x98..), `i32 +0xa0`,
  `i32 +0xa4`.
- `FUN_1408248c0` (constructed): + `i16 mat_type(+0xb0)`, `i32 mat_index`,
  `i16 +0xb8`, `i16 +0xba`, `i32 +0xbc`, `i32 +0xc0`, `i32 +0xc4`.
- `FUN_140820540` (generic read_file, 37 item types): + `i32 count` ×
  improvement (`i32 type` via factory `FUN_1407f0050` — 14
  `itemimprovement_*st` subtypes — then improvement vtable+0x20 read).

### Python transcription status (df_save_re/deserializers/forward_walk.py)

`read_world_header` + `read_string_tables` + `read_registry` transcribed and
byte-exact on region2: header `0x0..0xe3`, string tables `..0x2152a2`,
registry `..0x22a10e` (items 2101, buildings 0, engine 380, written-content
3206, artifact 2101, squads 1, ...). Driver: `scripts/walk_full_save.py`.
Remaining: cases 3-8 bodies, 0xa-0x1f bodies, 0x20 tail; case 9 plugs in the
existing world_history walker.

## Rejected / Low-Confidence

- `FUN_140baff50`: not historical figures; decompilation showed site-pop correction strings, likely `world_site` related.
- `FUN_1400f2290`, `FUN_1400c49e0`, `FUN_1400c45c0`, `FUN_14048f1f0`, `FUN_1401b9b00`: compact history-event-like structs, not the full historical figure writer.
