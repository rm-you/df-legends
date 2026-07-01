// Ghidra postScript: find ASCII strings and print code/data references to them.
//@category DF

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.mem.Memory;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.ReferenceIterator;
import ghidra.program.model.listing.Function;

public class FindStringRefs extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] terms = getScriptArgs();
        if (terms.length == 0) {
            terms = new String[] {
                "world.dat",
                "world.sav",
                "historical figure",
                "history figure",
                "histfig",
                "Saving",
                "Loading",
                "events_death",
                "art_image"
            };
        }

        for (String term : terms) {
            println("== string " + term + " ==");
            int hits = 0;
            Memory memory = currentProgram.getMemory();
            byte[] bytes = term.getBytes("ASCII");
            Address found = memory.findBytes(currentProgram.getMinAddress(), bytes, null, true, monitor);
            while (found != null) {
                println("  found @ " + found);
                ReferenceIterator refs = currentProgram.getReferenceManager().getReferencesTo(found);
                int refCount = 0;
                while (refs.hasNext()) {
                    Reference ref = refs.next();
                    Address from = ref.getFromAddress();
                    Function fn = getFunctionContaining(from);
                    String fnName = fn == null ? "<no function>" : fn.getName() + " @ " + fn.getEntryPoint();
                    println("    ref from " + from + " in " + fnName);
                    refCount++;
                    if (refCount >= 30) {
                        println("    ... refs truncated ...");
                        break;
                    }
                }
                hits++;
                if (hits >= 50) {
                    println("  ... hits truncated ...");
                    break;
                }
                found = memory.findBytes(found.add(1), bytes, null, true, monitor);
            }
        }
    }
}
