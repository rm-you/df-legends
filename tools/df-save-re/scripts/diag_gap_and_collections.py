#!/usr/bin/env python3
"""Inspect events->figures gap and probe collections after figures end."""
from __future__ import annotations

import struct
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.save_preamble import resolve_save_payload
from df_save_re.structures.layout_dispatch import skip_layout_body
from df_save_re.structures.save_layouts import SAVE_LAYOUTS

p = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload

print("=== gap between events end 0x15beb17 and figures count 0x15beb40 ===")
gap = p[0x15BEB17:0x15BEB40]
print("len", len(gap), "hex", gap.hex())
for k in range((len(gap)) // 4):
    off = 0x15BEB17 + 4 * k
    print(f"0x{off:x} i32 {struct.unpack_from('<i', p, off)[0]}")

print()
print("=== after figures end 0x2131e53 ===")
FIG_END = 0x2131E53
print("hex:", p[FIG_END:FIG_END + 96].hex())
for k in range(24):
    off = FIG_END + 4 * k
    v = struct.unpack_from("<i", p, off)[0]
    print(f"0x{off:x} i32 {v}")
