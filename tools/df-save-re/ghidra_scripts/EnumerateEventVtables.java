// Ghidra postScript: walk FUN_14070b7a0 (events factory) instructions, collect
// DATA references (vtable addresses assigned via *puVar2 = X::vftable), and for
// each dump slots [0x0],[0x100],[0x118],[0x120]. Also print a few sample
// symbols containing "event"/"6B@"/"vftable" for naming diagnostics.
//@category DF

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.InstructionIterator;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.ReferenceManager;
import ghidra.program.model.symbol.Symbol;
import ghidra.program.model.symbol.SymbolTable;
import ghidra.program.model.symbol.SymbolIterator;
import ghidra.program.model.mem.Memory;

import java.util.LinkedHashMap;
import java.util.Map;

public class EnumerateEventVtables extends GhidraScript {
    @Override
    public void run() throws Exception {
        SymbolTable st = currentProgram.getSymbolTable();
        Memory mem = currentProgram.getMemory();
        ReferenceManager rm = currentProgram.getReferenceManager();

        // Diagnostics: sample symbols
        int sample = 0;
        SymbolIterator sit = st.getAllSymbols(true);
        while (sit.hasNext() && sample < 20) {
            Symbol s = sit.next();
            String n = s.getName();
            if (n.contains("history_event") || n.contains("??_7") || n.contains("vftable")) {
                println("SYM: " + n + " @ " + s.getAddress());
                sample++;
            }
        }
        println("sampled " + sample + " symbols");

        Function factory = getFunctionAt(toAddr("14070b7a0"));
        if (factory == null) { println("no factory"); return; }
        long[] slots = {0x0, 0x100, 0x118, 0x120};
        // Preserve order of first appearance in the factory body.
        Map<Address, String> vtables = new LinkedHashMap<>();
        InstructionIterator it = currentProgram.getListing().getInstructions(factory.getBody(), true);
        while (it.hasNext()) {
            Instruction ins = it.next();
            for (Reference r : rm.getReferencesFrom(ins.getAddress())) {
                if (r.getReferenceType().isCall()) continue;
                Address tgt = r.getToAddress();
                if (tgt == null) continue;
                // vtable targets are in .rdata; treat any data ref as candidate
                if (!vtables.containsKey(tgt)) {
                    vtables.put(tgt, ins.getAddress().toString());
                }
            }
        }
        println("candidate data refs from factory: " + vtables.size());
        int idx = 0;
        for (Map.Entry<Address, String> e : vtables.entrySet()) {
            Address va = e.getKey();
            Symbol sym = null;
            ghidra.program.model.symbol.Symbol[] vsyms = st.getSymbols(va);
            if (vsyms != null && vsyms.length > 0) sym = vsyms[0];
            StringBuilder sb = new StringBuilder();
            sb.append("VT[").append(idx++).append("] ").append(va)
              .append(" sym=").append(sym != null ? sym.getName() : "?")
              .append(" from=").append(e.getValue());
            for (long off : slots) {
                try {
                    long val = mem.getLong(va.add(off));
                    Symbol tsym = null;
                    ghidra.program.model.symbol.Symbol[] tss = st.getSymbols(toAddr(val));
                    if (tss != null && tss.length > 0) tsym = tss[0];
                    sb.append(String.format(" [0x%x]=%x(%s)", off, val, tsym != null ? tsym.getName() : "?"));
                } catch (Exception ex) {
                    sb.append(String.format(" [0x%x]=ERR", off));
                }
            }
            println(sb.toString());
        }
    }
}
