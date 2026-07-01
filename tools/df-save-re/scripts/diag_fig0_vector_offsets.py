#!/usr/bin/env python3
"""Print exact byte offsets of fig0 header fields and the three link vector counts.

Confirms where the parser lands relative to the writer/reader layout, so the
3-byte misalignment into ``histfig_links`` can be localized.
"""
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.historical_figures import (
    locate_figures_vector,
    read_historical_figure_header,
)
from df_save_re.deserializers.world_layout import discover_layout_landmarks, resolve_history_search_start
from df_save_re.save_preamble import resolve_save_payload


def hexdump(payload: bytes, off: int, n: int = 32) -> str:
    raw = payload[off : off + n]
    return " ".join(f"{b:02x}" for b in raw)


def main() -> None:
    p = resolve_save_payload("tests/fixtures/small-retired/world.dat")
    payload = p.payload
    layout = discover_layout_landmarks(payload, p.preamble)
    start = resolve_history_search_start(payload, layout, p.preamble.header)
    anchor = locate_figures_vector(payload, p.preamble.header, search_start=start)
    base = anchor.bodies_start
    print(f"fig0 base = 0x{base:x}")

    r = BinaryReader(BytesIO(payload))
    r.seek(base)
    h = read_historical_figure_header(r)
    header_end = r.tell()
    print(
        f"header end (after figure_id) = 0x{header_end:x}  "
        f"id={h.figure_id} art={h.art_count} flag_indices={h.flag_indices}"
    )

    # Walk the three dense link vectors by hand, reporting count offset + value.
    for name in ("entity_links", "site_links", "histfig_links"):
        off = r.tell()
        raw4 = payload[off : off + 4]
        count = int.from_bytes(raw4, "little", signed=True)
        print(f"\n{name}: count_offset=0x{off:x}  raw4={hexdump(payload, off, 4)}  count={count}")
        print(f"  next 24 bytes: {hexdump(payload, off, 24)}")
        if count < 0 or count > 64:
            print("  -> implausible count; scanning back/forward for a legal count")
            for delta in range(-6, 7):
                if delta == 0:
                    continue
                cand = int.from_bytes(payload[off + delta : off + delta + 4], "little", signed=True)
                if 0 <= cand <= 64:
                    print(f"     legal count {cand} at delta={delta:+d} (0x{off + delta:x})")
            break
        # skip count + count*(2-byte tag + 6-byte base body) heuristically; just report tags
        r.seek(off + 4)
        tags = []
        for _ in range(min(count, 16)):
            t = r.read_int16()
            tags.append(t)
            r.read_bytes(6)  # base body guess
        print(f"  first tags (with 6-byte skip each): {tags}")


if __name__ == "__main__":
    main()
