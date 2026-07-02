#!/usr/bin/env python3
"""Walk world_history tail: collections -> eras -> tail vectors, from figures end."""
from __future__ import annotations

import sys
from collections import Counter
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.event_collections import read_collection_record
from df_save_re.save_preamble import resolve_save_payload

SV = 1716
p = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
r = BinaryReader(BytesIO(p))
r.seek(0x2131E53)

# --- collections ---
coll_count = r.read_int32()
print(f"collections count={coll_count}")
tags = Counter()
sample = []
for i in range(coll_count):
    off = r.tell()
    tag = r.read_int32()
    try:
        rec = read_collection_record(r, tag, save_version=SV)
    except Exception as exc:
        print(f"collection {i} tag {tag} failed @0x{off:x} cursor 0x{r.tell():x}: {exc}")
        print("hex:", p[off:off + 64].hex())
        sys.exit(1)
    tags[tag] += 1
    if len(sample) < 5 and rec.get("name"):
        sample.append((i, rec["type"], rec["name"], rec["start_year"], rec["end_year"]))
print(f"collections end 0x{r.tell():x} tags={dict(sorted(tags.items()))}")
for s in sample:
    print("  sample:", s)

# --- eras (FUN_14075cd70) ---
era_count = r.read_int32()
print(f"eras count={era_count}")
if not (0 <= era_count <= 1000):
    print("implausible era count; hex:", p[r.tell() - 4:r.tell() + 60].hex())
    sys.exit(1)
for i in range(era_count):
    idx = r.read_int32()
    r.read_int16()
    r.read_int32(); r.read_int32(); r.read_int32()
    name_len = r.read_int16()
    name = r.read_bytes(name_len).decode("latin-1") if name_len > 0 else ""
    r.read_bytes(24)
    n = r.read_int32()
    r.read_bytes(4 * n)
    r.read_bytes(8)
    print(f"  era {i}: idx={idx} {name!r}")
print(f"eras end 0x{r.tell():x}")

# --- tail vectors per FUN_1407099a0 ---
n = r.read_int32(); r.read_bytes(4 * n); print(f"i32 vec ({n}) -> 0x{r.tell():x}")
n = r.read_int32(); r.read_bytes(2 * n); print(f"i16 vec ({n}) -> 0x{r.tell():x}")
vals = [r.read_int32() for _ in range(4)]
print(f"4 scalars {vals} -> 0x{r.tell():x}")
n = r.read_int32(); r.read_bytes(4 * n); print(f"i32 vec ({n}) -> 0x{r.tell():x}")
if SV > 0x5D7:
    vals = [r.read_int32() for _ in range(14)]
    print(f"14 scalars {vals} -> 0x{r.tell():x}")
if SV > 0x65C:
    n = r.read_int32()
    print(f"5xi32 vec count={n}")
    r.read_bytes(20 * n)
    n = r.read_int32()
    print(f"relationship-block count={n}")
    for _ in range(n):
        cnt = r.read_int32()
        r.read_int32()
        r.read_bytes(18 * cnt)
    print(f"-> 0x{r.tell():x}")
if SV > 0x68F:
    n = r.read_int32()
    print(f"gated tail vec count={n}")
    for _ in range(n):
        r.read_int32()
        if r.read_uint8():
            r.read_bytes(12); r.read_int16(); r.read_bytes(24); r.read_int16(); r.read_bytes(4)
            if SV > 0x6A2:
                r.read_bytes(12)
            r.read_bytes(40)
        r.read_bytes(16)
    print(f"-> 0x{r.tell():x}")
print(f"world_history END 0x{r.tell():x}")
print("next 64 bytes:", p[r.tell():r.tell() + 64].hex())
