#!/usr/bin/env python3
from io import BytesIO
from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.historical_figures import try_read_historical_figure_header
from df_save_re.save_preamble import resolve_save_payload

p=resolve_save_payload('tests/fixtures/small-retired/world.dat').payload
EVENTS_END=0x15BEB17
found=[]
for off in range(EVENTS_END, min(EVENTS_END + 0x500000, len(p)-64), 1):
    if off % 0x100000 == 0:
        print('scan', hex(off))
    r=BinaryReader(BytesIO(p)); r.seek(off)
    h=try_read_historical_figure_header(r, save_version=1716)
    if h and 0<=h.race<=500 and 0<=h.civ_id<=500:
        found.append((off, h.race, h.civ_id))
        if len(found)>=5: break
print('found', [(hex(x[0]), x[1], x[2]) for x in found])
