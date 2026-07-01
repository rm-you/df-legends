#!/usr/bin/env python3
import struct
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.historical_figures import try_read_historical_figure_header
from df_save_re.save_preamble import resolve_save_payload

payload = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
TAIL = 0x21355EF
FIG2 = 0x213B0CF
GAP = FIG2 - TAIL

# length prefix at tail?
for off in range(TAIL, TAIL + 32, 4):
    v = struct.unpack_from("<i", payload, off)[0]
    if v == GAP - 4 or v == GAP - 8 or v == GAP:
        print(f"length candidate at {off:#x}: {v}")

# length suffix before fig2
for delta in [0, 4, 8, 12, 16]:
    off = FIG2 - delta
    v = struct.unpack_from("<i", payload, off)[0]
    print(f"before fig2 -{delta}: {off:#x} = {v} ({v:#x})")

# try length-prefixed blob at tail
for size_off in [0, 4]:
    r = BinaryReader(BytesIO(payload))
    r.seek(TAIL + size_off)
    sz = r.read_int32()
    if sz <= 0 or sz > 500_000:
        continue
    end = r.tell() + sz
    if end == FIG2:
        print(f"LENGTH PREFIX at tail+{size_off}: size={sz}")
    h = try_read_historical_figure_header(BinaryReader(BytesIO(payload)))
    r2 = BinaryReader(BytesIO(payload))
    r2.seek(end)
    h = try_read_historical_figure_header(r2)
    if h and h.figure_id == 2:
        print(f"  lands fig2 with size={sz} at offset {size_off}")

print("gap", GAP)
