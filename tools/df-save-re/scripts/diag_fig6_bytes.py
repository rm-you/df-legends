#!/usr/bin/env python3
from df_save_re.save_preamble import resolve_save_payload

payload = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
for label, off in [("fig6 id field ~", 0x217FB79), ("fig5 end", 0x217FAEE), ("before fig6", 0x217FA00)]:
    print(f"\n{label} {off:#x}:")
    chunk = payload[off - 16 : off + 32]
    for i in range(0, len(chunk), 16):
        base = off - 16 + i
        hexpart = " ".join(f"{b:02x}" for b in chunk[i : i + 16])
        print(f"  {base:08x}  {hexpart}")

# search for 06 00 00 00 followed by a7 06 00 00 near fig5 tail
needle = bytes([6, 0, 0, 0, 0xA7, 6, 0, 0])
region = payload[0x217F000:0x2180000]
idx = region.find(needle)
print(f"\nneedle id=6 art=1703 in region: {idx:#x}" if idx >= 0 else "needle not found")

# search any plausible header with id 6 and small art
from io import BytesIO
from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.historical_figures import try_read_historical_figure_header

print("\nAll id=6 headers in 0x217f000..0x2181000:")
for off in range(0x217F000, 0x2181000, 2):
    r = BinaryReader(BytesIO(payload))
    r.seek(off)
    h = try_read_historical_figure_header(r)
    if h and h.figure_id == 6 and h.art_count < 20:
        print(f"  {off:#x} art={h.art_count} race={h.race}")
