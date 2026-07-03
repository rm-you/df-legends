#!/usr/bin/env python3
from df_save_re.save_preamble import resolve_save_payload
from df_save_re.deserializers.world_history_walk import locate_world_history
from df_save_re.deserializers.world_site_walk import locate_world_sites_vector

PATHS = [
    "../../data/saves/region2/world.dat",
    "../../data/saves/region3/world.dat",
    "../../data/saves/region1/world.dat",
    "tests/fixtures/small-retired/world.dat",
]

for path in PATHS:
    r = resolve_save_payload(path)
    lm = locate_world_history(r.payload, r.preamble.header, save_version=r.save_version)
    if lm is None:
        print(path, "locate_world_history FAILED")
        continue
    sl = locate_world_sites_vector(
        r.payload, r.preamble.header, events_count_offset=lm.events_count_offset
    )
    print(
        path,
        "sites",
        sl.site_count if sl else None,
        "events_off",
        hex(lm.events_count_offset),
    )
