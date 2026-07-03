# Extraction Attempts

This log tracks approaches tried while reverse-engineering DF 0.47.05 `world.dat` historical figure extraction. Keep entries short, factual, and explicit about what did not work so we do not repeat failed paths.

## Historical Figure Post-Tail Blob

### Failed / Low-Yield Approaches

- Treating the bytes after `defensive_skill_ip_sum` as `art_count * art_image` failed immediately: the first word in known gaps is not an `art_image.elements` vector count (`fig1` starts `-1`, `fig2` starts `0x00fe0000`).
- Treating the blob as `art_image_ref`, `int32 + art_image`, bool-posnull `art_image`, int32-posnull polymorphic vectors, or direct `art_image_element` / `art_image_property` sequences did not land on the next figure header.
- Searching the first 256 bytes of the `fig1` post-tail blob for polymorphic element/property patterns found no match.
- Looking for a simple size prefix or terminator did not find a stable marker: gap sizes do not appear as the first or last int32 of the tested blobs.
- `art_count` does not size the blob. `fig3` has `art_count=0` with a 12KB post-tail blob; `fig1` and `fig2` both have `art_count=1` but very different blob lengths.
- Header scan alone is unsafe. Valid-looking historical figure headers occur inside opaque blobs (for example, candidates like `id=10` / `id=14` appear before the likely real next `id=6`).

### Working Assumptions

- The structural historical figure tail through `defensive_skill_ip_sum` is readable.
- `pool_id` is protected/runtime-only and omitted on the save path.
- The post-tail region must be preserved as opaque data until its writer is identified in the binary.
- The immediate blocker is robustly finding the next figure boundary, not decoding the opaque blob.

### Current Attempt: Opaque Blob + Wider Boundary Scan

- Store bytes from structural `tail_end` to the discovered next figure offset as `post_tail_blob` (`size`, `magic_hex`, `magic_ascii`, `body_b64`).
- Stop attempting `art_image` parsing during normal figure walking.
- Widened the historical figure next-header scan window from 500KB to 2MB because the likely real next body can be farther away than earlier false-positive headers inside the blob.
- Need to validate whether this improves Namushul / cross-fixture walks without accepting false positives.

#### 2026-07-01 Attempt Results

- Created `ATTEMPTS.md` because no existing attempts log was present in the workspace.
- Confirmed `radare2` is not installed (`r2` not found), so RE work used headless Ghidra.
- Added Java Ghidra helpers:
  - `TraceReaderRefs.java`: direct refs to known primitive/flag/art readers.
  - `RankFlagarrayReaders.java`: rank flagarray callers by primitive read count.
  - `DecompileTargets.java`: Java replacement for the Python decompile script because headless PyGhidra is unavailable.
  - `RankLanguageFlagReaders.java`, `RankLanguageReaders.java`, `FindHistfigLikeReaders.java`, `FindHistfigPrefixReaders.java`: successive searches for figure-like reader candidates.
- Ghidra result: `FUN_140baff50` is not historical figures; decompilation shows site-pop correction strings, so it is likely `world_site`.
- Ghidra result: `1400f2290`, `1400c49e0`, `1400c45c0`, `14048f1f0`, `1401b9b00` look like compact history-event-ish structs, not the historical figure body.
- Ghidra result: nearby `140ba....` cluster contains useful history/profile-like routines (`140bad6e0`, `140bae8f0`, etc.) but not yet the full historical figure serializer/walker.
- Code change: widened all historical figure scan defaults from 500KB to 2MB (`historical_figures.py`, `record_reader.py`, `body_skipper.py`).
- Code change: tightened `header_looks_valid()` to reject first/nickname strings longer than 64 bytes. This removes a false `id=6` candidate at `0x21e0c32` whose parsed first-name length was 19,711 bytes.
- Diagnostic result: `diag_walk_until_fail.py` improved from the earlier `id=10` branch to 9 bodies:
  - `0,1,2,3,4,5,7,72,73`, then false `id=255` fails at `0x2258919`.
- Diagnostic result: after `fig5`, valid-looking candidates remain inside the opaque blob:
  - `id=7 @ 0x220ae3e`
  - `id=8 @ 0x21edff0`, `0x21f260e`
  - `id=10 @ 0x2192dda`
  - All tested candidate chains eventually collapse to `id=72 -> id=73 -> id=255` and fail, so header scanning is still not reliable enough.
- Test result: `python -m pytest tests/test_historical_figures.py -q` passes (`4 passed`).
- Lint result: no linter errors in edited deserializer files.

#### Next Best Target

- Continue Ghidra from the callers of `140bad6e0` / the `140ba....` history cluster, not from RTTI. Need the function that owns the top-level historical figure vector/body loop and calls into profile/link readers.
- Once found, use its call sequence to replace header-scan boundary detection with the actual serializer layout or an authoritative size/count mechanism.
- Until then, keep treating post-tail bytes as opaque data; do not resume blind `art_image` fitting.

#### 2026-07-01 Follow-up: Ghidra Writer Layout + Opaque Fallback

- Read this log before continuing, per prompt.
- Used headless Ghidra again rather than `radare2`/PyGhidra for the main RE step because the existing Java decompile scripts were already working. `radare2` is available at the user-provided path for future cross-checks.
- Decompiled `FUN_140709410` and `FUN_14070a090`. `FUN_14070a090` is still the best historical figure writer candidate.
- Important Ghidra correction: `param_1` is typed as `undefined2 *`, so `param_1 + 4` is byte offset `+8`. The save header writes:
  - `int16 profession`, `int16 race`, `int16 caste`
  - `uint8 sex`
  - one pad byte
  - int32 fields starting at byte `+8`
- Updated the historical figure header parser accordingly:
  - `sex` is one byte plus one pad byte.
  - flags are saved as a byte-vector helper, not int32 flagarray elements.
  - post-name save order is `art_count`, `unit_id`, `nemesis_id`, flags, `figure_id`.
