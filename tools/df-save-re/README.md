# df-save-re

Layer-1 tools for reverse-engineering Dwarf Fortress save files (Path C).

## Install

```bash
cd tools/df-save-re
pip install -e .
```

## Quick start

```bash
# Fingerprint — world name, SHA-256, header counters
df-save-re validate /path/to/region1/world.dat

# Extract string tables, entity catalog, history landmarks
df-save-re extract /path/to/region1/world.dat
df-save-re extract /path/to/region1/world.dat --json
```

If you pass a **region folder** instead of a file, `validate` picks `world.dat` (retired) or `world.sav` (active) automatically.

## Verify parsing against your text exports

Cross-check what we extract from `world.dat` against your **[p]** exports:

```bash
df-save-re verify /path/to/world.dat /path/to/folder-with-txt-exports/
```

- **PASS** — binary parse matches text export for that layer
- **PENDING** — text records a target; that layer is not parsed from the save yet

On Namushul: world name, 15 named civs, 63 subterranean peoples, 350 site text records, and 71 ruler lines all **PASS**. Site title word markers reach **346/350** in binary (full `world_site` struct still open). Figures (12,747) and events (113,118) are **PENDING**.

```bash
df-save-re validate /path/to/world.dat --export-help   # how to get p-key exports
```

## Other commands

```bash
df-save-re inspect /path/to/world.dat
df-save-re folder /path/to/region1
df-save-re legends-scan /path/to/world.dat --full
df-save-re probe /path/to/world.dat --json
```

`legends-compare` / `--legends-xml` remain available if you happen to have `legends.xml`, but are not part of the normal workflow.

## Test fixtures

Fixtures are gitignored. From `tools/df-save-re`:

```bash
python3 scripts/fetch_fixtures.py
python3 -m pytest
```

See `tests/fixtures/README.md` for SHA-256 fingerprints and DFFD sources.

## Status

Target: **DF 0.47.05** Linux 64-bit (`save_version` 1716).

**Track B (world.sav):** Ironhand active fixture parses via `parse_sav_preamble()` — SAV header (13×int32 + metadata blob), gamemode/names, plant-anchored string tables @ ~0x74A8D8, entity catalog @ ~0x9D83B1. CLI `extract`, `import-db`, and `probe` accept `world.sav` paths.

| Layer | Status |
|-------|--------|
| Compression / header | Done |
| Generated raws + post-header stream | Done |
| String tables + index | Done |
| Entity civ headers (partial catalog) | Done |
| History events vector | Not yet — stats block located, event parse unsolved |
