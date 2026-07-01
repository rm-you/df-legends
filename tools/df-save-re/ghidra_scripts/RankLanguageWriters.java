// Ghidra postScript: rank language_name writer callers by primitive write count.
//@category DF

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.ReferenceIterator;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

public class RankLanguageWriters extends GhidraScript {
    static class Row {
        Function fn;
        int primitiveRefs;
        int languageRefs;
        int flagRefs;
        Row(Function fn) { this.fn = fn; }
    }

    private void collect(Address target, Map<String, Row> rows, String kind) {
        ReferenceIterator refs = currentProgram.getReferenceManager().getReferencesTo(target);
        while (refs.hasNext()) {
            Reference ref = refs.next();
            Function fn = getFunctionContaining(ref.getFromAddress());
            if (fn == null) continue;
            String key = fn.getEntryPoint().toString();
            Row row = rows.get(key);
            if (row == null) {
                row = new Row(fn);
                rows.put(key, row);
            }
            if (kind.equals("primitive")) row.primitiveRefs++;
            if (kind.equals("language")) row.languageRefs++;
            if (kind.equals("flag")) row.flagRefs++;
        }
    }

    @Override
    public void run() throws Exception {
        Map<String, Row> rows = new HashMap<String, Row>();
        collect(toAddr("1405bb7c0"), rows, "primitive");
        collect(toAddr("1400021b0"), rows, "language");
        collect(toAddr("140002380"), rows, "flag"); // read-side flagarray, useful if paired in helpers

        List<Row> candidates = new ArrayList<Row>();
        for (Row row : rows.values()) {
            if (row.languageRefs > 0) {
                candidates.add(row);
            }
        }
        candidates.sort((a, b) -> {
            int cmp = Integer.compare(b.primitiveRefs, a.primitiveRefs);
            if (cmp != 0) return cmp;
            return a.fn.getEntryPoint().compareTo(b.fn.getEntryPoint());
        });

        println("language_name writer caller ranking:");
        for (Row row : candidates) {
            println(
                "  primitive=" + row.primitiveRefs +
                " language=" + row.languageRefs +
                " flag=" + row.flagRefs +
                " " + row.fn.getName() +
                " @ " + row.fn.getEntryPoint()
            );
        }
    }
}
