#!/usr/bin/env python3
"""Brute art trailer formats after defensive_skill_ip_sum for fig1->fig2."""
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.historical_figures import try_read_historical_figure_header
from df_save_re.save_preamble import resolve_save_payload

payload = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
TAIL_END = 0x21355EF
FIG2 = 0x213B0CF
ART_COUNT = 1


def lands(pos: int) -> bool:
    r = BinaryReader(BytesIO(payload))
    r.seek(pos)
    h = try_read_historical_figure_header(r)
    return h is not None and h.figure_id == 2


def try_chunk_vectors(use_art_count: bool) -> int | None:
    r = BinaryReader(BytesIO(payload))
    r.seek(TAIL_END)
    if use_art_count:
        pc, pm = ART_COUNT, ART_COUNT
    else:
        pc = r.read_int32()
        pm = r.read_int32()
    if pc < 0 or pc > 100_000 or pm < 0 or pm > 100_000:
        return None
    r.seek(TAIL_END)
    if not use_art_count:
        r.read_int32()
        r.read_int32()
    else:
        pass
    r.read_bytes(pc * 4)
    r.read_bytes(pm * 2)
    return r.tell()


def try_chunk_then_member_counts() -> int | None:
    r = BinaryReader(BytesIO(payload))
    r.seek(TAIL_END)
    pc = r.read_int32()
    if pc < 0 or pc > 100_000:
        return None
    r.read_bytes(pc * 4)
    pm = r.read_int32()
    if pm < 0 or pm > 100_000:
        return None
    r.read_bytes(pm * 2)
    return r.tell()


def try_art_count_int32_then_blob() -> int | None:
    r = BinaryReader(BytesIO(payload))
    r.seek(TAIL_END)
    n = r.read_int32()
    if n != ART_COUNT:
        return None
    # remainder fixed
    r.read_bytes(FIG2 - r.tell())
    return r.tell()


def try_skip_gap() -> int:
    return FIG2


tests = [
    ("chunk vectors from file counts", lambda: try_chunk_vectors(False)),
    ("chunk vectors art_count each", lambda: try_chunk_vectors(True)),
    ("chunk count+data then member count+data", try_chunk_then_member_counts),
    ("int32 art_count + fixed gap", try_art_count_int32_then_blob),
    ("raw fixed gap", try_skip_gap),
]

for name, fn in tests:
    end = fn()
    if end is None:
        print(f"{name}: None")
        continue
    print(f"{name}: end={end:#x} lands={lands(end)}")

# Brute: int32 pc, pc*4 bytes, int32 pm, pm*2 bytes with pc=ART_COUNT
r = BinaryReader(BytesIO(payload))
r.seek(TAIL_END)
for pc in [0, 1, 2, 3, 4, 5, 10, 20, 50, 100]:
    for pm in [0, 1, 2, 3, 4, 5, 10, 20, 50, 100, pc]:
        r2 = BinaryReader(BytesIO(payload))
        r2.seek(TAIL_END)
        try:
            if r2.read_int32() != pc:
                continue
            r2.read_bytes(pc * 4)
            if r2.read_int32() != pm:
                continue
            r2.read_bytes(pm * 2)
        except Exception:
            continue
        if lands(r2.tell()):
            print(f"MATCH pc={pc} pm={pm} end={r2.tell():#x}")
