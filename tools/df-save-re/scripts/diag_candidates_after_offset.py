#!/usr/bin/env python3
"""List plausible historical figure headers after a given offset."""

from __future__ import annotations

import argparse
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.historical_figures import try_read_historical_figure_header
from df_save_re.save_preamble import resolve_save_payload


def main() -> int:
    parser = argparse.ArgumentParser()
    parser.add_argument("offset", help="scan start, hex or decimal")
    parser.add_argument("--limit", type=int, default=1_000_000)
    parser.add_argument("--max", type=int, default=80)
    args = parser.parse_args()

    payload = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
    start = int(args.offset, 0)
    stop = min(len(payload), start + args.limit)
    hits = []
    for off in range(start, stop, 2):
        r = BinaryReader(BytesIO(payload))
        r.seek(off)
        h = try_read_historical_figure_header(r)
        if h is None:
            continue
        hits.append((off, h.figure_id, h.art_count, h.race, h.civ_id, h.name.words[:3]))
        if len(hits) >= args.max:
            break

    print(f"scan {start:#x}..{stop:#x} hits={len(hits)}")
    for off, fid, art, race, civ, words in hits:
        print(f"  {off:#x} id={fid:6d} art={art:3d} race={race:3d} civ={civ:3d} words={words}")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
