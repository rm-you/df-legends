"""Histfig info and vague_relationships save-path readers.

Hand-transcribed from the Ghidra decompiles of FUN_14070b110 (histfig info
loader) and its helpers. Each slot body below mirrors the exact on-disk read
order; version gates use the same thresholds as the binary (param_3 =
save_version).

Helper key (all in ghidra_decompiles/):
  FUN_140002140  i16 vector  (i32 count + count*i16)
  FUN_140002250  i32 vector  (i32 count + count*i32)
  FUN_1405bb6d0  string      (i16 len + len bytes)
  FUN_1406f5460  bit array   (i32 nbits + nbits bytes, one byte per bit)
"""

from __future__ import annotations

import base64

from ..binary_reader import BinaryReader

_MAX_COUNT = 2_000_000


def _count(reader: BinaryReader, what: str, limit: int = _MAX_COUNT) -> int:
    n = reader.read_int32()
    if n < 0 or n > limit:
        raise ValueError(f"implausible {what} count {n} at 0x{reader.tell() - 4:x}")
    return n


def _skip(reader: BinaryReader, nbytes: int) -> None:
    reader.read_bytes(nbytes)


def _i16_vec(reader: BinaryReader, what: str = "i16_vec") -> None:
    _skip(reader, 2 * _count(reader, what))


def _i32_vec(reader: BinaryReader, what: str = "i32_vec") -> None:
    _skip(reader, 4 * _count(reader, what))


def _string(reader: BinaryReader) -> None:
    length = reader.read_int16()
    if length < 0:
        raise ValueError(f"negative string length {length} at 0x{reader.tell() - 2:x}")
    _skip(reader, length)


def _bit_array(reader: BinaryReader) -> None:
    # FUN_1406f5460: i32 bit count, then one byte per bit.
    _skip(reader, _count(reader, "bit_array", 1_000_000))


def _slot0_known_info(reader: BinaryReader, v: int) -> None:
    _i16_vec(reader)
    if v > 0x67D:
        _i32_vec(reader)


def _slot1_skills(reader: BinaryReader, v: int) -> None:
    # FUN_1406f8600
    _i16_vec(reader)
    _i32_vec(reader)
    _i16_vec(reader)
    _i32_vec(reader)
    _skip(reader, 2)
    if v > 0x614:
        _skip(reader, 4)
    if v > 0x65D:
        _skip(reader, 4)
    if v > 0x663 and reader.read_uint8():
        # FUN_1406f83c0
        for _ in range(_count(reader, "skill_extra")):
            _skip(reader, 4)
            _i32_vec(reader)
            _skip(reader, 16)
        _skip(reader, 8)


def _slot2_likes(reader: BinaryReader, v: int) -> None:
    _i16_vec(reader)


def _slot3_personality(reader: BinaryReader, v: int) -> None:
    # FUN_1406f68a0
    for _ in range(_count(reader, "personality_v1")):
        _skip(reader, 4)  # i16 + i16
    _i16_vec(reader)
    for _ in range(_count(reader, "personality_v2")):
        _skip(reader, 8)  # i32 + i32
    for _ in range(_count(reader, "personality_v3")):
        _skip(reader, 4)  # i16 + i16
    for _ in range(_count(reader, "personality_v4")):
        # FUN_1406f5da0: 5*i32, [>0x5b6] i32, 2*i32, [>0x592] 2*i32
        n = 5 + (1 if v > 0x5B6 else 0) + 2 + (2 if v > 0x592 else 0)
        _skip(reader, 4 * n)
    for _ in range(_count(reader, "personality_v5")):
        _skip(reader, 12)
        _i32_vec(reader)
        _skip(reader, 4)
    for _ in range(_count(reader, "personality_v6")):
        _skip(reader, 24)
    if v > 0x5CA:
        for _ in range(_count(reader, "personality_v7")):
            _skip(reader, 16)
    _skip(reader, 100)  # 50 * i16 traits
    _skip(reader, 8)  # 2 * i32
    if v < 0x5BD:
        _skip(reader, 4)
    _skip(reader, 4)
    if v > 0x5BC:
        _skip(reader, 12)
        if v > 0x6B3:
            _skip(reader, 4)
    if v >= 0x5C0:
        _skip(reader, 8)
    if v > 0x5CA:
        _skip(reader, 12)
    if v > 0x5D8 and reader.read_uint8():
        _skip(reader, 100)  # 50 * i16
    if v > 0x5E6:
        _skip(reader, 8)
    if v > 0x64F and reader.read_uint8():
        # FUN_1406f6020: 16 fixed emotion blocks of 9*i32 (FUN_1400b4c90)
        _skip(reader, 16 * 36)
        if v > 0x654:
            for _ in range(_count(reader, "personality_emotions")):
                _skip(reader, 36 + 24)  # 9*i32 + 6*i32
    if v > 0x65F:
        _skip(reader, 16)
    # Back in FUN_14070b110 after the personality body:
    if v > 0x615:
        _skip(reader, 2)


