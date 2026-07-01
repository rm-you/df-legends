// Ghidra postScript: decompile functions at addresses passed as args.
//@category DF

import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;

public class DecompileTargets extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length == 0) {
            println("usage: DecompileTargets.java <addr>...");
            return;
        }

        DecompInterface ifc = new DecompInterface();
        ifc.openProgram(currentProgram);

        for (String arg : args) {
            Address addr = toAddr(arg);
            Function fn = getFunctionContaining(addr);
            if (fn == null) {
                println("no function at " + arg);
                continue;
            }
            DecompileResults res = ifc.decompileFunction(fn, 60, monitor);
            println("=== " + fn.getName() + " @ " + fn.getEntryPoint() + " ===");
            if (res.decompileCompleted() && res.getDecompiledFunction() != null) {
                println(res.getDecompiledFunction().getC());
            } else {
                println("decompile failed: " + res.getErrorMessage());
            }
        }
    }
}
