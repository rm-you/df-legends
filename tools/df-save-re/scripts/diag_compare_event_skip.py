#!/usr/bin/env python3
from io import BytesIO
from df_save_re.binary_reader import BinaryReader
from df_save_re.save_preamble import resolve_save_payload
from df_save_re.structures.layout_dispatch import skip_layout_body
from df_save_re.structures.save_layouts import SAVE_LAYOUTS
from scripts.diag_events_id_monotonic import read_event_id

p=resolve_save_payload('tests/fixtures/small-retired/world.dat').payload
off=0x11C41C5
tag=56
fields=SAVE_LAYOUTS[f'history_event:{tag}']['fields']
r1=BinaryReader(BytesIO(p)); r1.seek(off+4); read_event_id(r1, fields, 1716); e1=r1.tell()
r2=BinaryReader(BytesIO(p)); r2.seek(off+4); skip_layout_body(r2, fields, save_version=1716); e2=r2.tell()
print('read_event_id end', hex(e1), 'skip_layout end', hex(e2), 'delta', e2-e1)
