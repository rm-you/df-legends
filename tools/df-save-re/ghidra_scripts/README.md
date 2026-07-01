# Ghidra / RE helper scripts

Gitignored automation for Dwarf Fortress 0.47.05 save-path RE.

- `rtti_scan.py` — radare2 RTTI class dump (no Ghidra required)
- `find_read_file.py` — Ghidra postScript stub: locate `read_file` vtable slots
- `decompile_targets.py` — Ghidra postScript stub: decompile named targets
- `parse_read_file.py` — parse decompiler output into field-read sequences

Run headless import (Windows):

```cmd
set GHIDRA=C:\Users\rm_yo\Downloads\ghidra_12.1.2_PUBLIC\support\analyzeHeadless.bat
%GHIDRA% tools\df-save-re\ghidra DFProject -import "C:\Users\rm_yo\Downloads\df_47_05_win\Dwarf Fortress.exe"
```

## PyGhidra alternative

If you prefer Python over `analyzeHeadless.bat`, install the RE extras from `tools/df-save-re` (`pip install -e ".[re]"`), set `GHIDRA_INSTALL_DIR`, then run scripts with:

```powershell
pyghidra path\to\Dwarf_Fortress.exe ghidra_scripts\find_read_file.py
```

See the parent [README](../README.md#pyghidra-binary-re) for setup details.
