#!/usr/bin/env python3
"""Field-by-field skip diagnostic for a struct body."""

from __future__ import annotations

import argparse
from io import BytesIO
from pathlib import Path

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.body_skipper import SkipError, default_xml_dir, skip_field
from df_save_re.save_preamble import resolve_save_payload
from df_save_re.structures.xml_fields import load_struct, resolve_fields


def main() -> int:
    parser = argparse.ArgumentParser()
    parser.add_argument("save", type=Path, help="world.dat or world.sav path")
    parser.add_argument("--offset", type=lambda x: int(x, 0), required=True)
    parser.add_argument("--type", dest="type_name", default="historical_figure")
    parser.add_argument("--xml-dir", type=Path, default=None)
    args = parser.parse_args()

    resolved = resolve_save_payload(args.save)
    payload = resolved.payload
    xml_dir = args.xml_dir or default_xml_dir()
    struct = load_struct(args.type_name, xml_dir)
    if struct is None:
        raise SystemExit(f"unknown struct {args.type_name}")

    reader = BinaryReader(BytesIO(payload))
    reader.seek(args.offset)
    start = reader.tell()
    fields = resolve_fields(struct, xml_dir)
    print(f"struct={args.type_name} start=0x{start:x} fields={len(fields)}")
    for fd in fields:
        off_before = reader.tell()
        try:
            skip_field(reader, fd, xml_dir=xml_dir)
        except SkipError as exc:
            print(f"  FAIL {fd.name!r} ({fd.kind}) @0x{off_before:x}: {exc}")
            return 1
        consumed = reader.tell() - off_before
        print(f"  ok {fd.name!r} ({fd.kind}) @0x{off_before:x} +{consumed} ->0x{reader.tell():x}")
    print(f"total bytes: {reader.tell() - start}")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
