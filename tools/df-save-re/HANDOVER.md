# df-save-re — Handover

> **STATUS (2026-07-01): partially superseded — read [`../../AGENTS.md`](../../AGENTS.md)
> first.** The infrastructure status, module map, and test recipes below are
> still accurate, but the **blocker analysis in §5/§6/§12 is outdated**: the
> DF Windows binary and Ghidra are now available, the save/load pipeline is
> decompiled (see `ghidra_decompiles/` + `FUNCTIONS.md`), and the real root
> cause is known — the parser assumed a `sex` pad byte, fabricated
> `figure_id`/`art_count` fields, and treated the figures vector as posnull.
> All three are wrong. The figures vector is **DENSE**. See `AGENTS.md` §4
> for the definitive on-disk histfig layout and §5 for the concrete next step.
> Stale lines below are marked ⚠ SUPERSEDED.

Last updated: 2026-06-30. This document lets another agent (or human) pick up
exactly where we left off on **binary legends extraction from Dwarf Fortress
0.47.05 saves**, with no prior context.

---

## 1. End goal

Extract a complete, connected legends dataset directly from a fortress save
(`world.dat` retired / `world.sav` active, `save_version` 1716, DF 0.47.05) —
every site, historical figure, history event, entity, event collection, era,
artifact, and written content — with counts matching the save header and a web
UI to browse it. Pure binary RE: **no running DF/DFHack, no reading the p-key
text/XML exports inside the extraction path** (exports are verify-only).

## 2. Where things stand (one-paragraph truth)

The **infrastructure is complete**: a deterministic df-structures serialization
engine, a self-validating walk harness, per-fortress SQLite + Alembic, a FastAPI
explorer, and cross-fixture tests. **Authoritative counts and top-level
identity are extracted** (sites, figures, events, entities) on all three test
saves. **Full per-record bodies are NOT yet extracted** — the engine walks the
first record of each layer then desyncs, blocked by DF's save-specific pointer
serialization. Closing that gap requires disassembling the DF binary (Ghidra),
which could not be done in the build environment. The harness now reports the
**exact desync offset per layer**, so the remaining work is verifiable, not
blind.

## 3. Repo / project layout

- Project root: `tools/df-save-re/` (installable: `pip install -e .`, CLI
  `python3 -m df_save_re.cli`).
- df-structures (vendored, complete): `data/df-structures/` — DFHack tag
  `0.47.05-r8`, commit `afe7e90`. See `data/df-structures/README.md`.
- Local per-fortress DBs (gitignored): `data/legends/databases/<slug>.sqlite`
  + `data/legends/registry.json`.

### Key modules

| Path | Role |
|------|------|
| `df_save_re/structures/xml_fields.py` | Complete df-structures XML parser → field tree; `resolve_fields()` (inheritance + version gating) |
| `df_save_re/structures/polymorph.py` | Discriminator-tag → subclass registry (history_event, links, collections, buildings) |
| `df_save_re/deserializers/body_skipper.py` | The engine: read/skip any struct; `read_struct` / `skip_struct` |
| `df_save_re/deserializers/engine_walk.py` | Self-validating harness: `walk_pointer_vector` / `walk_inline_vector` → exact-landing or desync offset |
| `df_save_re/deserializers/engine_layers.py` | Runs the harness per layer (figures/events/sites/entities) → `LayerWalk` |
| `df_save_re/legends_extract.py` | Orchestrator; produces `LegendsSnapshot` (binary-only) |
| `df_save_re/legends_oracle.py` | Verify-only legends.xml ground-truth loader (returns None if absent) |
| `df_save_re/legends_verify.py` | Compares snapshot to text exports / oracle |
| `df_save_re/db/models.py`, `db/store.py`, `alembic/versions/` | SQLite schema + persistence |
| `df_save_re/web/` | FastAPI explorer (`python3 -m df_save_re.cli serve`) |
| `df_save_re/deserializers/world_layout.py` | Landmark discovery + `resolve_history_search_start` |
| `df_save_re/deserializers/world_header_ids.py` | Header-slot → layer ceilings (`max_ids[26]+4` = next_site_id) |

### Docs to read next

- `docs/binary-re-findings-0.47.05.md` — confirmed offsets + authoritative save
  read order (top-level stream order vs within-object field order).
- `docs/coverage-matrix.md` — per-field status + engine measurement table.
- `docs/legends-db-schema.md` — DB schema.

## 4. The plan (workstreams) and status

- **W0 Specs/oracle/read-order** — DONE. Vendored full df-structures; oracle
  loader; documented read order.
- **W1 Serialization engine (keystone)** — DONE. Complete parser + reader +
  polymorphic dispatch + self-validating harness.