- The first body anchor is back to `0x2134dd0` (`flags_end + 0x50`), not `+0x51`.
- Tightened `events_death` detection. The old `0x226009c` anchor is a false-positive for body stopping: it starts with count-like `151` data but the following bytes are not a clean posnull byte vector. `locate_figures_vector()` now leaves `death_events_offset=None`.
- Fixed a major boundary-scan bug: next-header scanning stepped by 2 bytes and missed valid odd-address body starts. It now scans byte-by-byte with the cheap quick header prefilter.
- Added `read_historical_figure_record()` fallback: if structured tail parsing fails, scan to the next plausible figure header and preserve the whole unknown region as `body_blob` with a `body_parse_error`, instead of aborting.
- Diagnostics after these changes:
  - `diag_walk_until_fail.py` with the old structural skipper reaches ids `0..5`, then fails because the skipper still overreads unknown variable body data.
  - The opaque record reader now walks ids `0..9` in order in the inline diagnostic before later unresolved body-boundary issues, preserving large opaque blobs instead of losing bytes.
  - A longer inline diagnostic hit a Windows access violation once, apparently from very heavy scanning; adding the quick prefilter fixed the test path.
- Test result: `python -m pytest tests/test_historical_figures.py -q` passes (`4 passed in 130.44s`).
- Lint result: no linter errors in edited files.

#### Next Best Target

- Continue from `FUN_14070a090` after the fixed header: the remaining unknown body sections are the three vectors at in-memory offsets around `0x74..0x90`, followed by optional pointer/tagged structures at `0x98` and `0x9c`.
- Replace broad next-header scans with writer-derived vector skipping for those post-header sections. Until then, keep the opaque fallback enabled so extraction preserves bytes and can advance.

#### 2026-07-01 Follow-up: Dense Link Vectors + Function Map

- Read this log before continuing, per prompt.
- Created `FUNCTIONS.md` and started a persistent reverse-engineered function map.
- Used headless Ghidra at the provided path. Did not need `radare2` this pass, but its path is now known for future cross-checks.
- Re-read `FUN_14070a090` against the XML and corrected the tail interpretation:
  - It returns after `info` and `vague_relationships`.
  - It does not write the later `worldgen_*`, temp, material skill, or defensive skill fields from the memory/XML layout.
  - `HISTFIG_TAIL_FIELDS` was narrowed to `entity_links`, `site_links`, `histfig_links`, `info`, `vague_relationships`.
- Confirmed the three histfig link containers are dense polymorphic vectors:
  - `int32 count`
  - repeated `int16 type_tag + subtype body`
  - no int32 or bool presence flag array.
- Added `SAVE_POLY_VECTOR_DENSE` for `historical_figure.entity_links`, `site_links`, and `histfig_links`.
- Preserved the known 3-byte empty-tail shim for empty `site_links`; dense-vector mode initially skipped it, causing the reader to start `histfig_links` three bytes early.
- Decompiled `FUN_14070a5d0` and `FUN_1406fb080`:
  - `FUN_14070a5d0` is the `historical_figure_info` writer candidate. It uses one-byte optional profile flags and calls specific profile writers.
  - `FUN_1406fb080` matches `relationship_quick_infost`: writes count, then `int32 hfid` / `int16 relationship` pairs.
- Changed `read_historical_figure_record()` to parse histfig tail fields one-by-one. On a field failure it now preserves already-parsed fields and stores the opaque blob from the failing field offset to the next boundary, instead of discarding all tail progress back to `header_end`.
- Diagnostic result:
  - Fig0 now parses `entity_links`, `site_links`, and `histfig_links` before failing inside `info`.
  - Inline walk preserved parsed fields for many records and continued with smaller opaque blobs starting at the failing field.
  - `diag_walk_until_fail.py` still eventually accepts a false header around id `397` when using broad header scanning, so structural boundary replacement is still needed.
- Test result: `python -m pytest tests/test_historical_figures.py -q` passes (`4 passed in 127.21s`).
- Lint result: no linter errors in edited files.

#### Next Best Target

- Continue `FUN_14070a5d0` subprofile mapping. The highest-value next step is to replace generic `historical_figure_info` parsing with writer-derived per-profile readers/skippers so `info` no longer forces opaque fallback.
- Cross-check suspicious one-byte/int32 pointer flag behavior around `info` with radare2 disassembly if Ghidra decompiler output remains ambiguous.

#### 2026-07-01 Follow-up: Info Subprofile Partial Parse

- Read this log before continuing, per prompt.
- Maintained `FUNCTIONS.md` with newly confirmed mappings.
- Used headless Ghidra again. Also read vtable function pointers directly from `Dwarf Fortress.exe` via a small PE section mapper to identify `histfig_hf_link` / `histfig_site_link` write/read methods.
- Confirmed primitive helper formats:
  - `FUN_1400020a0`: int16 vector writer (`int32 count`, then `count` int16s).
  - `FUN_1400021b0`: int32 vector writer (`int32 count`, then `count` int32s).
  - `FUN_1400022f0`: byte vector writer (`int32 count`, then `count` bytes), no implicit padding.
- Confirmed link writer methods:
  - `FUN_1406fb7f0`: base `histfig_hf_link.write_file`, writes `int32 target_hf` + `int16 link_strength`.
  - `FUN_1406fb850`: corresponding read method.
  - `FUN_1406fbb40`: base `histfig_site_link.write_file`, writes three int32 fields.
  - `FUN_1406fbbb0`: corresponding read method.
- Re-checked fig0 alignment:
  - Header currently ends at `0x2134e66`.
  - Entity count starts at `0x2134e66`.
  - Empty `site_links` count starts at `0x2134e6a`.
  - The known 3-byte empty-site shim makes `histfig_links` count start at `0x2134e71`.
  - `histfig_links` currently consumes 8 elements and ends at `0x2134eb5`.
- Investigated the apparent `histfig_links` tag `69`. It is outside the XML enum, so df-structures enum names are not reliable for this vector. The vtable writer still confirms base body width is `tag + int32 + int16`; subtype/tag mapping remains unresolved.
- Added a conservative partial `historical_figure_info` reader:
  - Treats the bytes at `info` as entering `FUN_14070a5d0` directly.
  - Parses the first present subprofile flag plus its leading int16/int32 vectors.
  - Marks the result `__partial__`, causing `read_historical_figure_record()` to preserve the remainder as opaque from the exact partial end.
- Diagnostic result:
  - Fig0 now parses `entity_links`, `site_links`, `histfig_links`, and partial `info.metaphysical`.
  - Fig0 opaque body starts 32 bytes later than before (`info` partial consumed through `0x2134ed5`).
  - Short walk still advances through multiple records while preserving opaque remainders.
- Test result: `python -m pytest tests/test_historical_figures.py -q` passes (`4 passed in 128.13s`).
- Lint result: no linter errors in edited files.

#### Next Best Target

