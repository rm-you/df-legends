#!/usr/bin/env python3
import struct

from df_save_re.save_preamble import resolve_save_payload

p = resolve_save_payload("tests/fixtures/small-retired/world.dat")
payload = p.payload

def show(off: int, n: int = 64) -> None:
    chunk = payload[off : off + n]
    words = [struct.unpack_from("<i", chunk, i)[0] for i in range(0, min(len(chunk), 32), 4)]
    print(hex(off), " ".join(f"{w:08x}" for w in words[:8]))

# figure 0 tail region
for off in [0x2134e66, 0x2135370, 0x2135380, 0x21353a3, 0x2135412]:
    show(off)

# read counts at vector fields
for name, off in [
    ("art_count area", 0x213537c),
    ("entity_links", 0x2135380),
    ("site_links", 0x2135384),
    ("histfig_links", 0x2135388),
]:
    c = struct.unpack_from("<i", payload, off)[0]
    print(name, hex(off), "count", c)
