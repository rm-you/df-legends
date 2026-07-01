#!/usr/bin/env python3
"""Byte accounting for fig0 body."""
import struct

from df_save_re.save_preamble import resolve_save_payload

payload = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
FIG0 = 0x2134DD0
FIG1 = 0x2135412

print("fig0 total bytes", FIG1 - FIG0)
for off in range(0x2134e66, 0x2135420, 4):
    v = struct.unpack_from("<i", payload, off)[0]
    if off in (0x2134e66, 0x2134e6a, 0x2134e6e, 0x2134e71, 0x2134ed5, 0x2134ed9, 0x2134fad, 0x2134ffd, 0x2135412):
        print(f"  marker {off:#x} = {v} ({v:#x})")

# scan for plausible next header between tail end and fig1
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.historical_figures import try_read_historical_figure_header

print("\nheaders in gap 0x2134ffd .. 0x2135412:")
for cand in range(0x2134ffd, 0x2135412, 2):
    r = BinaryReader(BytesIO(payload))
    r.seek(cand)
    h = try_read_historical_figure_header(r)
    if h and h.figure_id in (0, 1, 2, 3):
        print(f"  {cand:#x} id={h.figure_id} art={h.art_count} race={h.race} prof={h.profession}")

# dump gap start
chunk = payload[0x2134ffd : 0x2134ffd + 64]
print("\ngap @ 0x2134ffd:", " ".join(f"{b:02x}" for b in chunk[:32]))