- Continue `FUN_14070a5d0` subprofile parsing after the first partial subprofile. The next visible byte at fig0 after the first parsed chunk appears to be another optional profile flag, likely one of the profile writers decompiled this pass.
- Resolve actual game-side histfig link tag values (e.g. tag `69`) instead of relying on df-structures enum names.

#### 2026-07-01 Follow-up: Link Vtable Tags + Strict Polymorph Guard

- Read this log before continuing, per prompt.
- Maintained `FUNCTIONS.md` with newly confirmed link vtable/tag mappings and non-base writer methods.
- Used both tools this pass:
  - Ghidra headless to re-decompile `FUN_14070a5d0` and the non-base link writer/read methods.
  - `radare2` to disassemble the `FUN_14070a090` vector loops and confirm the writer sequence is `count`, repeated `vtable[0]` type tag write (`2` bytes), then `vtable[2]` body writer call.
- Added `scripts/diag_hf_link_vtables.py`, a reusable PE/vtable diagnostic that reads active `0x140...` vtable addresses from `symbols.xml`, maps them through `Dwarf Fortress.exe`, and prints `name tag vtable type_fn delete_fn write_fn read_fn`.
- Confirmed active `histfig_hf_link` tags are `-1` and `0..15`; tag `69` is not a valid HF-link tag in this binary.
- Confirmed active `histfig_site_link` tags are `-1` and `0..9`.
- Confirmed non-base link bodies:
  - `FUN_1406fb8c0`: `histfig_hf_link_companionst.write_file`, base `target_hf`/`link_strength` plus two int32 agreement fields.
  - `FUN_1406fbc30`: `histfig_site_link_occupationst.write_file`, base site-link body plus `int32 occupation_id`.
- Code change: added strict tag validation for `histfig_entity_link`, `histfig_hf_link`, and `histfig_site_link` polymorphs. Unknown tags now raise `SkipError`, causing `read_historical_figure_record()` to preserve the remainder as opaque instead of falling back to the base class and consuming misaligned bytes.
- Diagnostic result:
  - Fig0 now stops at `unknown 'histfig_hf_link' polymorphic tag 69 at 0x2134e75`.
  - The record still advances to the expected next figure (`0x2141f4e`) while preserving `53469` bytes of opaque body data from the failing `histfig_links` region.
  - This intentionally removes the earlier partial `info.metaphysical` parse for fig0, because the vtable tag map shows that parse was downstream of a bad `histfig_links` alignment rather than confirmed `info` data.
- Test result: `python -m pytest tests/test_historical_figures.py -q` passes (`4 passed in 125.37s`).
- Lint result: no linter errors in edited files.

#### Next Best Target

- Revisit the bytes before `0x2134e75` with the confirmed valid tag ranges. The immediate problem is no longer "what does tag 69 mean"; it is why `histfig_links` is starting on bytes that cannot contain a legal HF-link tag.
- Highest-value next step: use Ghidra/radare2 around `FUN_14070a090` earlier than the three link vectors to re-check the exact header end and the fields between `figure_id` and the first vector count. A missed scalar or padding byte before `entity_links`/`site_links` would explain the impossible tag and the fake `info` parse.

#### 2026-07-01 Follow-up: Third Vector Offset Recheck

- Read this log before continuing, per prompt.
- Maintained `FUNCTIONS.md` with the newly confirmed primitive writer behavior, entity-link tags, and revised third-vector notes.
- Used `radare2` and Ghidra on `FUN_14070a090` from function start through the vector loops:
  - Confirmed the writer calls `FUN_1400022f0` for flags, writes `figure_id`, then writes the three vector counts/loops back-to-back.
  - Reconfirmed each vector loop writes `int32 count`, then repeated `int16 tag` and `vtable[0x10]` body.
- Decompiled `FUN_1405bb7c0`; it writes exactly the requested byte count and does not add implicit padding.
- Re-decompiled `FUN_1400022f0`; byte vectors also have no implicit padding after the byte payload.
- Extended `scripts/diag_hf_link_vtables.py`:
  - Includes `histfig_entity_link` vtables.
  - Supports `--prefix`, `--tag`, and `--all`.
  - Confirmed active entity-link tags are `-1` and `0..16`.
- Added `scripts/diag_histfig_body_start_vectors.py` to compare current body-start candidates and Ghidra-derived no-pad candidates around fig0.
- Important correction:
  - The old 3-byte empty `site_links` shim is not supported by `FUN_14070a090`.
  - Removed `SAVE_EMPTY_POLY_TAIL[("historical_figure", "site_links")]` and disabled the `histfig_links` auto-align hook.
  - Fig0 now preserves the previously hidden three bytes in `body_blob`.
- Diagnostic result:
  - Fig0 still parses `entity_links=[]` and `site_links=[]`.
  - It now stops at `implausible pointer vector count 134217728 at 0x2134e6e`.
  - Opaque blob now begins with `0000000800000045000000ffffffffff`, size `53472`, and the reader still advances to expected fig1 at `0x2141f4e`.
- Tag `69` cross-check:
  - `scripts/diag_hf_link_vtables.py --all --tag 69` finds `history_event_change_hf_body_statest` and `item_powder_miscst`.
  - Neither is currently a confirmed match for the third vector; the item vtable slots do not line up with a normal histfig link writer, and the history-event vtable `+0x10` slot is a no-op.
- Test result: `python -m pytest tests/test_historical_figures.py -q` passes (`4 passed in 126.59s`).
- Lint result: no linter errors in edited files.

#### Next Best Target

- Stop treating the third post-header vector as confirmed `histfig_links` for this fixture. The binary loop is real, but the observed bytes are not a legal histfig link stream.
- Next highest-value RE step: identify the runtime type of the `param_1 + 0x8c` vector in `FUN_14070a090` by tracing constructors/xrefs or vtable stores for the owning `history_figurest` layout. If it is not `histfig_hf_link`, update `HISTFIG_TAIL_FIELDS`/field readers to preserve the true vector under the correct name.

#### 2026-07-01 Follow-up: Language Name Save Layout

- Read this log before continuing, per prompt.
- Maintained `FUNCTIONS.md` with `language_name` helpers and the `historical_figure` reader counterpart.
- Decompiled `FUN_14070a9d0`, the load-side counterpart for `FUN_14070a090`.
  - It is called from the world-history reader after allocating a `0x178` historical figure object.
  - It confirms the primitive header order, the version-gated `family_head_id` read (`save_version > 0x618`), the three dense vector reads, and byte-flagged optional `info` / `vague_relationships`.
  - It identifies vector factories for the three post-header vectors: `FUN_140707820`, `FUN_140707c90`, and `FUN_140708160`.
