// Ghidra postScript: rank save-side language_name writer callers.
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

public class RankNameWriters extends GhidraScript {
    static class Row {
        Function fn;
        int primitiveRefs;
        int nameRefs;
        int vectorRefs;
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
            if (kind.equals("name")) row.nameRefs++;
            if (kind.equals("vector")) row.vectorRefs++;
        }
    }

    @Override
    public void run() throws Exception {
        Map<String, Row> rows = new HashMap<String, Row>();
        collect(toAddr("1405bb7c0"), rows, "primitive");
        collect(toAddr("1403159b0"), rows, "name");
        collect(toAddr("1405bb630"), rows, "vector");

        List<Row> candidates = new ArrayList<Row>();
        for (Row row : rows.values()) {
            if (row.nameRefs > 0) candidates.add(row);
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
                " name=" + row.nameRefs +
                " vector=" + row.vectorRefs +
                " " + row.fn.getName() +
                " @ " + row.fn.getEntryPoint()
            );
        }
    }
}
