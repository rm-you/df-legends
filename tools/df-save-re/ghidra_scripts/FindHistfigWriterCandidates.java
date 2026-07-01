// Ghidra postScript: find save-side historical_figure writer candidates.
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

public class FindHistfigWriterCandidates extends GhidraScript {
    private int count(String haystack, String needle) {
        int total = 0;
        int pos = 0;
        while ((pos = haystack.indexOf(needle, pos)) >= 0) {
            total++;
            pos += needle.length();
        }
        return total;
    }

    private void collectCallers(Address target, Set<Function> functions) {
        ReferenceIterator refs = currentProgram.getReferenceManager().getReferencesTo(target);
        while (refs.hasNext()) {
            Reference ref = refs.next();
            Function fn = getFunctionContaining(ref.getFromAddress());
            if (fn != null) functions.add(fn);
        }
    }

    @Override
    public void run() throws Exception {
        Set<Function> functions = new HashSet<Function>();
        collectCallers(toAddr("1400021b0"), functions); // language_name writer
        collectCallers(toAddr("1405bb630"), functions); // int/vector writer used like flagarray

        DecompInterface ifc = new DecompInterface();
        ifc.openProgram(currentProgram);
        println("histfig writer candidates:");
        for (Function fn : functions) {
            DecompileResults res = ifc.decompileFunction(fn, 60, monitor);
            if (!res.decompileCompleted() || res.getDecompiledFunction() == null) continue;
            String c = res.getDecompiledFunction().getC();
            int primitive = count(c, "FUN_1405bb7c0");
            int language = count(c, "FUN_1400021b0");
            int vector = count(c, "FUN_1405bb630");
            int twobyte = count(c, ",2);");
            if (language > 0 && vector > 0 && primitive >= 12) {
                String first = c.replace('\n', ' ');
                if (first.length() > 260) first = first.substring(0, 260);
                println(
                    "  primitive=" + primitive +
                    " language=" + language +
                    " vector=" + vector +
                    " twobyte=" + twobyte +
                    " " + fn.getName() +
                    " @ " + fn.getEntryPoint()
                );
                println("    " + first);
            }
        }
    }
}
