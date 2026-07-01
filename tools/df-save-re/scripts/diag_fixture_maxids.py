#!/usr/bin/env python3
"""Print max_ids and key preamble fields for the small-retired fixture, and
dump bytes around each candidate to cross-check the figures count.
"""
import struct

from df_save_re.save_preamble import resolve_save_payload


def main() -> None:
    p = resolve_save_payload("tests/fixtures/small-retired/world.dat")
    hdr = p.preamble.header
    print("preamble header type:", type(hdr).__name__)
    for attr in ("max_ids", "figure_count", "hist_figure_count", "event_count", "save_version", "version"):
        if hasattr(hdr, attr):
            v = getattr(hdr, attr)
            print(f"  {attr} = {v!r}")
    # dump the full attributes
    import dataclasses
    if dataclasses.is_dataclass(hdr):
        for f in dataclasses.fields(hdr):
            print(f"  .{f.name} = {getattr(hdr, f.name)!r}")


if __name__ == "__main__":
    main()
