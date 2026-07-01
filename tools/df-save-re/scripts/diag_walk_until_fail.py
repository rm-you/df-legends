#!/usr/bin/env python3
"""Walk figures until skip/scan fails; print each figure's span."""
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.body_skipper import SkipError, default_xml_dir, skip_historical_figure_body
from df_save_re.deserializers.historical_figures import (
    locate_figures_vector,
    try_read_historical_figure_header,
)
from df_save_re.deserializers.world_layout import discover_layout_landmarks, resolve_history_search_start
from df_save_re.save_preamble import resolve_save_payload

p = resolve_save_payload("tests/fixtures/small-retired/world.dat")
payload = p.payload
layout = discover_layout_landmarks(payload, p.preamble)
start = resolve_history_search_start(payload, layout, p.preamble.header)
anchor = locate_figures_vector(payload, p.preamble.header, search_start=start)
xml = default_xml_dir()
death = anchor.death_events_offset
scan_stop = death if death is not None else min(len(payload), anchor.bodies_start + 3_000_000)

r = BinaryReader(BytesIO(payload))
r.seek(anchor.bodies_start)
prev_id = -1
for n in range(25):
    off = r.tell()
    if off >= scan_stop:
        break
    h = try_read_historical_figure_header(r)
    if h is None:
        print(f"bad header at {off:#x} after {n} figures")
        break
    r.seek(off)
    try:
        skip_historical_figure_body(r, payload, xml_dir=xml, scan_stop=scan_stop)
    except SkipError as e:
        print(f"FAIL after {n} ok figures; id={h.figure_id} start={off:#x}: {e}")
        break
    end = r.tell()
    print(
        f"{n:3d} id={h.figure_id:5d} art={h.art_count} "
        f"start={off:#x} end={end:#x} span={end - off}"
    )
    if h.figure_id <= prev_id:
        print(f"  WARN non-monotonic prev={prev_id}")
    prev_id = h.figure_id
else:
    print("completed 25 figures")

print(f"death anchor {death:#x}" if death is not None else f"death anchor unresolved; scan_stop {scan_stop:#x}")
