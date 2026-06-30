# df-save-re

Layer-1 tools for reverse-engineering Dwarf Fortress save files (Path C).

## Install

```bash
cd tools/df-save-re
pip install -e .
```

## Usage

Inspect a save file header and compression blocks:

```bash
df-save-re inspect /path/to/region1/world.dat
```

Decompress to raw payload bytes:

```bash
df-save-re decompress /path/to/region1/world.dat -o /tmp/world.payload
```

Scan decompressed payload for known block markers and RTTI type names:

```bash
df-save-re scan /path/to/region1/world.dat
```

## Status

- Layer 1 (file envelope + zlib blocks): implemented
- Layer 2 (typed deserialization): not yet — requires Ghidra RE against `Dwarf_Fortress`

Target binary: DF 0.47.05 Linux 64-bit (`save_version` 1716).
