# Legends coverage matrix — binary extract vs text verify

Exports (`*-world_history*`, `*-world_sites_and_pops*`, `*-world_gen_param*`) are **verify-only**.
`extract_legends_snapshot()` must not read them.

| Field | Text export | Binary extract | Verify check |
|-------|-------------|----------------|--------------|
| World name | yes | PASS | `world_header.world_name` |
| DF version | world_gen | PASS | `world_header.df_version` |
| Named civ count/names | history | PASS | `entities.*` |
| Subterranean peoples | history | PASS | `entities.subterranean_civ_count` |
| Civ worship lists | history | open | TBD `entities.worship_lists` |
| Site count (350) | sites | partial → target PASS | `sites.site_count` |
| Site name/type/civ/owner/coords | sites | partial | `sites.world_site_catalog` |
| Site populations | sites | open | TBD `sites.populations` |
| Ruler count (71) | history | open (binary positions) | `historical_figures.ruler_entries` |
| Ruler name/position/civ/reign | history | open | TBD |
| Event count (113118) | header echo | PASS (stats) | `world_history.historical_event_count` |
| Event records | not in export | open | TBD |
| Histfig count (12747) | header echo | PASS (vector) | `world_history.historical_figure_count` |
| Histfig records | not in export | open | body walk |
| Artifacts | not in export | open | blocked |

Status key: **PASS** = binary matches export today; **partial** = count or subset; **open** = not yet from binary.