def _slot4_preferences(reader: BinaryReader, v: int) -> None:
    _i32_vec(reader)
    _i32_vec(reader)
    if v > 0x605:
        _i32_vec(reader)
        _i16_vec(reader)


def _slot5_needs(reader: BinaryReader, v: int) -> None:
    # FUN_1406f7f00
    _skip(reader, 2 + 9 * 4 + 1 + 4 + 4)
    if v > 0x5E8:
        _skip(reader, 8)


def _slot6_dreams(reader: BinaryReader, v: int) -> None:
    _i32_vec(reader)
    _i16_vec(reader)
    _i16_vec(reader)
    _i32_vec(reader)
    _i32_vec(reader)
    _i32_vec(reader)
    _i16_vec(reader)
    _i32_vec(reader)


def _slot7_curse(reader: BinaryReader, v: int) -> None:
    _i32_vec(reader)
    _bit_array(reader)
    _skip(reader, 8)
    if v > 0x5C1:
        _skip(reader, 4)


def _slot8_masterpieces(reader: BinaryReader, v: int) -> None:
    # FUN_1407ab630
    _i32_vec(reader, "mp_events")
    _skip(reader, 4)
    _i32_vec(reader, "mp_v2")  # v>=0x5d7 path; pre-0x5d7 differs only in-memory
    _i32_vec(reader, "mp_v3")
    for _ in range(_count(reader, "mp_designs")):
        # FUN_1406f7be0: 6*i32; >0x694 +4*i32; >0x695 +4*i32; >0x6a1 +3*i16
        _skip(reader, 24)
        if v > 0x694:
            _skip(reader, 16)
        if v > 0x695:
            _skip(reader, 16)
        if v > 0x6A1:
            _skip(reader, 6)
    # FUN_140141fe0: vector of item references (FUN_14000e720)
    for _ in range(_count(reader, "mp_item_refs")):
        item_type = reader.read_int32()
        if item_type in (0, 1, 3, 7, 9, 10, 0xB, 0xC, 0x10, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18):
            _skip(reader, 16)
        elif item_type in (2, 5, 0xD, 0xE, 0x1A, 0x1B, 0x1C, 0x1E, 0x1F, 0x20):
            _skip(reader, 8)
        elif item_type in (4, 6, 8, 0xF, 0x11, 0x19, 0x1D):
            _skip(reader, 12)
        elif item_type == 0x21:
            _skip(reader, 4)
        _skip(reader, 20)  # trailing 5*i32
    _i32_vec(reader, "mp_v5")
    _i32_vec(reader, "mp_v6")
    _i32_vec(reader, "mp_v7")
    _i32_vec(reader, "mp_v8")
    for _ in range(_count(reader, "mp_battles")):
        _skip(reader, 8)
        _i32_vec(reader)
        _i32_vec(reader)
        _i32_vec(reader)
        if v > 0x5CF:
            _skip(reader, 4)
    if v > 0x5CB:
        _i32_vec(reader)
        _i32_vec(reader)
        _i32_vec(reader)
    if v > 0x5CF and reader.read_uint8():
        _skip(reader, 0x54)  # FUN_1406f9750: 21*i32
    if v > 0x621 and reader.read_uint8():
        _i32_vec(reader)
    if v > 0x5F9 and reader.read_uint8():
        # FUN_140002a30 -> FUN_1400028e0: 14*i32 each
        for _ in range(_count(reader, "mp_v9")):
            _skip(reader, 56)
    if v > 0x6AC:
        _i32_vec(reader)


def _slot9_identity(reader: BinaryReader, v: int) -> None:
    # FUN_1407ac1c0
    for _ in range(_count(reader, "id_v1")):
        _skip(reader, 8)  # i32 + i32
    _i32_vec(reader, "id_v2")
    _skip(reader, 16 + 1)  # 4*i32 + u8
    _string(reader)
    _string(reader)
    _string(reader)
    _skip(reader, 4 + 2)
    _i32_vec(reader)
    _i32_vec(reader)
    _i32_vec(reader)
    _skip(reader, 16)
    _string(reader)
    _skip(reader, 4)
    if v > 0x67E and reader.read_uint8():
        for _ in range(5):
            _i32_vec(reader)
        _skip(reader, 4)
    if v > 0x681 and reader.read_uint8():
        _i32_vec(reader)
        _i32_vec(reader)


