#!/usr/bin/env python3
"""Test the dense-figures-vector hypothesis: real fig0 should be at
vector_offset + 4 (right after the count), NOT at the posnull-skipped
bodies_start. Parse the candidate at vector_offset+4 as a histfig header.
"""
import struct
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.historical_figures import (
    locate_figures_vector,
    try_read_historical_figure_header,
)
from df_save_re.deserializers.world_layout import discover_layout_landmarks, resolve_history_search_start
from df_save_re.save_preamble import resolve_save_payload


def hd(payload: bytes, off: int, n: int = 64) -> str:
    return " ".join(f"{b:02x}" for b in payload[off : off + n])


def main() -> None:
    p = resolve_save_payload("tests/fixtures/small-retired/world.dat")
    payload = p.payload
    layout = discover_layout_landmarks(payload, p.preamble)
    start = resolve_history_search_start(payload, layout, p.preamble.header)
    anchor = locate_figures_vector(payload, p.preamble.header, search_start=start)
    voff = anchor.vector_offset
    print(f"vector_offset=0x{voff:x}  count={struct.unpack_from('<i', payload, voff)[0]}")
    print(f"  posnull bodies_start=0x{anchor.bodies_start:x} (prefix=0x{anchor.prefix_bytes:x})")
    print(f"  bytes @ vector: {hd(payload, voff, 8)}")

    # Dense hypothesis: first body at voff + 4
    cand = voff + 4
    print(f"\n=== DENSE candidate fig0 @ 0x{cand:x} ===")
    print(f"  bytes: {hd(payload, cand, 80)}")
    r = BinaryReader(BytesIO(payload))
    r.seek(cand)
    h = try_read_historical_figure_header(r, expect_id=0)
    if h is None:
        print("  try_read_historical_figure_header(expect_id=0) -> None")
        # try without id constraint
        r.seek(cand)
        h2 = try_read_historical_figure_header(r)
        print(f"  no-id parse -> {h2.figure_id if h2 else None}")
    else:
        print(f"  id={h.figure_id} profession={h.profession} race={h.race} caste={h.caste} sex={h.sex}")
        print(f"  civ={h.civ_id} pop={h.population_id} breed={h.breed_id} cult={h.cultural_identity} fam={h.family_head_id}")
        print(f"  art={h.art_count} unit={h.unit_id} nemesis={h.nemesis_id} flags={h.flag_indices}")
        print(f"  has_name={h.name.has_name} first={h.name.first_name!r}")
        print(f"  header_bytes={h.header_bytes}  header_end=0x{cand + h.header_bytes:x}")

    # Also dump a few int32s after the count to see the first body header
    print(f"\n  first 16 int32 from 0x{cand:x}:")
    for i in range(16):
        v = struct.unpack_from("<i", payload, cand + i * 4)[0]
        print(f"    +0x{i*4:02x}: {v}")


if __name__ == "__main__":
    main()
