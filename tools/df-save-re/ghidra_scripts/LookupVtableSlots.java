// Ghidra postScript: look up vtable slots for explicit tag:className pairs.
// Args: [outdir] [outJson] [readSlotHex] [writeSlotHex] [tag:className] ...
// Emits the same JSON schema as collection_vtables.json entries.
//@category DF

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.mem.Memory;
import ghidra.program.model.symbol.Symbol;
import ghidra.program.model.symbol.SymbolTable;

import java.io.File;
import java.io.FileWriter;
import java.io.PrintWriter;
import java.util.ArrayList;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;

public class LookupVtableSlots extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length < 5) {
            println("usage: <outdir> <outJson> <readSlotHex> <writeSlotHex> <tag:className> ...");
            return;
        }
        File outdir = new File(args[0]);
        String outName = args[1];
        long readSlot = Long.parseLong(args[2], 16);
        long writeSlot = Long.parseLong(args[3], 16);
        long[] slots = uniqueSlots(0x0L, 0x100L, readSlot, writeSlot);

        SymbolTable st = currentProgram.getSymbolTable();
        Memory mem = currentProgram.getMemory();
        List<Map<String, Object>> entries = new ArrayList<>();

        for (int i = 4; i < args.length; i++) {
            String pair = args[i];
            int colon = pair.indexOf(':');
            if (colon < 0) {
                println("bad pair (need tag:className): " + pair);
                continue;
            }
            int tag = Integer.parseInt(pair.substring(0, colon));
            String className = pair.substring(colon + 1);

            Map<String, Object> e = new LinkedHashMap<>();
            e.put("tag", tag);
            e.put("symbol", className);
            e.put("inst_size", instSizeForTag(tag));

            Address vaddr = findVtableAddress(st, className);
            e.put("vtable_addr", vaddr != null ? vaddr.toString() : null);
            if (vaddr != null) {
                for (long off : slots) {
                    String key = slotKey(off);
                    try {
                        long val = mem.getLong(vaddr.add(off));
                        Address fa = toAddr(val);
                        Symbol ts = fa != null ? firstSymbol(st, fa) : null;
                        e.put(key, fa != null ? fa.toString() : Long.toHexString(val));
                        e.put(key + "_name", ts != null ? ts.getName() : null);
                    } catch (Exception ex) {
                        e.put(key, null);
                    }
                }
            }
            entries.add(e);
            println("tag=" + tag + " sym=" + className + " vtable=" + e.get("vtable_addr"));
        }

        outdir.mkdirs();
        File out = new File(outdir, outName);
        try (PrintWriter pw = new PrintWriter(new FileWriter(out))) {
            pw.println("[");
            for (int i = 0; i < entries.size(); i++) {
                pw.print("  " + jsonObject(entries.get(i)));
                if (i + 1 < entries.size()) pw.println(",");
                else pw.println();
            }
            pw.println("]");
        }
        println("wrote " + entries.size() + " entries to " + out);
    }

    private static Integer instSizeForTag(int tag) {
        switch (tag) {
            case 0: return 600;   // operator_new(600)
            case 1: return 0x300; // operator_new(0x300)
            case 4: return 0xd0;  // operator_new(0xd0)
            case 5: return 0x1c0; // operator_new(0x1c0)
            default: return null;
        }
    }

    private static long[] uniqueSlots(long... xs) {
        List<Long> list = new ArrayList<>();
        for (long x : xs) {
            if (!list.contains(x)) list.add(x);
        }
        long[] out = new long[list.size()];
        for (int i = 0; i < list.size(); i++) out[i] = list.get(i);
        return out;
    }

    private Address findVtableAddress(SymbolTable st, String className) {
        ghidra.program.model.symbol.SymbolIterator it = st.getSymbols("vftable");
        while (it.hasNext()) {
            Symbol s = it.next();
            ghidra.program.model.symbol.Namespace ns = s.getParentNamespace();
            if (ns != null && ns.getName().equals(className)) {
                return s.getAddress();
            }
        }
        String needle = className + "::vftable";
        for (Symbol s : st.getAllSymbols(true)) {
            if (s.getName().equals(needle) || s.getName().contains(needle)) {
                return s.getAddress();
            }
        }
        return null;
    }

    private Symbol firstSymbol(SymbolTable st, Address a) {
        Symbol[] ss = st.getSymbols(a);
        if (ss != null && ss.length > 0) return ss[0];
        return null;
    }

    private static String slotKey(long off) {
        return String.format("slot_0x%x", off);
    }

    private static String jsonObject(Map<String, Object> m) {
        StringBuilder sb = new StringBuilder("{");
        boolean first = true;
        for (Map.Entry<String, Object> e : m.entrySet()) {
            if (!first) sb.append(",");
            first = false;
            sb.append("\"").append(escape(e.getKey())).append("\":");
            Object v = e.getValue();
            if (v == null) sb.append("null");
            else if (v instanceof Number) sb.append(v.toString());
            else sb.append("\"").append(escape(String.valueOf(v))).append("\"");
        }
        sb.append("}");
        return sb.toString();
    }

    private static String escape(String s) {
        return s.replace("\\", "\\\\").replace("\"", "\\\"").replace("\n", " ");
    }
}
