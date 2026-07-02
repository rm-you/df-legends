#!/usr/bin/env python3
"""Verify Ironhand events candidates: monotonic ids, then try figures after."""
from __future__ import annotations

import struct
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.world_history_walk import (
    read_event_record,
    read_figure_record,
)
from df_save_re.save_preamble import resolve_save_payload

r = resolve_save_payload("tests/fixtures/ironhand-active/world.sav")
p, sv = r.payload, r.save_version

for off in (0x4955FE3, 0x531B986, 0x534072B, 0x56298CB, 0x5A96D57):
    count = struct.unpack_from("<i", p, off)[0]
    reader = BinaryReader(BytesIO(p))
    reader.seek(off + 4)
    ids, years = [], []
    ok = True
    try:
        for _ in range(count):
            tag = reader.read_int32()
            rec = read_event_record(reader, tag, save_version=sv)
            ids.append(rec.get("id"))
            years.append(rec.get("year"))
    except (ValueError, EOFError):
        ok = False
    mono = all(b > a for a, b in zip(ids, ids[1:])) if ids else False
    end = reader.tell()
    nxt = struct.unpack_from("<i", p, end)[0]
    print(
        f"@0x{off:x}: ok={ok} mono_ids={mono} ids[:5]={ids[:5]} ids[-3:]={ids[-3:]} "
        f"years[:5]={years[:5]} end=0x{end:x} next_i32={nxt}"
    )
    if ok and mono:
        # try walking figures right after
        fr = BinaryReader(BytesIO(p))
        fr.seek(end + 4)
        walked = 0
        err = None
        try:
            for slot in range(nxt):
                read_figure_record(fr, figure_id=slot, save_version=sv)
                walked += 1
        except (ValueError, EOFError) as exc:
            err = str(exc)[:100]
        print(f"   figures after (count={nxt}): walked {walked}, err={err}")
