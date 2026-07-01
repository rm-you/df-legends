# Ghidra postScript: decompile functions at supplied addresses (hex strings in args).
# @category DF

from ghidra.app.decompiler import DecompInterface

if len(getScriptArgs()) == 0:
    printf("usage: decompile_targets.py <addr>...\n")
else:
    ifc = DecompInterface()
    ifc.openProgram(currentProgram)
    for arg in getScriptArgs():
        addr = toAddr(arg)
        fn = getFunctionContaining(addr)
        if fn is None:
            printf("no function at %s\n" % arg)
            continue
        res = ifc.decompileFunction(fn, 30, monitor)
        printf("=== %s ===\n%s\n" % (fn.getName(), res.getDecompiledFunction().getC()))
