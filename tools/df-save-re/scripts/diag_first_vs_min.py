#!/usr/bin/env python3
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.body_skipper import default_xml_dir, skip_historical_figure_body
from df_save_re.deserializers.historical_figures import (
    _quick_histfig_header_check,
    read_historical_figure_header,
    try_read_historical_figure_header,
)
from df_save_re.save_preamble import resolve_save_payload

payload = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
xml = default_xml_dir()

def tail_end(start):
    r = BinaryReader(BytesIO(payload))
    r.seek(start)
    read_historical_figure_header(r)
    r.seek(start)
    skip_historical_figure_body(r, payload, xml_dir=xml, next_anchor=None)
    return r.tell()

def first_after(tail, prev_id, stop=0x226009C):
    for cand in range(tail, min(tail + 500_000, stop), 2):
        if not _quick_histfig_header_check(payload, cand):
            continue
        r = BinaryReader(BytesIO(payload))
        r.seek(cand)
        h = try_read_historical_figure_header(r)
        if h is None:
            continue
        if h.figure_id <= prev_id:
            continue
        if h.figure_id >= 65535 or h.art_count > 500:
            continue
        return cand, h.figure_id
    return None, None

def min_after(tail, prev_id, stop=0x226009C):
    best = None
    best_id = 2_000_000
    for cand in range(tail, min(tail + 500_000, stop), 2):
        if not _quick_histfig_header_check(payload, cand):
            continue
        r = BinaryReader(BytesIO(payload))
        r.seek(cand)
        h = try_read_historical_figure_header(r)
        if h is None or h.figure_id <= prev_id:
            continue
        if h.figure_id >= 65535 or h.art_count > 500:
            continue
        if h.figure_id < best_id:
            best_id = h.figure_id
            best = cand
    return best, best_id

offset = 0x2134DD0
for n in range(12):
    r = BinaryReader(BytesIO(payload))
    r.seek(offset)
    h0 = read_historical_figure_header(r)
    tail = tail_end(offset)
    f, fid = first_after(tail, h0.figure_id)
    m, mid = min_after(tail, h0.figure_id)
    fs = f"{f:#x}" if f else "None"
    ms = f"{m:#x}" if m else "None"
    print(f"id={h0.figure_id} first->{fid}@{fs} min->{mid}@{ms}")
    if f is None:
        break
    offset = f
