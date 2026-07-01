#!/usr/bin/env python3
"""The figures vector is DENSE (confirmed by reader FUN_1407099a0 + writer
FUN_140709410): count(4) immediately followed by fig0's body. There are 3
occurrences of int32==12747 in the save; check which is followed by a valid
fig0 header (profession/race/caste/sex in range, plausible language_name).
"""
import struct
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.historical_figures import try_read_historical_figure_header
from df_save_re.save_preamble import resolve_save_payload


def hd(payload: bytes, off: int, n: int = 48) -> str:
    return " ".join(f"{b:02x}" for b in payload[off : off + n])


def main() -> None:
    p = resolve_save_payload("tests/fixtures/small-retired/world.dat")
    payload = p.payload
    positions = []
    for off in range(0, len(payload) - 4, 4):
        if struct.unpack_from("<i", payload, off)[0] == 12747:
            positions.append(off)
    print(f"int32==12747 occurrences: {[hex(x) for x in positions]}")
    for voff in positions:
        body = voff + 4
        prof, race, caste = struct.unpack_from("<hhh", payload, body)
        sex = payload[body + 6]
        print(f"\n=== 12747 @ 0x{voff:x}  body @ 0x{body:x} ===")
        print(f"  bytes: {hd(payload, body, 48)}")
        print(f"  prof={prof} race={race} caste={caste} sex={sex}")
        r = BinaryReader(BytesIO(payload))
        r.seek(body)
        h = try_read_historical_figure_header(r, expect_id=0)
        if h is None:
            r.seek(body)
            h2 = try_read_historical_figure_header(r)
            print(f"  parse expect_id=0 -> None; no-id -> id={h2.figure_id if h2 else None}")
            if h2:
                print(f"    prof={h2.profession} race={h2.race} caste={h2.caste} sex={h2.sex} civ={h2.civ_id} art={h2.art_count}")
        else:
            print(f"  FIG0 CONFIRMED: id={h.figure_id} prof={h.profession} race={h.race} caste={h.caste} sex={h.sex} civ={h.civ_id} art={h.art_count} flags={h.flag_indices}")
            print(f"    header_bytes={h.header_bytes} header_end=0x{body + h.header_bytes:x}")
            print(f"    name: has={h.name.has_name} first={h.name.first_name!r} nick={h.name.nickname!r}")


if __name__ == "__main__":
    main()
