#!/usr/bin/env python3
"""Scan for dense figures vector (count + valid fig0 header)."""
from __future__ import annotations

import struct
from io import BytesIO
from pathlib import Path

from df_save_re.binary_reader import BinaryReader
from df_save_re.compression import decompress_file
from df_save_re.deserializers.historical_figures import (
    _quick_histfig_header_check,
    try_read_historical_figure_header,
)
from df_save_re.deserializers.world_dat import parse_dat_preamble

FIXTURE = Path(__file__).resolve().parents[1] / "tests/fixtures/small-retired/world.dat"


def main() -> None:
    payload = decompress_file(FIXTURE).payload
    header = parse_dat_preamble(payload).header
    cnt = header.max_ids[8]
    print(f"figure_count={cnt}")
    hits = []
    for off in range(0, len(payload) - 8, 4):
        if struct.unpack_from("<i", payload, off)[0] != cnt:
            continue
        bs = off + 4
        if not _quick_histfig_header_check(payload, bs):
            continue
        reader = BinaryReader(BytesIO(payload))
        reader.seek(bs)
        hdr = try_read_historical_figure_header(reader, save_version=1716, expect_id=None)
        if hdr:
            hits.append((off, bs, hdr.civ_id, hdr.race, hdr.profession, hdr.figure_id))
    print(f"valid dense hits={len(hits)}")
    for off, bs, civ, race, prof, fid in hits[:20]:
        print(f"  vec=0x{off:x} body=0x{bs:x} civ={civ} race={race} prof={prof} fid={fid}")


if __name__ == "__main__":
    main()
