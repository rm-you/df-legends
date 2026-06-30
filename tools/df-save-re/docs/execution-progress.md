# Plan execution progress

Binary-only extract is now enforced; text exports are verify-only.

## Completed

| Phase | Deliverable | Status |
|-------|-------------|--------|
| 0 | `docs/coverage-matrix.md` | done |
| 0 | `extract_legends_snapshot()` — no text params | done |
| 0 | `tests/test_binary_only_extract.py` | done |
| 0 | Verify `source` field (binary/text/compare) | done |
| 1 | `PayloadRegion` + `layout.regions` | done |
| 1 | `vector_anchor.py` | done |
| 1 | `body_skipper.py` (XML-driven skip skeleton) | done |
| 3 | `site_discovery.py` — binary header scan | partial (~209/350 on Namushul) |

## Next (critical path)

1. **Sites 350/350** — world_site vector anchor or id-field probe + name bind (no text)
2. **Site populations** — `world_site` body skipper (`unk_1.inhabitants`)
3. **Entity bodies** — worship lists, positions (Phase 2)
4. **Histfig body walk** — full 12,747 catalog (Phase 4)
5. **Rulers from binary** — `entity_position_assignment` → figure id (Phase 5)
6. **Events vector** — Ghidra + polymorphic skip (Phase 6)

## Verify today (Namushul, binary-only extract)

- PASS: world header, entities, events count, figures vector, death vector
- PENDING: site count (binary ~209 vs 350), rulers (binary not implemented)
- TEXT checks: site/history export parse sanity (verify-only)
