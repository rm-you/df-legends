#!/usr/bin/env python3
import struct

from df_save_re.save_preamble import resolve_save_payload
from df_save_re.deserializers.historical_figures import read_historical_figure_header
from df_save_re.binary_reader import BinaryReader
from io import BytesIO

p = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload

for label, start in [("fig0 tail", 0x2134e66), ("fig1 tail", None)]:
    if start is None:
        r = BinaryReader(BytesIO(p))
        r.seek(0x2135412)
        read_historical_figure_header(r)
        start = r.tell()
        print(f"fig1 header end {start:#x}")
    print(f"\n=== {label} @ {start:#x} ===")
    chunk = p[start : start + 48]
    for i in range(0, len(chunk), 4):
        off = start + i
        v = struct.unpack_from("<i", chunk, i)[0]
        print(f"  {off:#x}: {v:10d}  ({chunk[i:i+4].hex()})")
