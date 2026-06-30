#!/usr/bin/env python3
"""CLI for df-save-re tools."""

from __future__ import annotations

import argparse
import json
import sys
from pathlib import Path

from .compression import decompress_file, describe_save_version, is_target_save_version, read_header
from .target import TARGET_DF_VERSION, TARGET_SAVE_VERSION
from .deserializers.probe import probe_save
from .hexdump import format_hexdump, scan_int32_values
from .scan import scan_save


def cmd_inspect(args: argparse.Namespace) -> int:
    path = Path(args.path)
    raw = path.read_bytes()
    header = read_header(raw)
    print(f"file:           {path}")
    print(f"size:           {len(raw):,} bytes")
    print(f"save_version:   {header.save_version} ({describe_save_version(header.save_version)})")
    print(f"target:         {TARGET_DF_VERSION} (save_version {TARGET_SAVE_VERSION})")
    if not is_target_save_version(header.save_version):
        print(
            f"warning:        save is not {TARGET_DF_VERSION} — parser hypotheses may not apply",
            file=sys.stderr,
        )
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


def cmd_probe(args: argparse.Namespace) -> int:
    result = probe_save(args.path)
    if args.json:
        import json

        payload = {
            "path": result.path,
            "payload_size": result.payload_size,
            "marker_offsets": result.marker_offsets,
            "world_header_error": result.world_header_error,
            "notes": result.notes,
        }
        if result.world_header:
            wh = result.world_header
            payload["world_header"] = {
                "unknown_int16": wh.unknown_int16,
                "id_summary": wh.id_summary(),
                "world_name": str(wh.world_name) if wh.world_name else None,
                "has_name": wh.has_name,
            }
        payload["blocks"] = {
            k: (
                {"magic": v.magic.value, "field_8": v.field_8, "payload_len": len(v.payload)}
                if hasattr(v, "magic")
                else v
            )
            for k, v in result.block_at_markers.items()
        }
        print(json.dumps(payload, indent=2))
        return 0

    print(f"file: {result.path}")
    print(f"payload: {result.payload_size:,} bytes")
    for note in result.notes:
        print(f"note: {note}")
    if result.world_header_error:
        print(f"world header hypothesis: FAILED ({result.world_header_error})")
    elif result.world_header:
        wh = result.world_header
        print(f"world header hypothesis: OK")
        print(f"  world_name: {wh.world_name}")
        for k, v in wh.id_summary().items():
            if "max" in k or v > 0:
                print(f"  {k}: {v}")
    if result.marker_offsets:
        print("region markers:")
        for m, offs in result.marker_offsets.items():
            print(f"  {m}: {len(offs)} hit(s), first @ {offs[0]:#x}")
    for key, val in result.block_at_markers.items():
        if hasattr(val, "magic"):
            print(f"  parsed {key}: field_8={val.field_8} payload={len(val.payload)} bytes")
        else:
            print(f"  {key}: {val}")
    return 0


def cmd_hexdump(args: argparse.Namespace) -> int:
    dec = decompress_file(args.path)
    data = dec.payload
    start = args.offset
    length = args.length or min(256, len(data) - start)
    print(format_hexdump(data, start=start, length=length))
    if args.scan_ids:
        print("\nplausible int32 values (0..10M) in range:")
        for off, val in scan_int32_values(data, start=start, end=start + length):
            print(f"  0x{off:08x}  {val}")
    return 0


def cmd_fields(args: argparse.Namespace) -> int:
    from .structures.xml_fields import load_struct, summarize_fields

    repo_root = Path(__file__).resolve().parents[3]
    xml_dir = Path(args.xml_dir) if args.xml_dir else repo_root / "data" / "df-structures"
    struct = load_struct(args.type_name, xml_dir)
    if struct is None:
        print(f"error: struct {args.type_name!r} not found under {xml_dir}", file=sys.stderr)
        return 1
    print(f"struct {struct.type_name} (original: {struct.original_name})")
    if struct.inherits:
        print(f"  inherits: {struct.inherits}")
    print("fields:")
    for line in summarize_fields(struct):
        print(line)
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

    p_probe = sub.add_parser(
        "probe",
        help="Try RE-derived structure guesses against decompressed payload",
    )
    p_probe.add_argument("path")
    p_probe.add_argument("--json", action="store_true")
    p_probe.set_defaults(func=cmd_probe)

    p_hex = sub.add_parser("hexdump", help="Hexdump decompressed payload region")
    p_hex.add_argument("path")
    p_hex.add_argument("-o", "--offset", type=lambda x: int(x, 0), default=0)
    p_hex.add_argument("-l", "--length", type=lambda x: int(x, 0), default=None)
    p_hex.add_argument("--scan-ids", action="store_true", help="List plausible int32 IDs in range")
    p_hex.set_defaults(func=cmd_hexdump)

    p_fields = sub.add_parser("fields", help="Show df-structures field layout for a type")
    p_fields.add_argument("type_name", help="e.g. history_event or history_event_created_sitest")
    p_fields.add_argument("--xml-dir", default=None)
    p_fields.set_defaults(func=cmd_fields)

    args = parser.parse_args(argv)
    try:
        return args.func(args)
    except (OSError, ValueError, EOFError) as exc:
        print(f"error: {exc}", file=sys.stderr)
        return 1


if __name__ == "__main__":
    raise SystemExit(main())
