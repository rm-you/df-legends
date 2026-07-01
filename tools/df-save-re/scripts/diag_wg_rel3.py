#!/usr/bin/env python3
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.historical_figures import try_read_historical_figure_header
from df_save_re.save_preamble import resolve_save_payload

payload = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
FIG1 = 0x2135412
BODY = 0x21350C4
TAIL = 16

for extra in range(780, 810):
    r = BinaryReader(BytesIO(payload))
    r.seek(BODY)
    r.read_bytes(44 + extra + TAIL)
    if r.tell() == FIG1:
        h = try_read_historical_figure_header(r)
        print("extra", extra, "end", hex(r.tell()), "id", h.figure_id if h else None)

print("need extra", FIG1 - BODY - 44 - TAIL)
