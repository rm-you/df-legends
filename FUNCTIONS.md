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
- `FUN_140763aa0`: `history_event_collection` factory (18 tags 0–17). Vtables in `collection_vtables.json`; on-disk bodies share base prefix via `FUN_140083d80` (see `collection_layouts.json`). Tags 0/1/4/5 delegate to helper allocators without inline vtable lines in the factory decompile — layouts pending vtable enum for war/battle/abduction/theft.
- `FUN_140083d80`: shared `history_event_collection` base reader (two i32 vectors, four i32 scalars, byte flags vector, trailing i32). Called from most collection subclass `read_file` implementations.
- `FUN_14075cd70`: `history_era` reader — `i32 id`, `i16 type`, four `i32` scalars, `stl_string` @ +0x18 (`FUN_1405bb6d0`), nested details @ +0x40 via `FUN_14075ccb0`. Layout in `era_layout.json`.
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
  - 4× `int32` (in-memory +0xe4, +0xd8, +0xdc, +0xe0; includes nemesis_id/unit_id, exact names TBD)
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
| `collection_layouts.json` | 14/18 collection tags (war/battle/abduction/theft pending) |
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

## Rejected / Low-Confidence

- `FUN_140baff50`: not historical figures; decompilation showed site-pop correction strings, likely `world_site` related.
- `FUN_1400f2290`, `FUN_1400c49e0`, `FUN_1400c45c0`, `FUN_14048f1f0`, `FUN_1401b9b00`: compact history-event-like structs, not the full historical figure writer.
