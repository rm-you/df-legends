#!/usr/bin/env python3
import struct
from df_save_re.save_preamble import resolve_save_payload
p=resolve_save_payload('tests/fixtures/small-retired/world.dat').payload
off=0x15BEB17
print(' '.join(f'{struct.unpack_from("<i", p, off+4*k)[0]:10d}' for k in range(16)))
print(p[off:off+64].hex())
