#!/usr/bin/env python3
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.historical_figures import try_read_historical_figure_header
from df_save_re.save_preamble import resolve_save_payload

payload = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
start = 0x21673D6
end = 0x226009C

for want in range(6, 15):
    hits = []
    for off in range(start, min(start + 600_000, end), 2):
        r = BinaryReader(BytesIO(payload))
        r.seek(off)
        h = try_read_historical_figure_header(r)
        if h and h.figure_id == want:
            hits.append(off)
            if len(hits) >= 3:
                break
    if hits:
        print(f"id={want:3d} first hits: {[hex(x) for x in hits[:3]]}")
