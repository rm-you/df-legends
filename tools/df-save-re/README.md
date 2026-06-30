# df-save-re

Layer-1 tools for reverse-engineering Dwarf Fortress save files (Path C).

## Install

```bash
cd tools/df-save-re
pip install -e .
```

## Quick start (no legends XML required)

Confirm you have the right save and see what we can already extract:

```bash
# Fingerprint — world name, SHA-256, header counters
df-save-re validate /path/to/region1/world.dat

# Same, plus step-by-step legends export instructions
df-save-re validate /path/to/region1/world.dat --export-help

# Extract string tables, entity catalog, history landmarks
df-save-re extract /path/to/region1/world.dat
df-save-re extract /path/to/region1/world.dat --json
```

If you pass a **region folder** instead of a file, `validate` and `folder` pick `world.dat` (retired) or `world.sav` (active) automatically.

## Legends XML cross-check (optional)

Export from the **same world** as your `world.dat`:

1. Retire or abandon the fort so the region folder contains `world.dat`.
2. Main menu → Legends → select that world → press **[x]** to export.
3. DF writes `legends.xml` into the region folder.

Then:

```bash
df-save-re validate /path/to/region1/world.dat --legends-xml /path/to/region1/legends.xml
df-save-re legends-compare /path/to/region1/world.dat /path/to/region1/legends.xml
```

Matching exports should have `historical_figures ≈ max_ids[8]` and `historical_events ≈ max_ids[9]` from the DAT header. Mismatches usually mean the XML came from a different world or export session.

## Other commands

```bash
df-save-re inspect /path/to/world.dat      # compression + save_version
df-save-re folder /path/to/region1         # inventory save folder
df-save-re legends-scan /path/to/world.dat --full
df-save-re probe /path/to/world.dat --json
```

## Test fixtures

Fixtures are gitignored. From `tools/df-save-re`:

```bash
python3 scripts/fetch_fixtures.py
python3 -m pytest
```

See `tests/fixtures/README.md` for SHA-256 fingerprints and DFFD sources.

## Status

Target: **DF 0.47.05** Linux 64-bit (`save_version` 1716).

| Layer | Status |
|-------|--------|
| Compression / header | Done |
| Generated raws + post-header stream | Done |
| String tables + index | Done |
| Entity civ headers (partial catalog) | Done |
| History events vector | Not yet — stats block located, event parse unsolved |