- **W2 Anchored layer walks** — WIRED + MEASURED, not landing. Engine attempts
  full body walks; results on `LegendsSnapshot.engine_walks`.
- **W3 Persistence + UI** — DONE. `layer_status` table populated each import;
  explorer shows per-layer extraction status. Record tables (history_event,
  site_population, entity_position, artifact, written_content, history_era,
  event_collection) exist and are **schema-ready but empty** until body walks land.
- **W4 Validation** — DONE for counts + harness behavior across all 3 fixtures.

## 5. Measured per-layer status (Namushul fixture)

| Layer | Authoritative count | Body walk | Desync offset |
|-------|---------------------|-----------|---------------|
| figures | 12,747 (`max_ids[8]`, vector confirmed @ `0x2131bb0`) | 1 body then desync | `0x21353a3` | ⚠ SUPERSEDED — figures vector is DENSE; the `0x2131bb0` posnull anchor and the `0x21353a3` desync were symptoms of the parser's sex-pad + fabricated-field misalignment, not the real layout. See `AGENTS.md` §4–5. |
| events_death | total events 113,118 (`max_ids[9]`); death vector @ `0x226009c` | 3 bodies then desync | `0x22601de` |
| sites | 350 (`max_ids[26]+4`); ~315 names via discovery | canonical `world_data.sites` vector NOT located | — |
| entities | capacity 7,949 (`max_ids[4]`); ~78 headers | 0 bodies (reference vector) | `0x8a7773` |

Counts are correct and reliable. Bodies are the gap.

## 6. The single blocker (root cause)

> ⚠ SUPERSEDED 2026-07-01 — see `AGENTS.md` §4. The real root cause is now
> known precisely: the parser assumed a `sex` pad byte + fabricated
> `figure_id`/`art_count` fields + a posnull figures vector. All three are
> wrong per the decompiles. The "mysterious pointer serialization" framing
> below was the pre-RE guess; the actual fix is mechanical (correct the
> layout) once the dense figures vector is walked from the real
> world_history start.

DF's compressed save serializes pointers differently than the **in-memory**
df-structures layout we walk:

1. **Owned sub-objects** are written inline (engine handles these).
2. **References** (e.g. `historical_figure.worldgen_site`, figure→civ, the
   `info`/`profile` pointer, `has-bad-pointers` fields) are written as
   ids/indices or omitted — NOT as full bodies. df-structures does not flag all
   of these for the save path.
3. A few **unions** and worldgen-only optional substructs need discriminated
   reads.

Because of this, `skip_struct("historical_figure")` over-/under-reads the body
tail and the next record no longer lines up. Same for events/entities. This is
not fixable from the XML alone.

## 7. How to close the gap (next agent's task)

You need **ground truth** and/or the **binary**. Two complementary tracks:

### Track A — Disassemble DF 0.47.05 (authoritative)
1. Obtain `df_47_05_linux.tar.bz2` (Bay12) → `libs/Dwarf_Fortress`.
2. Ghidra/objdump trace each type's `read_file(file_compressorst&)`:
   start with `historical_figure`, then `history_event` base + a few subclasses,
   then `world_site`, then `historical_entity`.
3. Encode the real on-disk order (esp. reference fields written as ids) as
   overrides. The engine already has the hook points:
   - `body_skipper.py` `_SPECIAL_SIZES` / special-cased types,
   - `_skip_pointer_body` (reference vs owned),
   - polymorphic dispatch in `engine_walk.py`.
4. Validate with the harness: a layer is correct when
   `walk_*` returns `ok=True and landed_on_anchor=True` (exact landing on the
   next confirmed anchor). The harness already prints the first failing offset.

### Track B — Get a DFHack `exportlegends` XML oracle (field-level checks)
1. In DF + DFHack, run `exportlegends all` → `region*-legends.xml`.
2. Drop it in `uploads/` (or beside the save). `legends_oracle.resolve_oracle()`
   auto-loads it; `verify` then field-checks counts and per-id fields.
3. Use it to confirm parsed figure/event/site fields once Track A lands bodies.

### Definition of done (per layer)
- `walk_pointer_vector(...).ok and .landed_on_anchor` is True, AND
- parsed record count == authoritative count (header `max_ids`), AND
- (if oracle available) spot-checked field values match the export.
Then populate the corresponding DB table in `db/store.py` and surface it in
`df_save_re/web/`.

## 8. Recommended implementation order after bodies land

1. `world_site` bodies → finish 350/350 + `site_population` (inhabitants/animals).
2. `historical_figure` bodies → all 12,747; populate figure detail + links.
3. `history_event` polymorphic bodies → 113,118; populate `history_event`,
   then `event_collection` and `history_era`.
