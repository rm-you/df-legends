#!/usr/bin/env python3
from io import BytesIO
from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.record_reader import read_historical_figure_record
from df_save_re.save_preamble import resolve_save_payload

payload = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
for start in (0x2134DD9, 0x2134E61, 0x2134D80):
    reader = BinaryReader(BytesIO(payload))
    reader.seek(start)
    ok = 0
    for slot in range(5):
        off = reader.tell()
        try:
            _, consumed = read_historical_figure_record(reader, payload, figure_id=slot)
            ok += 1
        except Exception as e:
            print(f"start=0x{start:x} fail slot {slot} at 0x{off:x}: {e}")
            break
    else:
        print(f"start=0x{start:x} parsed 5 slots OK, end=0x{reader.tell():x}")
        continue
    print(f"start=0x{start:x} parsed {ok} slots before fail")