- Decompiled `FUN_1403159b0` / `FUN_140315ac0`.
  - Important correction: `language_name` is saved as one-byte `has_name` first.
  - If `has_name == 0`, no strings, words, parts of speech, language, or name type are written.
  - If present, the helper writes/reads first string, nickname string, seven int32 words, seven int16 parts of speech, int32 language, and int16 name type.
- Code change:
  - Updated `read_language_name()` / `try_read_language_name()` to match the save helper.
  - This invalidated the previous false fig0 body at `0x2134dd0`.
  - `locate_figures_vector()` now naturally selects `bodies_start=0x2134dd8` (`prefix_bytes=0x58`).
- Added `scripts/diag_find_histfig_start_load_layout.py`, a stricter load-layout body-start scanner that tries the binary-derived `language_name` format and both sex-pad variants.
- Diagnostic result:
  - Corrected fig0 header at `0x2134dd8`: `id=0`, `civ_id=437`, `population_id=438`, `breed_id=439`, `cultural_identity=440`, `family_head_id=441`, `art_count=15`, `has_name=False`.
  - Walking from `0x2134dd8` now reaches sequential ids `0..7` before desyncing to `39`; this is better than the previous path that skipped `6`.
  - `read_historical_figure_record()` from `0x2134dd8` parses the structured tail without error, preserves a `2431` byte `post_tail_blob`, and advances to an early candidate `id=1` at `0x21357c6`. This boundary still needs validation against the full chain/export expectations.
- Test result: `python -m pytest tests/test_historical_figures.py tests/test_stream_extraction.py -q` passes (`8 passed in 96.77s`).
- Lint result: no linter errors in edited files.

#### Next Best Target

- Continue with the vector factories from `FUN_14070a9d0`:
  - `FUN_140707820`: first vector factory, likely `histfig_entity_link`.
  - `FUN_140707c90`: second vector factory, likely `histfig_site_link`.
  - `FUN_140708160`: third vector factory, should prove or disprove `histfig_hf_link`.
- Validate whether `0x21357c6` is a real `id=1` boundary or still a false header inside fig0's preserved post-tail blob.

## 2026-07-01 — Comprehensive Ghidra pipeline mapping; definitive histfig layout

Prompt: stop guessing; decompile and map the ENTIRE save/load pipeline. Also
record critical findings in `AGENTS.md`, switch function-map storage from
Markdown to machine-readable (per-function `.c` + `index.json`), and commit
the RE artifacts to git so other agents can continue.

- Built a repeatable Ghidra RE pipeline (`tools/df-save-re/ghidra_scripts/`):
  - `DecompileWithCallees.java`: decompiles given addresses, writes one
    `<addr>.c` per function (header = name + direct callees), and emits
    `index.json` (`addr/name/entry/callees/decompile_file`). This replaces
    FUNCTIONS.md as the canonical machine-usable map.
  - `FindCallers.java`: xref callers of an address (call refs only).
  - `EnumerateEventVtables.java`: walks the events factory's data refs and
    dumps each vtable's slots [0x0],[0x100],[0x118],[0x120] (dtor / ? / write / read).
  - Output committed at `tools/df-save-re/ghidra_decompiles/` (49 functions
    decompiled). The 630MB Ghidra project stays gitignored.
- Ghidra headless gotchas hit & fixed: pass `-noanalysis` on an existing
  project; delete stale `*.lock`/`*.lock~` first; in PowerShell splat arrays
  (`@ADDRS`) so postScript args aren't collapsed into one quoted string.
- Mapped the top of the pipeline: `FUN_1405f3a60` (world writer) ->
  `FUN_140709410` (world_history writer) -> `FUN_14070a090` (histfig writer)
  -> `FUN_14070a5d0` (info writer) + `FUN_1406fb080` (vague writer). Reader
  side: `FUN_140330310` -> `FUN_1407099a0` -> `FUN_14070a9d0` ->
  `FUN_14070b110` (info) + `FUN_1406fb120` (vague).
- **Breakthrough: definitive histfig on-disk layout** (from `FUN_14070a090`
  writer + `FUN_14070a9d0` reader, fully consistent):
  - `uint8 sex` is followed DIRECTLY by `int32 orientation_flags` — **NO
    1-byte pad**. The parser's `read_uint8()` after `sex` in
    `historical_figures.py` is a confirmed bug (misaligns the whole record).
  - There is **NO `figure_id` and NO `art_count` field** in the stream. The
    figure id is its vector index. Earlier "ids 0..9 sequential" and the
    `art_count=15`/`figure_id=0` reads were coincidental misreads of the real
    tail fields (the 4 int32 at +0xe4/+0xd8/+0xdc/+0xe0 and the flags vector).
  - Full order: prof/race/caste (int16 each), sex (u8), orientation_flags
    (i32), 11× int32 scalars, language_name, civ/pop/breed/cultural (i32),
    family_head_id (i32, **gated >0x618**), 4× int32, flags byte-vector, 3
    dense link vectors, has_info byte -> info, has_vague byte (**gated >0x6a0**)
    -> vague. Namushul save_version 1716 (0x6b4) has ALL gated fields.
- **Breakthrough: the figures vector is DENSE**, not posnull. `FUN_140709410`/
  `FUN_1407099a0` write/read `int32 count` then `count` bodies — no
  presence-flag array. The `HANDOVER.md` "posnull + ~0x50 gap" claim and the
  `locate_figures_vector()` posnull heuristic are both WRONG. Must walk from
  the real world_history start (events count) instead.
- **Events: complete type map.** `FUN_14070b7a0` is a switch over a 4-byte
  tag (0x00..0x85 = 134 event types) -> `history_event_*` subclass vtables.
  Gives every event type's in-memory size and vtable. Still need to extract
  each subclass's read_file/write_file (vtable +0x120/+0x118) and
  batch-decompile them to walk events definitively.
- Diagnostic scripts (`diag_fig0_debug.py` etc.) re-tested the 13 occurrences
  of `12747` as the figures count under the no-pad layout. Two plausible
  fig0 candidates surfaced at stream offsets `0x36af86` and `0x5eb921`
  (non-4-aligned, deity-style -1 civ/pop allowed). Not yet confirmed by a
  full walk to 12,747.
