#!/usr/bin/env python3
"""Scan ALL offsets for a valid fig0 body under the definitive no-pad layout
(FUN_14070a9d0). Figure id is the vector index (NOT stored), so we look for a
parseable header+name+civ block. Report the 4 bytes before each hit as the
candidate figures count.
"""
import struct
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.language_name import read_language_name
from df_save_re.save_preamble import resolve_save_payload


def hd(payload: bytes, off: int, n: int = 32) -> str:
    return " ".join(f"{b:02x}" for b in payload[off : off + n])


def header_prefilter(payload: bytes, base: int) -> bool:
    if base + 7 > len(payload):
        return False
    prof, race, caste = struct.unpack_from("<hhh", payload, base)
    sex = payload[base + 6]
    return (-1 <= prof <= 200 and -1 <= race <= 60000 and 0 <= caste <= 50 and -1 <= sex <= 2)


def full_parse(payload: bytes, base: int) -> dict | None:
    if base + 55 > len(payload):
        return None
    years = struct.unpack_from("<12i", payload, base + 7 + 4 - 4)  # placeholder
    # orientation at +7 (4), then 11 year fields from +11
    orientation = struct.unpack_from("<I", payload, base + 7)[0]
    yf = struct.unpack_from("<11i", payload, base + 11)
    appeared, born_y, born_s, curse_y, curse_s, byear_bias, btime_bias, old_y, old_s, died_y, died_s = yf
    # deity-friendly: years either -1 or < 2000; seconds small or -1
    for v in (appeared, born_y, curse_y, old_y, died_y):
        if not (v == -1 or (0 <= v < 2000)):
            return None
    for v in (born_s, curse_s, old_s, died_s):
        if not (v == -1 or (0 <= v < (1 << 18))):
            return None
    try:
        r = BinaryReader(BytesIO(payload))
        r.seek(base + 55)
        name = read_language_name(r)
        name_end = r.tell()
    except Exception:
        return None
    if name_end + 16 > len(payload):
        return None
    civ, pop, breed, cult = struct.unpack_from("<iiii", payload, name_end)
    if not (-1 <= civ <= 60000 and -1 <= pop <= 60000):
        return None
    return {
        "prof": struct.unpack_from("<h", payload, base)[0],
        "race": struct.unpack_from("<h", payload, base + 2)[0],
        "caste": struct.unpack_from("<h", payload, base + 4)[0],
        "sex": payload[base + 6],
        "orientation": orientation,
        "appeared": appeared, "born_y": born_y,
        "civ": civ, "pop": pop, "breed": breed, "cult": cult,
        "name": name, "name_end": name_end,
    }


def main() -> None:
    p = resolve_save_payload("tests/fixtures/small-retired/world.dat")
    payload = p.payload
    hits = []
    n = len(payload)
    base = 0
    while base + 200 < n:
        if header_prefilter(payload, base):
            info = full_parse(payload, base)
            if info is not None:
                count_before = struct.unpack_from("<i", payload, base - 4)[0] if base >= 4 else None
                hits.append((base, count_before, info))
                base += 1  # don't skip; but to speed up, jump a little
                continue
        base += 1
    print(f"total fig0-header hits: {len(hits)}")
    # Group by preceding count
    from collections import Counter
    counts = Counter(h[1] for h in hits)
    print(f"preceding-count distribution (top 15): {counts.most_common(15)}")
    # Show hits where preceding count is large (plausible figures count)
    for base, cnt, info in hits:
        if cnt is not None and cnt > 100:
            print(f"\n=== fig0 @ 0x{base:x}  preceding count={cnt} ===")
            print(f"  bytes: {hd(payload, base, 32)}")
            print(f"  prof={info['prof']} race={info['race']} caste={info['caste']} sex={info['sex']} orient={info['orientation']}")
            print(f"  appeared={info['appeared']} born_y={info['born_y']} civ={info['civ']} pop={info['pop']}")
            print(f"  name: has={info['name'].has_name} first={info['name'].first_name!r} nick={info['name'].nickname!r} lang={info['name'].language}")
            print(f"  name_end=0x{info['name_end']:x}")


if __name__ == "__main__":
    main()
