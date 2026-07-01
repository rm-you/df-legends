#!/usr/bin/env python3
import struct

from df_save_re.save_preamble import resolve_save_payload

p = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
off = 0x215EDBF
prof, race, caste, sex = struct.unpack_from("<hhhh", p, off)
print("prof", prof, "race", race, "caste", caste, "sex", sex)
lang = struct.unpack_from("<h", p, off + 56)[0]
wcount = struct.unpack_from("<h", p, off + 58)[0]
print("lang", lang, "wcount", wcount)
pos = off + 60 + 2 * wcount
print("pos", hex(pos))
civ = struct.unpack_from("<i", p, pos)[0]
print("civ", civ)
print("bytes@56", p[off + 56 : off + 80].hex())
