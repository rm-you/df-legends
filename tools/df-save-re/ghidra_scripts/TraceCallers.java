// Ghidra postScript: recursively trace callers of target function addresses.
//@category DF

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.ReferenceIterator;

import java.util.HashSet;
import java.util.Set;

public class TraceCallers extends GhidraScript {
    private void trace(Address addr, int depth, int maxDepth, Set<String> seen) throws Exception {
            Function callee = getFunctionContaining(addr);
            String calleeName = callee == null ? "<data/no function>" : callee.getName() + " @ " + callee.getEntryPoint();
        String indent = "";
        for (int i = 0; i < depth; i++) indent += "  ";
        println(indent + "target " + addr + " " + calleeName);
        if (depth >= maxDepth) return;

        ReferenceIterator refs = currentProgram.getReferenceManager().getReferencesTo(addr);
        int count = 0;
        while (refs.hasNext()) {
            Reference ref = refs.next();
            Address from = ref.getFromAddress();
            Function caller = getFunctionContaining(from);
            if (caller == null) {
                println(indent + "  caller <no function> from " + from);
                continue;
            }
            String key = caller.getEntryPoint().toString() + ":" + depth;
            println(indent + "  caller " + caller.getName() + " @ " + caller.getEntryPoint() + " from " + from);
            count++;
            String recurKey = caller.getEntryPoint().toString() + ":" + (depth + 1);
            if (!seen.contains(recurKey)) {
                seen.add(recurKey);
                trace(caller.getEntryPoint(), depth + 1, maxDepth, seen);
            }
            if (count >= 80) {
                println(indent + "  ... caller list truncated ...");
                break;
            }
        }
    }

    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length == 0) {
            println("usage: TraceCallers.java <addr> [depth]");
            return;
        }
        int maxDepth = 2;
        if (args.length > 1) {
            try {
                maxDepth = Integer.parseInt(args[args.length - 1]);
            } catch (NumberFormatException ignored) {
            }
        }
        for (int i = 0; i < args.length; i++) {
            if (i == args.length - 1 && args.length > 1) {
                try {
                    Integer.parseInt(args[i]);
                    continue;
                } catch (NumberFormatException ignored) {
                }
            }
            println("== trace callers for " + args[i] + " depth=" + maxDepth + " ==");
            trace(toAddr(args[i]), 0, maxDepth, new HashSet<String>());
        }
    }
}
