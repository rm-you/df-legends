// Ghidra postScript: decompile flagarray callers and search for historical_figure-like offset patterns.
//@category DF

import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.ReferenceIterator;

import java.util.HashSet;
import java.util.Set;

public class FindHistfigLikeReaders extends GhidraScript {
    @Override
    public void run() throws Exception {
        Address flagarray = toAddr("140002380");
        Set<Function> fns = new HashSet<Function>();
        ReferenceIterator refs = currentProgram.getReferenceManager().getReferencesTo(flagarray);
        while (refs.hasNext()) {
            Reference ref = refs.next();
            Function fn = getFunctionContaining(ref.getFromAddress());
            if (fn != null) {
                fns.add(fn);
            }
        }

        DecompInterface ifc = new DecompInterface();
        ifc.openProgram(currentProgram);

        println("histfig-like flagarray readers:");
        for (Function fn : fns) {
            DecompileResults res = ifc.decompileFunction(fn, 60, monitor);
            if (!res.decompileCompleted() || res.getDecompiledFunction() == null) {
                continue;
            }
            String c = res.getDecompiledFunction().getC();
            int score = 0;
            if (c.contains("FUN_1405bba90(param_2,param_1,2)") || c.contains("FUN_1405bba90(param_2,(longlong)param_1,2)")) score += 3;
            if (c.contains("+ 2,2)")) score += 2;
            if (c.contains("+ 4,2)")) score += 2;
            if (c.contains("+ 6,2)")) score += 2;
            if (c.contains("+ 8,4)")) score += 2;
            if (c.contains("+ 0xc,4)")) score += 2;
            if (c.contains("+ 0x10,4)")) score += 2;
            if (c.contains("+ 0x14,4)")) score += 1;
            if (c.contains("+ 0x18,4)")) score += 1;
            if (c.contains("+ 0x1c,4)")) score += 1;
            if (c.contains("+ 0x20,4)")) score += 1;
            if (c.contains("+ 0x24,4)")) score += 1;
            if (c.contains("+ 0x28,4)")) score += 1;
            if (c.contains("+ 0x2c,4)")) score += 1;
            if (c.contains("+ 0x30,4)")) score += 1;
            if (c.contains("+ 0x34,4)")) score += 1;
            if (c.contains("FUN_140002380")) score += 2;
            if (score >= 10) {
                println("score=" + score + " " + fn.getName() + " @ " + fn.getEntryPoint());
                String[] lines = c.split("\\n");
                for (int i = 0; i < lines.length && i < 90; i++) {
                    String line = lines[i];
                    if (line.contains("FUN_1405bba90") || line.contains("FUN_140002380")) {
                        println("  " + line.trim());
                    }
                }
            }
        }
    }
}
