#!/usr/bin/env python3
import struct
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.body_skipper import SkipError, default_xml_dir, skip_field
from df_save_re.deserializers.historical_figures import read_historical_figure_header
from df_save_re.save_preamble import resolve_save_payload
from df_save_re.structures.xml_fields import load_struct, resolve_fields

payload = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
xml_dir = default_xml_dir()
TARGET = 0x2135412

fields = resolve_fields(load_struct("historical_figure", xml_dir), xml_dir)
tail_names = [
    "entity_links", "site_links", "histfig_links", "info", "vague_relationships",
    "worldgen_site", "worldgen_region", "worldgen_layer", "worldgen_genetics",
    "worldgen_relationships", "temp_var", "temp_flag",
    "gen_material_skill_ip_sum", "defensive_skill_ip_sum",
]
tail = [f for f in fields if f.name in tail_names]

def walk_fig(start: int, *, pad_before_histfig: int = 0) -> None:
    r = BinaryReader(BytesIO(payload))
    r.seek(start)
    h = read_historical_figure_header(r)
    print(f"\nfig id={h.figure_id} header_end={r.tell():#x}")
    for fd in tail[:2]:
        skip_field(r, fd, xml_dir=xml_dir, struct_name="historical_figure")
    if pad_before_histfig:
        r.read_bytes(pad_before_histfig)
    for fd in tail[2:]:
        off = r.tell()
        try:
            skip_field(r, fd, xml_dir=xml_dir, struct_name="historical_figure")
            print(f"  ok {fd.name:22s} +{r.tell()-off:4d} -> {r.tell():#x}")
        except SkipError as e:
            print(f"  FAIL {fd.name} @ {off:#x}: {e}")
            for i in range(4):
                o = off + i * 4
                print(f"    {o:#x}: {struct.unpack_from('<i', payload, o)[0]} ({payload[o:o+4].hex()})")
            return
    print(f"  END {r.tell():#x} (delta to next fig: {TARGET - r.tell() if start==0x2134DD0 else 'n/a'})")

walk_fig(0x2134DD0, pad_before_histfig=3)
walk_fig(0x2135412)

# bytes around fig0 info fail
off = 0x2134ed5
print("\nbytes @ ed5", payload[off:off+32].hex())
