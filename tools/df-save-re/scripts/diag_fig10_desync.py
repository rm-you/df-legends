#!/usr/bin/env python3
"""Per-field tail walk for figure at desync boundary (id=10)."""
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.body_skipper import SkipError, default_xml_dir, skip_field
from df_save_re.deserializers.historical_figures import (
    read_historical_figure_header,
    try_read_historical_figure_header,
    _find_next_figure_start,
)
from df_save_re.deserializers.record_reader import read_field
from df_save_re.deserializers.save_profiles import read_historical_figure_info_save, read_worldgen_relationships
from df_save_re.save_preamble import resolve_save_payload
from df_save_re.structures.xml_fields import load_struct, resolve_fields

payload = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
xml = default_xml_dir()
OFF = 0x2192DDA
DEATH = 0x226009C

TAIL = (
    "entity_links",
    "site_links",
    "histfig_links",
    "info",
    "vague_relationships",
    "worldgen_site",
    "worldgen_region",
    "worldgen_layer",
    "worldgen_genetics",
    "worldgen_relationships",
    "temp_var",
    "temp_flag",
    "gen_material_skill_ip_sum",
    "defensive_skill_ip_sum",
)
tail_fields = [f for f in resolve_fields(load_struct("historical_figure", xml), xml) if f.name in TAIL]

r = BinaryReader(BytesIO(payload))
r.seek(OFF)
h = read_historical_figure_header(r)
print(f"header id={h.figure_id} art={h.art_count} header_end={r.tell():#x}")

for fd in tail_fields:
    o = r.tell()
    try:
        if fd.name == "info":
            read_historical_figure_info_save(r)
        elif fd.name == "worldgen_relationships":
            read_worldgen_relationships(r)
        else:
            read_field(r, fd, xml_dir=xml, struct_name="historical_figure", payload=payload)
        print(f"  {fd.name:30s} +{r.tell()-o:5d} -> {r.tell():#x}")
    except SkipError as e:
        print(f"  {fd.name:30s} FAIL at {r.tell():#x}: {e}")
        break

tail_end = r.tell()
print(f"tail_end={tail_end:#x} (+{tail_end - OFF} from body start)")

nxt = _find_next_figure_start(
    payload, scan_start=tail_end, previous_id=h.figure_id, stop_before=DEATH, art_count=h.art_count
)
print(f"scan next={nxt:#x if nxt else None} gap={nxt - tail_end if nxt else '?'}")

if nxt:
    hh = try_read_historical_figure_header(BinaryReader(BytesIO(payload)), )
    r2 = BinaryReader(BytesIO(payload))
    r2.seek(nxt)
    nh = try_read_historical_figure_header(r2)
    print(f"next header id={nh.figure_id if nh else None} art={nh.art_count if nh else None}")

# Compare skip vs read for info if present
print("\n--- skip path ---")
rs = BinaryReader(BytesIO(payload))
rs.seek(OFF)
read_historical_figure_header(rs)
for fd in tail_fields:
    o = rs.tell()
    try:
        if fd.name == "info":
            flag = rs.read_int32()
            if flag:
                from df_save_re.deserializers.save_profiles import read_masterpieces_save
                from df_save_re.deserializers.body_skipper import skip_field as sf

                info_fields = resolve_fields(load_struct("historical_figure_info", xml), xml)
                for ifd in info_fields:
                    if ifd.name == "masterpieces":
                        mp = rs.read_int32()
                        if mp:
                            from scripts.diag_fig0_correct import skip_artistic_save

                            skip_artistic_save(rs)
                    else:
                        sf(rs, ifd, xml_dir=xml, struct_name="historical_figure_info", payload=payload)
        elif fd.name == "worldgen_relationships":
            p = rs.read_int32()
            if p == 1:
                rs.read_bytes(830)
        else:
            skip_field(rs, fd, xml_dir=xml, struct_name="historical_figure", payload=payload)
        print(f"  {fd.name:30s} +{rs.tell()-o:5d} -> {rs.tell():#x}")
    except SkipError as e:
        print(f"  {fd.name:30s} FAIL: {e}")
        break
print(f"skip tail_end={rs.tell():#x} delta vs read={rs.tell() - tail_end}")
