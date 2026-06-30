# Save fixtures for df-save-re tests

Binary saves are **not committed** (see repo `.gitignore`). Integration tests skip when fixtures are missing.

## Layout

```
fixtures/
├── README.md
├── small-retired/
│   └── world.dat          # Compact 0.47.05 world (Namushul) — fast default fixture
│   └── legends.xml        # Optional — legends export for cross-check (not in repo)
├── waterlures-retired/
│   └── world.dat          # Larger retired fort world (Minbazkar)
└── ironhand-active/
    └── world.sav          # Track B — optional active save
```

## Obtain fixtures

From `tools/df-save-re`:

```bash
python3 scripts/fetch_fixtures.py          # small + Waterlures
python3 scripts/fetch_fixtures.py --all    # + Ironhand world.sav
```

Or set `DF_SAVE_RE_FIXTURES` to a folder containing the subdirs above.

### Manual sources

| Fixture | Source |
|---------|--------|
| Small `world.dat` (Namushul) | Community file (~8 MB compressed); fetched by script or copy to `small-retired/world.dat` |
| Waterlures `world.dat` | [DFFD #17772](https://dffd.bay12games.com/file.php?id=17772) |
| Ironhand `world.sav` | [DFFD #15468](https://dffd.bay12games.com/file.php?id=15468) |

If the Discord CDN URL for the small world expires, place any verified copy at
`small-retired/world.dat` (SHA-256: `f9cee2642831252bcb09c71cc4f10450505e174abc0aa6806a1f9c79745d8714`)
or set `SMALL_WORLD_DAT_URL`.

## Validated header values (save_version 1716)

Both worlds use **50 int32 ID counters** after the leading int16.

| World | Name | Header bytes | `max_ids[8]` (histfig) | `max_ids[9]` (events) |
|-------|------|--------------|------------------------|----------------------|
| Small | Namushul | 228 (`0xE4`) | 12,747 | 113,118 |
| Waterlures | Minbazkar | 229 (`0xE5`) | 46,661 | 531,051 |

After the header, generated raws begin with `int32` count **42**.

## Legends XML cross-check (when available)

**Start here if export is failing:**

```bash
df-save-re validate tests/fixtures/small-retired/world.dat --export-help
```

That prints vanilla + DFHack steps and the expected event/figure counts from the save header.

Export from Legends mode ([x] in 0.47) or DFHack `exportlegends` for the **same world** as your `world.dat`.
Place alongside the save, e.g. `tests/fixtures/small-retired/legends.xml`, then:

```bash
df-save-re validate tests/fixtures/small-retired/world.dat \
  --legends-xml tests/fixtures/small-retired/legends.xml
df-save-re legends-compare tests/fixtures/small-retired/world.dat tests/fixtures/small-retired/legends.xml
```

This compares world name and event/figure counts against `max_ids[8]` / `max_ids[9]` in the
DAT header — useful while RE'ing `world_history` location.

Scan string-table and history-anchor landmarks:

```bash
df-save-re legends-scan tests/fixtures/small-retired/world.dat --full
df-save-re extract tests/fixtures/small-retired/world.dat --json
df-save-re legends-scan tests/fixtures/small-retired/world.dat --full --legends-xml tests/fixtures/small-retired/legends.xml
```
