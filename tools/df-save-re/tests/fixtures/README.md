# Save fixtures for df-save-re tests

Binary saves are **not committed** (see repo `.gitignore`). Integration tests skip when fixtures are missing.

## Layout

```
fixtures/
├── README.md
├── waterlures-retired/
│   └── world.dat          # Track A — retired fort, DF 0.47.05 (save_version 1716)
└── ironhand-active/
    └── world.sav          # Track B — optional active save (same version)
```

## Obtain fixtures

From `tools/df-save-re`:

```bash
python3 scripts/fetch_fixtures.py
```

Or set `DF_SAVE_RE_FIXTURES` to a folder that contains `waterlures-retired/world.dat`.

Manual download (DFFD, no registration required):

| Fixture | URL |
|---------|-----|
| Waterlures retired `world.dat` | https://dffd.bay12games.com/file.php?id=17772 |
| Ironhand active `world.sav` | https://dffd.bay12games.com/file.php?id=15468 |

Extract so `world.dat` / `world.sav` paths match the layout above.

## Expected header values (Waterlures)

Validated against decompressed payload:

- World name string: `Minbazkar` (world name; fort was “Waterlures”)
- ID counter `[8]` ≈ max historical figure id
- ID counter `[9]` ≈ max history event id
- Header size: **229 bytes** (50×int32 + trailing fields)
