#!/usr/bin/env python3
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.historical_figures import try_read_historical_figure_header
from df_save_re.save_preamble import resolve_save_payload

payload = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload

cases = [
    ("fig1", 0x21355EF, 0x213B0CF, 2),
    ("fig2", 0x213B2F5, 0x215EB79, 3),
]


def skip_personal_art(r: BinaryReader) -> None:
    pc = r.read_int32()
    if pc < 0 or pc > 200_000:
        raise ValueError(pc)
    if pc:
        r.read_bytes(pc * 4)
    pm = r.read_int32()
    if pm < 0 or pm > 200_000:
        raise ValueError(pm)
    if pm:
        r.read_bytes(pm * 2)


def skip_events_lost_personal(r: BinaryReader) -> None:
    ec = r.read_int32()
    if ec:
        r.read_bytes(ec * 4)
        r.read_bytes(3)
    lc = r.read_int32()
    if lc:
        r.read_bytes(lc * 4)
    skip_personal_art(r)
    r.read_bytes(8)


for label, tail, target, expect in cases:
    print(f"=== {label} gap={target-tail} ===")
    for prefix in range(0, 128, 4):
        r = BinaryReader(BytesIO(payload))
        r.seek(tail + prefix)
        for name, fn in [
            ("personal", skip_personal_art),
            ("events+personal", skip_events_lost_personal),
        ]:
            r2 = BinaryReader(BytesIO(payload))
            r2.seek(tail + prefix)
            try:
                fn(r2)
            except (ValueError, EOFError):
                continue
            if r2.tell() == target:
                print(f"  EXACT {name} prefix={prefix}")
            h = try_read_historical_figure_header(BinaryReader(BytesIO(payload)))
            r3 = BinaryReader(BytesIO(payload))
            r3.seek(r2.tell())
            h = try_read_historical_figure_header(r3)
            if h and h.figure_id == expect:
                print(f"  LANDS {name} prefix={prefix} end={r2.tell():#x}")
