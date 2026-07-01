# AGENTS.md — read this first

Everything a new agent (human or AI) needs to resume work on this project
cold. Last updated 2026-07-01.

---

## 1. The goal (do not lose sight of this)

Full-fidelity extraction of **all** `world.dat` world-history data from
**Dwarf Fortress 0.47.05** — every historical figure, history event, event
collection, era, artifact, entity, and written content — with counts that
match the save header and zero skipped bytes. Unknown fields must be
preserved as opaque blobs, not discarded.

**There are no shortcuts.** df-structures XML is the in-memory layout, which
does NOT match the on-disk save stream (pointers become ids, some fields are
omitted, some unions are discriminated on disk). The only way to get the real
on-disk byte order is to **reverse-engineer the DF binary** (Ghidra/radare2)
and decompile every `read_file`/`write_file` in the save/load pipeline. Do
not guess from XML; do not iterate blindly on byte offsets. Decompile and map
everything, then encode the real layout as parser overrides.

The extraction tooling lives in `tools/df-save-re/` (install, usage, module
map, and status in its `README.md`). This file (`AGENTS.md`) is the
higher-level memory: paths, where we store work history, and the RE findings
that supersede earlier guesses.

---

## 2. Critical paths

| Thing | Path |
|-------|------|
| Repo root | `C:\Users\rm_yo\CursorProjects\df-legends` |
| Extraction tool | `tools\df-save-re\` (install: `pip install -e .`, CLI `python -m df_save_re.cli`) |
| df-structures (vendored) | `data\df-structures\` (DFHack `0.47.05-r8`, commit `afe7e90`) |
| **DF 0.47.05 binary** | `C:\Users\rm_yo\Downloads\df_47_05_win` (`Dwarf Fortress.exe`) |
| **Ghidra** | `C:\Users\rm_yo\Downloads\ghidra_12.1.2_PUBLIC` (headless via `support\analyzeHeadless.bat`) |
| **radare2** | `C:\Users\rm_yo\Downloads\radare2-6.1.8-w64\radare2-6.1.8-w64\bin` |
| Ghidra project (gitignored, ~630MB) | `tools\df-save-re\ghidra\DFProject` |
| Ghidra scripts (committed) | `tools\df-save-re\ghidra_scripts\` |
| **RE function map — decompiled C** (committed) | `tools\df-save-re\ghidra_decompiles\` |
| Function index (machine-readable) | `tools\df-save-re\ghidra_decompiles\index.json` |
| Reverse-engineered function notes | `FUNCTIONS.md` |
| Chronological attempt log | `ATTEMPTS.md` |
| Tool docs (install, usage, modules, status) | `tools\df-save-re\README.md` |

The save fixtures are gitignored; fetch with
`python scripts/fetch_fixtures.py` from `tools\df-save-re\`. The Namushul
`small-retired` fixture is the primary RE target (`world.dat`, save_version
1716). Authoritative counts come from the world header `max_ids` array.

---

## 3. Where/how we store work history

- **`ATTEMPTS.md`** — append-only chronological log of every RE approach
  tried, what it found, and what failed. Read it before trying something so
  you don't repeat a dead end. Append a dated entry for each substantive
  session.
- **`FUNCTIONS.md`** — curated human-readable map of reverse-engineered DF
  functions (address → role → on-disk field order). Keep it accurate; it is
  the quick-reference.
- **`tools\df-save-re\ghidra_decompiles\`** — the canonical, machine-usable
  function map. One `.c` file per decompiled function (`<addr>.c`, with a
  header comment naming the function and listing direct callees), plus
  `index.json` (`[{addr,name,entry,callees,decompile_file}]`). This is what
  we committed to git so other agents can read the decompiles without
  re-running Ghidra. **Regenerate** with `ghidra_scripts\DecompileWithCallees.java`.
  NOTE: there are currently 51 committed `.c` files but `index.json` only
  lists 12 (it was not regenerated after later batches). Treat the `.c` files
  as the source of truth; regenerating `index.json` over all of them is
  Phase 0 of the mapping plan.
- **`tools\df-save-re\ghidra_scripts\`** — the Ghidra postScripts that produce
  the above (`DecompileWithCallees.java`, `FindCallers.java`,
  `EnumerateEventVtables.java`). Keep these; they are the repeatable RE
  pipeline.
- **`tools\df-save-re\scripts\diag_*.py`** — throwaway exploratory diagnostics.
  These accumulate fast (100+). Treat them as scratch; do not rely on them as
  source of truth. Periodically archived out of the working tree (see cleanup
  history in git log).

When you discover a new function layout, update **both** `FUNCTIONS.md` (note)
and regenerate the relevant `.c` in `ghidra_decompiles\` (artifact), then
commit both together.

---

## 4. Critical RE findings (these supersede earlier guesses)

All confirmed from Ghidra decompilation of `Dwarf Fortress.exe`. Addresses are
load-image addresses (e.g. `FUN_14070a9d0`).

### Save/load pipeline (the call chain)

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
- `FUN_1403159b0` / `FUN_140315ac0` — `language_name` writer/reader. One-byte
  `has_name` flag first; if set, first string, nickname string, 7×int32 words,
  7×int16 parts-of-speech, int32 language, int16 name type.

### The figures vector is DENSE, not posnull

`FUN_140709410` (writer) and `FUN_1407099a0` (reader) confirm the figures
vector is **`int32 count` then `count` bodies back-to-back** — NO presence-flag
array. The earlier posnull-figures-vector claim (with an `~0x50` gap) is
WRONG. `locate_figures_vector()`'s posnull heuristic is also
wrong and must be replaced with a definitive walk from `world_history` start.

### Historical figure header has NO sex pad byte

`FUN_14070a090` (writer) and `FUN_14070a9d0` (reader) write/read `uint8 sex`
then immediately `int32 orientation_flags` — **no 1-byte struct pad** in the
save stream. The Python parser's `reader.read_uint8()` after `sex` (see
`historical_figures.py`) is a **bug** that misaligns everything after it by 1.
Fix it.

### There is NO `figure_id` or `art_count` field in the save stream

The figure's id is its **vector index**, not a stored field. Earlier parser
versions that read `figure_id`/`art_count` were fabricating fields and
misreading the real tail fields. Definitive on-disk order (from the reader,
save_version > 0x6a0 so all version-gated fields present):

1. `int16 profession`
2. `int16 race`
3. `int16 caste`
4. `uint8 sex`
5. `int32 orientation_flags`
6. 11× `int32` year/identity scalars (in-memory +0x0c..+0x34)
7. `language_name` (`has_name` byte + body)
8. `int32 civ_id`, `int32 population_id`, `int32 breed_id`, `int32 cultural_identity`
9. `int32 family_head_id` — **version-gated: only if save_version > 0x618**
10. 4× `int32` (in-memory +0xe4, +0xd8, +0xdc, +0xe0) — includes nemesis_id/unit_id and one more; exact names still TBD
11. flags vector via `FUN_140002380` (byte vector) — in-memory +0xc8
12. `int32 count` + `count` entity_links  (factory `FUN_140707820`, dense polymorphic: `int16 type_tag` + body)
13. `int32 count` + `count` site_links    (factory `FUN_140707c90`)
14. `int32 count` + `count` histfig_links (factory `FUN_140708160`)
15. `uint8 has_info` — if set, `info` body via `FUN_14070b110` (owned, inline)
16. `uint8 has_vague` — **version-gated: only if save_version > 0x6a0**; if set, `vague_relationships` via `FUN_1406fb120`

The three link vectors are dense polymorphic: `int16 type_tag` then the
subtype's `read_file` (vtable +0x18). Active tags are mapped in `FUNCTIONS.md`
(entity -1..16, hf -1..15, site -1..9).

### Events: complete type map exists

`FUN_14070b7a0` is the events factory — a switch over a 4-byte tag
(`0x00`..`0x85`, i.e. 134 event types) that `operator_new`s each
`history_event_*` subclass and assigns its vtable. To walk events
definitively we still need each subclass's `read_file` (vtable +0x120) and
`write_file` (vtable +0x118) — extract those vtable slots via
`EnumerateEventVtables.java`, then batch-decompile with
`DecompileWithCallees.java`.

### Save-version gating

`save_version` 1716 (0x6b4) for the Namushul fixture, so ALL version-gated
fields (family_head_id > 0x618, vague_relationships > 0x6a0) are present.
Don't skip them. DFHack `devel/save-version.lua` maps DF versions to save
versions.

---

## 5. Where we are right now

- Infrastructure (engine, harness, DB, explorer) is done — see
  `tools/df-save-re/README.md` (module map + status).
- **Counts and top-level identity extract correctly** on all fixtures.
- **Per-record bodies do not yet land.** Root cause is now precisely known
  (above): the parser assumed a sex pad + fabricated `figure_id`/`art_count` +
  a posnull figures vector. All three are wrong per the decompiles.
- The immediate, concrete next step: fix `historical_figures.py` to the
  definitive no-pad layout above, then walk the figures vector as DENSE from
  the real `world_history` start (locate it by the events count from `max_ids`
  followed by a valid event tag — see `scripts/diag_find_worldhistory_start.py`).
- Two plausible fig0 candidates were found at stream offsets `0x36af86` and
  `0x5eb921` under the no-pad layout; confirm by walking the full vector to
  12,747 bodies landing on the next anchor.

---

## 6. How to make progress (the loop)

1. Read `ATTEMPTS.md` (don't repeat dead ends) and `FUNCTIONS.md`.
2. For any struct whose on-disk layout is uncertain, decompile its
   `write_file`/`read_file` with `DecompileWithCallees.java` and read the
   `.c` in `ghidra_decompiles\`. Encode the real order as a parser override.
3. Validate with the self-validating harness
   (`engine_walk.walk_pointer_vector`): a layer is correct when
   `r.ok and r.landed_on_anchor` is True and `parsed_count` == `max_ids`.
4. Update `FUNCTIONS.md` + regenerate the `.c` artifact, append to
   `ATTEMPTS.md`, commit.
5. Persist the landed records in `db/store.py` and surface in the explorer.

Definition of done for the whole project: every world-history layer walks to
its authoritative count with exact-landing, all bodies parsed, unknown bytes
preserved as blobs, and the dataset browsable in the explorer UI.

---

## 7. Gotchas

- `df.world.xml` `world` struct is in-memory layout (runtime vectors first) —
  do NOT derive top-level save order from it. Use the empirical order in
  `tools/df-save-re/docs/binary-re-findings-0.47.05.md` and the decompiles.
- Empirically validated serialization quirks: `coord2d` = 2×int32 (not
  int16), `coord` = 3×int32, `df-flagarray` = count×int32, posnull pointer
  vectors (count + presence bytes + bodies) DO exist for some layers — but
  NOT for the figures vector (it is dense).
- Ghidra headless: always pass `-noanalysis` on an existing project and
  remove stale `*.lock`/`*.lock~` files first, or it re-runs full analysis.
- PowerShell: splat arrays (`@ADDRS`) when passing many args to a Ghidra
  postScript; a single quoted `$ADDRS` becomes one arg and breaks parsing.
- The 630MB Ghidra project is gitignored on purpose. Only the `.c`
  decompiles + `index.json` + scripts are committed.
