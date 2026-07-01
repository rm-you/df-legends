#!/usr/bin/env python3
"""Print the save version from the Namushul fixture preamble."""
from df_save_re.save_preamble import resolve_save_payload


def main() -> None:
    p = resolve_save_payload("tests/fixtures/small-retired/world.dat")
    hdr = p.preamble.header
    print("preamble header:", hdr)
    for attr in dir(hdr):
        if attr.startswith("_"):
            continue
        try:
            val = getattr(hdr, attr)
        except Exception as e:
            val = f"<err {e}>"
        if callable(val):
            continue
        print(f"  {attr} = {val!r}  (hex={getattr(val, '__index__', lambda: None)() if hasattr(val, '__index__') else None})")


if __name__ == "__main__":
    main()
