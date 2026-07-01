#!/usr/bin/env python3
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.historical_figures import try_read_historical_figure_header
from df_save_re.save_preamble import resolve_save_payload

payload = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
FIG1 = 0x2135412

def skip_wg_rel_save(r: BinaryReader) -> None:
    r.read_bytes(6 * 4 + 6 * 2 + 4)
    # current_spouse pointer: int32 present
    if r.read_int32():
        r.read_int32()  # ref id only on save?
    for _ in range(2):
        if r.read_int32():
            r.read_int32()

r = BinaryReader(BytesIO(payload))
r.seek(0x21350C0)
present = r.read_int32()
print("present", present)
skip_wg_rel_save(r)
print("wg end", hex(r.tell()))
r.read_bytes(16)
print("after temp", hex(r.tell()), "fig1 delta", r.tell() - FIG1)
h = try_read_historical_figure_header(r)
print("next", h.figure_id if h else None)

# brute spouse/lover pointer body sizes
for extra in range(0, 900, 2):
    r2 = BinaryReader(BytesIO(payload))
    r2.seek(0x21350C4)
    r2.read_bytes(6 * 4 + 6 * 2 + 4)
    r2.read_bytes(extra)
    r2.read_bytes(16)
    if r2.tell() == FIG1:
        print("MATCH extra bytes in wg_rel", extra)
        break
