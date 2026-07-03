"""Front-to-back deterministic walk of the world.dat payload.

Transcribed from the DF 0.47.05 world reader ``FUN_140330310`` and its per-case
callees (see ``ghidra_decompiles/``).  Every section's start is the previous
section's end — no anchoring, no heuristics.  Section readers consume bytes
exactly as the binary does, with all save_version gates transcribed as-is.

Stream order (reader case -> content):

===== ==========================================================
case  content
===== ==========================================================
0     i16 + world header (``FUN_140306a00``) + string tables
      (``FUN_14030aa20``)
2     object registry: per-vector counts + ids (``FUN_140aafe60``)
3     item bodies (polymorphic, vtable +0x438)
4     building bodies (polymorphic, vtable +0x218)
5     unit-like 0x2038 object bodies (``FUN_1404aaa30``)
6     0x24 object bodies (``FUN_1401b6b20``)
7     historical entities (``FUN_140a62e80``)
8     4 scalars + world_site vector (``FUN_1403066f0``)
9     world_history (``FUN_1407099a0``) + post blocks
0xa   ``FUN_140305a20`` + i32 + string
0xb   artifact bodies (``FUN_140323f70``)
0xc   written content bodies (``FUN_140323e70``)
0xd+  per-registry-vector body loops
0x20  u8 + 3×i32 tail
===== ==========================================================

The registry counts read in case 2 size the vectors that later cases iterate,
so the walker threads a ``WorldRegistry`` through the section readers.
"""

from __future__ import annotations

from dataclasses import dataclass, field
from typing import Any

from ..binary_reader import BinaryReader
from .language_name import LanguageName, read_language_name

# ---------------------------------------------------------------------------
# shared small helpers
# ---------------------------------------------------------------------------

MAX_VEC = 200_000_000  # bytes guard for implausible counts


def _read_count(reader: BinaryReader, *, label: str, limit: int = 50_000_000) -> int:
    off = reader.tell()
    n = reader.read_int32()
    if n < 0 or n > limit:
        raise ValueError(f"implausible {label} count {n} at 0x{off:x}")
    return n


def _read_string(reader: BinaryReader) -> str:
    return reader.read_fixed_string()


def _read_i32_list(reader: BinaryReader, n: int) -> list[int]:
    return [reader.read_int32() for _ in range(n)]


# ---------------------------------------------------------------------------
# case 0 — world header (FUN_140306a00)
# ---------------------------------------------------------------------------

# Unconditional 28 id-counter slots, then version-gated additions.
# (in-memory +0xa8..+0x114, gates from the decompile)
HEADER_ID_GATES: tuple[tuple[int, int], ...] = (
    (28, 0),      # always
    (3, 0x5CB),   # sv > 0x5cb
    (2, 0x5CC),   # sv > 0x5cc
    (1, 0x5D4),   # sv > 0x5d4
    (1, 0x622),   # sv > 0x622
    (2, 0x67D),   # sv > 0x67d
)


def header_id_count(save_version: int) -> int:
    return sum(n for n, gate in HEADER_ID_GATES if save_version > gate)


@dataclass
class ForwardWorldHeader:
    unknown_int16: int
    max_ids: list[int]
    name: LanguageName | None
    flag_bytes: bytes
    save_name: str
    start: int = 0
    end: int = 0


def read_world_header(reader: BinaryReader, save_version: int) -> ForwardWorldHeader:
    """Case 0 prefix: i16 + FUN_140306a00 body."""
    start = reader.tell()
    unknown_int16 = reader.read_int16()
    max_ids = _read_i32_list(reader, header_id_count(save_version))
    name = read_language_name(reader)
    flag_bytes = reader.read_bytes(15)
    save_name = _read_string(reader)
    return ForwardWorldHeader(
        unknown_int16=unknown_int16,
        max_ids=max_ids,
        name=name,
        flag_bytes=flag_bytes,
        save_name=save_name,
        start=start,
        end=reader.tell(),
    )


# ---------------------------------------------------------------------------
# case 0 — string tables (FUN_14030aa20)
# ---------------------------------------------------------------------------

RAW_CATEGORY_NAMES = (
    "inorganic",
    "plant",
    "creaturebody",
    "creaturebodygloss",
    "creature",
    "item",
    "entity",
    "word",
    "symbol",
    "translation",
    "color",
    "shape",
    "color_pattern",
    "reaction",
    "material_template",
    "tissue_template",
    "body_detail_plan",
    "building",
    "creature_variation",
    "interaction",
)


@dataclass
class StringTables:
    nested_tables: list[list[list[str]]]
    raw_categories: dict[str, list[str]]
    unit_chunks: list[dict[str, int]]
    start: int = 0
    end: int = 0


def _read_string_vector(reader: BinaryReader, *, label: str) -> list[str]:
    n = _read_count(reader, label=label, limit=5_000_000)
    return [_read_string(reader) for _ in range(n)]


def _read_nested_string_table(reader: BinaryReader, *, label: str) -> list[list[str]]:
    n = _read_count(reader, label=label, limit=1_000_000)
    return [_read_string_vector(reader, label=f"{label}[{i}]") for i in range(n)]


def _read_unit_chunk_record(reader: BinaryReader, save_version: int) -> dict[str, int]:
    """FUN_140309c40: 0x40-byte record; +0x28/+0x2c gated at sv > 0x5cb."""
    rec = {f"f{i:02x}": reader.read_int32() for i in range(0, 0x28, 4)}
    if save_version >= 0x5CC:
        rec["f28"] = reader.read_int32()
        rec["f2c"] = reader.read_int32()
    for off in range(0x30, 0x40, 4):
        rec[f"f{off:02x}"] = reader.read_int32()
    return rec


