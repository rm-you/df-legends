#!/usr/bin/env python3
from io import BytesIO
import struct
from df_save_re.binary_reader import BinaryReader
from df_save_re.save_preamble import resolve_save_payload
from df_save_re.structures.layout_dispatch import skip_layout_body
from df_save_re.structures.save_layouts import SAVE_LAYOUTS

p=resolve_save_payload('tests/fixtures/small-retired/world.dat').payload
END=0x15BEB28
for start,count in [(0x1079C40,87212),(0x1079C40,832+86380),(0x11C41C5,86380)]:
    r=BinaryReader(BytesIO(p)); r.seek(start); n=0
    while n<count and r.tell()<len(p):
        off=r.tell(); tag=struct.unpack_from('<i',p,off)[0]
        if not (0<=tag<=0x85): print('bad tag',hex(start),n,tag); break
        r.seek(off+4); skip_layout_body(r, SAVE_LAYOUTS[f'history_event:{tag}']['fields'], save_version=1716); n+=1
    print(hex(start),'count',count,'walked',n,'end',hex(r.tell()),'match',r.tell()==END)
