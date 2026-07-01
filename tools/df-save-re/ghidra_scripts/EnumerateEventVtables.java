// Ghidra postScript: enumerate history_event vtables from FUN_14070b7a0 factory.
// Args: [outdir]  — if set, writes ghidra_decompiles/event_vtables.json
// For each vtable assigned in the factory switch, records tag (case order),
// symbol, vtable_addr, inst_size (operator_new), and vtable slots
// [0x0] dtor, [0x100], [0x118] write_file, [0x120] read_file.
//@category DF

import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
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
import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class EnumerateEventVtables extends GhidraScript {
    private static final long[] SLOTS = {0x0, 0x100, 0x118, 0x120};
    private static final Pattern CASE = Pattern.compile("^\\s*case\\s+(0x[0-9A-Fa-f]+|\\d+)\\s*:\\s*$");
    private static final Pattern OPERATOR_NEW = Pattern.compile("operator_new\\s*\\(\\s*(0x[0-9A-Fa-f]+|\\d+)\\s*\\)");
    private static final Pattern VTABLE = Pattern.compile("\\*\\s*\\w+\\s*=\\s*([\\w:]+)::vftable\\s*;");

    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        File outdir = args.length > 0 ? new File(args[0]) : null;

        Function factory = getFunctionAt(toAddr("14070b7a0"));
        if (factory == null) {
            println("no factory at 14070b7a0");
            return;
        }

        DecompInterface ifc = new DecompInterface();
        ifc.openProgram(currentProgram);
        DecompileResults res = ifc.decompileFunction(factory, 120, monitor);
        if (!res.decompileCompleted() || res.getDecompiledFunction() == null) {
            println("factory decompile failed: " + res.getErrorMessage());
            return;
        }
        String c = res.getDecompiledFunction().getC();
        List<Map<String, Object>> entries = parseFactoryDecompile(c);

        SymbolTable st = currentProgram.getSymbolTable();
        Memory mem = currentProgram.getMemory();
        for (Map<String, Object> e : entries) {
            String sym = (String) e.get("symbol");
            Address vaddr = findVtableAddress(st, sym);
            e.put("vtable_addr", vaddr != null ? vaddr.toString() : null);
            if (vaddr != null) {
                for (long off : SLOTS) {
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
            println("tag=" + e.get("tag") + " sym=" + sym + " size=" + e.get("inst_size")
                + " vtable=" + e.get("vtable_addr"));
        }

        if (outdir != null) {
            outdir.mkdirs();
            File out = new File(outdir, "event_vtables.json");
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
    }

    private List<Map<String, Object>> parseFactoryDecompile(String c) {
        List<Map<String, Object>> out = new ArrayList<>();
        String[] lines = c.split("\n");
        Integer currentTag = null;
        Integer pendingSize = null;
        for (String line : lines) {
            Matcher cm = CASE.matcher(line);
            if (cm.find()) {
                String raw = cm.group(1);
                currentTag = raw.toLowerCase().startsWith("0x")
                    ? Integer.parseInt(raw.substring(2), 16)
                    : Integer.parseInt(raw);
                pendingSize = null;
                continue;
            }
            if (currentTag == null) continue;
            Matcher nm = OPERATOR_NEW.matcher(line);
            if (nm.find()) {
                String raw = nm.group(1);
                pendingSize = raw.toLowerCase().startsWith("0x")
                    ? Integer.parseInt(raw.substring(2), 16)
                    : Integer.parseInt(raw);
                continue;
            }
            Matcher vm = VTABLE.matcher(line);
            if (vm.find()) {
                Map<String, Object> e = new LinkedHashMap<>();
                e.put("tag", currentTag);
                e.put("symbol", vm.group(1));
                e.put("inst_size", pendingSize);
                out.add(e);
                currentTag = null;
                pendingSize = null;
            }
        }
        return out;
    }

    private Address findVtableAddress(SymbolTable st, String className) {
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
