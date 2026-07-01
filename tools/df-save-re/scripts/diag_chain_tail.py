#!/usr/bin/env python3
"""Build chain scanning from structural tail_end (first valid header)."""
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.body_skipper import default_xml_dir, skip_historical_figure_body
from df_save_re.deserializers.historical_figures import (
    header_looks_valid,
    read_historical_figure_header,
    try_read_historical_figure_header,
)
from df_save_re.save_preamble import resolve_save_payload

payload = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
xml = default_xml_dir()
DEATH = 0x226009C
START = 0x2134DD0


def tail_end(start: int) -> int:
    r = BinaryReader(BytesIO(payload))
    r.seek(start)
    skip_historical_figure_body(r, payload, xml_dir=xml)
    return r.tell()


def find_next(tail: int, prev_id: int, *, min_gap: int = 400):
    scan_end = min(tail + 500_000, DEATH)
    for cand in range(tail, scan_end, 2):
        if cand < START + min_gap:
            continue
        r = BinaryReader(BytesIO(payload))
        r.seek(cand)
        h = try_read_historical_figure_header(r)
        if h is None or h.figure_id <= prev_id:
            continue
        if h.art_count > 500:
            continue
        return cand, h.figure_id, h.art_count
    return None, None, None


offset = START
for n in range(25):
    r = BinaryReader(BytesIO(payload))
    r.seek(offset)
    h0 = read_historical_figure_header(r)
    t = tail_end(offset)
    nxt, nid, nac = find_next(t, h0.figure_id)
    print(
        f"{n:2d} id={h0.figure_id:5d} art={h0.art_count:4d} "
        f"size={ (nxt or DEATH) - offset:6d} tail_gap={(nxt or DEATH)-t:6d} -> {nid}"
    )
    if nxt is None:
        break
    offset = nxt
