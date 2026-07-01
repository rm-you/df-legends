// Ghidra postScript: rank functions that call both language_name and flagarray readers.
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

public class RankLanguageFlagReaders extends GhidraScript {
    static class Row {
        Function fn;
        int primitiveRefs;
        int flagRefs;
        int languageRefs;
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
            if (kind.equals("flag")) row.flagRefs++;
            if (kind.equals("language")) row.languageRefs++;
        }
    }

    @Override
    public void run() throws Exception {
        Address primitive = toAddr("1405bba90");
        Address flagarray = toAddr("140002380");
        Address language = toAddr("140c01860");

        Map<String, Row> rows = new HashMap<String, Row>();
        collect(primitive, rows, "primitive");
        collect(flagarray, rows, "flag");
        collect(language, rows, "language");

        List<Row> candidates = new ArrayList<Row>();
        for (Row row : rows.values()) {
            if (row.flagRefs > 0 && row.languageRefs > 0) {
                candidates.add(row);
            }
        }
        candidates.sort((a, b) -> {
            int cmp = Integer.compare(b.primitiveRefs, a.primitiveRefs);
            if (cmp != 0) return cmp;
            return a.fn.getEntryPoint().compareTo(b.fn.getEntryPoint());
        });

        println("functions calling both language_name and flagarray:");
        for (Row row : candidates) {
            println(
                "  primitive=" + row.primitiveRefs +
                " flag=" + row.flagRefs +
                " language=" + row.languageRefs +
                " " + row.fn.getName() +
                " @ " + row.fn.getEntryPoint()
            );
        }
    }
}
