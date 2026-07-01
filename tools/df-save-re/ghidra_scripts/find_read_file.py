# Ghidra postScript: locate read_file vtable entries for target RTTI types.
# @category DF
# @keybinding
# @menupath
# @toolbar

from ghidra.program.model.symbol import SourceType

TARGETS = [
    "history_figurest",
    "hf_profilest",
    "artistic_profilest",
    "histfig_entity_linkst",
    "history_eventst",
    "world_sitest",
    "historical_entityst",
]

strings = currentProgram.getMemory()
for name in TARGETS:
    found = findBytes(None, name.encode("ascii"), 1)
    if found:
        printf("RTTI string %s @ %s\n" % (name, found))
