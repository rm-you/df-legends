#!/usr/bin/env python3
import struct
from io import BytesIO
from df_save_re.binary_reader import BinaryReader
from df_save_re.save_preamble import resolve_save_payload
from df_save_re.structures.layout_dispatch import skip_layout_body
from df_save_re.structures.save_layouts import SAVE_LAYOUTS

p=resolve_save_payload('tests/fixtures/small-retired/world.dat').payload
END=0x15BEB28
for val in range(87000, 87800):
    needle=struct.pack('<i', val)
    pos=0x1000000
    while True:
        j=p.find(needle, pos, 0x11C41C5)
        if j<0: break
        tag=struct.unpack_from('<i', p, j+4)[0]
        if 0<=tag<=0x85:
            r=BinaryReader(BytesIO(p)); r.seek(j); c=r.read_int32()
            ok=True
            for i in range(c):
                t=r.read_int32()
                f=SAVE_LAYOUTS.get(f'history_event:{t}',{}).get('fields')
                if not f: ok=False; break
                try: skip_layout_body(r,f,save_version=1716)
                except: ok=False; break
            if ok and r.tell()==END:
                print(f'FOUND count={val} at 0x{j:x}')
        pos=j+4
