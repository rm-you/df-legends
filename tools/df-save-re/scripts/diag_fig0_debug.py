#!/usr/bin/env python3
"""Debug: for each 12747 occurrence, print raw no-pad header fields and the
language_name has_name byte + first string length, to see why parse fails.
"""
import struct
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.language_name import read_language_name
from df_save_re.save_preamble import resolve_save_payload


def hd(payload: bytes, off: int, n: int = 64) -> str:
    return " ".join(f"{b:02x}" for b in payload[off : off + n])


def main() -> None:
    p = resolve_save_payload("tests/fixtures/small-retired/world.dat")
    payload = p.payload
    pat = b"\xcb\x31\x00\x00"
    positions = []
    i = 0
    while True:
        j = payload.find(pat, i)
        if j < 0: break
        positions.append(j); i = j + 1
    for voff in positions:
        base = voff + 4
        if base + 56 > len(payload):
            continue
        prof, race, caste = struct.unpack_from("<hhh", payload, base)
        sex = payload[base + 6]
        orient = struct.unpack_from("<I", payload, base + 7)[0]
        yrs = struct.unpack_from("<11i", payload, base + 11)
        has_name = payload[base + 55]
        print(f"\n=== count@0x{voff:x} body@0x{base:x} ===")
        print(f"  bytes: {hd(payload, base, 64)}")
        print(f"  prof={prof} race={race} caste={caste} sex={sex} orient={orient}")
        print(f"  years[appeared,born_y,born_s,curse_y,curse_s,byear,btime,old_y,old_s,died_y,died_s]={yrs}")
        print(f"  has_name@+55 = {has_name}")
        if has_name == 1:
            fl = struct.unpack_from("<h", payload, base + 56)[0]
            print(f"  first_name len@+56 = {fl}")
        elif has_name == 0:
            print(f"  name_end would be 0x{base+56:x}")
        # try full language_name parse
        try:
            r = BinaryReader(BytesIO(payload)); r.seek(base + 55)
            name = read_language_name(r); ne = r.tell()
            print(f"  name OK: has={name.has_name} first={name.first_name!r} nick={name.nickname!r} lang={name.language} words={name.words[:4]}")
            if ne + 20 <= len(payload):
                civ, pop, breed, cult, fam = struct.unpack_from("<5i", payload, ne)
                print(f"  civ={civ} pop={pop} breed={breed} cult={cult} fam={fam}")
        except Exception as e:
            print(f"  name parse FAILED: {type(e).__name__}: {e}")


if __name__ == "__main__":
    main()
