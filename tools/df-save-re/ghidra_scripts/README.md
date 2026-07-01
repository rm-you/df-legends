# Ghidra / RE helper scripts

Repeatable RE pipeline for the Dwarf Fortress 0.47.05 save path. These scripts
**are committed to git** (they are the RE pipeline); only the 630MB Ghidra
project itself is gitignored at `tools/df-save-re/ghidra/`.

> Read [`../../AGENTS.md`](../../AGENTS.md) first for paths, the goal, and
> where the RE results are stored.

## Canonical scripts (the pipeline)

Java postScripts run via `analyzeHeadless.bat` with `-noanalysis` on the
existing `DFProject` (delete stale `*.lock`/`*.lock~` first):

- `DecompileWithCallees.java` — decompiles given addresses, writes one
  `<addr>.c` per function (header = name + direct callees) into
  `../ghidra_decompiles/`, and emits `index.json`
  (`addr/name/entry/callees/decompile_file`). This is the canonical
  machine-readable function map.
- `FindCallers.java` — xref callers of an address (call refs only).
- `EnumerateEventVtables.java` — walks the events factory's (`FUN_14070b7a0`)
  data refs and dumps each event subclass vtable's slots
  `[0x0]` dtor / `[0x100]` / `[0x118]` write_file / `[0x120]` read_file.

Older exploratory scripts (still useful for one-off tasks):

- `rtti_scan.py` — radare2 RTTI class dump (no Ghidra required)
- `find_read_file.py` — locate `read_file` vtable slots
- `decompile_targets.py` / `DecompileTargets.java` — decompile named targets
- `parse_read_file.py` — parse decompiler output into field-read sequences

## Headless import (Windows)

```cmd
set GHIDRA=C:\Users\rm_yo\Downloads\ghidra_12.1.2_PUBLIC\support\analyzeHeadless.bat
%GHIDRA% tools\df-save-re\ghidra DFProject -import "C:\Users\rm_yo\Downloads\df_47_05_win\Dwarf Fortress.exe"
```

Run a postScript on the existing project (no re-analysis; splat address arrays
in PowerShell with `@ADDRS` so they aren't collapsed into one quoted arg):

```powershell
$GHIDRA = "C:\Users\rm_yo\Downloads\ghidra_12.1.2_PUBLIC\support\analyzeHeadless.bat"
& $GHIDRA tools\df-save-re\ghidra DFProject -noanalysis -process "Dwarf Fortress.exe" `
  -postScript DecompileWithCallees.java tools\df-save-re\ghidra_decompiles @ADDRS
```

## Output

Decompiled C + `index.json` land in `../ghidra_decompiles/` and are committed
(the canonical function map other agents read). See `FUNCTIONS.md` for the
curated human-readable summary.

## PyGhidra alternative

If you prefer Python over `analyzeHeadless.bat`, install the RE extras from
`tools/df-save-re` (`pip install -e ".[re]"`), set `GHIDRA_INSTALL_DIR`, then:

```powershell
pyghidra path\to\Dwarf_Fortress.exe ghidra_scripts\find_read_file.py
```

See the parent [README](../README.md#pyghidra-binary-re) for setup details.
