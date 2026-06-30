# df-legends

Tools for extracting data from **Dwarf Fortress** game save files and **legends** exports, then using that data to build our own visualization and exploration system.

## Target version

**Dwarf Fortress 0.47.05** (Linux 64-bit, `save_version` **1716**).

All binary RE, structure layouts, and validation are scoped to this release. Saves from other DF versions will not parse correctly until separately reverse-engineered.

## Approach

We are pursuing **Path C**: a native save-file parser built by reverse-engineering the DF binary, so legends-style world history can be explored without running the game.

See [docs/path-c-save-reverse-engineering.md](docs/path-c-save-reverse-engineering.md) for the full RE methodology.

## Tools (Layer 1)

```bash
cd tools/df-save-re && pip install -e .
df-save-re inspect /path/to/region1/world.dat
df-save-re scan /path/to/region1/world.dat
```

Layer 1 handles save headers and zlib decompression. Layer 2 hypothesis deserializers are in progress — see `docs/binary-re-findings-0.47.05.md`.

## Reference data

- `data/df_47_05_history_event_types.txt` — 155 `history_event_*` RTTI type names from the 0.47.05 binary
