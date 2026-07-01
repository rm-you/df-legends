#!/usr/bin/env python3
"""Find byte offset in gap where art_image chain reaches fig1."""
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.body_skipper import SkipError, default_xml_dir, skip_struct
from df_save_re.deserializers.historical_figures import try_read_historical_figure_header
from df_save_re.save_preamble import resolve_save_payload

payload = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
xml = default_xml_dir()
TAIL_END = 0x2134FFD
FIG1 = 0x2135412

for start in range(TAIL_END, FIG1):
    r = BinaryReader(BytesIO(payload))
    r.seek(start)
    ok = True
    while r.tell() < FIG1 and ok:
        before = r.tell()
        try:
            skip_struct(r, "art_image", xml_dir=xml)
        except SkipError:
            ok = False
            break
        if r.tell() == before:
            ok = False
            break
    if ok and r.tell() == FIG1:
        h = try_read_historical_figure_header(r)
        print(f"art_image chain from {start:#x} lands fig1 id={h.figure_id if h else None}")
        break
else:
    print("no art_image chain found")

# try art_image_ref pairs
for start in range(TAIL_END, min(TAIL_END + 64, FIG1)):
    r = BinaryReader(BytesIO(payload))
    r.seek(start)
    try:
        skip_struct(r, "art_image_ref", xml_dir=xml)
    except SkipError:
        continue
    if r.tell() == FIG1:
        print(f"art_image_ref from {start:#x} hits fig1")