- Wrote `AGENTS.md` (root) consolidating goal, paths, work-history storage,
  and the superseding findings. Updated `FUNCTIONS.md` to the definitive
  layout and removed the stale sex-pad/figure_id/art_count claims.

#### Next best target

- Fix `historical_figures.py` to the definitive no-pad, no-figure_id layout
  above (this is the single highest-leverage fix; current parser is
  misaligned by 1 byte after `sex`).
- Extract event subclass read/write vtable slots via
  `EnumerateEventVtables.java`, batch-decompile them, then walk the events
  vector from world_history start to land exactly on the figures count, then
  walk the dense figures vector to 12,747 and confirm the `0x36af86` /
  `0x5eb921` candidates.

## 2026-07-01 — Workspace cleanup of exploratory diag scripts

Committed the full RE work (commit `f005afa`, pushed to `origin/main`):
`AGENTS.md`, updated `FUNCTIONS.md`/`ATTEMPTS.md`, `ghidra_scripts/`, and the
`ghidra_decompiles/` function map (.c + index.json). Then removed 189 stale
exploratory `diag_*.py`/`dump_*.py` one-offs from the working tree to
unclutter `tools/df-save-re/scripts/`. They are preserved in git history at
`f005afa` (recoverable with `git checkout f005afa -- tools/df-save-re/scripts/`).
Kept the 18 scripts still useful for the next step: `diag_walk_until_fail.py`,
`diag_find_worldhistory_start.py`, `diag_fig0_debug.py`, `diag_fixture_maxids.py`,
`diag_dense_figures_vector.py`, `diag_find_figures_count.py`,
`diag_events_count.py`, `diag_save_version.py`, `check_fig_walk.py`,
`walk_figures_read.py`, `show_fig_walk.py`, `test_fig_walk.py`,
`test_build_starts.py`, `analyze_binary.py`, `analyze_post_tail_boundaries.py`,
`extract_rtti_types.py`, `fetch_fixtures.py`, `show_fig_walk_region1.py`.

## 2026-07-01 — Event vtables unblocked; all 128 event layouts extracted

Phase 3 of the pipeline-mapping plan (the critical-path step) is done.

#### Vtable fix (Step 2)

`EnumerateEventVtables.java`'s `findVtableAddress` compared full symbol names
against `Class::vftable`, but Ghidra stores the symbol as plain `vftable`
inside the class **namespace**. Replaced with a namespace-aware lookup
(`st.getSymbols("vftable")` + `getParentNamespace().getName()` match, old
full-name check kept as fallback). Result: `event_vtables.json` went from
0/128 to **128/128** entries with real `vtable_addr`, `slot_0x118`
(write_file) and `slot_0x120` (read_file).

#### Batch decompile + layout extraction (Step 3)

- 111 unique read/write addresses (66 read, 45 write — many subclasses share
  impls, e.g. all four topicagreement events read via `FUN_140081c80`).
  Batch-decompiled via `DecompileWithCallees.java` in one ~25s run; index
  rebuilt to 242 entries.
- Wrote `scripts/extract_event_layouts.py` → `ghidra_decompiles/event_layouts.json`:
  **128/128 tags with non-empty field lists, zero unknown helper calls.**
- Field-kind census across all events: 981 scalars i32, 55 i16, 1 u8,
  123 byte-vectors (flags, `FUN_140002380`), 18 i32-vectors
  (`FUN_140002250`), 1 i16-vector (`FUN_140002140`), 1 temp-bool
  (hist_figure_woundedst `+0x46`), 7 base-call delegations.
- Confirmed the **common event base prefix** read inline by nearly every
  subclass (and via call to `FUN_140019190` by the 7 masterpiece events):
  `+0x08 i32 year`, `+0x0c i32 seconds`, `+0x10 byte-vector flags`,
  `+0x20 i32 id` — marked `"base": true` in the JSON.
- Version gates captured per field (e.g. war_attacked_sitest gains 3 i32s
  when `save_version > 0x66f`; hist_figure_woundedst gains `+0x48 i32` when
  `> 0x669`). All gates < 0x6b4, so every gated field is present in the
  Namushul fixture.

#### Caveats / follow-ups

- `event_layouts.json` field offsets are **in-memory** offsets; on-disk order
  is the source order of the field list (offsets are for cross-referencing
  df-structures names, not stream positions).
- The 7 masterpiece events have `kind: "call", target: "140019190"` as their
  first field — consumers must expand that to the base prefix.
- Not yet folded into `save_layouts.py` / the parser (plan Step 7), and the
  events-layer walk (Step 8) still needs the world_history events start.

#### 2026-07-01 Follow-up: Steps 1 + 4–8 (layout pipeline completion)

- **Step 1 (tests):** Fixed 10 pre-existing failures — `read_entity_language_name()`
  (entity header already stores `has_name`; body omits redundant flag byte),
  death-events catalog search widened + count-echo fallback (deprecated hardcoded
  `0x226009C` anchor), upload-dir tests skip when absent, stride-table sites get
  `header_offset`, language_name roundtrip payload aligned to 58 bytes.
  Fast suite: **106 passed**, 4 skipped (`pytest -m "not slow"`).
- **Step 4 (eras/collections/tail):** `era_layout.json` from `FUN_14075cd70` +
  `FUN_14075ccb0`; `EnumerateFactoryVtables.java` → `collection_vtables.json`
  (14 inline vtable tags); `extract_polymorph_layouts.py` →
  `collection_layouts.json` (14/18 — war/battle/abduction/theft still need vtable
  enum from helper allocators). Tail vectors documented in `era_layout.json`.
- **Step 5 (links/info):** Link factory vtables (39 subtypes) → `link_layouts.json`;
  `histfig_info_layouts.json` (14 subprofile readers, 8 with field lists).
- **Step 6 (world sections):** `DecompileCallTree` depth-1 from `FUN_1405f3a60`
  added 70 writer-side functions; `index.json` now **320** entries;
  `missing_decompile` empty after `list_world_section_addrs.py`.
- **Step 7 (fold):** `build_layout_spec.py` regenerates `save_layouts.py` (192
  keys); `layout_dispatch.py` wired into `body_skipper` / `record_reader`
  polymorphic dispatch; `tests/test_save_layouts.py` added.
- **Step 8 (validate/docs):** `coverage-matrix.md`, `FUNCTIONS.md`, `AGENTS.md`
  updated (figures index = posnull + dense present bodies). Per-layer exact-landing
  walks still pending for figures/events/collections.

