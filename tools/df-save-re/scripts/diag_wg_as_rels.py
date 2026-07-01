#!/usr/bin/env python3
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.body_skipper import SkipError, default_xml_dir, skip_struct
from df_save_re.deserializers.historical_figures import try_read_historical_figure_header
from df_save_re.save_preamble import resolve_save_payload

payload = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
FIG1 = 0x2135412

for start in range(0x21350C4, 0x21350F8, 2):
    r = BinaryReader(BytesIO(payload))
    r.seek(start)
    try:
        skip_struct(r, "historical_figure_relationships", xml_dir=default_xml_dir())
    except SkipError:
        continue
    if r.tell() == FIG1:
        print("relationships struct from", hex(start), "lands fig1")
    elif FIG1 - 32 <= r.tell() <= FIG1 + 32:
        print("near", hex(start), "end", hex(r.tell()), "delta", r.tell() - FIG1)

for prefix in range(40, 120, 4):
    r = BinaryReader(BytesIO(payload))
    r.seek(0x21350C4)
    r.read_bytes(prefix)
    try:
        skip_struct(r, "historical_figure_relationships", xml_dir=default_xml_dir())
        if r.tell() == FIG1:
            print("prefix", prefix, "then relationships lands fig1")
    except SkipError:
        pass
