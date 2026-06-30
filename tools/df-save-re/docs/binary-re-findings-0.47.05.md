# Binary RE findings — DF 0.47.05 (`save_version` 1716)

Validated on **Namushul** fixture (`tests/fixtures/small-retired/world.dat`).

## Layout landmarks

| Region | Offset | Notes |
|--------|--------|-------|
| Preamble end | `0x881B` | After generated raws |
| String tables | `0x2A397E` | 20 sections |
| String index end | `0x2B0AF4` | 283 int32 entries |
| First entity header | `0x2F7D79` | id=0 SUBTERRANEAN_ANIMAL_PEOPLES |
| Last catalog entity | `0x51FDA0` | id=203 EVIL |
| First region block | `0x86C157` | `*START REGION SAVE*` |
| History stats echo | `0x15BEB28` | `[113118, 151, 4, 12747, …]` |
| Payload EOF | `0x2AE0005` | ~45 MB decompressed |

## History stats block (`0x15BEB28`)

| Field | Value | Hypothesis |
|-------|-------|------------|
| +0 | 113118 | max event id / event count echo |
| +4 | 151 | TBD (`events_death` or collection count) |
| +8 | 4 | TBD (relationship_event blocks, v0.47.01+) |
| +12 | 12747 | max histfig id echo |
| +24 | 12748 | next histfig id (`+1`) |

This block is **metadata**, not the start of the `world_history` stl-vectors. The `figures` pointer vector is downstream @ `0x2131bb0`.

## Historical figures (Namushul)

| Landmark | Offset | Notes |
|----------|--------|-------|
| Stats echo | `0x15BEB28` | event/death/rel/fig counter block |
| `figures` vector | `0x2131BB0` | count=12747; flags end `0x2134D80` |
| Figure bodies | `0x2134DD0` | 80-byte prefix after flags; first header id=0 |
| `events_death` vector | `0x226009C` | count=151, 95% posnull |

Header layout matches `df.history_figure.xml` through `art_count`. Bodies are variable-size (polymorphic link vectors + profile pointers); id chain 0..14+ validated via forward scan.

## Sites

- `world_site` vector is **not** a clean `count=350` posnull block in the entity→region gap.
- Site **title word indices** appear in the entity-gap + mid payload (`0x51FDA0`–`0x15BEB28`), typically as `language_name.words` runs.
- Title markers are **not** adjacent to `site_id` / `type` int fields — words appear inside larger world_data / region blobs.
- Text export titles use past-tense glue (`Bristledhollows` → BRISTLE + HOLLOW) and irregular forms (`Stolenveils` → STEAL + VEIL).
- Namushul site **345** `"The Justice of Stances"` stores **`JUST` + `STAND`** @ `0x119460f` (not `JUST`+`ICE` nor `DISTANCE`).
- Title cluster @ `0x1194000`–`0x1195000` shows ~**354-byte** stride between consecutive marker offsets (346–350).

## Irregular word-table mappings (section 8)

| Legends token | Stored words | Example site |
|---------------|--------------|--------------|
| `WINDS` | WIND CLOCK | Raywinds |
| `STANCES` | STAND | The Justice of Stances |
| `JUSTICE` | JUST | The Justice of Stances |
| `STOLE` / `STOLEN` | STEAL | Stolenveils |
| `ENTER` | ENTRY | Enterbad |

## Vectors still open

| Vector | Header count | posnull scan in history tail |
|--------|--------------|------------------------------|
| `history_event` | 113118 | No high-confidence hit |
| `historical_figure` | 12747 | **Vector @ `0x2131bb0`** (posnull score ~8.8k/20k sample); bodies @ `0x2134dd0`; death @ `0x226009c` |
| `world_site` | 350 | Marker-anchored catalog @ name table ~0x1193ae5 stride 354; posnull vector still unconfirmed |

## Site name table (Namushul cluster)

Fixed-stride records in `0x1193ae5` + `site_id_offset * 354` hold `language_name.words` runs for many late site ids (341–350). Earlier sites use scattered marker offsets in the entity→history gap.

Next step: Ghidra trace of `world_site::read_file` and `historyst::read_file` in libgraphics.so / DF 0.47.05 binary.
