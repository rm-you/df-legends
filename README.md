# df-legends

Extract world-history data from **Dwarf Fortress 0.47.05** save files and build
a legends-style exploration system — without running the game.

## Target

**Dwarf Fortress 0.47.05** (Windows `Dwarf Fortress.exe`, `save_version` **1716**).
All binary RE, layouts, and validation are scoped to this release. Other DF
versions need separate reverse engineering.

## Approach

We reverse-engineer the DF binary (Ghidra) to learn the exact on-disk save
layout, then parse `world.dat`/`world.sav` directly into a queryable history
graph (figures, events, sites, entities, artifacts, eras). df-structures XML
documents the *in-memory* C++ layout, which does **not** match the on-disk
stream — so the binary is the source of truth, not the XML.

See [`docs/path-c-save-reverse-engineering.md`](docs/path-c-save-reverse-engineering.md)
for the methodology and [`docs/save-formats-0.47.05.md`](docs/save-formats-0.47.05.md)
for the save file formats.

## Read this first (agents & newcomers)

**[`AGENTS.md`](AGENTS.md)** — the project memory: the goal, all critical paths
(DF binary, Ghidra, radare2), where work history is stored, and the definitive
reverse-engineered save/load findings. Start here.

- [`FUNCTIONS.md`](FUNCTIONS.md) — curated map of reverse-engineered DF functions.
- [`ATTEMPTS.md`](ATTEMPTS.md) — chronological log of RE approaches and dead ends.
- [`tools/df-save-re/ghidra_decompiles/`](tools/df-save-re/ghidra_decompiles/) —
  the canonical machine-readable function map (one `.c` per decompiled function +
  `index.json`).

## The tool

The extraction toolkit lives in [`tools/df-save-re/`](tools/df-save-re/):

```bash
cd tools/df-save-re && uv venv && uv pip install -e .
df-save-re validate tests/fixtures/small-retired/world.dat
df-save-re extract tests/fixtures/small-retired/world.dat --json
df-save-re serve        # explorer at http://127.0.0.1:8765
```

Install, usage, status, and the module map are in
[`tools/df-save-re/README.md`](tools/df-save-re/README.md). Binary RE scripts
are in [`tools/df-save-re/ghidra_scripts/`](tools/df-save-re/ghidra_scripts/)
(see its README for the Ghidra pipeline).

## Reference data

- `data/df_47_05_history_event_types.txt` — 155 `history_event_*` RTTI type names
  from the 0.47.05 binary.
- `data/df-structures/` — vendored DFHack df-structures (`0.47.05-r8`, commit
  `afe7e90`), the field-name/type reference.
