#!/usr/bin/env python3
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.historical_figures import try_read_historical_figure_header
from df_save_re.save_preamble import resolve_save_payload

payload = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload

print("Headers id 8..25 with art<=10 after fig8 end 0x21fe774:")
for off in range(0x21FE774, 0x226009C, 2):
    r = BinaryReader(BytesIO(payload))
    r.seek(off)
    h = try_read_historical_figure_header(r)
    if h and 8 < h.figure_id <= 25 and h.art_count <= 10:
        print(f"  {off:#x} id={h.figure_id} art={h.art_count}")

print("\nVerify skip chain with art<=10 filter at fig6 0x21e0c32:")
from df_save_re.deserializers.body_skipper import SkipError, default_xml_dir, skip_historical_figure_body

xml = default_xml_dir()
chain = [0x2134DD0, 0x2135412, 0x213B0CF, 0x215EB79, 0x2161BAB, 0x21673D6, 0x21E0C32, 0x21EDFF0]
r = BinaryReader(BytesIO(payload))
for i, start in enumerate(chain[:-1]):
    r.seek(start)
    exp = chain[i + 1]
    try:
        skip_historical_figure_body(r, payload, xml_dir=xml, scan_stop=0x226009C)
    except SkipError as e:
        print(f"  fail {start:#x} -> {e}")
        break
    got = r.tell()
    print(f"  {start:#x} -> {got:#x} expect {exp:#x} {'OK' if got==exp else 'BAD'}")
