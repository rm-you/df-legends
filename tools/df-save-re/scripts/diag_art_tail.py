#!/usr/bin/env python3
import struct

from df_save_re.save_preamble import resolve_save_payload

payload = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
START = 0x2134F4D
TARGET = 0x2135412
WHERE = 0x2134F91

ec = struct.unpack_from("<i", payload, START)[0]
print("events count", ec)
end = START + 4 + ec * 4
print("events end before tail", hex(end))
for tail in (0, 1, 2, 3, 4):
    o = end + tail
    lc = struct.unpack_from("<i", payload, o)[0]
    ok = 0 <= lc <= 50
    print(f"  tail={tail} off={o:#x} lost_count={lc} ok={ok}")

# full walk with tail=3
o = START
ec = struct.unpack_from("<i", payload, o)[0]
o += 4 + ec * 4 + 3
print("\nwith events tail=3, at", hex(o))
lc = struct.unpack_from("<i", payload, o)[0]
print("lost", lc)
o += 4 + lc * 4
pc = struct.unpack_from("<i", payload, o)[0]
print("chunk", pc)
o += 4 + pc * 4
pm = struct.unpack_from("<i", payload, o)[0]
print("member", pm)
o += 4 + pm * 2
# num fields only (omit static array)
o += 8
print("art end", hex(o), "where delta", o - WHERE, "fig1 delta", o - TARGET)