4. `historical_entity` bodies → `entity_position` (+ assignments), worship, links;
   derive rulers (71 on Namushul) from position assignments.
5. `artifact_record` / `written_content`.
Each step: walk → validate exact-landing → persist → surface in UI.

## 9. Environment / commands

Fixtures are gitignored; fetch them first:

```bash
cd tools/df-save-re
pip install -e .
python3 scripts/fetch_fixtures.py            # small (Namushul) + Waterlures
python3 scripts/fetch_fixtures.py --all       # + Ironhand world.sav
```

Fixtures land in `tests/fixtures/{small-retired,waterlures-retired,ironhand-active}/`.

```bash
# Extract / inspect
python3 -m df_save_re.cli extract tests/fixtures/small-retired/world.dat --json
python3 -m df_save_re.cli import-db tests/fixtures/small-retired/world.dat --overwrite
python3 -m df_save_re.cli serve        # explorer at http://127.0.0.1:8765
python3 -m df_save_re.cli verify tests/fixtures/small-retired/world.dat <uploads-dir>
python3 -m df_save_re.cli fields historical_figure   # show df-structures field order
```

Tests (note: full extraction is slow — ~70s/fixture due to site discovery):

```bash
python3 -m pytest tests/test_engine_walk.py tests/test_body_skipper.py \
                  tests/test_legends_oracle.py -q          # fast engine tests
python3 -m pytest tests/test_engine_layers.py -q           # per-layer (Namushul)
python3 -m pytest tests/test_cross_fixture_reliability.py -q   # all 3 saves (~8 min)
```

Env note: deps include `fastapi`, `uvicorn`, `jinja2`, `httpx` (test). If a
fresh cloud agent lacks them, run env setup at cursor.com/onboard so other
agents skip the reinstall.

## 10. Quick harness recipe (the core dev loop)

```python
from df_save_re.save_preamble import resolve_save_payload
from df_save_re.deserializers.world_layout import discover_layout_landmarks, resolve_history_search_start
from df_save_re.deserializers.historical_figures import locate_figures_vector
from df_save_re.deserializers.engine_walk import walk_pointer_vector
from tests.fixture_paths import resolve_fixture

p = resolve_save_payload(resolve_fixture('small-retired','world.dat'))
layout = discover_layout_landmarks(p.payload, p.preamble)
start = resolve_history_search_start(p.payload, layout, p.preamble.header)
anchor = locate_figures_vector(p.payload, p.preamble.header, search_start=start)
r = walk_pointer_vector(p.payload, vector_offset=anchor.vector_offset,
                        element_type='historical_figure',
                        bodies_start=anchor.bodies_start,
                        next_anchor=anchor.death_events_offset)
print(r.ok, r.landed_on_anchor, r.parsed_count, hex(r.error_offset or 0), r.error)
# Iterate on body_skipper until r.ok and r.landed_on_anchor are True.
```

## 11. Branches / PRs (chain, newest last)

| PR | Branch | Content |
|----|--------|---------|
| #3 | `cursor/finish-extraction-8172` | DAT extraction improvements |
| #4 | `cursor/active-save-extract-8172` | `world.sav` preamble + extract path |
| #5 | `cursor/cross-fixture-reliability-8172` | reliability across fixtures |
| #6 | `cursor/legends-explorer-ui-8172` | FastAPI explorer (PoC) |
| #7 | `cursor/site-ceiling-extract-8172` | header-derived site count |
| #8 | `cursor/legends-engine-extract-8172` | **serialization engine + harness (this work)** |

PR #8 is based on the PR #7 branch. Merge order should respect the chain.

## 12. Known limitations / gotchas

- `df.world.xml` `world` struct is in-memory layout (starts with runtime-only
  vectors); do NOT derive top-level save order from it — use the empirical
  order in `binary-re-findings-0.47.05.md` and the decompiles in
  `ghidra_decompiles/`.
- Empirically validated serialization quirks the engine preserves: `coord2d` =
  2×int32 (not 2×int16), `coord` = 3×int32, `df-flagarray` = count×int32,
  posnull pointer vectors (count + presence bytes + bodies).
- ⚠ SUPERSEDED: the figures vector is **DENSE** (count + bodies), NOT posnull
  — there is no `~0x50` gap. Do not pass a posnull `bodies_start` to the
  harness for figures. See `AGENTS.md` §4.
- ⚠ SUPERSEDED: a DF binary and Ghidra ARE now available (paths in
  `AGENTS.md` §2); the save/load pipeline is decompiled in `ghidra_decompiles/`.
  The blocker is no longer "no binary" — it is fixing the parser to the
  definitive no-sex-pad layout and walking the dense figures vector from the
  real world_history start.
