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
