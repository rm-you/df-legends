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

## Optional legends text cross-check

If you exported from Legends mode with **[p]** (Map/Gen information), you can confirm the save matches:

```bash
df-save-re validate /path/to/world.dat --legends-text /path/to/region3-...-world_history.txt
# or pass the DF root folder containing all p-key .txt files:
df-save-re validate /path/to/world.dat --legends-text /path/to/df-install/
```

This checks world name (and DF version when `world_gen_param.txt` is present). Text exports are **optional** — the project does not require or generate them in CI.

Press **[p]** in Legends mode, not **[x]**. The `[p]` files land in your DF install directory.

```bash
df-save-re validate /path/to/world.dat --export-help   # full instructions
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

| Layer | Status |
|-------|--------|
| Compression / header | Done |
| Generated raws + post-header stream | Done |
| String tables + index | Done |
| Entity civ headers (partial catalog) | Done |
| History events vector | Not yet — stats block located, event parse unsolved |
