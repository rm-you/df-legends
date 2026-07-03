# df-save-re

Binary legends extractor for Dwarf Fortress 0.47.05 saves (Path C — parse the
save without running the game).

> **Agents: read [`../../AGENTS.md`](../../AGENTS.md) first** — goal, critical
> paths (DF binary, Ghidra, radare2), where work history lives
> (`ATTEMPTS.md`, `FUNCTIONS.md`, `ghidra_decompiles/`), and the definitive
> reverse-engineered save/load findings.

## Install

Requires [uv](https://docs.astral.sh/uv/). From `tools/df-save-re`:

```bash
cd tools/df-save-re
uv venv
uv pip install -e .
uv pip install -e ".[test]"   # pytest + httpx (for tests)
uv pip install -e ".[re]"     # pyghidra — Ghidra API from Python (optional)
```

Activate the venv (`.venv\Scripts\activate` on Windows) or prefix commands with `uv run`.

## Quick start

```bash
# Fetch test saves (gitignored) — Namushul (small) + Waterlures
python scripts/fetch_fixtures.py
python scripts/fetch_fixtures.py --all    # + Ironhand world.sav

# Fingerprint — world name, SHA-256, header counters
df-save-re validate tests/fixtures/small-retired/world.dat

# Extract string tables, entity catalog, history landmarks
df-save-re extract tests/fixtures/small-retired/world.dat --json

# Persist to a per-fortress SQLite DB + browse it
df-save-re import-db tests/fixtures/small-retired/world.dat --overwrite
df-save-re serve        # explorer at http://127.0.0.1:8765

# Cross-check binary parse against your [p] text exports (verify-only)
df-save-re verify tests/fixtures/small-retired/world.dat /path/to/txt-exports/
```

Pass a **region folder** instead of a file and `validate` picks `world.dat`
(retired) or `world.sav` (active) automatically.

## Docker (explorer + one-click import)

From the **repo root**, copy `.env.example` to `.env` and set `SAVE_HOST_PATH`
to your DF `data/save` directory (absolute path; contains `region1`, `region2`, …).

```bash
cp .env.example .env
# edit SAVE_HOST_PATH=...

docker compose up --build
# → http://localhost:8765
```

The UI lists mounted region folders, shows whether each has a SQLite DB, and
offers **Import** / **Browse** buttons. Imported databases persist in the
`legends-data` Docker volume (`/data/legends` inside the container).

Local equivalent without Docker:

```bash
df-save-re serve --saves-dir /path/to/data/save --data-dir data/legends
```

Environment variables: `DF_SAVES_DIR`, `DF_DATA_DIR` (used by `serve` when flags omitted).

## Commands

```bash
df-save-re inspect <world.dat>          # raw header + decompressed layout
df-save-re probe <world.dat> --json     # hypothesis parsers + landmark scan
df-save-re legends-scan <world.dat> --full
df-save-re fields historical_figure     # show df-structures field order
df-save-re validate <world.dat> --export-help   # how to get [p] exports
```

`legends-compare` / `--legends-xml` remain available if you have `legends.xml`,
but are not part of the normal workflow (exports are verify-only).

## Key modules

| Path | Role |
|------|------|
| `df_save_re/structures/xml_fields.py` | df-structures XML parser → field tree; `resolve_fields()` (inheritance + version gating) |
| `df_save_re/structures/polymorph.py` | Discriminator-tag → subclass registry (events, links, collections, buildings) |
| `df_save_re/deserializers/body_skipper.py` | The engine: read/skip any struct |
| `df_save_re/deserializers/engine_walk.py` | Self-validating harness — exact-landing or desync offset |
| `df_save_re/deserializers/engine_layers.py` | Runs the harness per layer → `LayerWalk` |
| `df_save_re/deserializers/historical_figures.py` | Histfig reader + vector locator (⚠ layout fix pending — see AGENTS.md §4) |
| `df_save_re/deserializers/world_layout.py` | Landmark discovery + `resolve_history_search_start` |
| `df_save_re/deserializers/world_header_ids.py` | Header-slot → layer ceilings (`max_ids`) |
| `df_save_re/legends_extract.py` | Orchestrator; produces `LegendsSnapshot` (binary-only) |
| `df_save_re/legends_oracle.py` | Verify-only legends.xml ground-truth loader (None if absent) |
| `df_save_re/legends_verify.py` | Compares snapshot to text exports / oracle |
| `df_save_re/db/` + `alembic/versions/` | SQLite schema + persistence |
| `df_save_re/web/` | FastAPI explorer |

## Binary RE

Ghidra scripts and the decompiled function map live in
[`ghidra_scripts/`](ghidra_scripts/) and [`ghidra_decompiles/`](ghidra_decompiles/)
(see [`ghidra_scripts/README.md`](ghidra_scripts/README.md) for the pipeline).
The 630MB Ghidra project itself is gitignored at `ghidra/`.

## Status

Target: **DF 0.47.05** Windows (`save_version` 1716). See
[`../../AGENTS.md`](../../AGENTS.md) §5 for the full current status. Summary:

- **Done** — infrastructure (serialization engine, self-validating harness,
  per-fortress SQLite + Alembic, FastAPI explorer, cross-fixture tests);
  authoritative counts and top-level identity (sites, figures, events,
  entities) on all three fixtures.
- **Pending** — full per-record bodies. Root cause is known and mechanical
  (see AGENTS.md §4): the parser assumed a `sex` pad byte, fabricated
  `figure_id`/`art_count` fields, and treated the figures vector as posnull.
  All three are wrong per the decompiles. The figures vector is **DENSE**.
  Next step: fix the histfig parser to the definitive layout and walk the
  dense figures vector from the real `world_history` start.

| Layer | Status |
|-------|--------|
| Compression / header | Done |
| Generated raws + post-header stream | Done |
| String tables + index | Done |
| Entity civ headers (partial catalog) | Done |
| History events | Events factory decompiled (134 type tags); per-subclass `read_file` extraction pending |
| Historical figures | Definitive on-disk layout known; parser fix + dense-vector walk pending |
| Sites / entities / artifacts | Bodies pending on the same engine-walk fix |

## Tests

```bash
python -m pytest tests/test_engine_walk.py tests/test_body_skipper.py \
                  tests/test_legends_oracle.py -q          # fast engine tests
python -m pytest tests/test_engine_layers.py -q           # per-layer (Namushul)
python -m pytest tests/test_cross_fixture_reliability.py -q   # all 3 saves (~8 min)
```

Fixtures are gitignored — run `python scripts/fetch_fixtures.py` first. See
[`tests/fixtures/README.md`](tests/fixtures/README.md) for SHA-256 fingerprints
and DFFD sources.
