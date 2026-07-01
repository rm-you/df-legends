#!/usr/bin/env python3
import struct
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.historical_figures import try_read_historical_figure_header
from df_save_re.save_preamble import resolve_save_payload

payload = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
base = 0x217FAEE

print("id=6 headers near fig6:")
for delta in range(-64, 65, 2):
    off = base + delta
    r = BinaryReader(BytesIO(payload))
    r.seek(off)
    h = try_read_historical_figure_header(r)
    if h and h.figure_id == 6:
        print(f"  {off:#x} delta={delta:+d} art={h.art_count} race={h.race}")

print("\nhex at 0x217faee:")
chunk = payload[base : base + 96]
for i in range(0, len(chunk), 16):
    hexpart = " ".join(f"{b:02x}" for b in chunk[i : i + 16])
    print(f"  {base + i:08x}  {hexpart}")

# fig8 region
base8 = 0x21EDFF0
print(f"\nid=8 at {base8:#x}:")
r = BinaryReader(BytesIO(payload))
r.seek(base8)
h = try_read_historical_figure_header(r)
print(h.figure_id, h.art_count, h.race if h else None)

print("\nSearch id=9 near end of fig8 gap 0x21fe774:")
for delta in range(-500, 500, 2):
    off = 0x21FE774 + delta
    r = BinaryReader(BytesIO(payload))
    r.seek(off)
    h = try_read_historical_figure_header(r)
    if h and h.figure_id == 9:
        print(f"  id=9 at {off:#x} delta={delta} art={h.art_count}")

print("\nCandidates id>8 and id<30 near 0x21fe774:")
for delta in range(-2000, 2000, 2):
    off = 0x21FE774 + delta
    r = BinaryReader(BytesIO(payload))
    r.seek(off)
    h = try_read_historical_figure_header(r)
    if h and 8 < h.figure_id < 30:
        print(f"  id={h.figure_id} at {off:#x} art={h.art_count}")