#### 2026-07-01 Extraction landing — collection layouts 18/18

- Added `LookupVtableSlots.java`; ran on tags 0/1/4/5 (war/battle/abduction/theft).
- Decompiled read_file helpers `1407699e0`, `140084360`, `140085a80`, `140085ec0`.
- Merged into `collection_vtables.json`; `collection_layouts.json` now **18/18 with fields**
  (tag 0 still has unknown helper `FUN_1406fc080` in field list as opaque call).
- `SAVE_LAYOUTS["historical_event_collection:*"]` = 18 after `build_layout_spec.py`.

#### 2026-07-01 Extraction landing — histfig info + vague layouts

- Decompiled 19 histfig info helper functions; rebuilt index to **343** entries.
- Rewrote `extract_histfig_info_layouts.py` → slot-keyed JSON (13 slots from `14070b110.c`).
- Added `histfig_info.py` + wired into `save_profiles.py` / `record_reader.py`.
- Added `vague_layout.json` + `read_vague_relationships_save` (i32 count + N×(i32,i16)).
- `histfig_info.py` + `SAVE_LAYOUTS["histfig_info"]` has 13 slots; fast tests green.

#### 2026-07-01 Extraction landing — figure walk blockers

- **Write vs load path:** compressed saves serialize histfig tails via write
  helpers in `FUN_14070a090`: info=`FUN_14070a5d0`, vague=`FUN_1406fb080`. Load
  readers `14070b110`/`1406fb120` differ — current info layout keyed from load
  reader needs re-derive from `14070a5d0.c`.
- **Figure body stream:** `FUN_1407099a0` reads `i32 count` then `count` bodies
  (12747 on Namushul). Posnull index at `0x2131BB0` is separate; `flags_end=
  0x2134D80`, first parseable body at `0x2134DD9` (110 B), slot 1+ desync without
  stub handling. Collections probe tags appear near `0x2134F01` after partial walk.
- Added walk scripts: `find_events_start.py`, `walk_events.py`, `walk_figures_read.py`,
  `label_world_reader_sections.py`. Events count `113118` not found as vector prefix
  before figures index (only in header `max_ids`).

#### 2026-07-02 Full world_history walk lands on two worlds (Namushul + region2)

- **Figures solved:** hand-transcribed all 13 `histfig_info` slot readers from the
  decompiles into `df_save_re/deserializers/histfig_info.py` (regex layout extractor
  missed loops/nested calls/version gates). Fixed missing `link:entity` tags
  11/13/14/16 via `LookupVtableSlots.java` + re-extracted `link_layouts.json`.
  All 12,748 Namushul figures walk cleanly: `0x15beb44 → 0x2131e53`.
- **Events solved:** disproved the "history_stats block" theory — the last event body
  (tag 32) extends exactly to the figures count at `0x15beb40`; the counter echoes
  were inside its body. Backward-chaining (`diag_events_backchain_v2.py`) found the
  true events vector: count `87666` @ `0x11b494a`. Forward walk lands exactly.
- **Collections solved:** auto layouts dropped nested calls (`language_name` in
  war/battle, war tally helper `FUN_1406fc080`, purge adjective string). Hand-
  transcribed all 18 collection readers into
  `df_save_re/deserializers/event_collections.py` (12 unique body readers; base
  block `FUN_140083d80` = events vec + collections vec + 4 scalars + byte flagarray
  + id). All 8,201 Namushul collections walk.
- **Eras + tail solved:** era = `FUN_14075cd70` (i32, i16, 3×i32, string, appearance
  `FUN_14075ccb0` = 6×i32 + i32 vec + 2×i32). Tail per `FUN_1407099a0`: i32 vec,
  i16 vec, 4×i32, i32 vec, 14×i32 (>0x5D7), 5×i32-vec + relationship blocks
  `FUN_1406fedd0` (>0x65C), gated intrigue vec `FUN_1406fefc0`/`FUN_1406feab0`
  (>0x68F). Namushul history ends `0x2902519`.
- **Generic location:** rewrote `world_history_walk.py`: `locate_world_history`
  anchors on figures-count echo (`max_ids[8]+1` needle + 3-figure parse check),
  backward-chains events to the count prefix, verifies forward. No hardcoded
  offsets; removed the `0x15BEB17` Namushul fallback and the stats-block logic.
- **region2 validation (new user-provided world):** full walk exact-matches its
  reference legends export: events 88,210, figures 8,496, collections 10,315,
  eras 2 (names match: "Age of Hydra and Desert Titan" / "Desert-titan Age").
  `scripts/walk_world_history_full.py` + `scripts/diag_legends_xml_counts.py`.

#### 2026-07-02 Persistence + explorer + de-Namushul (continued)

- See AGENTS.md §5 for DB persistence, explorer routes, collection year-order
  fix, and de-Namushul site/figure defaults.
- **Waterlures locate:** `scan_back=16M` missed the events start; dynamic
  scan + forward-verify longest chain fixes location (433,727 events, 46,662
  figures @ `0x4832dfe`). Full import-db validated end-to-end: 433,727 events /
  46,662 figures / 24,943 collections / 2 eras all `deterministic=1`; explorer
  smoke 12/12 routes 200 on `minbazkar`. (First import attempt hung with ~0 CPU
  — env flakiness again; kill + rerun completed in ~10 min.)

#### 2026-07-02 Ironhand .sav probing (open)

- **Base link tag -1 handled:** active saves serialize base-class links
  (`histfig_*_linkst`, `get_type()=-1`). Writer emits tag -1 + base body:
  site = 3×i32 (`FUN_1406fbb40`), entity/histfig = i32 target + i16 strength.
  Added `_BASE_LINK_FIELDS` to `skip_figure_links` (load factories return
  nullptr for -1 — layouts never covered it).
- **.sav header max_ids is wrong/shifted:** header says `max_ids[8]=977`
  figures / `max_ids[9]=89` events, but event vectors found in the payload
  carry monotonic ids up to ~299,740 (years 176–317) — the real world_history
  is much larger. Candidate "978 figures" anchors (`0x44f184b` etc.) walk only
  5–9 bodies then desync (units/nemesis copies, not the history figures
  vector). Several 89-count "event vectors" walk cleanly but are unit-embedded
  event-id lists, not the events layer (`diag_ironhand_events_scan.py`,
  `diag_ironhand_events_verify.py`).
