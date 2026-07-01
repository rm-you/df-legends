#!/usr/bin/env python3
"""Search ALL byte offsets (not just 4-aligned) for the figures count pattern
cb 31 00 00 (12747 LE), then test each +4 as a fig0 header using the DEFINITIVE
no-sex-pad reader layout (language_name at stream offset 55).

Reader FUN_14070a9d0 stream order:
  prof(2) race(2) caste(2) sex(1) | orientation(4) appeared(4) born_year(4)
  born_seconds(4) curse_year(4) curse_seconds(4) birth_year_bias(4)
  birth_time_bias(4) old_year(4) old_seconds(4) died_year(4) died_seconds(4)
  = 7 + 48 = 55 bytes, then language_name (has_name byte first).
"""
import struct
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.language_name import read_language_name
from df_save_re.save_preamble import resolve_save_payload


def hd(payload: bytes, off: int, n: int = 48) -> str:
    return " ".join(f"{b:02x}" for b in payload[off : off + n])


def parse_fig0_no_pad(payload: bytes, base: int) -> dict | None:
    try:
        prof, race, caste = struct.unpack_from("<hhh", payload, base)
        sex = payload[base + 6]
        orientation = struct.unpack_from("<I", payload, base + 7)[0]
        years = struct.unpack_from("<12i", payload, base + 11)
    except struct.error:
        return None
    if not (-1 <= prof <= 200 and -1 <= race <= 60000 and 0 <= caste <= 50 and -1 <= sex <= 2):
        return None
    # born_year etc. plausibility (years < 2000, seconds < 1<<17)
    appeared, born_y, born_s, curse_y, curse_s, byear_bias, btime_bias, old_y, old_s, died_y, died_s = (
        years[0], years[1], years[2], years[3], years[4], years[5], years[6], years[7], years[8], years[9], years[10],
    )
    for v in (appeared, born_y, curse_y, old_y, died_y):
        if not (-1 <= v < 2000):
            return None
    for v in (born_s, curse_s, old_s, died_s, btime_bias):
        if not (0 <= v < (1 << 18)):
            return None
    # language_name at base+55
    try:
        r = BinaryReader(BytesIO(payload))
        r.seek(base + 55)
        name = read_language_name(r)
        name_end = r.tell()
    except Exception as e:
        return None
    # after name: civ_id, population_id, breed_id, cultural_identity (4 each)
    try:
        civ, pop, breed, cult = struct.unpack_from("<iiii", payload, name_end)
    except struct.error:
        return None
    if not (0 <= civ <= 60000):
        return None
    return {
        "prof": prof, "race": race, "caste": caste, "sex": sex,
        "orientation": orientation, "appeared": appeared, "born_y": born_y,
        "civ": civ, "pop": pop, "breed": breed, "cult": cult,
        "name": name, "name_end": name_end,
    }


def main() -> None:
    p = resolve_save_payload("tests/fixtures/small-retired/world.dat")
    payload = p.payload
    pat = b"\xcb\x31\x00\x00"
    positions = []
    i = 0
    while True:
        j = payload.find(pat, i)
        if j < 0:
            break
        positions.append(j)
        i = j + 1
    print(f"byte-pattern cb 31 00 00 occurrences: {len(positions)}")
    print(f"positions: {[hex(x) for x in positions[:30]]}")
    for voff in positions:
        base = voff + 4
        info = parse_fig0_no_pad(payload, base)
        if info is None:
            continue
        print(f"\n=== CANDIDATE figures count @ 0x{voff:x}  fig0 @ 0x{base:x} ===")
        print(f"  bytes: {hd(payload, base, 64)}")
        print(f"  prof={info['prof']} race={info['race']} caste={info['caste']} sex={info['sex']}")
        print(f"  orientation={info['orientation']} appeared={info['appeared']} born_y={info['born_y']}")
        print(f"  civ={info['civ']} pop={info['pop']} breed={info['breed']} cult={info['cult']}")
        print(f"  name: has={info['name'].has_name} first={info['name'].first_name!r} nick={info['name'].nickname!r}")
        print(f"  name_end=0x{info['name_end']:x}")


if __name__ == "__main__":
    main()
