#!/usr/bin/env python3
from io import BytesIO
from df_save_re.binary_reader import BinaryReader
from df_save_re.save_preamble import resolve_save_payload
from df_save_re.deserializers.world_history_walk import skip_event_body

p=resolve_save_payload('tests/fixtures/small-retired/world.dat').payload
END=0x15BEB28
START=0x11C41C5
r=BinaryReader(BytesIO(p)); r.seek(START); n=0
while r.tell()<END:
    off=r.tell(); tag=int.from_bytes(p[off:off+4],'little',signed=True)
    r.seek(off+4); skip_event_body(r, tag, save_version=1716); n+=1
print('skip_event_body', n, hex(r.tell()), 'delta', r.tell()-END)

# read_event_id inline
from df_save_re.structures.layout_dispatch import skip_layout_body
from df_save_re.structures.save_layouts import SAVE_LAYOUTS

def read_event_id(reader, fields, save_version=1716):
    for idx, f in enumerate(fields):
        if f.get("base") and f.get("mem_offset") == 0x20 and f.get("kind") == "i32":
            reader.read_int32()
            rest = fields[idx + 1 :]
            if rest:
                skip_layout_body(reader, rest, save_version=save_version)
            return
        skip_layout_body(reader, [f], save_version=save_version)

r2=BinaryReader(BytesIO(p)); r2.seek(START); n2=0
while r2.tell()<END:
    off=r2.tell(); tag=int.from_bytes(p[off:off+4],'little',signed=True)
    fields=SAVE_LAYOUTS[f'history_event:{tag}']['fields']
    r2.seek(off+4); read_event_id(r2, fields, 1716); n2+=1
print('read_event_id', n2, hex(r2.tell()), 'delta', r2.tell()-END)
