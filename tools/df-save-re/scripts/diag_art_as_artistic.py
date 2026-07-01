#!/usr/bin/env python3
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.historical_figures import try_read_historical_figure_header
from df_save_re.save_preamble import resolve_save_payload

payload = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload


def skip_artistic_save(reader: BinaryReader) -> None:
    ec = reader.read_int32()
    if ec:
        reader.read_bytes(ec * 4)
        reader.read_bytes(3)
    lc = reader.read_int32()
    if lc:
        reader.read_bytes(lc * 4)
    pc = reader.read_int32()
    if pc:
        reader.read_bytes(pc * 4)
    pm = reader.read_int32()
    if pm:
        reader.read_bytes(pm * 2)
    reader.read_bytes(8)


def lands(pos: int, expect: int) -> bool:
    r = BinaryReader(BytesIO(payload))
    r.seek(pos)
    h = try_read_historical_figure_header(r)
    return h is not None and h.figure_id == expect


cases = [
    ("fig1", 0x21355EF, 0x213B0CF, 2),
    ("fig2", 0x213B2F5, 0x215EB79, 3),
]

for label, tail, target, expect in cases:
    r = BinaryReader(BytesIO(payload))
    r.seek(tail)
    try:
        skip_artistic_save(r)
        print(f"{label}: artistic_save end={r.tell():#x} target={target:#x} ok={r.tell()==target} lands={lands(r.tell(), expect)}")
    except Exception as e:
        print(f"{label}: FAIL {e}")

    # try with leading int32 art_count
    r2 = BinaryReader(BytesIO(payload))
    r2.seek(tail)
    ac = r2.read_int32()
    print(f"  first int32={ac}")
    try:
        skip_artistic_save(r2)
        print(f"  after count artistic: end={r2.tell():#x} ok={r2.tell()==target}")
    except Exception as e:
        print(f"  after count FAIL {e}")
