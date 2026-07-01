#!/usr/bin/env python3
"""Find next header from structural tail_end (first vs min-id)."""
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.body_skipper import default_xml_dir, skip_historical_figure_body
from df_save_re.deserializers.historical_figures import (
    read_historical_figure_header,
    try_read_historical_figure_header,
)
from df_save_re.save_preamble import resolve_save_payload

payload = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
xml = default_xml_dir()
DEATH = 0x226009C


def strict(h):
    if h is None:
        return False
    if not (0 <= h.figure_id <= 50_000):
        return False
    if h.art_count < 0 or h.art_count > 500:
        return False
    if h.profession < -1 or h.profession > 200:
        return False
    if not (0 <= h.race <= 500 and 0 <= h.caste <= 50):
        return False
    if not (0 <= h.civ_id <= 500):
        return False
    if h.name.language not in (-1, 0, 1):
        return False
    if any(w > 500_000 or w < -2 for w in h.name.words):
        return False
    return True


def tail_end_after_skip(start: int) -> int:
    r = BinaryReader(BytesIO(payload))
    r.seek(start)
    skip_historical_figure_body(r, payload, xml_dir=xml)
    return r.tell()


def find_first(after: int, prev_id: int, stop: int):
    for cand in range(after, min(after + 500_000, stop), 2):
        r = BinaryReader(BytesIO(payload))
        r.seek(cand)
        h = try_read_historical_figure_header(r)
        if not strict(h) or h.figure_id <= prev_id:
            continue
        return cand, h.figure_id
    return None, None


def find_min(after: int, prev_id: int, stop: int):
    best_off = None
    best_id = 2_000_000
    for cand in range(after, min(after + 500_000, stop), 2):
        r = BinaryReader(BytesIO(payload))
        r.seek(cand)
        h = try_read_historical_figure_header(r)
        if not strict(h) or h.figure_id <= prev_id:
            continue
        if h.figure_id < best_id:
            best_id = h.figure_id
            best_off = cand
    return best_off, best_id


offset = 0x2134DD0
for n in range(20):
    r = BinaryReader(BytesIO(payload))
    r.seek(offset)
    h0 = read_historical_figure_header(r)
    tail = tail_end_after_skip(offset)
    f1, id1 = find_first(tail, h0.figure_id, DEATH)
    m1, idm = find_min(tail, h0.figure_id, DEATH)
    f1s = f"{f1:#x}" if f1 else "None"
    m1s = f"{m1:#x}" if m1 else "None"
    print(
        f"id={h0.figure_id} art={h0.art_count} body={tail-offset} "
        f"first->{id1}@{f1s} min->{idm}@{m1s}"
    )
    nxt = f1
    if nxt is None:
        break
    offset = nxt