- **Conclusion:** locating world_history in active `.sav` needs the .sav
  world-header/max_ids layout re-derived from the .sav reader path (different
  preamble; do NOT trust the .dat header hypothesis), or a sequential
  section walk from the .sav preamble. Retired-save pipeline is unaffected.

- **DB persistence:** `stream_world_history` in `db/store.py` drives the
  deterministic walk with per-layer callbacks into `history_event`,
  `historical_figure`, `event_collection`, `history_era` (typed rows +
  `record_json`/`fields_json` full-fidelity blobs). region2 import lands all
  four layers with `deterministic=1` LayerStatus. Legacy anchor streaming and
  `anchor_history_vectors` now run only when the deterministic walk fails.
- **Collection fixes found via region2 legends.xml diff:** base block scalar
  order is `start_year, end_year, start_seconds, end_seconds` (df.history.xml
  order — previous read swapped end_year/start_seconds: war 18 showed
  end_year 58800 instead of 5). Worldgen collection names have empty literal
  strings; resolve `name_words` through string-table section 8 (e.g.
  "SQUEEZE WAR" ↔ XML "the squeezing war").
- **Explorer:** new routes + templates for events (list w/ type+year filters,
  pagination, detail w/ named fields + figure/site links), collections (list,
  detail w/ member events + child collections), eras, and per-figure event
  timelines (hfid column + `json_each` scan over `fields_json` for any *hf*
  key). All smoke-tested 200 on region2 (`scripts/diag_explorer_smoke.py`).
- **De-Namushul in library code:** `infer_name_table_layout` now clusters by
  densest marker run instead of the hard `0x1190000..0x11A0000` band;
  `_discover_cluster_band_layout` derives its band from marker cluster ±64
  strides; `discover_world_sites` raises instead of defaulting max_site_id to
  349 (caller in `legends_extract` treats it as a skip note);
  `walk_figure_id_chain` max_figures default 12747 → unbounded (None).
- **Test suite:** added `tests/test_world_history_walk.py` (full deterministic
  walk on Namushul, 900s timeout). Relaxed the legacy `events_death` assertion
  in `test_cross_fixture_reliability.py` (heuristic anchor superseded by the
  deterministic walk; still asserted when it locates). NOTE: intermittent
  hard crashes (0xC0000005 access violations) in long pytest runs on this
  machine — appear in unmodified baseline code too (`locate_figures_vector`,
  `_name_fingerprint_at`, `struct.unpack_from` hot loops over the 36MB
  payload; Python 3.13.3/Win). Same file passes when run alone. Suspect
  environment (memory pressure), not the parser: reruns pass.

#### 2026-07-02 region3 (Kar Minbaz) — no-export validation + CP437 fix

