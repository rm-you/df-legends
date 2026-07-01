#!/usr/bin/env python3
from io import BytesIO
from pathlib import Path
from df_save_re.binary_reader import BinaryReader
from df_save_re.compression import decompress_file
from df_save_re.deserializers.vector_io import skip_posnull_pointer_vector

payload = decompress_file(Path(__file__).resolve().parents[1] / "tests/fixtures/small-retired/world.dat").payload
r = BinaryReader(BytesIO(payload))
r.seek(0x2131bb0)
cnt, present = skip_posnull_pointer_vector(r)
print(f"count={cnt} present={present} flags_end=0x{r.tell():x}")
for extra in range(0, 128):
    off = r.tell() + extra
    print(f"  extra={extra} -> 0x{off:x}")
