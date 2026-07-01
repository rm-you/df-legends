#!/usr/bin/env python3
import struct

from df_save_re.save_preamble import resolve_save_payload
from df_save_re.deserializers.historical_figures import read_historical_figure_header
from df_save_re.binary_reader import BinaryReader
from io import BytesIO

payload = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
TARGET = 0x2135412

# scan for landing: after meta end 0x2134f09, try offsets until read_historical_figure_header at candidate works with id=1
meta_end = 0x2134F09
for tail_len in range(0, 2000):
    end = meta_end + tail_len
    if end != TARGET:
        continue
    r = BinaryReader(BytesIO(payload))
    r.seek(end)
    try:
        h = read_historical_figure_header(r)
    except Exception:
        continue
    print("LAND tail_len", tail_len, "id", h.figure_id, "header_end", hex(r.tell()))
    break
else:
    # find tail_len where next header valid id=1
    for tail_len in range(1200, 1400):
        end = meta_end + tail_len
        r = BinaryReader(BytesIO(payload))
        r.seek(end)
        try:
            h = read_historical_figure_header(r)
        except Exception:
            continue
        if h.figure_id == 1:
            print("candidate tail_len", tail_len, "end", hex(end), "delta_target", end - TARGET)

print("expected tail from meta_end", TARGET - meta_end)
