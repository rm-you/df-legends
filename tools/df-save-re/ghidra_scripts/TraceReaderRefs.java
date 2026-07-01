// Ghidra postScript: list functions that reference known save/read helper addresses.
//@category DF

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.ReferenceIterator;

import java.util.Map;
import java.util.TreeMap;

public class TraceReaderRefs extends GhidraScript {
    private static final String[][] TARGETS = {
        // From prior RE notes.
        {"file_compressor_read_primitive", "1405bba90"},
        {"df_flagarray_reader", "140002380"},
        {"art_image_element_creature_read_file", "1400b8a00"},
        {"art_image_property_read_file", "1400b8f90"},
    };

    @Override
    public void run() throws Exception {
        for (String[] target : TARGETS) {
            String label = target[0];
            Address addr = toAddr(target[1]);
            println("== refs to " + label + " @ " + addr + " ==");

            Map<String, Integer> callers = new TreeMap<String, Integer>();
            ReferenceIterator refs = currentProgram.getReferenceManager().getReferencesTo(addr);
            int total = 0;
            while (refs.hasNext()) {
                Reference ref = refs.next();
                total++;
                Address from = ref.getFromAddress();
                Function fn = getFunctionContaining(from);
                String name = fn == null ? "<no function>" : fn.getName() + " @ " + fn.getEntryPoint();
                callers.put(name, callers.getOrDefault(name, 0) + 1);
            }
            println("total_refs=" + total + " unique_callers=" + callers.size());
            int shown = 0;
            for (Map.Entry<String, Integer> entry : callers.entrySet()) {
                println("  " + entry.getValue() + "  " + entry.getKey());
                shown++;
                if (shown >= 200) {
                    println("  ... truncated ...");
                    break;
                }
            }
        }
    }
}
