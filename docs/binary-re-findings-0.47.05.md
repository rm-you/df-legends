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

### 4. World header @ payload offset 0 (validated on Waterlures 0.47.05)

From [Andux WORLD.DAT research](https://dwarffortresswiki.org/index.php/User:Andux/Format_research/WORLD.DAT), extended for 0.47.05:

- int16 (0) + **50× int32** ID counters + has_name byte + optional name + post fields + world name string
- Andux originally listed 23 counters for older saves; **1716 uses 50** (fixture: Waterlures `world.dat`)
- World name on Waterlures: `Minbazkar` (229 bytes from payload start to end of name string)
- Implemented as `WorldHeaderHypothesis` with `TARGET_WORLD_HEADER_ID_COUNT = 50`

Expected validation: `max_ids[8]` ≈ max historical figure ID, `max_ids[9]` ≈ max event ID (compare via DFHack).

### 5. Generated raws (validated 0.47.05)

Immediately after the world header:

```
int32 section_count     # 42 on Waterlures + Namushul fixtures
repeat section_count:
    int32 string_count
    string_count × DfString   # generated MATERIAL/ITEM/CREATURE/INTERACTION chunks
int32 post_raws_field       # 0 on both fixtures — string-table bridge TBD
```

Implemented as `GeneratedRawsBlock` in `deserializers/world_dat.py`. Preamble ends with
`post_raws_field` (0 on fixtures); Namushul preamble = **0x881b** bytes.

### 6. String tables (validated Namushul + Waterlures 0.47.05)

After a ~2.2 MB generated-raw / entity blob on Namushul, short-name tables appear as:

```
repeat ~21 sections:
    int32 entry_count
    entry_count × DfString   # int16 length + bytes — same as file_compressorst string
```

First section is **materials** (265 entries on both fixtures: `IRON` … `ADAMANTINE` … soils).
Located via `IRON` entry signature; Namushul block @ **`0x2a397e`**, ends @ **`0x2b0684`** (20 sections).

Implemented in `deserializers/string_tables.py` (`StringTableBlock`, `find_string_table_block`).

### 7. Post-header raw stream (validated Namushul)

After `post_raws_field`:

```
int32 lead_field        # 426 Namushul
repeat until EOF/error:
    int32 string_count
    string_count × DfString
```

~427 sections / 7541 strings on Namushul, ending ~`0x86d93`. Still generated ITEM/CREATURE
raw chunks — not short string-table names.

### 8. world_history anchor (heuristic)

Candidate @ **`0x15beb28`**: int32 event count (113,118) with histfig count (12,747) within
64 bytes and posnull-like vector prefix. Needs confirmation via legends XML + event parse.

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

## Save path construction (VA ~0x995140)

The game builds save file paths at runtime:

```
"data/save/" + <region_name> + "/world.sav"   // active fort/adventure
"data/save/" + <region_name> + "/world.dat"   // retired world (append ".dat")
```

Discovered by decoding string constants in `open_file` call chain @ `0x995198`.

## Polymorphic object factory (VA ~0x40ebc0 / ~0x40f878)

Pointer vectors in saves use `file_compressorst::load_posnull_pointer()`:

| Step | Behavior |
|------|----------|
| 1 | Optional byte blob read (context-dependent) |
| 2 | `load_posnull_pointer()` — if false, store null pointer |
| 3 | If true, `operator new(0x40)` + call **`0x40ebc0`** (likely `history_event::read_file` or similar) |
| 4 | Version branches on `loadversion` in `r13d` (e.g. `cmp $0x5e4`, `cmp $0x5f9`) |

PLT address for posnull: **`0x4058A0`**

## world_history layout (df-structures)

From `df.history.xml` struct `world_history`:

```
events                    stl-vector<history_event*>
events_death              stl-vector<history_event*>
relationship_events       stl-vector<relationship_event*>  (since 0.47.01)
relationship_event_supplements
figures                   stl-vector<historical_figure*>
event_collections         ...
eras                      stl-vector<history_era*>
...
```

## history_event base fields (df-structures)

From `df.history_event.xml` class-type `history_event`:

| Field | Type |
|-------|------|
| year | int32 |
| seconds | int32 (season_count) |
| flags | df-flagarray |
| id | int32 (global_id) |

Subclasses add fields after base in their `read_file` vmethod, e.g. `history_event_created_sitest`:

- civ, site_civ, resident_civ_id, site, builder_hf (all int32)

## df-structures reference copies

Local copies for offline RE cross-reference:

- `data/df-structures/df.history_event.xml`
- `data/df-structures/df.history_figure.xml`
- `data/df-structures/df.history.xml`
- `data/df-structures/df.world.xml`

Query field layouts:

```bash
df-save-re fields history_event
df-save-re fields history_event_created_sitest
```

## When world.dat arrives

```bash
df-save-re inspect tests/fixtures/world.dat
df-save-re probe tests/fixtures/world.dat --json
df-save-re hexdump tests/fixtures/world.dat -o 0 -l 512 --scan-ids
df-save-re fields history_event
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
