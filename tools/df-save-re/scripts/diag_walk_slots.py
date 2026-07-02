#!/usr/bin/env python3
from io import BytesIO
from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.record_reader import read_historical_figure_record
from df_save_re.save_preamble import resolve_save_payload

payload = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
reader = BinaryReader(BytesIO(payload))
reader.seek(0x2134DD9)
for slot in range(8):
    off = reader.tell()
    try:
        rec, consumed = read_historical_figure_record(reader, payload, figure_id=slot)
        err = rec.get("body_parse_error") or rec.get("body_blob")
        print(f"slot {slot:2d} off=0x{off:x} consumed={consumed:4d} err={bool(err)}")
    except Exception as e:
        print(f"slot {slot:2d} off=0x{off:x} FAIL {e}")
        break
