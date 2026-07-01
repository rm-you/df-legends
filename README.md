# df-legends

Tools for extracting data from **Dwarf Fortress** game save files and **legends** exports, then using that data to build our own visualization and exploration system.

## Target version

**Dwarf Fortress 0.47.05** (Windows `Dwarf Fortress.exe`, `save_version` **1716**).

All binary RE, structure layouts, and validation are scoped to this release. Saves from other DF versions will not parse correctly until separately reverse-engineered.

## Where to start (agents)

**Read [`AGENTS.md`](AGENTS.md) first** — it has the goal, all critical paths
(DF binary, Ghidra, radare2), where work history is stored, and the
definitive reverse-engineered save/load findings. Then [`FUNCTIONS.md`](FUNCTIONS.md)
and the decompiled C in [`tools/df-save-re/ghidra_decompiles/`](tools/df-save-re/ghidra_decompiles/).
The chronological attempt log is [`ATTEMPTS.md`](ATTEMPTS.md).

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

## Binary RE (PyGhidra)

For Ghidra-backed analysis of the DF binary, install the optional RE extras and point PyGhidra at your Ghidra install:

```bash
cd tools/df-save-re && pip install -e ".[re]"
```

```powershell
# Windows — set once per shell (or add to your user environment)
$env:GHIDRA_INSTALL_DIR = "C:\path\to\ghidra_12.1.2_PUBLIC"
pyghidra   # drops into a Python REPL with the Ghidra API
```

Requires **Java 17+** and a local **Ghidra** install (tested with 12.1.2). See [tools/df-save-re/README.md](tools/df-save-re/README.md) and [tools/df-save-re/ghidra_scripts/README.md](tools/df-save-re/ghidra_scripts/README.md) for headless scripts and project setup.

## Reference data

- `data/df_47_05_history_event_types.txt` — 155 `history_event_*` RTTI type names from the 0.47.05 binary
