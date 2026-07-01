#!/usr/bin/env python3
"""Brute-find histfig_links prefix format that lands fig0 on fig1."""

from __future__ import annotations

from io import BytesIO
import struct

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.body_skipper import SkipError, default_xml_dir, skip_field, skip_struct
from df_save_re.deserializers.historical_figures import read_historical_figure_header
from df_save_re.save_preamble import resolve_save_payload
from df_save_re.structures.polymorph import build_registry
from df_save_re.structures.xml_fields import load_struct, resolve_fields

payload = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
xml_dir = default_xml_dir()
TARGET = 0x2135412
FIG0 = 0x2134DD0
HISTFIG_OFF = 0x2134E6E

# bytes at gap
print("gap bytes", payload[HISTFIG_OFF : HISTFIG_OFF + 16].hex())

def try_skip_histfig(off: int, *, extra_before: int = 0, count_override: int | None = None) -> int | None:
    r = BinaryReader(BytesIO(payload))
    r.seek(off + extra_before)
    count = count_override if count_override is not None else r.read_int32()
    if count < 0 or count > 5000:
        return None
    flags = [r.read_int32() != 0 for _ in range(count)]
    for present in flags:
        if not present:
            continue
        tag = r.read_int16()
        reg = build_registry("histfig_hf_link", xml_dir)
        if reg is None:
            return None
        sub = reg.subclass_for(tag)
        if sub is None:
            return None
        r.seek(r.tell() - 2)
        skip_struct(r, sub, xml_dir=xml_dir)
    return r.tell()

# try extra bytes before count
for extra in range(0, 8):
    end = try_skip_histfig(HISTFIG_OFF, extra_before=extra)
    if end is not None:
        print(f"extra={extra} end={end:#x} delta_to_target={TARGET-end}")

# try manual count at various offsets
for off in range(HISTFIG_OFF, HISTFIG_OFF + 8):
    c = struct.unpack_from("<i", payload, off)[0]
    if 0 <= c <= 100:
        end = try_skip_histfig(off, count_override=c)
        if end:
            print(f"count_off={off:#x} count={c} end={end:#x}")

# full tail skip with synthetic histfig start offsets
fields = resolve_fields(load_struct("historical_figure", xml_dir), xml_dir)
tail = [f for f in fields if f.name in (
    "entity_links", "site_links", "histfig_links", "info", "vague_relationships",
    "worldgen_site", "worldgen_region", "worldgen_layer", "worldgen_genetics",
    "worldgen_relationships", "temp_var", "temp_flag",
    "gen_material_skill_ip_sum", "defensive_skill_ip_sum",
)]

for histfig_start in range(0x2134E6E, 0x2134E80):
    r = BinaryReader(BytesIO(payload))
    r.seek(FIG0)
    read_historical_figure_header(r)
    # skip entity, site normally
    skip_field(r, tail[0], xml_dir=xml_dir, struct_name="historical_figure")
    skip_field(r, tail[1], xml_dir=xml_dir, struct_name="historical_figure")
    if r.tell() != 0x2134E6E:
        continue
    r.seek(histfig_start)
    ok = True
    for fd in tail[2:]:
        try:
            skip_field(r, fd, xml_dir=xml_dir, struct_name="historical_figure")
        except SkipError:
            ok = False
            break
    if ok and r.tell() == TARGET:
        print(f"LANDED histfig_start={histfig_start:#x}")
    elif ok:
        print(f"histfig_start={histfig_start:#x} end={r.tell():#x} (miss)")
