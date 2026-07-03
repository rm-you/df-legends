"""Test whether discover_world_sites self-derives the right site set with a
generous ceiling instead of the (wrong) header max_ids[26]+4."""

import re
import sys
import time
from pathlib import Path

from df_save_re.save_preamble import resolve_save_payload
from df_save_re.deserializers.string_tables import parse_string_table_block
from df_save_re.deserializers.entity_def import catalog_entity_block
from df_save_re.deserializers.site_discovery import discover_world_sites

SAVES = Path(r"C:\Users\rm_yo\CursorProjects\df-legends\data\saves")


def main() -> None:
    for region, expected in (("region3", 262), ("region2", 194)):
        wd = SAVES / region / "world.dat"
        resolved = resolve_save_payload(str(wd))
        payload = resolved.payload
        block = parse_string_table_block(payload)
        ents = catalog_entity_block(payload, search_end=len(payload))
        t0 = time.time()
        for ceiling in (2000,):
            res = discover_world_sites(
                payload,
                block=block,
                search_start=ents.entities[-1].payload_offset if ents.entities else 0,
                search_end=len(payload),
                entities=ents.entities,
                header=resolved.preamble.header,
                max_site_id=ceiling - 1,
                civ_ids=None,
            )
            ids = sorted(r.site_id for r in res.catalog.records)
            print(
                f"{region} ceiling={ceiling}: found {len(ids)} sites, "
                f"max id {ids[-1] if ids else None} (expected {expected}) "
                f"[{time.time()-t0:.1f}s]"
            )
            for note in res.notes:
                print("   note:", note)


if __name__ == "__main__":
    sys.stdout.reconfigure(errors="backslashreplace")
    main()
