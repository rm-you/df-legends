#!/usr/bin/env python3
"""Quick harness diagnostic for body walks."""

from __future__ import annotations

from df_save_re.deserializers.engine_walk import walk_pointer_vector
from df_save_re.deserializers.historical_figures import locate_figures_vector
from df_save_re.deserializers.world_layout import discover_layout_landmarks, resolve_history_search_start
from df_save_re.save_preamble import resolve_save_payload
from tests.fixture_paths import resolve_fixture


def main() -> int:
    p = resolve_save_payload(resolve_fixture("small-retired", "world.dat"))
    layout = discover_layout_landmarks(p.payload, p.preamble)
    start = resolve_history_search_start(p.payload, layout, p.preamble.header)
    anchor = locate_figures_vector(p.payload, p.preamble.header, search_start=start)
    r = walk_pointer_vector(
        p.payload,
        vector_offset=anchor.vector_offset,
        element_type="historical_figure",
        bodies_start=anchor.bodies_start,
        next_anchor=anchor.death_events_offset,
    )
    print(
        "ok",
        r.ok,
        "landed",
        r.landed_on_anchor,
        "count",
        r.parsed_count,
        "err",
        hex(r.error_offset or 0),
        r.error,
    )
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