- **Deterministic walk lands exactly** on the user's fresh `region3` save
  (`data\saves\region3\world.dat`, 24.6MB payload, sv 1716): events 110,225
  (declared count echo @ `0x6850d5`, walk ends exactly at the figures count
  echo), figures 10,591 (all named), collections 16,483 (= header
  `max_ids[10]+1`), eras 2 ("Age of Dragon and Hill Titan" / "Hill-titan
  Age"). No legends XML this time — validation is exact-landing +
  count-echo agreement + the DF text exports.
- **Encoding bug found & fixed: DF strings are CP437, not latin-1.**
  Cross-checking ruler names from `region3-...-world_history.txt` exposed it:
  byte `0x95` decoded latin-1 gives `•`-class garbage, CP437 gives `ò` (e.g.
  ruler "Lòr Wrunggilt"). Switched `BinaryReader.read_fixed_string`,
  `world_history_walk` string fields (event/era names), and
  `record_reader` static-strings to `cp437`. After the fix all **74/74**
  ruler (first-name, born-year, died-year) triples from the region3
  world_history text export match `historical_figure` rows exactly
  (`scripts/diag_region3_names.py`).
- **Header site-slot hypothesis DISPROVEN:** `max_ids[26]+4` matched
  Namushul (346→350) by coincidence. region2: slot 26 = 127 → 131, but its
  legends.xml has **194** sites; region3: 105 → 109 vs **262** sites in
  `world_sites_and_pops.txt`. No max_ids slot consistently equals the site
  count across region1/2/3 (region3's `max_ids[3]=258` → +4 = 262 matches,
  but region2's slot 3 = 379 ≠ 194 — coincidence again). Raising the ceiling
  manually (`--expected-sites 266`) recovers 249/262 region3 sites via the
  heuristic scan, but with a generous ceiling (2000) the header scan floods
  with false positives (region3: 1,297 "sites"). Conclusion: the site
  catalog needs the real `world_site` vector walk (count + dense bodies,
  seq 11-ish in `world_reader_sections.json`) instead of marker heuristics —
  same as the known "full world_site body walk still open" note. Site
  display names from the heuristic stride table are also wrong on
  region2/region3 (word-index garbage like "ABBEY ABBEY..."), so the
  legacy site layer should be treated as Namushul-only until the real
  walk exists.

### 2026-07-02 — 100% persistence (world_history zero-loss)

- **Figure tail fields named** from `FUN_14070a9d0`: on-disk order
  `unit_id`, `nemesis_id`, `global_id`, flags byte-vector, `art_count`.
- **Typed figure links** (`figure_links.py`): entity/site/histfig link
  bodies read with named fields; persisted to `hf_link` + `record_json`.
- **histfig_info + vague**: slot 1 skills typed; slots 0,2–12 as base64
  blobs in `record_json`; vague + history-tail relationship events →
  `hf_relationship`. Doc: `docs/histfig_info_fields.md`.
- **Era + history tail**: `read_era_record` maps to df `history_era`
  names; `read_history_tail` named vectors → `raw_record(layer=history_tail)`.
- **Schema 004**: `hf_link`, `hf_relationship`, `hf_skill` + StreamWriter
  layers; `stream_world_history` persists flags (hex), full tails, links.
- **Explorer**: figure detail shows links/skills/relationships; eras show
  title/details from `record_json`.
- **Phase 2 scaffolding**: `post_history_walk.py` (seq 8–9 transcribed;
  seq 10 needs `FUN_14030bc20` decompile), `world_site_walk.py` (case-8
  `FUN_1403066f0` reader; nested buildings need `FUN_1403021d0`).
- **Locate perf**: replaced O(scan×events) backward byte chain with rfind
  on `int(max_ids[9]*0.775)` count echo + single verify; Namushul locate
  ~0.9s / walk ~1.6s (figures skip-mode for validation scripts).
- **Validated**: Namushul walk 87666/12748/8201/2, history_end `0x2902519`;
  `test_world_history_walk` pass.

### 2026-07-03 — four-world validation sweep; decompile-first pivot

- **Exhaustive locate fallback landed** (`_locate_events_start_exhaustive`):
  byte-step backward scan (events count prefix is NOT 4-byte aligned —
  Namushul's sits at `0x11b494a`), span-derived `max_decl` filter, min-offset
  per declared count, verify ascending. Proven by
  `test_locate_without_ratio_guesses` (guesses monkeypatched to `[]`; ~9s).
  Earlier naive versions timed out (>10 min) — the early-abort in
  `_verify_events_landmark` (stop once `reader.tell() >= events_end`) is what
  makes it tractable.
- **Waterlures locate root cause**: `_figures_anchor_candidates` searched only
  the last 40MB; Waterlures' figures anchor is deeper in the 220MB payload.
  Span now `max(40MB, (max_ids[8]+1)*4096)`. Walk lands exact:
  433,727 / 46,662 / 24,943 / 2, history_end `0x969e77f`.
- **Walk regression all four exact** (region2/region3/Namushul as before).
- **Re-imports**: sn-nmon 71s, kar-minbaz ~75s, namushul ~78s, minbazkar 307s.
  `diag_check_new_tables.py` green on all four (hf_link 104k/113k/135k/455k,
  hf_skill 63k/82k/97k/356k, hf_relationship 23k/25k/46k/116k, 1 history_tail
  each, era title+details present).
- **Link-type bug**: `figure_links.py` looked up `layout["symbol"]`;
  `build_layout_spec.py` emits `"struct"`. All link types were `tag_N`. Fixed
  (checks both), region2 re-imported. **XML diff: 0 missing / 0 extra /
  0 mismatches over 8,451 figures.** XML shape lessons: link data is in child
  ELEMENTS (`<link_type>`, `<entity_id>`, `<hfid>`); position/squad links are
  separate blocks (`entity_former_position_link` etc. with
  `position_profile_id`, no link_type); `home_structure` in XML ==
  `histfig_site_link_home_site_abstract_buildingst`.
- **Pytest triage** (133 passed / 3 failed): stale `art_count == -1` assertion
  (fabricated field — removed); stale "Extraction debug details" template
  string; figures LIST route Jinja error was stale-`__pycache__` only — after
  clearing caches all three pass. Smoke script now hits `/figures` too (15/15).
- **Site backward-locate false landings — WILL NOT FIX**: suffix of the true
  site vector re-parses as a valid smaller vector landing on the events count
  (region2: found 4 vs true 194). Superseded by the decompile-first pivot:
  in a forward parse, sites start where seq 7 ends. `skip_site_building`
  (from `1403021d0.c`) and the site body walk transfer as-is.
- **New decompiles**: `1403021d0`, `14030bc20`, `14031fd40` (artifact-like),
  `1409085c0` (written-content-like); index.json rebuilt (380). Reader cases
  0xd–0x23 enumerated in the plan — ~20 more sections, none transcribed yet.
- **PIVOT**: next session starts `scripts/decompile_closure.py` — transitive
  callee closure from `FUN_140330310`, batch-decompile everything missing,
  then transcribe front-to-back and delete the heuristic import paths.

### 2026-07-03 (later) — decompile closure complete; forward walk begun

- **Closure done.** `scripts/decompile_closure.py --run`: reader-side roots =
  41 per-case entry functions (521 reachable), writer root `1405f3a60` (1,838
  reachable); `ghidra_decompiles/` 380 → **2,707 .c** (12 MB), 0 failed,
  index.json rebuilt. Lesson: rooting `140330310` directly pulls in game-logic
  (FSOUND/viewscreens) via its fixup cases — root the per-case readers
  instead; also skip announce `14014a480`, UI `140d38b10`, fixup driver
  `140d24c10`, and any named non-`FUN_` symbol. Batches of 150 addrs run in
  ~10-30s each with `-noanalysis`; whole closure took ~10 min.
- **World reader case map extracted** (now in FUNCTIONS.md): the reader is a
  state machine (case 0..0x23). Big discovery: **case 2 = object registry**
  (`140aafe60`) — `i32 count` + per-element `i32 id` (+ `i32 type` via factory
  for items/buildings) for ~29 vectors; cases 3-6/0xb-0x1f then iterate those
  pre-sized vectors with NO counts in-stream. So the "missing counts" in the
  case-0xd..0x1f readers were never missing — they're in case 2.
- **Header correction**: 37 id slots @ sv1716 (28 + gates >0x5cb/+3,
  >0x5cc/+2, >0x5d4/+1, >0x622/+1, >0x67d/+2), then language_name + 15 flag
  bytes + save-folder string. The old 50-slot `WorldHeaderHypothesis` was
  wrong (worked only because downstream code used indices ≤ 9 and re-anchored
  by scanning). String tables: 8 nested vector<vector<string>> (2 gated) + 20
  raw-category vector<string> (order fixed by validator `140d20680`) +
  unit-chunk 0x40 records (2 fields gated >0x5cb).
- **Item/building vtables enumerated** via `EnumerateFactoryVtables.java`:
  `item_vtables.json` 65 subtypes (read slot +0x438; 37 share `140820540`),
  `building_vtables.json` 36 (slot +0x218). read_file closure decompiled
  (98 functions). Item base chain (`140315cd0` → `140315dd0` → `1408248c0` →
  `140820540` + improvement factory `1407f0050`, 14 subtypes) transcription
  notes in FUNCTIONS.md.
- **`forward_walk.py` started**: header + string tables + registry byte-exact
  on region2 (0x0..0x22a10e; items 2101, buildings 0, engine-objs 380,
  written-content-like 3206, artifact-like 2101 == item count as expected for
  worldgen saves, squads 1). Driver `scripts/walk_full_save.py`.
- **Session env note**: two agent-side crashes (tool session restarts) while
  reading large decompile files back-to-back; work resumed cleanly both times.
- **NEXT**: transcribe case 3 (items, using the 25 distinct readers), case 4
  (buildings), case 5 (`1404aaa30`), case 6, case 7 entities (`140a62e80`),
  case 8 sites; plug existing world_history walker at case 9; then 0xa-0x20.
  Acceptance: adjacency chain to `len(payload)` on all four worlds.

