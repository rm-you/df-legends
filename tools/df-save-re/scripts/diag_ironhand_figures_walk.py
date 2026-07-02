#!/usr/bin/env python3
"""Walk full figures layer from each Ironhand anchor; probe collections after."""
from __future__ import annotations

import struct
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.world_history_walk import skip_figure_record
from df_save_re.save_preamble import resolve_save_payload

r = resolve_save_payload("tests/fixtures/ironhand-active/world.sav")
p, sv = r.payload, r.save_version

for anchor in (0x44F184B, 0x9B7305, 0x48A0673):
    count = struct.unpack_from("<i", p, anchor)[0]
    reader = BinaryReader(BytesIO(p))
    reader.seek(anchor + 4)
    ok = 0
    err = None
    try:
        for _ in range(count):
            skip_figure_record(reader, save_version=sv)
            ok += 1
    except (ValueError, EOFError) as exc:
        err = str(exc)[:100]
    end = reader.tell()
    print(f"anchor 0x{anchor:x} count={count}: walked {ok}, end=0x{end:x}, err={err}")
    if ok == count:
        nxt = struct.unpack_from("<i", p, end)[0]
        tag = struct.unpack_from("<i", p, end + 4)[0]
        print(f"  after figures: i32={nxt} then i32={tag} (collections count + tag 0..17?)")
