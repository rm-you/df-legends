#!/usr/bin/env python3
"""Find the real figures vector count immediately before the fig0 body at
0x2134dd8. Tests dense (count at 0x2134dd4) vs posnull (count + presence flags).
"""
import struct

from df_save_re.save_preamble import resolve_save_payload


def hd(payload: bytes, off: int, n: int = 80) -> str:
    return " ".join(f"{b:02x}" for b in payload[off : off + n])


def main() -> None:
    p = resolve_save_payload("tests/fixtures/small-retired/world.dat")
    payload = p.payload
    fig0 = 0x2134dd8
    print(f"fig0 @ 0x{fig0:x}")
    print(f"bytes 0x{fig0-32:x}..0x{fig0+16:x}:")
    print("  " + hd(payload, fig0 - 32, 48))

    # Dense: count at fig0 - 4
    dense_count = struct.unpack_from("<i", payload, fig0 - 4)[0]
    print(f"\ndense count @ 0x{fig0-4:x} = {dense_count}")

    # Search backward for the nearest int32 == 12747 before fig0
    print("\nnearest int32 == 12747 before fig0:")
    for off in range(fig0 - 4, fig0 - 0x40000, -4):
        if struct.unpack_from("<i", payload, off)[0] == 12747:
            print(f"  0x{off:x}  (fig0 - 0x{fig0 - off:x})")
            # show bytes after it
            print(f"    +0..64: {hd(payload, off, 64)}")
            break

    # Count how many 12747 int32 values exist in the whole payload
    count = 0
    positions = []
    for off in range(0, len(payload) - 4, 4):
        if struct.unpack_from("<i", payload, off)[0] == 12747:
            count += 1
            positions.append(off)
    print(f"\ntotal int32==12747 occurrences: {count}")
    print(f"first 10 positions: {[hex(x) for x in positions[:10]]}")
    print(f"position closest to fig0: {hex(max(p for p in positions if p < fig0))}")


if __name__ == "__main__":
    main()
