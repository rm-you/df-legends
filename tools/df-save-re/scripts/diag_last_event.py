#!/usr/bin/env python3
from io import BytesIO
from df_save_re.binary_reader import BinaryReader
from df_save_re.save_preamble import resolve_save_payload
from df_save_re.deserializers.world_history_walk import skip_event_body

p=resolve_save_payload('tests/fixtures/small-retired/world.dat').payload
END=0x15BEB28
START=0x11C41C5
r=BinaryReader(BytesIO(p)); r.seek(START)
for i in range(86379):
    off=r.tell(); tag=int.from_bytes(p[off:off+4],'little',signed=True)
    r.seek(off+4); skip_event_body(r, tag, save_version=1716)
print('after 86379', hex(r.tell()))
off=r.tell(); tag=int.from_bytes(p[off:off+4],'little',signed=True)
print('last tag', tag, 'at', hex(off))
r.seek(off+4); skip_event_body(r, tag, save_version=1716)
print('after last', hex(r.tell()), 'overshoot', r.tell()-END)
