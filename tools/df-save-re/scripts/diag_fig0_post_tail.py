#!/usr/bin/env python3
"""Dump fig0's post_tail region (bytes after vague_relationships) to see if
the 2431-byte gap before fig1 is structured data or zeros/padding.
"""
from df_save_re.deserializers.historical_figures import locate_figures_vector
from df_save_re.deserializers.world_layout import discover_layout_landmarks, resolve_history_search_start
from df_save_re.save_preamble import resolve_save_payload


def main() -> None:
    p = resolve_save_payload("tests/fixtures/small-retired/world.dat")
    payload = p.payload
    layout = discover_layout_landmarks(payload, p.preamble)
    start = resolve_history_search_start(payload, layout, p.preamble.header)
    anchor = locate_figures_vector(payload, p.preamble.header, search_start=start)
    base = anchor.bodies_start
    tail_end = base + 0x6F  # 0x2134e47 -- after 3 empty vectors + info + vague
    fig1 = 0x21357c6
    blob = payload[tail_end:fig1]
    print(f"post_tail region 0x{tail_end:x}..0x{fig1:x}  size={len(blob)}")
    # count non-zero bytes
    nz = sum(1 for b in blob if b != 0)
    print(f"non-zero bytes: {nz} / {len(blob)}")
    # first non-zero offset
    for i, b in enumerate(blob):
        if b != 0:
            print(f"first non-zero at +0x{i:x} (0x{tail_end + i:x}): 0x{b:02x}")
            break
    # hexdump head and around first non-zero
    def hd(off: int, n: int) -> str:
        return " ".join(f"{b:02x}" for b in payload[off : off + n])

    print("head 64:", hd(tail_end, 64))
    print("head 128-192:", hd(tail_end + 128, 64))
    print("head 256-320:", hd(tail_end + 256, 64))
    print("tail -64:", hd(fig1 - 64, 64))


if __name__ == "__main__":
    main()
