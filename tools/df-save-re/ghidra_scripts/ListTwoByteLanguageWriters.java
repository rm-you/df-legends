// Ghidra postScript: list language-name writers with many 2-byte primitive writes.
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

public class ListTwoByteLanguageWriters extends GhidraScript {
    private int count(String haystack, String needle) {
        int total = 0;
        int pos = 0;
        while ((pos = haystack.indexOf(needle, pos)) >= 0) {
            total++;
            pos += needle.length();
        }
        return total;
    }

    @Override
    public void run() throws Exception {
        Set<Function> functions = new HashSet<Function>();
        ReferenceIterator refs = currentProgram.getReferenceManager().getReferencesTo(toAddr("1400021b0"));
        while (refs.hasNext()) {
            Function fn = getFunctionContaining(refs.next().getFromAddress());
            if (fn != null) functions.add(fn);
        }

        DecompInterface ifc = new DecompInterface();
        ifc.openProgram(currentProgram);
        println("2-byte language writer candidates:");
        for (Function fn : functions) {
            DecompileResults res = ifc.decompileFunction(fn, 60, monitor);
            if (!res.decompileCompleted() || res.getDecompiledFunction() == null) continue;
            String c = res.getDecompiledFunction().getC();
            int primitive = count(c, "FUN_1405bb7c0");
            int language = count(c, "FUN_1400021b0");
            int twobyte = count(c, ",2);");
            if (primitive >= 14 && twobyte >= 4) {
                String first = c.replace('\n', ' ');
                if (first.length() > 900) first = first.substring(0, 900);
                println(
                    "  primitive=" + primitive +
                    " language=" + language +
                    " twobyte=" + twobyte +
                    " " + fn.getName() +
                    " @ " + fn.getEntryPoint()
                );
                println("    " + first);
            }
        }
    }
}
