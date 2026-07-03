#!/usr/bin/env python3
"""Forward-walk a world.dat from byte 0, printing a section table.

Usage: python scripts/walk_full_save.py <path-to-world.dat> [--until CASE]
"""
from __future__ import annotations

import argparse
import sys
import time
from io import BytesIO
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent.parent))

from df_save_re.binary_reader import BinaryReader
from df_save_re.compression import decompress_file
from df_save_re.deserializers import forward_walk as fw


def main() -> None:
    ap = argparse.ArgumentParser()
    ap.add_argument("save", type=Path)
    ap.add_argument("--save-version", type=int, default=None)
    args = ap.parse_args()

    t0 = time.time()
    result = decompress_file(args.save)
    payload = result.payload
    save_version = args.save_version or getattr(result, "save_version", None) or 1716
    print(f"payload {len(payload):,} bytes  sv={save_version}  "
          f"decompress {time.time()-t0:.1f}s")

    reader = BinaryReader(BytesIO(payload))

    def row(name: str, start: int, end: int, extra: str = "") -> None:
        print(f"{name:<22} 0x{start:08x}..0x{end:08x}  ({end-start:>12,} B)  {extra}")

    hdr = fw.read_world_header(reader, save_version)
    row("header", hdr.start, hdr.end,
        f"ids={len(hdr.max_ids)} name={hdr.name.display_hint!r} save={hdr.save_name!r}")

    st = fw.read_string_tables(reader, save_version)
    nested_counts = "/".join(str(len(t)) for t in st.nested_tables)
    raw_counts = ",".join(
        f"{k}:{len(v)}" for k, v in list(st.raw_categories.items())[:5]
    )
    row("string_tables", st.start, st.end,
        f"nested={nested_counts} raws[{raw_counts},...] chunks={len(st.unit_chunks)}")

    reg = fw.read_registry(reader, save_version)
    parts = [f"{k}={v['count']}" for k, v in reg.vectors.items() if v["count"]]
    row("registry", reg.start, reg.end, " ".join(parts))

    print(f"\nnext byte: 0x{reader.tell():08x} (payload is {len(payload):,})")


if __name__ == "__main__":
    main()
