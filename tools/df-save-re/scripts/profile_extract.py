#!/usr/bin/env python3
"""Profile extract_legends_snapshot sections."""
from __future__ import annotations

import time

from df_save_re.compression import decompress_file, read_header
from df_save_re.deserializers.world_dat import parse_dat_preamble
from df_save_re.legends_extract import extract_legends_snapshot
from fixture_paths import resolve_fixture


def timed(label: str, fn):
    t0 = time.perf_counter()
    fn()
    print(f"{label}: {time.perf_counter() - t0:.1f}s")


def main() -> None:
    path = resolve_fixture("small-retired", "world.dat")
    if path is None:
        raise SystemExit("fixture missing")
    raw = path.read_bytes()
    payload = decompress_file(path).payload
    pre = parse_dat_preamble(payload, save_version=read_header(raw).save_version)

    timed("full", lambda: extract_legends_snapshot(payload, preamble=pre))
    timed("no walks", lambda: extract_legends_snapshot(payload, preamble=pre, run_engine_walks=False))
    timed("no probe", lambda: extract_legends_snapshot(payload, preamble=pre, run_vector_probe=False))
    timed("minimal", lambda: extract_legends_snapshot(
        payload, preamble=pre, run_engine_walks=False, run_vector_probe=False
    ))


if __name__ == "__main__":
    main()
