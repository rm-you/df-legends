#!/usr/bin/env python3
"""Report which FUN_140330310 reader-case entry functions have decompiles."""
from pathlib import Path

DECOMP = Path(__file__).resolve().parent.parent / "ghidra_decompiles"

CASES = [
    ("case0 header a (map?)", "140306a00"),
    ("case0 header b (max_ids?)", "14030aa20"),
    ("case2 world block", "140aafe60"),
    ("case3", "1403158a0"),
    ("case4", "14031aa30"),
    ("case5", "14031c5d0"),
    ("case6", "14031db90"),
    ("case7 entities", "140a62e80"),
    ("case8 site body", "1403066f0"),
    ("case9 world_history", "1407099a0"),
    ("case9 b", "14030b9e0"),
    ("case9 c (>0x5cc)", "140309da0"),
    ("case9 d (>0x619)", "14030bd50"),
    ("case10 a", "140305a20"),
    ("case10 string", "1405bb6d0"),
    ("case0xb artifacts?", "140323f70"),
    ("case0xc written?", "140323e70"),
    ("case0xd", "140304680"),
    ("case0xe", "1403047a0"),
    ("case0xf", "140304c40"),
    ("case0x10", "140301fe0"),
    ("case0x11", "140301a00"),
    ("case0x12", "140302a40"),
    ("case0x13", "140304590"),
    ("case0x14", "1403049e0"),
    ("case0x15", "140304390"),
    ("case0x16", "140302fb0"),
    ("case0x17", "140302e90"),
    ("case0x18", "140302b90"),
    ("case0x19", "140305510"),
    ("case0x1a", "140302150"),
    ("case0x1b >0x5cb #1", "140301680"),
    ("case0x1b >0x5cb #2", "140301800"),
    ("case0x1b >0x5cb #3", "140301910"),
    ("case0x1b >0x5cc #4", "140301400"),
    ("case0x1b >0x5cc #5", "140301520"),
    ("case0x1c >0x5d4", "1403048c0"),
    ("case0x1d >0x622", "1403026c0"),
    ("case0x1e >0x67d", "140302470"),
    ("case0x1f >0x67d", "140302590"),
    ("case0x20 tail", "1405bbd50"),
]


def main() -> None:
    have = {p.stem for p in DECOMP.glob("*.c")}
    missing = 0
    for label, addr in CASES:
        ok = addr in have
        missing += not ok
        print(f"{'HAVE' if ok else 'MISS'}  {addr}  {label}")
    print(f"\n{len(CASES) - missing}/{len(CASES)} present, {missing} missing")


if __name__ == "__main__":
    main()
