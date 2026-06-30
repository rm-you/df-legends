#!/usr/bin/env python3
"""CLI for df-save-re tools."""

from __future__ import annotations

import argparse
import json
import sys
from pathlib import Path

from .compression import decompress_file, describe_save_version, read_header
from .scan import scan_save


def cmd_inspect(args: argparse.Namespace) -> int:
    path = Path(args.path)
    raw = path.read_bytes()
    header = read_header(raw)
    print(f"file:           {path}")
    print(f"size:           {len(raw):,} bytes")
    print(f"save_version:   {header.save_version} ({describe_save_version(header.save_version)})")
    print(f"compressed:     {header.is_compressed}")
    if header.is_compressed:
        dec = decompress_file(path)
        print(f"blocks:         {len(dec.blocks)}")
        print(f"payload_size:   {len(dec.payload):,} bytes")
        ratio = len(dec.payload) / len(raw) if raw else 0
        print(f"expand_ratio:   {ratio:.2f}x")
        if dec.blocks:
            print("block_summary:")
            for block in dec.blocks[:10]:
                print(
                    f"  #{block.index}: compressed={block.compressed_size:,} "
                    f"decompressed={block.decompressed_size:,} @0x{block.file_offset:x}"
                )
            if len(dec.blocks) > 10:
                print(f"  ... {len(dec.blocks) - 10} more blocks")
    return 0


def cmd_decompress(args: argparse.Namespace) -> int:
    path = Path(args.path)
    dec = decompress_file(path)
    out = Path(args.output)
    out.write_bytes(dec.payload)
    print(f"wrote {len(dec.payload):,} bytes to {out}")
    return 0


def cmd_scan(args: argparse.Namespace) -> int:
    report = scan_save(args.path)
    if args.json:
        payload = {
            "path": report.path,
            "header": report.header_summary,
            "payload_size": report.payload_size,
            "block_count": report.block_count,
            "markers": [
                {"marker": h.marker, "offset": h.payload_offset} for h in report.markers
            ],
            "int32_at_offset_8": report.int32_at_offset_8,
            "notes": report.notes,
        }
        print(json.dumps(payload, indent=2))
        return 0

    print(f"file: {report.path}")
    print(report.header_summary)
    print(f"payload: {report.payload_size:,} bytes in {report.block_count} compressed block(s)")
    for note in report.notes:
        print(f"note: {note}")
    if report.markers:
        print("markers:")
        for hit in report.markers:
            print(f"  0x{hit.payload_offset:08x}  {hit.marker}")
    else:
        print("markers: (none)")
    return 0


def main(argv: list[str] | None = None) -> int:
    parser = argparse.ArgumentParser(
        prog="df-save-re",
        description="Dwarf Fortress save reverse-engineering tools (Path C, Layer 1)",
    )
    sub = parser.add_subparsers(dest="command", required=True)

    p_inspect = sub.add_parser("inspect", help="Show save header and compression info")
    p_inspect.add_argument("path", help="Path to world.sav or world.dat")
    p_inspect.set_defaults(func=cmd_inspect)

    p_decompress = sub.add_parser("decompress", help="Write decompressed payload bytes")
    p_decompress.add_argument("path")
    p_decompress.add_argument("-o", "--output", required=True)
    p_decompress.set_defaults(func=cmd_decompress)

    p_scan = sub.add_parser("scan", help="Scan payload for known block markers")
    p_scan.add_argument("path")
    p_scan.add_argument("--json", action="store_true")
    p_scan.set_defaults(func=cmd_scan)

    args = parser.parse_args(argv)
    try:
        return args.func(args)
    except (OSError, ValueError, EOFError) as exc:
        print(f"error: {exc}", file=sys.stderr)
        return 1


if __name__ == "__main__":
    raise SystemExit(main())
