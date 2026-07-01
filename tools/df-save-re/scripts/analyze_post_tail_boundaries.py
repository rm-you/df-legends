#!/usr/bin/env python3
"""
Boundary analysis for post-tail blobs between consecutive figures.

Does NOT assume art_image or any df-structures type. Only asks:
  - Is gap length encoded at the start or end?
  - Is there a fixed terminator before the next header?
  - Do header fields (art_count, etc.) predict gap size?
"""
from __future__ import annotations

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
    for fd in resolve_fields(load_struct("historical_figure_info", xml), xml):
        if fd.name == "masterpieces":
            if reader.read_int32() != 0:
                skip_artistic_save(reader)
            continue
        skip_field(reader, fd, xml_dir=xml, struct_name="historical_figure_info", payload=payload)


def structural_tail_end(body_start: int) -> tuple[int, int, int]:
    r = BinaryReader(BytesIO(payload))
    r.seek(body_start)
    h = read_historical_figure_header(r)
    for fd in tail_fields:
        if fd.name == "info":
            if r.read_int32() != 0:
                skip_info_save(r)
        elif fd.name == "worldgen_relationships":
            if r.read_int32() == 1:
                r.read_bytes(830)
        else:
            skip_field(r, fd, xml_dir=xml, struct_name="historical_figure", payload=payload)
    return r.tell(), h.figure_id, h.art_count


# Ground-truth transitions (header scan verified on Namushul)
TRANSITIONS = [
    (0x2134DD0, 0x2135412),
    (0x2135412, 0x213B0CF),
    (0x213B0CF, 0x215EB79),
    (0x215EB79, 0x2161BAB),
    (0x2161BAB, 0x21673D6),
    (0x21673D6, 0x217FAEE),  # scan landing — may be false positive
    (0x217FAEE, 0x21EDFF0),
    (0x21EDFF0, 0x21FE774),
]


def find_int32_matches(data: bytes, target: int, *, signed: bool = True) -> list[int]:
    hits: list[int] = []
    for off in range(0, max(0, len(data) - 3), 1):
        val = struct.unpack_from("<i" if signed else "<I", data, off)[0]
        if val == target:
            hits.append(off)
    return hits


def hex_line(base: int, data: bytes) -> str:
    return " ".join(f"{b:02x}" for b in data) + "  |" + "".join(
        chr(b) if 32 <= b < 127 else "." for b in data
    )


def analyze_transition(body_start: int, next_start: int) -> None:
    tail_end, fid, art = structural_tail_end(body_start)
    gap = next_start - tail_end
    blob = payload[tail_end:next_start]
    next_hdr = payload[next_start : next_start + 32]

    print("=" * 72)
    print(
        f"fig id={fid} art_count={art}  "
        f"tail_end={tail_end:#x}  next={next_start:#x}  gap={gap} bytes"
    )

    if gap == 0:
        print("  (no blob — tail abuts next header exactly)")
        print(f"  next header first 16B @ {next_start:#x}: {hex_line(next_start, next_hdr[:16])}")
        return

    # --- Start of blob ---
    print("\n  START of blob (first 64 bytes):")
    for i in range(0, min(64, len(blob)), 16):
        print(f"    {tail_end + i:08x}  {hex_line(tail_end + i, blob[i : i + 16])}")

    first_i32 = struct.unpack_from("<i", blob, 0)[0] if len(blob) >= 4 else None
    print(f"\n  first int32 = {first_i32}  (gap={gap}, gap-4={gap-4}, gap-8={gap-8}, art_count={art})")

    # --- End of blob ---
    print("\n  END of blob (last 64 bytes before next header):")
    tail64 = blob[-64:] if len(blob) >= 64 else blob
    base = next_start - len(tail64)
    for i in range(0, len(tail64), 16):
        print(f"    {base + i:08x}  {hex_line(base + i, tail64[i : i + 16])}")

    print(f"\n  next header first 16B @ {next_start:#x}:")
    print(f"    {hex_line(next_start, next_hdr[:16])}")

    # --- Size-in-blob search ---
    for label, target in [
        ("gap", gap),
        ("gap-4", gap - 4),
        ("gap-8", gap - 8),
        ("gap+4", gap + 4),
    ]:
        if target < 0:
            continue
        start_hits = find_int32_matches(blob[: min(128, len(blob))], target)
        end_hits = find_int32_matches(blob[-128:], target)
        end_hits = [len(blob) - 128 + h if len(blob) >= 128 else h for h in end_hits]
        if start_hits or end_hits:
            print(f"  int32=={label} ({target}): start@+{start_hits[:8]} end@+{end_hits[:8]}")

    # --- Common terminator patterns ---
    last4 = blob[-4:] if len(blob) >= 4 else b""
    last8 = blob[-8:] if len(blob) >= 8 else b""
    print(f"\n  last 4 bytes: {last4.hex()}  last 8: {last8.hex()}")
    if blob[-1] == 0:
        nz = len(blob) - len(blob.rstrip(b"\x00"))
        print(f"  trailing zero run at end: {len(blob) - nz} bytes (of {gap})")

    # --- Does blob length appear in the KNOWN tail fields we already parsed? ---
    # Check last 32 bytes of structural tail (before blob)
    pre = payload[max(0, tail_end - 32) : tail_end]
    pre_hits = find_int32_matches(pre, gap) + find_int32_matches(pre, gap - 4)
    if pre_hits:
        print(f"  gap size appears in last 32B of structural tail at offsets {pre_hits}")


print("POST-TAIL BOUNDARY ANALYSIS (Namushul world.dat)")
print("Structural tail = everything through defensive_skill_ip_sum (pool_id omitted on save)\n")

for body, nxt in TRANSITIONS:
    analyze_transition(body, nxt)

print("\n" + "=" * 72)
print("SUMMARY CHECKS ACROSS ALL NON-ZERO GAPS")
rows = []
for body, nxt in TRANSITIONS:
    te, fid, art = structural_tail_end(body)
    gap = nxt - te
    if gap <= 0:
        continue
    blob = payload[te:nxt]
    first = struct.unpack_from("<i", blob, 0)[0]
    last_i32 = struct.unpack_from("<i", blob, gap - 4)[0]
    rows.append((fid, art, gap, first, last_i32))

print(f"{'id':>4} {'art':>4} {'gap':>8} {'first_i32':>12} {'last_i32':>12}  first==gap? last==gap?")
for fid, art, gap, first, last_i32 in rows:
    print(
        f"{fid:4d} {art:4d} {gap:8d} {first:12d} {last_i32:12d}  "
        f"{str(first == gap):>5}  {str(last_i32 == gap):>5}"
    )
