"""Histfig info and vague_relationships save-path readers (FUN_14070b110 / FUN_1406fb120)."""

from __future__ import annotations

from ..binary_reader import BinaryReader
from ..structures.layout_dispatch import skip_layout_body
from ..structures.save_layouts import SAVE_LAYOUTS


def skip_histfig_info(reader: BinaryReader, *, save_version: int = 1716) -> None:
    """Skip optional info subprofiles: 13 x (u8 flag; if set, slot body)."""
    layout = SAVE_LAYOUTS.get("histfig_info")
    if not layout or not layout.get("slots"):
        raise ValueError("histfig_info layout missing from SAVE_LAYOUTS")
    for slot in layout["slots"]:
        flag = reader.read_uint8()
        if flag == 0:
            continue
        body = slot.get("body") or []
        if not body:
            raise ValueError(f"histfig_info slot {slot.get('slot')} has no body layout")
        skip_layout_body(reader, body, save_version=save_version)


def read_histfig_info(reader: BinaryReader, *, save_version: int = 1716) -> dict:
    """Read histfig info presence flags; skip bodies on disk."""
    start = reader.tell()
    present_slots: list[int] = []
    layout = SAVE_LAYOUTS.get("histfig_info")
    slots = (layout or {}).get("slots") or []
    for slot in slots:
        flag = reader.read_uint8()
        if flag == 0:
            continue
        present_slots.append(int(slot["slot"]))
        body = slot.get("body") or []
        skip_layout_body(reader, body, save_version=save_version)
    return {
        "present": True,
        "present_slots": present_slots,
        "bytes_consumed": reader.tell() - start,
    }


def skip_vague_relationships(reader: BinaryReader) -> None:
    """Skip vague_relationships body after outer u8 has_vague flag."""
    count = reader.read_int32()
    if count < 0 or count > 500_000:
        raise ValueError(f"vague_relationships count {count}")
    for _ in range(count):
        reader.read_int32()
        reader.read_int16()


def read_vague_relationships(reader: BinaryReader) -> dict:
    """Read vague_relationships after outer u8 has_vague flag."""
    start = reader.tell()
    count = reader.read_int32()
    if count < 0 or count > 500_000:
        raise ValueError(f"vague_relationships count {count}")
    entries: list[dict] = []
    for _ in range(count):
        entries.append({"hf_id": reader.read_int32(), "relationship_type": reader.read_int16()})
    return {"count": count, "entries": entries, "bytes_consumed": reader.tell() - start}
