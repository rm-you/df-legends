#!/usr/bin/env python3
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.historical_figures import try_read_historical_figure_header
from df_save_re.save_preamble import resolve_save_payload
from df_save_re.structures.xml_fields import load_struct, resolve_fields

payload = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
FIG1 = 0x2135412

# manual skip wg_relationship_quick_infost (same layout as relationship_quick_infost)
def skip_wg_rel(r: BinaryReader) -> None:
    r.read_bytes(6 * 4)  # hfid static array int32
    r.read_bytes(6 * 2)  # relationship enum int16
    r.read_int32()  # count

r = BinaryReader(BytesIO(payload))
r.seek(0x21350C0)
present = r.read_int32()
print("worldgen_relationships present", present)
if present:
    skip_wg_rel(r)
    print("after wg_rel body", hex(r.tell()), "fig1 delta", r.tell() - FIG1)
    # continue temp fields
    r.read_bytes(16)  # temp_var, temp_flag, gen, def
    print("after temp", hex(r.tell()), "fig1 delta", r.tell() - FIG1)
    h = try_read_historical_figure_header(r)
    print("next header", h.figure_id if h else None)
