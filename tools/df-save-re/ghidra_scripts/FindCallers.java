// Ghidra postScript: find functions that call a given target address.
//@category DF

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.InstructionIterator;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.ReferenceIterator;
import ghidra.program.model.symbol.ReferenceManager;

public class FindCallers extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length == 0) {
            println("usage: FindCallers.java <target_addr>...");
            return;
        }
        ReferenceManager rm = currentProgram.getReferenceManager();
        for (String arg : args) {
            Address tgt = toAddr(arg);
            println("=== callers of " + arg + " ===");
            if (tgt == null) { println("  bad addr"); continue; }
            ReferenceIterator it = rm.getReferencesTo(tgt);
            java.util.HashSet<String> seen = new java.util.HashSet<>();
            while (it.hasNext()) {
                Reference r = it.next();
                if (!r.getReferenceType().isCall()) continue;
                Address from = r.getFromAddress();
                Function caller = getFunctionContaining(from);
                String key = caller != null
                    ? caller.getName() + " @ " + caller.getEntryPoint() + " (from " + from + ")"
                    : "ext from " + from;
                if (seen.add(key)) println("  <- " + key);
            }
        }
    }
}
