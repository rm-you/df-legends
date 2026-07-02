#!/usr/bin/env python3
from io import BytesIO
from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.historical_figures import try_read_historical_figure_header
from df_save_re.save_preamble import resolve_save_payload

p=resolve_save_payload('tests/fixtures/small-retired/world.dat').payload
start=0x15BEB38
for slot in range(5):
    r=BinaryReader(BytesIO(p)); r.seek(start)
    h=try_read_historical_figure_header(r, save_version=1716, expect_id=slot)
    if h is None:
        print('slot', slot, 'bad header at', hex(start))
        break
    print(f'slot {slot} ok race={h.race} civ={h.civ_id} header_bytes={h.header_bytes} end={hex(r.tell())}')
    start=r.tell()
