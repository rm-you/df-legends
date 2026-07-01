#!/usr/bin/env python3
"""Re-test the 13 occurrences of int32==12747 as the figures count, allowing
-1 (sentinel) for civ/pop/breed/cult and deity-style -1 years. Uses the
DEFINITIVE no-pad writer layout (FUN_14070a090):
  prof(2) race(2) caste(2) sex(1) | orientation(4) + 11 year int32 (48 bytes)
  | language_name(has_name byte) @ stream 55 | civ pop breed cult family_head
  nemesis unit ? flags_vec ? entity_links/site_links/histfig_links info vague
"""
import struct
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.language_name import read_language_name
from df_save_re.save_preamble import resolve_save_payload


def hd(payload: bytes, off: int, n: int = 40) -> str:
    return " ".join(f"{b:02x}" for b in payload[off : off + n])


def parse(payload: bytes, base: int) -> dict | None:
    if base + 55 > len(payload):
        return None
    prof, race, caste = struct.unpack_from("<hhh", payload, base)
    sex = payload[base + 6]
    if not (-1 <= prof <= 200 and -1 <= race <= 60000 and 0 <= caste <= 50 and -1 <= sex <= 2):
        return None
    orientation = struct.unpack_from("<I", payload, base + 7)[0]
    yrs = struct.unpack_from("<11i", payload, base + 11)
    for v in yrs:  # years: -1 or <2000; seconds: -1 or <1<<18
        if not (v == -1 or (-1 < v < 2000) or (v & 0xFFFFFFFF) < (1 << 18)):
            return None
    try:
        r = BinaryReader(BytesIO(payload)); r.seek(base + 55)
        name = read_language_name(r); ne = r.tell()
    except Exception:
        return None
    if ne + 20 > len(payload):
        return None
    civ, pop, breed, cult, fam = struct.unpack_from("<5i", payload, ne)
    # allow -1 sentinels
    if not all(v == -1 or (0 <= v < 100000) for v in (civ, pop, breed, cult, fam)):
        return None
    return {"prof": prof, "race": race, "caste": caste, "sex": sex, "orient": orientation,
            "appeared": yrs[0], "born_y": yrs[1], "civ": civ, "pop": pop, "breed": breed,
            "cult": cult, "fam": fam, "name": name, "ne": ne}


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
    print(f"{len(positions)} occurrences of 12747")
    for voff in positions:
        base = voff + 4
        info = parse(payload, base)
        if info is None:
            continue
        print(f"\n=== fig0 candidate: count@0x{voff:x} body@0x{base:x} ===")
        print(f"  bytes: {hd(payload, base, 40)}")
        print(f"  prof={info['prof']} race={info['race']} caste={info['caste']} sex={info['sex']} orient={info['orient']}")
        print(f"  appeared={info['appeared']} born_y={info['born_y']}")
        print(f"  civ={info['civ']} pop={info['pop']} breed={info['breed']} cult={info['cult']} fam={info['fam']}")
        print(f"  name: has={info['name'].has_name} first={info['name'].first_name!r} nick={info['name'].nickname!r} lang={info['name'].language}")
        print(f"  name_end=0x{info['ne']:x}  (body so far {info['ne']-base} bytes)")


if __name__ == "__main__":
    main()
