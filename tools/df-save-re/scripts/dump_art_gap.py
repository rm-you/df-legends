#!/usr/bin/env python3
"""Dump and analyze post-tail bytes between consecutive figures."""
import struct
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.body_skipper import default_xml_dir, skip_field
from df_save_re.deserializers.historical_figures import read_historical_figure_header
from df_save_re.deserializers.save_profiles import read_historical_figure_info_save, read_worldgen_relationships
from df_save_re.save_preamble import resolve_save_payload
from df_save_re.structures.xml_fields import load_struct, resolve_fields

payload = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
xml = default_xml_dir()

TAIL = (
    "entity_links", "site_links", "histfig_links", "info", "vague_relationships",
    "worldgen_site", "worldgen_region", "worldgen_layer", "worldgen_genetics",
    "worldgen_relationships", "temp_var", "temp_flag",
    "gen_material_skill_ip_sum", "defensive_skill_ip_sum",
)
tail_fields = [f for f in resolve_fields(load_struct("historical_figure", xml), xml) if f.name in TAIL]


def skip_artistic_save(reader: BinaryReader) -> None:
    ec = reader.read_int32()
    if ec:
        reader.read_bytes(ec * 4 + 3)
    lc = reader.read_int32()
    if lc:
        reader.read_bytes(lc * 4)
    pc = reader.read_int32()
    if pc:
        reader.read_bytes(pc * 4)
    pm = reader.read_int32()
    if pm:
        reader.read_bytes(pm * 2)
    reader.read_bytes(8)


def skip_info_save(reader: BinaryReader) -> None:
    info_fields = resolve_fields(load_struct("historical_figure_info", xml), xml)
    for fd in info_fields:
        if fd.name == "masterpieces":
            if reader.read_int32() != 0:
                skip_artistic_save(reader)
            continue
        skip_field(reader, fd, xml_dir=xml, struct_name="historical_figure_info", payload=payload)


def structural_tail_end(start: int) -> tuple[int, int, int]:
    r = BinaryReader(BytesIO(payload))
    r.seek(start)
    h = read_historical_figure_header(r)
    for fd in tail_fields:
        if fd.name == "info":
            if r.read_int32() != 0:
                skip_info_save(r)
        elif fd.name == "worldgen_relationships":
            p = r.read_int32()
            if p == 1:
                r.read_bytes(830)
        else:
            skip_field(r, fd, xml_dir=xml, struct_name="historical_figure", payload=payload)
    return r.tell(), h.figure_id, h.art_count


def hexdump(data: bytes, base: int, width: int = 16, max_lines: int = 24) -> None:
    for i in range(0, min(len(data), width * max_lines), width):
        chunk = data[i : i + width]
        hexpart = " ".join(f"{b:02x}" for b in chunk)
        asc = "".join(chr(b) if 32 <= b < 127 else "." for b in chunk)
        print(f"  {base + i:08x}  {hexpart:<{width*3}}  {asc}")


def analyze_gap(name: str, tail_end: int, next_start: int, art_count: int) -> None:
    gap = next_start - tail_end
    blob = payload[tail_end:next_start]
    print(f"\n{'='*72}")
    print(f"{name}: tail_end={tail_end:#x} next={next_start:#x} gap={gap} art_count={art_count}")
    print(f"First 32 int32s at tail_end:")
    for i in range(min(32, len(blob) // 4)):
        v = struct.unpack_from("<i", blob, i * 4)[0]
        u = struct.unpack_from("<I", blob, i * 4)[0]
        note = ""
        if v == art_count:
            note = " == art_count"
        elif v == gap:
            note = " == gap_size"
        elif v == gap - 4:
            note = " ~= gap-4"
        elif 0 <= v <= gap and v % 4 == 0:
            note = f" (bytes={v})"
        print(f"  [{i:2d}] +{i*4:5d}  {v:12d}  0x{u:08x}{note}")

    print("\nFirst 256 bytes:")
    hexdump(blob[:256], tail_end)

    # Hypothesis: int32 art_count then int32 blob_size then blob
    if len(blob) >= 8:
        n0, n1 = struct.unpack_from("<ii", blob, 0)
        for label, n, extra in [
            ("art_count + raw blob", art_count, 8),
            ("two int32 counts", n0, 4 + n0 * 4 if 0 <= n0 <= 10000 else None),
        ]:
            if extra and 0 <= n <= 100000:
                end = 4 + extra if label.startswith("two") else 8 + (gap - 8 if label.startswith("art") else 0)
        if art_count >= 0 and len(blob) >= 8:
            ac, sz = struct.unpack_from("<ii", blob, 0)
            if ac == art_count and 0 <= sz <= gap:
                print(f"\n  H1: int32 art_count={ac} int32 size={sz} -> body ends at +{8+sz}")

    # Hypothesis: art_count x art_image_ref (id, subid, civ, site = 14 bytes?)
    if art_count > 0 and len(blob) >= 4:
        ref_size = 14  # art_image_ref from xml
        need = art_count * ref_size
        print(f"\n  H2: {art_count} x {ref_size}B refs = {need} bytes, remainder {gap - need}")

    # Hypothesis: chunk vectors like artistic_profile (pc*4 + pm*2)
    if len(blob) >= 8:
        pc, pm = struct.unpack_from("<ii", blob, 0)
        if 0 <= pc <= 50000 and 0 <= pm <= 50000:
            need = 8 + pc * 4 + pm * 2
            print(f"  H3: pc={pc} pm={pm} -> {need} bytes, remainder {gap - need}, lands={tail_end+need:#x}")


# Known good offsets from prior RE
cases = [
    ("fig0->fig1", 0x2134DD0, 0x2135412),
    ("fig1->fig2", 0x2135412, 0x213B0CF),
    ("fig2->fig3", 0x213B0CF, 0x215EB79),
    ("fig3->fig4", 0x215EB79, 0x2161BAB),
]

for label, start, next_off in cases:
    tail_end, fid, ac = structural_tail_end(start)
    assert tail_end <= next_off, f"{label} tail {tail_end:#x} > next {next_off:#x}"
    analyze_gap(label, tail_end, next_off, ac)

# Also dump start of fig1 gap only - larger sample at boundaries
te, _, ac = structural_tail_end(0x2135412)
print(f"\n{'='*72}\nfig1 gap: last 64 bytes before fig2:")
hexdump(payload[0x213B0CF - 64 : 0x213B0CF], 0x213B0CF - 64, max_lines=4)
print("fig2 header first 128 bytes:")
hexdump(payload[0x213B0CF : 0x213B0CF + 128], 0x213B0CF, max_lines=8)
