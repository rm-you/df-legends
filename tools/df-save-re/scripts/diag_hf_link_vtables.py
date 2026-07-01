"""Dump histfig link vtable slots from the DF 0.47.05 PE.

This is a lightweight cross-check for the polymorphic link vectors in
``historical_figure``. The writer loop calls vtable[0] for the saved type tag
and vtable[2] for the element body writer.
"""

from __future__ import annotations

import argparse
import struct
import xml.etree.ElementTree as ET
from pathlib import Path


IMAGE_BASE = 0x140000000


def _sections(pe: bytes) -> list[tuple[str, int, int, int]]:
    pe_header = struct.unpack_from("<I", pe, 0x3C)[0]
    section_count = struct.unpack_from("<H", pe, pe_header + 6)[0]
    optional_size = struct.unpack_from("<H", pe, pe_header + 20)[0]
    section_table = pe_header + 24 + optional_size
    out: list[tuple[str, int, int, int]] = []
    for idx in range(section_count):
        off = section_table + idx * 40
        name = pe[off : off + 8].rstrip(b"\0").decode("ascii", "replace")
        virtual_size, virtual_address, raw_size, raw_pointer = struct.unpack_from("<IIII", pe, off + 8)
        out.append((name, virtual_address, max(virtual_size, raw_size), raw_pointer))
    return out


def _va_to_file_offset(va: int, sections: list[tuple[str, int, int, int]]) -> int:
    rva = va - IMAGE_BASE
    for _, virtual_address, size, raw_pointer in sections:
        if virtual_address <= rva < virtual_address + size:
            return raw_pointer + (rva - virtual_address)
    raise ValueError(f"VA 0x{va:x} is outside mapped sections")


def _read_qword(pe: bytes, va: int, sections: list[tuple[str, int, int, int]]) -> int:
    return struct.unpack_from("<Q", pe, _va_to_file_offset(va, sections))[0]


def _type_tag(pe: bytes, va: int, sections: list[tuple[str, int, int, int]]) -> int | None:
    off = _va_to_file_offset(va, sections)
    code = pe[off : off + 8]
    if code.startswith(b"\x33\xc0\xc3"):
        return 0
    if code.startswith(b"\x83\xc8\xff\xc3"):
        return -1
    if code.startswith(b"\xb8") and code[5] == 0xC3:
        return struct.unpack_from("<i", code, 1)[0]
    return None


def _iter_histfig_link_vtables(symbols_xml: Path, prefixes: tuple[str, ...]) -> list[tuple[str, int]]:
    root = ET.parse(symbols_xml).getroot()
    out: list[tuple[str, int]] = []
    for elem in root.iter("vtable-address"):
        if "value" not in elem.attrib:
            continue
        name = elem.attrib["name"]
        value = int(elem.attrib["value"], 16)
        if name.startswith(prefixes) and value >= IMAGE_BASE:
            out.append((name, value))
    return sorted(out)


def main() -> None:
    repo_root = Path(__file__).resolve().parents[3]
    parser = argparse.ArgumentParser()
    parser.add_argument(
        "--exe",
        type=Path,
        default=Path(r"C:\Users\rm_yo\Downloads\df_47_05_win\Dwarf Fortress.exe"),
    )
    parser.add_argument(
        "--symbols",
        type=Path,
        default=repo_root / "data" / "df-structures" / "symbols.xml",
    )
    parser.add_argument(
        "--prefix",
        action="append",
        default=["histfig_entity_link", "histfig_hf_link", "histfig_site_link"],
        help="Vtable name prefix to include. May be repeated.",
    )
    parser.add_argument("--all", action="store_true", help="Scan all active vtable names.")
    parser.add_argument("--tag", type=int, help="Only print vtables whose type function returns this tag.")
    args = parser.parse_args()

    pe = args.exe.read_bytes()
    sections = _sections(pe)
    print("name tag vtable type_fn delete_fn write_fn read_fn")
    prefixes = ("",) if args.all else tuple(args.prefix)
    for name, vtable in _iter_histfig_link_vtables(args.symbols, prefixes):
        slots = [_read_qword(pe, vtable + slot * 8, sections) for slot in range(4)]
        tag = _type_tag(pe, slots[0], sections)
        if args.tag is not None and tag != args.tag:
            continue
        print(
            f"{name} {tag if tag is not None else '?'} 0x{vtable:x} "
            f"0x{slots[0]:x} 0x{slots[1]:x} 0x{slots[2]:x} 0x{slots[3]:x}"
        )


if __name__ == "__main__":
    main()