def read_string_tables(reader: BinaryReader, save_version: int) -> StringTables:
    """FUN_14030aa20: nested string tables + raw category names + unit chunks."""
    start = reader.tell()
    nested: list[list[list[str]]] = []
    # 5 unconditional nested tables (+3, +6, +9, +0xc, +0xf)
    for i in range(5):
        nested.append(_read_nested_string_table(reader, label=f"nested{i}"))
    if save_version > 0x5CB:
        nested.append(_read_nested_string_table(reader, label="nested5"))
    nested.append(_read_nested_string_table(reader, label="nested6"))
    if save_version > 0x58E:
        nested.append(_read_nested_string_table(reader, label="nested7"))
    raw_categories = {
        name: _read_string_vector(reader, label=f"raws:{name}")
        for name in RAW_CATEGORY_NAMES
    }
    n = _read_count(reader, label="unit_chunks", limit=10_000_000)
    unit_chunks = [_read_unit_chunk_record(reader, save_version) for _ in range(n)]
    return StringTables(
        nested_tables=nested,
        raw_categories=raw_categories,
        unit_chunks=unit_chunks,
        start=start,
        end=reader.tell(),
    )


# ---------------------------------------------------------------------------
# case 2 — object registry (FUN_140aafe60)
# ---------------------------------------------------------------------------

# Registry vector specs in stream order: (key, has_id, has_type, version_gate)
# key names follow the global vectors they populate; cross-checked against the
# reader cases that later fill the bodies.
REGISTRY_SPECS: tuple[tuple[str, bool, bool, int], ...] = (
    ("items", True, True, 0),              # DAT_141c67fe0, bodies case 3
    ("buildings", True, True, 0),          # DAT_141c70658, bodies case 4
    ("engine_objs", True, False, 0),       # DAT_141c53730 (0x2038), bodies case 5
    ("written_contents", True, False, 0),  # DAT_141c67348, bodies case 0xc
    ("artifacts", True, False, 0),         # DAT_141c68028/141c68010, bodies case 0xb
    ("anon_24", False, False, 0),          # 0x24 objs, bodies case 6
    ("squads", True, False, 0),            # DAT_141d64d38, bodies case 0xd
    ("formations", True, False, 0),        # DAT_141d64d68, bodies case 0xe
    ("activities_1", True, False, 0),      # DAT_141d64d98, bodies case 0xf
    ("reg_10", True, False, 0),            # DAT_141d69118, bodies case 0x10
    ("reg_11", True, False, 0),            # DAT_141d69148, bodies case 0x11
    ("reg_12", True, False, 0),            # DAT_141d69178, bodies case 0x12
    ("reg_13", True, False, 0),            # DAT_141d691a8, bodies case 0x13
    ("reg_14", True, False, 0),            # DAT_141d691d8, bodies case 0x14
    ("reg_15", True, False, 0),            # DAT_141d69208, bodies case 0x15
    ("reg_16", True, False, 0),            # DAT_141d69250, bodies case 0x16
    ("reg_17", True, False, 0),            # DAT_141d69280, bodies case 0x17 (missions)
    ("reg_18", True, False, 0),            # DAT_141d692b0, bodies case 0x18
    ("reg_19", True, False, 0),            # DAT_141d692e0, bodies case 0x19
    ("reg_1a", True, False, 0),            # DAT_141d69310, bodies case 0x1a
    ("reg_1b_1", True, False, 0x5CB),      # DAT_141d69340
    ("reg_1b_2", True, False, 0x5CB),      # DAT_141d69370
    ("reg_1b_3", True, False, 0x5CB),      # DAT_141d693a0
    ("reg_1b_4", True, False, 0x5CC),      # DAT_141d693d0
    ("reg_1b_5", True, False, 0x5CC),      # DAT_141d69400
    ("reg_1c", True, False, 0x5D4),        # DAT_141d69430
    ("reg_1d", True, False, 0x622),        # DAT_141d69460
    ("reg_1e", True, False, 0x67D),        # DAT_141d69490
    ("reg_1f", True, False, 0x67D),        # DAT_141d694c0
)


@dataclass
class WorldRegistry:
    """Counts + id (and type) prefixes for the world object vectors."""

    vectors: dict[str, dict[str, Any]] = field(default_factory=dict)
    start: int = 0
    end: int = 0

    def count(self, key: str) -> int:
        return self.vectors[key]["count"] if key in self.vectors else 0

    def ids(self, key: str) -> list[int]:
        return self.vectors[key].get("ids", []) if key in self.vectors else []

    def types(self, key: str) -> list[int]:
        return self.vectors[key].get("types", []) if key in self.vectors else []


def read_registry(reader: BinaryReader, save_version: int) -> WorldRegistry:
    """Case 2: per-vector counts + element ids (+ type tags for items/buildings).

    Item/building order on disk per element is (id, type): the id i32 is read
    first in FUN_140aafe60, then the factory (FUN_140812580 / FUN_1401961d0)
    reads the type tag i32.
    """
    reg = WorldRegistry(start=reader.tell())
    for key, has_id, has_type, gate in REGISTRY_SPECS:
        if save_version <= gate:
            continue
        n = _read_count(reader, label=f"registry:{key}", limit=100_000_000)
        vec: dict[str, Any] = {"count": n}
        if has_id and has_type:
            ids: list[int] = []
            types: list[int] = []
            for _ in range(n):
                ids.append(reader.read_int32())
                types.append(reader.read_int32())
            vec["ids"] = ids
            vec["types"] = types
        elif has_id:
            vec["ids"] = _read_i32_list(reader, n)
        reg.vectors[key] = vec
    reg.end = reader.tell()
    return reg
