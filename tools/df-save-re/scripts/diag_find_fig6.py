#!/usr/bin/env python3
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.historical_figures import try_read_historical_figure_header
from df_save_re.save_preamble import resolve_save_payload

payload = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload

# fig5 body ends where scan placed fig6; search for id=6 with art<=10
start = 0x21673D6
end = 0x21EDFF0
print(f"Search id=6 art<=10 between {start:#x} and {end:#x}:")
found = []
for off in range(start, end, 2):
    r = BinaryReader(BytesIO(payload))
    r.seek(off)
    h = try_read_historical_figure_header(r)
    if h and h.figure_id == 6 and h.art_count <= 10:
        found.append((off, h.art_count))
        if len(found) <= 10:
            print(f"  {off:#x} art={h.art_count}")

print(f"total candidates: {len(found)}")

# id=9 search after fig8
print("\nSearch id=9 after 0x21edff0:")
for off in range(0x21EDFF0, 0x226009C, 2):
    r = BinaryReader(BytesIO(payload))
    r.seek(off)
    h = try_read_historical_figure_header(r)
    if h and h.figure_id == 9 and h.art_count <= 10:
        print(f"  {off:#x} art={h.art_count}")
        break
