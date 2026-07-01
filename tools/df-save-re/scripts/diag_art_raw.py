#!/usr/bin/env python3
import struct

from df_save_re.save_preamble import resolve_save_payload

payload = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
START = 0x2134F4D

ec = struct.unpack_from("<i", payload, START)[0]
print("events count", ec, "at", hex(START))
end = START + 4 + ec * 4
print("after events", hex(end))
lc = struct.unpack_from("<i", payload, end)[0]
print("lost_events count", lc, "at", hex(end))
end2 = end + 4 + lc * 4
print("after lost", hex(end2))
pc = struct.unpack_from("<i", payload, end2)[0]
print("personal_art_image_chunk count", pc)
end3 = end2 + 4 + pc * 4
print("after chunk", hex(end3))
pm = struct.unpack_from("<i", payload, end3)[0]
print("personal_art_image_chunk_member count", pm)
end4 = end3 + 4 + pm * 2
print("after member", hex(end4))
# omitted static array; save has num + last_check only?
n1 = struct.unpack_from("<i", payload, end4)[0]
n2 = struct.unpack_from("<i", payload, end4 + 4)[0]
print("top_related num/check", n1, n2, "end", hex(end4 + 8))
print("target whereabouts ~", hex(0x2134F91), "fig1", hex(0x2135412))
