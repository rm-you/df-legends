#!/usr/bin/env python3
"""Settle the sex-pad ambiguity by dumping fig0/fig1 raw header bytes and
testing pad=0 vs pad=1 against the reader-confirmed layout (no pad).

Reader FUN_14070a9d0 reads: profession(2) race(2) caste(2) sex(1) then
orientation_flags(4) -- NO pad byte after sex.
"""
import struct

from df_save_re.deserializers.historical_figures import locate_figures_vector
from df_save_re.deserializers.world_layout import discover_layout_landmarks, resolve_history_search_start
from df_save_re.save_preamble import resolve_save_payload


def parse_header(payload: bytes, base: int, pad: int) -> dict:
    off = base
    prof, race, caste = struct.unpack_from("<hhh", payload, off); off += 6
    sex = payload[off]; off += 1
    off += pad  # optional pad
    fields = []
    for _ in range(12):
        fields.append(struct.unpack_from("<i", payload, off)[0]); off += 4
    has_name = payload[off]; off += 1
    out = {
        "profession": prof, "race": race, "caste": caste, "sex": sex,
        "orientation_flags": fields[0], "appeared_year": fields[1],
        "born_year": fields[2], "born_seconds": fields[3],
        "curse_year": fields[4], "curse_seconds": fields[5],
        "birth_year_bias": fields[6], "birth_time_bias": fields[7],
        "old_year": fields[8], "old_seconds": fields[9],
        "died_year": fields[10], "died_seconds": fields[11],
        "has_name": has_name, "has_name_off": base + 6 + 1 + pad + 48,
        "post_name_off": base + 6 + 1 + pad + 48 + 1,
    }
    if has_name == 1:
        first_len = struct.unpack_from("<h", payload, off)[0]; off += 2
        off += first_len
        nick_len = struct.unpack_from("<h", payload, off)[0]; off += 2
        off += nick_len
        off += 7 * 4 + 7 * 2 + 4 + 2  # words, parts_of_speech, language, name_type
    out["name_end_off"] = off
    # civ_id, population_id, breed_id, cultural_identity, family_head_id
    out["civ_id"] = struct.unpack_from("<i", payload, off)[0]
    return out


def main() -> None:
    p = resolve_save_payload("tests/fixtures/small-retired/world.dat")
    payload = p.payload
    layout = discover_layout_landmarks(payload, p.preamble)
    start = resolve_history_search_start(payload, layout, p.preamble.header)
    anchor = locate_figures_vector(payload, p.preamble.header, search_start=start)
    base = anchor.bodies_start
    print(f"fig0 base = 0x{base:x}")
    print(f"first 64 bytes: {' '.join(f'{b:02x}' for b in payload[base:base+64])}")
    print()
    for pad in (0, 1):
        h = parse_header(payload, base, pad)
        print(f"--- pad={pad} ---")
        for k, v in h.items():
            if isinstance(v, int) and k.endswith("_off"):
                print(f"  {k}=0x{v:x}")
            else:
                print(f"  {k}={v}")
        print()


if __name__ == "__main__":
    main()