def _slot10_reputation(reader: BinaryReader, v: int) -> None:
    # FUN_1407aae80
    _i32_vec(reader, "rep_v1")
    if v > 0x62C:
        _skip(reader, 4)
    if v > 0x664:
        _skip(reader, 4)
    if v > 0x649:
        flags = reader.read_int32()
        if flags & 1:
            _skip(reader, 13 * 8)  # 13 * (i32 + i32)
    if v > 0x666 and reader.read_uint8():
        # FUN_1407ab160
        for _ in range(_count(reader, "rep_v2")):
            _skip(reader, 8)
        _skip(reader, 4)


def _slot11_wounds(reader: BinaryReader, v: int) -> None:
    # FUN_1406f9200
    for _ in range(_count(reader, "wound_parts")):
        # FUN_1406f8900: 4*i32, 2 vecs; >0x665: 3*i32
        _skip(reader, 16)
        _i32_vec(reader)
        _i32_vec(reader)
        if v > 0x665:
            _skip(reader, 12)
    for _ in range(_count(reader, "wound_v2")):
        _skip(reader, 16)
        _i32_vec(reader)
        _i32_vec(reader)
    _skip(reader, 4)
    _i32_vec(reader, "wound_v3")
    _skip(reader, 4)
    if v > 0x61E and reader.read_uint8():
        # FUN_1406f8d00: 11*i32, vector of 6*i32, >0x634: i32 vec
        _skip(reader, 44)
        for _ in range(_count(reader, "wound_v4")):
            _skip(reader, 24)
        if v > 0x634:
            _i32_vec(reader)


def _skip_knowledge_goal(reader: BinaryReader, v: int) -> None:
    # FUN_1406f57a0
    if v > 0x673:
        _skip(reader, 4)
    _skip(reader, 4)
    kind = reader.read_int32()
    _skip(reader, 8)
    if kind == 0:
        # FUN_1406f5550: 4*i32; >0x62a: +i32
        _skip(reader, 16)
        if v > 0x62A:
            _skip(reader, 4)
    elif kind in (1, 3):
        _skip(reader, 16)
    elif kind in (2, 4):
        _skip(reader, 12)
    elif kind == 5:
        _skip(reader, 20)
    if v > 0x673:
        _skip(reader, 4)


def _slot12_books(reader: BinaryReader, v: int) -> None:
    # FUN_1407b4ee0
    for _ in range(_count(reader, "interaction_v1")):
        # FUN_1406fa5a0
        _skip(reader, 8)
        _i32_vec(reader)
        _i32_vec(reader)
        _i32_vec(reader)
        if v > 0x6A5:
            _skip(reader, 2)
        _skip(reader, 12)
        if v > 0x650:
            _skip(reader, 12)
        if v > 0x689:
            _skip(reader, 12)
            if v > 0x6AA:
                _skip(reader, 4)
            if v > 0x6AB:
                _skip(reader, 8)
            _skip(reader, 28)
    if v > 0x628:
        for _ in range(_count(reader, "interaction_v2")):
            # FUN_1406fa880
            _skip(reader, 4)
            _i32_vec(reader)
            _i32_vec(reader)
            _i32_vec(reader)
            if v > 0x689:
                _skip(reader, 20)
        for _ in range(_count(reader, "interaction_v3")):
            # FUN_1406fa940
            _skip(reader, 4)
            _i32_vec(reader)
            _i32_vec(reader)
            if v > 0x689:
                _skip(reader, 20)
    _i32_vec(reader, "interaction_v4")
    if v > 0x617:
        for _ in range(_count(reader, "interaction_v5")):
            _skip(reader, 20)
    if v > 0x65B:
        _skip(reader, 4)
        if reader.read_uint8():
            # FUN_1407b4650 (scholar/knowledge profile)
            for _ in range(4):
                _i32_vec(reader)
            for _ in range(_count(reader, "kn_research")):
                # FUN_1406fac90: 11*i32 + i32 vec
                _skip(reader, 44)
                _i32_vec(reader)
            _skip(reader, 4)
            if v > 0x65F:
                _i32_vec(reader, "kn_deduced")
                _i32_vec(reader, "kn_v2")
            for _ in range(_count(reader, "kn_discoveries")):
                # FUN_1401ce1b0: i32, i32 kind, i32, i32, vector of 4*i32,
                # kind-dependent payload, then version-gated scalars.
                _skip(reader, 4)
                kind = reader.read_int32()
                _skip(reader, 8)
                for _ in range(_count(reader, "kn_disc_parts")):
                    _skip(reader, 16)
                if kind == 9:
                    _skip(reader, 8)
                elif kind == 0xE:
                    _i32_vec(reader)
                elif kind == 0xF:
                    _skip(reader, 12)
                if v > 0x672:
                    _skip(reader, 8)
                if v > 0x673:
                    _skip(reader, 8)
                if v > 0x687:
                    _skip(reader, 16)
                if v > 0x6A8:
                    _skip(reader, 4)
            _skip(reader, 4)
            _i32_vec(reader, "kn_v3")
            for _ in range(_count(reader, "kn_goals")):
                # FUN_1406faef0
                _skip(reader, 4)
                kind = reader.read_int32()
                _skip(reader, 4)
                if kind == 1:
                    _skip(reader, 12)
                elif kind == 2:
                    _skip_knowledge_goal(reader, v)
                    _skip(reader, 12)
                elif kind in (0, 3):
                    _skip(reader, 16)
            _skip(reader, 4)
            if v > 0x673:
                for _ in range(_count(reader, "kn_topics")):
                    _skip_knowledge_goal(reader, v)
                _skip(reader, 12)


