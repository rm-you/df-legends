// Ghidra postScript: BFS-decompile a call tree from a root address.
// Args: <outdir> <rootAddr> <maxDepth>
// Writes one <addr>.c per function (same header format as DecompileWithCallees)
// and merges all touched functions into index.json (existing entries preserved).
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
import java.io.FileWriter;
import java.io.PrintWriter;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.util.ArrayDeque;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.HashSet;
import java.util.List;
import java.util.Map;
import java.util.TreeMap;

public class DecompileCallTree extends GhidraScript {
    private static class Node {
        String addrKey;
        int depth;
        Node(String addrKey, int depth) {
            this.addrKey = addrKey;
            this.depth = depth;
        }
    }

    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length < 3) {
            println("usage: DecompileCallTree.java <outdir> <rootAddr> <maxDepth>");
            return;
        }
        File outdir = new File(args[0]);
        outdir.mkdirs();
        Address root = toAddr(args[1]);
        int maxDepth = Integer.parseInt(args[2]);
        if (root == null) {
            println("bad root address " + args[1]);
            return;
        }

        DecompInterface ifc = new DecompInterface();
        ifc.openProgram(currentProgram);
        ReferenceManager rm = currentProgram.getReferenceManager();

        Map<String, Map<String, Object>> index = loadExistingIndex(outdir);
        ArrayDeque<Node> queue = new ArrayDeque<>();
        HashSet<String> queued = new HashSet<>();
        String rootKey = normalizeAddr(root);
        queue.add(new Node(rootKey, 0));
        queued.add(rootKey);

        int decompiled = 0;
        while (!queue.isEmpty()) {
            Node node = queue.removeFirst();
            Address addr = toAddr(node.addrKey);
            if (addr == null) continue;
            Function fn = getFunctionContaining(addr);
            if (fn == null) {
                println("skip (no function): " + node.addrKey);
                continue;
            }
            String entry = fn.getEntryPoint().toString();
            String name = fn.getName();
            List<String> callees = collectCallees(fn, rm);
            writeDecompile(ifc, fn, outdir, node.addrKey, name, entry, callees);
            index.put(node.addrKey, makeEntry(node.addrKey, name, entry, callees));
            decompiled++;
            println("decompiled " + node.addrKey + " " + name + " depth=" + node.depth
                + " callees=" + callees.size());

            if (node.depth >= maxDepth) continue;
            for (String c : callees) {
                String calleeKey = calleeAddrKey(c);
                if (calleeKey == null) continue;
                if (calleeKey.startsWith("EXTERNAL")) continue;
                if (queued.add(calleeKey)) {
                    queue.add(new Node(calleeKey, node.depth + 1));
                }
            }
        }

        writeIndex(outdir, index);
        println("DecompileCallTree: wrote " + decompiled + " functions; index has "
            + index.size() + " entries");
    }

    private static String normalizeAddr(Address addr) {
        String s = addr.toString();
        if (s.startsWith("0x") || s.startsWith("0X")) {
            s = s.substring(2);
        }
        return s.toLowerCase();
    }

    private static String calleeAddrKey(String callee) {
        int sp = callee.indexOf(' ');
        String addrPart = sp >= 0 ? callee.substring(0, sp) : callee;
        if (addrPart.startsWith("EXTERNAL")) return null;
        if (addrPart.startsWith("0x") || addrPart.startsWith("0X")) {
            addrPart = addrPart.substring(2);
        }
        return addrPart.toLowerCase();
    }

    private List<String> collectCallees(Function fn, ReferenceManager rm) {
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
        return callees;
    }

    private void writeDecompile(DecompInterface ifc, Function fn, File outdir, String addrKey,
            String name, String entry, List<String> callees) throws Exception {
        DecompileResults res = ifc.decompileFunction(fn, 90, monitor);
        File cf = new File(outdir, addrKey + ".c");
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
    }

    private Map<String, Object> makeEntry(String addrKey, String name, String entry,
            List<String> callees) {
        Map<String, Object> e = new HashMap<>();
        e.put("addr", addrKey);
        e.put("name", name);
        e.put("entry", entry);
        e.put("callees", callees);
        e.put("decompile_file", addrKey + ".c");
        return e;
    }

    @SuppressWarnings("unchecked")
    private Map<String, Map<String, Object>> loadExistingIndex(File outdir) {
        Map<String, Map<String, Object>> index = new TreeMap<>();
        File idx = new File(outdir, "index.json");
        if (!idx.isFile()) return index;
        try {
            String text = new String(Files.readAllBytes(idx.toPath()), StandardCharsets.UTF_8);
            // Minimal parse: we only need addr keys; rebuild script can fix later.
            // For merge, re-read via simple regex on "addr":"..." entries.
            int pos = 0;
            while (true) {
                int a = text.indexOf("\"addr\":\"", pos);
                if (a < 0) break;
                a += 8;
                int b = text.indexOf('"', a);
                if (b < 0) break;
                String addr = text.substring(a, b);
                index.put(addr, new HashMap<>());
                pos = b + 1;
            }
        } catch (Exception ex) {
            println("warning: could not load existing index.json: " + ex.getMessage());
        }
        return index;
    }

    private void writeIndex(File outdir, Map<String, Map<String, Object>> index) throws Exception {
        File idx = new File(outdir, "index.json");
        try (PrintWriter pw = new PrintWriter(new FileWriter(idx))) {
            pw.println("[");
            int i = 0;
            int n = index.size();
            for (Map.Entry<String, Map<String, Object>> e : index.entrySet()) {
                Map<String, Object> entry = e.getValue();
                pw.print("  {");
                pw.print("\"addr\":\"" + escape((String) entry.get("addr")) + "\",");
                pw.print("\"name\":\"" + escape((String) entry.get("name")) + "\",");
                pw.print("\"entry\":\"" + escape((String) entry.get("entry")) + "\",");
                pw.print("\"callees\":[");
                @SuppressWarnings("unchecked")
                List<String> callees = (List<String>) entry.get("callees");
                if (callees == null) {
                    callees = new ArrayList<>();
                }
                for (int j = 0; j < callees.size(); j++) {
                    if (j > 0) pw.print(",");
                    pw.print("\"" + escape(callees.get(j)) + "\"");
                }
                pw.print("],\"decompile_file\":\"" + escape((String) entry.get("decompile_file")) + "\"}");
                i++;
                if (i < n) pw.println(",");
                else pw.println();
            }
            pw.println("]");
        }
    }

    private static String escape(String s) {
        if (s == null) return "";
        return s.replace("\\", "\\\\").replace("\"", "\\\"").replace("\n", " ").replace("\r", " ");
    }
}
