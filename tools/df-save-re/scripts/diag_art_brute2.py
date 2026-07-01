#!/usr/bin/env python3
import struct

from df_save_re.save_preamble import resolve_save_payload
from df_save_re.deserializers.historical_figures import read_historical_figure_header
from df_save_re.binary_reader import BinaryReader
from io import BytesIO

p = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
TARGET = 0x2135412

# brute events count at 4f4d
for count in range(0, 80):
    off = 0x2134F4D + 4 + count * 4
    if off > TARGET:
        break
    # after events, try lost count plausible
    lc = struct.unpack_from("<i", p, off)[0]
    if 0 <= lc <= 20:
        end = off + 4 + lc * 4
        if end < TARGET and struct.unpack_from("<i", p, TARGET)[0] in (0, 1, 2):
            pass

# simpler: find events count where meta+skills+...+ art lands at 5412 using only vector counts
start = 0x2134F4D
for ec in range(0, 75):
    o = start + 4 + ec * 4
    for lc in range(0, 10):
        o2 = o + 4 + lc * 4
        for pc in range(0, 5):
            o3 = o2 + 4 + pc * 4
            for pm in range(0, 5):
                o4 = o3 + 4 + pm * 2
                # skip static array omitted + 8 bytes
                o5 = o4 + 8
                if o5 == TARGET:
                    print("MATCH ec", ec, "lc", lc, "pc", pc, "pm", pm)
