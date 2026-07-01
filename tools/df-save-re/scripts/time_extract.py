#!/usr/bin/env python3
"""Time extract_legends_snapshot for diagnosing slow tests."""
from __future__ import annotations

import time

from df_save_re.compression import decompress_file, read_header
from df_save_re.deserializers.world_dat import parse_dat_preamble
from df_save_re.legends_extract import extract_legends_snapshot
from fixture_paths import resolve_fixture


def main() -> None:
    path = resolve_fixture("small-retired", "world.dat")
    if path is None:
        raise SystemExit("fixture missing")
    raw = path.read_bytes()
    payload = decompress_file(path).payload
    pre = parse_dat_preamble(payload, save_version=read_header(raw).save_version)

    t0 = time.perf_counter()
    extract_legends_snapshot(payload, preamble=pre)
    print(f"full extract: {time.perf_counter() - t0:.1f}s")

    t0 = time.perf_counter()
    extract_legends_snapshot(payload, preamble=pre, max_entities=15)
    print(f"limited extract (max_entities=15): {time.perf_counter() - t0:.1f}s")


if __name__ == "__main__":
    main()
