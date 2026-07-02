#!/usr/bin/env python3
"""Find the events count offset by scanning back from the first event at 0x11beb42."""
from __future__ import annotations

import struct

from df_save_re.save_preamble import resolve_save_payload

p = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload

START = 0x11BEB42
print("bytes before first event:")
print(p[START - 64:START].hex())
for k in range(1, 20):
    off = START - 4 * k
    print(f"0x{off:x} i32 {struct.unpack_from('<i', p, off)[0]}")
