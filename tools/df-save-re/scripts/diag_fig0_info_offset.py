#!/usr/bin/env python3
"""Dump fig0 bytes around the claimed three link vectors + info flag, annotated
for both base candidates (0x2134dd8 pad=1 and 0x2134dd9 pad=0), so we can match
against the info writer layout once decompiled.
"""
import struct

from df_save_re.deserializers.historical_figures import locate_figures_vector
from df_save_re.deserializers.world_layout import discover_layout_landmarks, resolve_history_search_start
from df_save_re.save_preamble import resolve_save_payload


def header_end(payload: bytes, base: int, pad: int) -> int:
    off = base + 6 + 1 + pad + 48  # through 12 int32
    has_name = payload[off]
    off += 1
    if has_name == 1:
        fl = struct.unpack_from("<h", payload, off)[0]; off += 2 + fl
        nl = struct.unpack_from("<h", payload, off)[0]; off += 2 + nl
        off += 7 * 4 + 7 * 2 + 4 + 2
    off += 5 * 4  # civ..family_head
    off += 4  # art_count
    off += 4  # unit_id
    off += 4  # nemesis_id
    # flags byte vector
    fc = struct.unpack_from("<i", payload, off)[0]; off += 4 + max(fc, 0)
    off += 4  # figure_id
    return off


def main() -> None:
    p = resolve_save_payload("tests/fixtures/small-retired/world.dat")
    payload = p.payload
    layout = discover_layout_landmarks(payload, p.preamble)
    start = resolve_history_search_start(payload, layout, p.preamble.header)
    anchor = locate_figures_vector(payload, p.preamble.header, search_start=start)
    print(f"anchor bodies_start=0x{anchor.bodies_start:x} prefix=0x{anchor.prefix_bytes:x}")
    for base, pad in [(0x2134dd8, 1), (0x2134dd9, 0)]:
        he = header_end(payload, base, pad)
        print(f"\n=== base=0x{base:x} pad={pad} -> header_end=0x{he:x} ===")
        # entity/site/histfig counts
        for nm in ("entity_links", "site_links", "histfig_links"):
            c = struct.unpack_from("<i", payload, he)[0]
            print(f"  {nm} count @ 0x{he:x} = {c}")
            he += 4
        info_flag = payload[he]
        print(f"  info flag @ 0x{he:x} = {info_flag}")
        he += 1
        vague_flag = payload[he]
        print(f"  vague flag @ 0x{he:x} = {vague_flag}")
        he += 1
        print(f"  tail_end @ 0x{he:x}")
        # hexdump 0x40 bytes from entity_links count
        print(f"  bytes from entity_links count: {' '.join(f'{b:02x}' for b in payload[header_end(payload,base,pad):header_end(payload,base,pad)+0x50])}")


if __name__ == "__main__":
    main()
