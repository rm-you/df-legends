#!/usr/bin/env python3
"""Deterministically locate and walk the full world_history section of a save."""
from __future__ import annotations

import argparse
import sys
import time
from collections import Counter

from df_save_re.save_preamble import resolve_save_payload
from df_save_re.deserializers.world_history_walk import (
    locate_world_history,
    walk_world_history,
)


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("save", nargs="?", default="tests/fixtures/small-retired/world.dat")
    args = ap.parse_args()

    t0 = time.time()
    resolved = resolve_save_payload(args.save)
    payload = resolved.payload
    sv = resolved.save_version
    header = resolved.preamble.header
    print(f"{args.save}: payload {len(payload):,} bytes, save_version {sv} (0x{sv:x})")
    print(f"max_ids: {header.max_ids}")

    lm = locate_world_history(payload, header, save_version=sv)
    if lm is None:
        print("FAILED to locate world_history")
        return 1
    print(
        f"events: count={lm.event_count} @0x{lm.events_count_offset:x} "
        f"bodies@0x{lm.events_bodies_start:x} end@0x{lm.events_end:x}"
    )
    print(f"figures: count={lm.figure_count} @0x{lm.figures_count_offset:x}")
    print(f"[locate {time.time() - t0:.1f}s]")

    ev_tags = Counter()
    coll_tags = Counter()
    fig_named = [0]
    eras = []

    def on_event(idx, tag, off):
        ev_tags[tag] += 1

    def on_figure(slot, header, tail):
        if header.name.has_name:
            fig_named[0] += 1

    def on_collection(idx, rec):
        coll_tags[rec["type"]] += 1

    def on_era(idx, rec):
        eras.append((rec.index, rec.year, rec.name))

    t1 = time.time()
    full = walk_world_history(
        payload,
        header,
        save_version=sv,
        landmarks=lm,
        on_event=on_event,
        on_figure=on_figure,
        on_collection=on_collection,
        on_era=on_era,
    )
    print(f"[walk {time.time() - t1:.1f}s]")
    print(f"events walked: {sum(ev_tags.values())} ({len(ev_tags)} distinct tags)")
    print(f"figures walked: {full.figure_count} ({fig_named[0]} named) end@0x{full.figures_end:x}")
    print(f"collections walked: {full.collection_count} {dict(sorted(coll_tags.items()))}")
    print(f"eras: {eras}")
    print(f"history end: 0x{full.history_end:x}")
    print("next 32 bytes:", payload[full.history_end:full.history_end + 32].hex())
    return 0


if __name__ == "__main__":
    sys.exit(main())
