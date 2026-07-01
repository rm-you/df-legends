// Ghidra postScript: locate RTTI strings for DF save read_file targets.
//@category DF

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;

public class FindReadFile extends GhidraScript {
    private static final String[] TARGETS = {
        "history_figurest",
        "hf_profilest",
        "artistic_profilest",
        "art_image_elementst",
        "art_image_propertyst",
        "histfig_entity_linkst",
        "history_eventst",
        "world_sitest",
        "historical_entityst",
    };

    @Override
    public void run() throws Exception {
        for (String name : TARGETS) {
            Address found = find(name);
            if (found != null) {
                println("RTTI string " + name + " @ " + found);
            } else {
                println("RTTI string " + name + " NOT FOUND");
            }
        }
    }
}