_SLOT_READERS = [
    _slot0_known_info,
    _slot1_skills,
    _slot2_likes,
    _slot3_personality,
    _slot4_preferences,
    _slot5_needs,
    _slot6_dreams,
    _slot7_curse,
    _slot8_masterpieces,
    _slot9_identity,
    _slot10_reputation,
    _slot11_wounds,
    _slot12_books,
]


_SLOT_NAMES = [
    "known_info",
    "skills",
    "likes",
    "personality",
    "preferences",
    "needs",
    "dreams",
    "curse",
    "masterpieces",
    "identity",
    "reputation",
    "wounds",
    "books",
]


def _capture_slot_body(reader: BinaryReader, slot_fn, save_version: int) -> dict:
    start = reader.tell()
    slot_fn(reader, save_version)
    end = reader.tell()
    reader.seek(start)
    raw = reader.read_bytes(end - start)
    reader.seek(end)
    return {"raw_b64": base64.b64encode(raw).decode("ascii"), "size": len(raw)}


def _read_slot1_skills(reader: BinaryReader, v: int) -> dict:
    """FUN_1406f8600 — skill id/rating/experience vectors."""
    skill_ids = []
    n = _count(reader, "skill_ids")
    for _ in range(n):
        skill_ids.append(reader.read_int16())
    ratings = []
    n = _count(reader, "ratings")
    for _ in range(n):
        ratings.append(reader.read_int32())
    exp_ids = []
    n = _count(reader, "exp_ids")
    for _ in range(n):
        exp_ids.append(reader.read_int16())
    experiences = []
    n = _count(reader, "experiences")
    for _ in range(n):
        experiences.append(reader.read_int32())
    out = {"skill_ids": skill_ids, "ratings": ratings, "exp_ids": exp_ids, "experiences": experiences}
    out["unk_i16"] = reader.read_int16()
    if v > 0x614:
        out["unk_i32_614"] = reader.read_int32()
    if v > 0x65D:
        out["unk_i32_65d"] = reader.read_int32()
    if v > 0x663 and reader.read_uint8():
        extras = []
        for _ in range(_count(reader, "skill_extra")):
            f0 = reader.read_int32()
            extra_vec = [reader.read_int32() for _ in range(_count(reader, "skill_extra_vec"))]
            tail = [reader.read_int32() for _ in range(4)]
            extras.append({"f0": f0, "vec": extra_vec, "tail": tail})
        out["extras"] = extras
        out["unk_tail"] = [reader.read_int32() for _ in range(2)]
    return out


def skip_histfig_info(reader: BinaryReader, *, save_version: int = 1716) -> None:
    """Skip optional info subprofiles: 13 x (u8 flag; if set, slot body)."""
    for slot_fn in _SLOT_READERS:
        flag = reader.read_uint8()
        if flag == 0:
            continue
        slot_fn(reader, save_version)


def read_histfig_info(reader: BinaryReader, *, save_version: int = 1716) -> dict:
    """Read all present histfig_info slots (typed where mapped, always byte-faithful)."""
    start = reader.tell()
    slots: dict[str, dict] = {}
    for slot_idx, slot_fn in enumerate(_SLOT_READERS):
        flag = reader.read_uint8()
        if flag == 0:
            continue
        name = _SLOT_NAMES[slot_idx]
        body_start = reader.tell()
        if slot_idx == 1:
            slots[name] = _read_slot1_skills(reader, save_version)
        else:
            slot_fn(reader, save_version)
            body_end = reader.tell()
            reader.seek(body_start)
            raw = reader.read_bytes(body_end - body_start)
            reader.seek(body_end)
            slots[name] = {"raw_b64": base64.b64encode(raw).decode("ascii"), "size": len(raw)}
    return {
        "present": True,
        "slots": slots,
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
