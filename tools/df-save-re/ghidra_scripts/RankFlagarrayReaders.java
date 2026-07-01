// Ghidra postScript: rank df-flagarray caller functions by primitive read calls.
//@category DF

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.ReferenceIterator;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.HashSet;
import java.util.List;
import java.util.Map;
import java.util.Set;

public class RankFlagarrayReaders extends GhidraScript {
    private static final Address PRIMITIVE = null;

    static class Row {
        Function fn;
        int primitiveRefs;
        int flagRefs;
        Row(Function fn) { this.fn = fn; }
    }

    @Override
    public void run() throws Exception {
        Address primitive = toAddr("1405bba90");
        Address flagarray = toAddr("140002380");

        Map<String, Row> rows = new HashMap<String, Row>();
        Set<String> flagFns = new HashSet<String>();

        ReferenceIterator flagRefs = currentProgram.getReferenceManager().getReferencesTo(flagarray);
        while (flagRefs.hasNext()) {
            Reference ref = flagRefs.next();
            Function fn = getFunctionContaining(ref.getFromAddress());
            if (fn == null) {
                continue;
            }
            String key = fn.getEntryPoint().toString();
            Row row = rows.get(key);
            if (row == null) {
                row = new Row(fn);
                rows.put(key, row);
            }
            row.flagRefs++;
            flagFns.add(key);
        }

        ReferenceIterator primRefs = currentProgram.getReferenceManager().getReferencesTo(primitive);
        while (primRefs.hasNext()) {
            Reference ref = primRefs.next();
            Function fn = getFunctionContaining(ref.getFromAddress());
            if (fn == null) {
                continue;
            }
            String key = fn.getEntryPoint().toString();
            if (!flagFns.contains(key)) {
                continue;
            }
            Row row = rows.get(key);
            if (row != null) {
                row.primitiveRefs++;
            }
        }

        List<Row> sorted = new ArrayList<Row>(rows.values());
        sorted.sort((a, b) -> {
            int cmp = Integer.compare(b.primitiveRefs, a.primitiveRefs);
            if (cmp != 0) return cmp;
            return a.fn.getEntryPoint().compareTo(b.fn.getEntryPoint());
        });

        println("flagarray caller ranking by primitive refs:");
        int shown = 0;
        for (Row row : sorted) {
            println(
                "  primitive=" + row.primitiveRefs +
                " flag=" + row.flagRefs +
                " " + row.fn.getName() +
                " @ " + row.fn.getEntryPoint()
            );
            shown++;
            if (shown >= 120) {
                break;
            }
        }
    }
}
