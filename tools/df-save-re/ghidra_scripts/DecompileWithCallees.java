// Ghidra postScript: decompile targets, write one .c per function, and emit a
// JSON index with callees. Output dir is the first script arg; remaining args
// are addresses. Produces:
//   <outdir>/<addr>.c            raw decompile (or error note)
//   <outdir>/index.json          [{addr,name,entry,callees:[...],decompile_file}]
//@category DF

import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.InstructionIterator;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.ReferenceManager;

import java.io.File;
import java.io.PrintWriter;
import java.io.FileWriter;
import java.util.ArrayList;
import java.util.HashSet;
import java.util.List;

public class DecompileWithCallees extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length < 2) {
            println("usage: DecompileWithCallees.java <outdir> <addr>...");
            return;
        }
        File outdir = new File(args[0]);
        outdir.mkdirs();
        String[] addrs = new String[args.length - 1];
        System.arraycopy(args, 1, addrs, 0, addrs.length);

        DecompInterface ifc = new DecompInterface();
        ifc.openProgram(currentProgram);
        ReferenceManager rm = currentProgram.getReferenceManager();

        StringBuilder json = new StringBuilder();
        json.append("[\n");

        for (int i = 0; i < addrs.length; i++) {
            String arg = addrs[i];
            Address addr = toAddr(arg);
            if (addr == null) {
                println("=== bad address string " + arg + " ===");
                File cf = new File(outdir, arg + ".c");
                try (PrintWriter pw = new PrintWriter(new FileWriter(cf))) {
                    pw.println("// bad address " + arg);
                }
                json.append("  {\"addr\":\"").append(arg).append("\",\"name\":null,\"entry\":null,\"callees\":[],\"decompile_file\":\"").append(arg).append(".c\"}");
                if (i + 1 < addrs.length) json.append(",");
                json.append("\n");
                continue;
            }
            Function fn = getFunctionContaining(addr);
            if (fn == null) {
                println("=== no function at " + arg + " ===");
                File cf = new File(outdir, arg + ".c");
                try (PrintWriter pw = new PrintWriter(new FileWriter(cf))) {
                    pw.println("// no function at " + arg);
                }
                json.append("  {\"addr\":\"").append(arg).append("\",\"name\":null,\"entry\":null,\"callees\":[],\"decompile_file\":\"").append(arg).append(".c\"}");
                if (i + 1 < addrs.length) json.append(",");
                json.append("\n");
                continue;
            }
            String entry = fn.getEntryPoint().toString();
            String name = fn.getName();

            // Direct callees from call references in the body.
            List<String> callees = new ArrayList<>();
            HashSet<String> seen = new HashSet<>();
            InstructionIterator insIter = currentProgram.getListing().getInstructions(fn.getBody(), true);
            while (insIter.hasNext()) {
                Instruction ins = insIter.next();
                for (Reference r : rm.getReferencesFrom(ins.getAddress())) {
                    if (!r.getReferenceType().isCall()) continue;
                    Address tgt = r.getToAddress();
                    if (tgt == null) continue;
                    Function callee = getFunctionContaining(tgt);
                    String key = callee != null ? callee.getEntryPoint().toString() : tgt.toString();
                    if (seen.add(key)) {
                        String label = callee != null ? callee.getName() : "ext";
                        callees.add(key + " " + label);
                    }
                }
            }

            DecompileResults res = ifc.decompileFunction(fn, 90, monitor);
            File cf = new File(outdir, arg + ".c");
            try (PrintWriter pw = new PrintWriter(new FileWriter(cf))) {
                pw.println("// " + name + " @ " + entry);
                pw.println("// callees:");
                for (String c : callees) pw.println("//   -> " + c);
                pw.println();
                if (res.decompileCompleted() && res.getDecompiledFunction() != null) {
                    pw.print(res.getDecompiledFunction().getC());
                } else {
                    pw.println("// decompile failed: " + res.getErrorMessage());
                }
            }

            println("wrote " + arg + ".c  " + name + "  callees=" + callees.size());

            json.append("  {\"addr\":\"").append(arg).append("\",\"name\":\"")
                .append(escape(name)).append("\",\"entry\":\"").append(entry)
                .append("\",\"callees\":[");
            for (int j = 0; j < callees.size(); j++) {
                if (j > 0) json.append(",");
                json.append("\"").append(escape(callees.get(j))).append("\"");
            }
            json.append("],\"decompile_file\":\"").append(arg).append(".c\"}");
            if (i + 1 < addrs.length) json.append(",");
            json.append("\n");
        }
        json.append("]\n");

        File idx = new File(outdir, "index.json");
        try (PrintWriter pw = new PrintWriter(new FileWriter(idx))) {
            pw.print(json.toString());
        }
        println("wrote index.json with " + addrs.length + " entries to " + outdir);
    }

    private static String escape(String s) {
        return s.replace("\\", "\\\\").replace("\"", "\\\"").replace("\n", " ").replace("\r", " ");
    }
}
