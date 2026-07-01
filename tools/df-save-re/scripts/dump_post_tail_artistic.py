#!/usr/bin/env python3
"""Try artistic-profile-style chunk vectors and other patterns on post-tail gaps."""
import struct
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.historical_figures import try_read_historical_figure_header
from df_save_re.save_preamble import resolve_save_payload

payload = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload

GAPS = [
    ("fig1", 0x21355EF, 0x213B0CF, 2, 1),
    ("fig2", 0x213B2CD, 0x215EB79, 3, 1),
    ("fig3", 0x215EC4F, 0x2161BAB, 4, 0),
    ("fig5", 0x217F8B7, 0x217FAEE, 6, 0),  # approximate - will verify
]


def lands(pos: int, expect: int) -> bool:
    r = BinaryReader(BytesIO(payload))
    r.seek(pos)
    h = try_read_historical_figure_header(r)
    return h is not None and h.figure_id == expect


def try_artistic_tail(te: int, target: int, expect: int) -> None:
    gap = target - te
    for lead in range(0, min(256, gap), 1):
        r = BinaryReader(BytesIO(payload))
        r.seek(te + lead)
        try:
            pc = r.read_int32()
            if pc < 0 or pc > 50000:
                continue
            if pc:
                r.read_bytes(pc * 4)
            pm = r.read_int32()
            if pm < 0 or pm > 50000:
                continue
            if pm:
                r.read_bytes(pm * 2)
            r.read_bytes(8)
        except EOFError:
            continue
        if r.tell() == target and lands(target, expect):
            print(f"  MATCH artistic_tail lead={lead} pc={pc} pm={pm}")
            return
    print("  no artistic_tail match")


def try_pc_pm_only(te: int, target: int, expect: int) -> None:
    gap = target - te
    for lead in range(0, min(256, gap), 4):
        r = BinaryReader(BytesIO(payload))
        r.seek(te + lead)
        try:
            pc = r.read_int32()
            if pc < 0 or pc > 50000:
                continue
            need = 4 + pc * 4
            if te + lead + need == target and lands(target, expect):
                print(f"  MATCH pc-only lead={lead} pc={pc}")
                return
            pm = struct.unpack_from("<i", payload, te + lead + 4 + pc * 4)[0] if te + lead + 8 + pc * 4 <= len(payload) else -1
        except EOFError:
            continue
    print("  no pc-only match")


for label, te, target, expect, ac in GAPS:
    gap = target - te
    print(f"\n{label} art={ac} gap={gap} te={te:#x}")
    try_artistic_tail(te, target, expect)
    try_pc_pm_only(te, target, expect)

# Find true fig6 header near 0x217faee
print("\nSearch id=6 headers near 0x217faee:")
for delta in range(-2000, 2000, 2):
    off = 0x217FAEE + delta
    r = BinaryReader(BytesIO(payload))
    r.seek(off)
    h = try_read_historical_figure_header(r, expect_id=6)
    if h:
        print(f"  id=6 at {off:#x} art={h.art_count} delta={delta}")
