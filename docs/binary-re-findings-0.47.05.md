# Binary RE Findings — DF 0.47.05 Linux 64-bit

Preemptive reverse-engineering performed without a `world.dat` sample. All virtual addresses (VA) assume the stock Bay12 binary loaded at base **0x400000**.

## Key discovery: `file_compressorst` lives in `libgraphics.so`

The main simulation binary **`Dwarf_Fortress` is stripped**, but **`libgraphics.so` is not stripped**. All primitive I/O is implemented there:

| Symbol | VA in libgraphics.so |
|--------|----------------------|
| `file_compressorst::read_file(string&)` | `0xdb670` |
| `file_compressorst::read_file(void*, long)` | `0xdb570` |
| `file_compressorst::write_file(string&)` | `0xdb3b0` |
| `file_compressorst::open_file` | `0xdb7a0` |
| `file_compressorst::load_new_in_buffer` | `0xdb420` |

**Ghidra tip:** import **both** ELFs. When you see PLT calls from `Dwarf_Fortress`, jump to the implementation in `libgraphics.so` for exact byte-level I/O behavior (matches open-source `g_src/files.cpp`).

## PLT stubs in Dwarf_Fortress

| PLT | VA |
|-----|-----|
| `read_file(raw)` | `0x4051B0` |
| `read_file(string)` | `0x4056B0` |
| `write_file(raw)` | `0x405650` |
| `write_file(string)` | `0x405330` |

Call site counts (static scan): ~221 `read_file(string)`, ~232 `write_file(string)`.

## Region block magic strings (rodata)

| String | File offset | VA |
|--------|-------------|-----|
| `*START REGION SAVE*` | `0x12059e6` | `0x16059e6` |
| `*START REGION DIM SAVE*` | `0x12059fa` | `0x16059fa` |
| `*START REGION MAP SAVE*` | `0x1205a12` | `0x1605a12` |
| `*START REGION GEOLOGY SAVE*` | `0x1205a2a` | `0x1605a2a` |
| `*START REGION SUBREGION SAVE*` | `0x1205a46` | `0x1605a46` |

These are **written into saves** as length-prefixed strings, not compared via inline rodata pointers (no LEA xrefs found — validation reads from file then compares to temporary `std::string`).

## Catalogued deserialize functions

### 1. `BlockWithByteVector` reader @ `0x893AC0`

Disassembly pattern:

```
read_file(string)  -> [rbp+0]     ; magic / label
read_file(int32)   -> [rbp+8]
read_file(int32)   -> stack       ; count
if count > 0: allocate [rbp+0x10], read count bytes
```

**Hypothesis:** region sub-block wrapper (magic + metadata + raw blob). Implemented as `BlockWithByteVector` in `df_save_re/deserializers/primitives.py`.

### 2. `MultiStringRecord0x50` @ read `0x5DA000`, write `0x5D9EF0`

Paired read/write — high confidence layout:

| Offset | Type |
|--------|------|
| 0 | int16 |
| 8 | string |
| 0x10 | int32 |
| 0x18 | string |
| 0x20 | string |
| 0x28 | string |
| 0x30 | string |
| 0x40 | int16 |
| 0x42 | int16 |
| 0x44 | int16 |
| 0x48 | int32 |
| 0x4c | int32 |

Five consecutive strings suggest **generated raw object** or **entity definition** bundle, not the region header itself.

### 3. String table vector loader @ `0x410600`

```
read int32 count
for each entry (0x20-byte object):
    read string @+8
    read int32 @+0x10, +0x14, +0x18
read int32 @ parent+0x168
```

**Hypothesis:** one section of the post-header string table (Andux documents 19–20 sections).

### 4. World header @ payload offset 0 (HYPOTHESIS)

From [Andux WORLD.DAT research](https://dwarffortresswiki.org/index.php/User:Andux/Format_research/WORLD.DAT):

- int16 + 23× int32 ID counters + optional name + world name string
- Implemented as `WorldHeaderHypothesis` — **must validate** when `world.dat` arrives

Expected validation: `unk9_max_histfig` ≈ max historical figure ID, `unk10_max_event` ≈ max event ID (compare via DFHack).

## Polymorphic history events

155 distinct `history_event_*` subclasses (RTTI names extracted to `data/df_47_05_history_event_types.txt`).

Each will have its own `read_file(file_compressorst&, loadversion)` with:

1. Base `history_event` fields (year, id, coords, entity refs — see `df.history.xml` in df-structures 0.47.05-r8)
2. Subclass-specific tail fields
3. Version branches on `loadversion` (1716 for 0.47.05)

**RE strategy for events:** start with types that also appear in vanilla `legends.xml` export (created_site, hf_died, war_*, etc.) — cross-check field values against exported XML.

## Ghidra session checklist

1. Import `Dwarf_Fortress` + `libgraphics.so`
2. Go to **`0x893AC0`** — set function name `region_block_read`
3. Go to **`0x410600`** — set name `string_table_section_load`
4. Search for xrefs to **`data/save/current/world.dat`** (`VA 0x1549474`) — world load entry
5. From world load, identify call sequence: header → generated raws → string tables → world_data
6. For one `history_event_*` vtable, locate `read_file` override via Ghidra type hierarchy or RTTI name search

## When world.dat arrives

```bash
df-save-re inspect tests/fixtures/world.dat
df-save-re probe tests/fixtures/world.dat --json
```

`probe` will:

1. Decompress payload
2. Try `WorldHeaderHypothesis` at offset 0
3. Scan for region markers
4. Attempt `BlockWithByteVector` parse at each marker

Compare probe output ID counters to DFHack:

```bash
./dfhack -g   # load save, then in gdb break after world load
# or: lua -e 'print(#df.global.world.history.events)' in dfhack console
```

## Tools

```bash
python tools/df-save-re/scripts/analyze_binary.py \
  research/df_extract/df_linux/libs/Dwarf_Fortress
```
