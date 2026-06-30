# Legends database schema

Per-fortress SQLite files hold everything we extract from `world.dat`. One database per imported save; the filename is derived from the world/fortress name (e.g. `namushul.sqlite`).

## Workflow

1. Decompress and parse `world.dat` → `LegendsSnapshot`
2. Create `data/legends/databases/<slug>.sqlite`
3. Apply Alembic migration `001_initial_core`
4. Persist snapshot rows via `persist_snapshot()`
5. Register the DB in `data/legends/registry.json` for the future explorer UI

CLI:

```bash
python3 -m df_save_re.cli import-db tests/fixtures/small-retired/world.dat
python3 -m df_save_re.cli list-legends
```

## Python extract types → SQL tables

| Extract type | SQL table(s) | Notes |
|--------------|--------------|-------|
| `DatPreamble` / header | `world`, `world_header_counter` | Identity + all `max_ids` slots |
| `StringTableBlock` | `string_table_section` | Section summaries only (not full string lists) |
| `HistoricalEntityHeader` + `ResolvedEntityName` | `historical_entity` | Civ catalog with resolved names |
| `WorldSiteCatalog` | `world_site`, `site_catalog_meta` | Binary site discovery |
| `HistoricalFigureCatalog` | `historical_figure_catalog_meta`, `historical_figure` | Vector anchor + parsed headers |
| `HistoryEventsCatalog` | `history_events_meta` | Event layer anchors (not individual events yet) |
| `HistoryStatsBlock` | `history_stats_block` | Counter echo block |
| `WorldLayoutLandmarks` | `layout_landmark`, `layout_region` | Payload region map |
| `VectorAnchor` (RE) | `vector_anchor` | Located posnull vectors |
| `LegendsSnapshot.notes` | `extraction_run`, `extraction_note` | Provenance / debug trail |

## Planned tables (future migrations)

- `history_event` — polymorphic event bodies once vector walk lands
- `entity_position`, `entity_position_assignment` — rulers and offices
- `site_population` — pops from binary (replacing text export)
- `artifact`, `written_content`, `collection`
- `historical_era`

## Query examples

```sql
-- Sites owned by a civ
SELECT site_id, display_name, pos_x, pos_y
FROM world_site
WHERE civ_id = 42
ORDER BY display_name;

-- Named civilizations
SELECT entity_id, resolved_name, entity_class
FROM historical_entity
WHERE resolved_name IS NOT NULL;

-- Histfig sample with names
SELECT figure_id, name_display, civ_id, appeared_year
FROM historical_figure
WHERE name_display != ''
LIMIT 20;
```

## Docker / explorer (planned)

A future `docker-compose` service will:

1. Accept uploaded save files
2. Run `import_world_dat()`
3. Expose `registry.json` + per-fortress SQLite files to a read-only web UI

The registry schema is intentionally simple JSON so the UI can list legends without opening each SQLite file.
