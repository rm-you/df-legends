#!/usr/bin/env python3
"""Trace figure slot 0 tail field-by-field from the header end."""
from __future__ import annotations

import struct
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.historical_figures import read_historical_figure_header
from df_save_re.save_preamble import resolve_save_payload
from df_save_re.structures.layout_dispatch import skip_layout_body
from df_save_re.structures.save_layouts import SAVE_LAYOUTS

p = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
r = BinaryReader(BytesIO(p))
r.seek(0x15BEB44)
h = read_historical_figure_header(r, save_version=1716)
print(f"header end 0x{r.tell():x} race={h.race} civ={h.civ_id} flags={h.flag_indices}")


def trace_links(name: str, factory: str) -> None:
    off = r.tell()
    count = r.read_int32()
    print(f"{name}: count={count} @0x{off:x}")
    if count < 0 or count > 50000:
        print(f"  IMPLAUSIBLE; hex: {p[off:off+32].hex()}")
        raise SystemExit(1)
    for i in range(count):
        toff = r.tell()
        tag = r.read_int16()
        key = f"link:{factory}:{tag}"
        layout = SAVE_LAYOUTS.get(key)
        if not layout or not layout.get("fields"):
            print(f"  [{i}] tag={tag} @0x{toff:x} NO LAYOUT ({key}); hex {p[toff:toff+24].hex()}")
            raise SystemExit(1)
        skip_layout_body(r, layout["fields"], save_version=1716)
        if i < 3 or i >= count - 2:
            print(f"  [{i}] tag={tag} @0x{toff:x} -> 0x{r.tell():x}")


trace_links("entity_links", "entity")
trace_links("site_links", "site")
trace_links("histfig_links", "histfig")

off = r.tell()
has_info = r.read_uint8()
print(f"has_info={has_info} @0x{off:x}")
if has_info:
    info_layout = SAVE_LAYOUTS.get("histfig_info")
    for slot in info_layout["slots"]:
        soff = r.tell()
        flag = r.read_uint8()
        print(f"  slot {slot['slot']} ({slot['name']}): flag={flag} @0x{soff:x}")
        if flag:
            try:
                skip_layout_body(r, slot.get("body") or [], save_version=1716)
                print(f"    body -> 0x{r.tell():x}")
            except Exception as exc:
                print(f"    body FAILED: {exc}; hex {p[soff:soff+48].hex()}")
                raise SystemExit(1)

off = r.tell()
has_vague = r.read_uint8()
print(f"has_vague={has_vague} @0x{off:x}")
if has_vague:
    count = r.read_int32()
    print(f"  vague count={count}")
    for _ in range(count):
        r.read_int32(); r.read_int16()
print(f"slot 0 tail end 0x{r.tell():x}")
print(f"next 32 bytes: {p[r.tell():r.tell()+32].hex()}")
# try header at that position
h2 = read_historical_figure_header(r, save_version=1716)
print(f"slot1? race={h2.race} caste={h2.caste} civ={h2.civ_id} prof={h2.profession} born={h2.born_year}")
