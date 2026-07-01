#!/usr/bin/env python3
from df_save_re.save_preamble import resolve_save_payload

p = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
start = 0x21350F0
end = 0x2135412
chunk = p[start:end]
print("len", len(chunk))
print(chunk[:128].hex())
print("...")
print(chunk[-64:].hex())
