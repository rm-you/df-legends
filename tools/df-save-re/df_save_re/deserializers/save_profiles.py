"""Per-type save-path serialization profiles for DF 0.47.05 compressed saves.

Ground truth for these overrides comes from Ghidra ``read_file`` decompilation
and empirical RE (Namushul / region1). The recursive reader and skip path both
consume the same profile so read == skip with discarded values.

Ghidra RTTI targets (``ghidra_scripts/find_read_file.py``):

- history_figurest, hf_profilest, artistic_profilest, histfig_entity_linkst
- history_eventst, world_sitest, historical_entityst
"""

from __future__ import annotations

import base64
import struct
from dataclasses import dataclass, field
from typing import Any, Callable

from ..binary_reader import BinaryReader

GHIDRA_READ_FILE_TARGETS = (
    "history_figurest",
    "hf_profilest",
    "artistic_profilest",
    "histfig_entity_linkst",
    "history_eventst",
    "world_sitest",
    "historical_entityst",
    "artifact_recordst",
    "written_contentst",
    "historical_event_collectionst",
    "history_erast",
)
# Fields present in df-structures memory layout but not written to compressed saves.
SAVE_OMIT_FIELDS: dict[str, set[str]] = {
    "historical_figure": {"pool_id", "art_count"},
    "histfig_entity_link": {"entity_vector_idx"},
    "histfig_entity_link_positionst": {"assignment_vector_idx"},
    "histfig_hf_link": {"hf_vector_idx"},
    "metaphysical_profilest": {
        "associated_divination_set_id",
        "physical_form_portrait_texpos",
        "need_to_update_physical_form_portrait",
    },
    "artistic_profilest": {"top_related_heid"},
}

SAVE_VECTOR_TAIL: dict[tuple[str, str], int] = {
    ("artistic_profilest", "events"): 3,
}

SAVE_EMPTY_POLY_TAIL: dict[tuple[str, str], int] = {}

# Polymorphic pointer vectors that use bool posnull (not int32) on the save path.
SAVE_POLY_VECTOR_BOOL: set[tuple[str, str]] = {
    ("art_image", "elements"),
    ("art_image", "properties"),
}

# Polymorphic pointer vectors written densely: count + (int16 tag + body) for
# every element. FUN_14070a090 uses this for the three histfig link vectors.
SAVE_POLY_VECTOR_DENSE: set[tuple[str, str]] = {
    ("historical_figure", "entity_links"),
    ("historical_figure", "site_links"),
    ("historical_figure", "histfig_links"),
}

SAVE_POLYMORPH_BODY_BYTES: dict[tuple[str, int], int] = {
    ("histfig_site_link", 12): 50,
}

SAVE_STRICT_POLYMORPHIC_TAGS: set[str] = {
    "histfig_entity_link",
    "histfig_hf_link",
    "histfig_site_link",
}

SAVE_STRUCT_BODY_BYTES: dict[str, int] = {}

SAVE_WG_RELATIONSHIP_BODY_BYTES = 830

SAVE_REFERENCE_POINTERS: dict[str, set[str]] = {
    "historical_figure": {
        "worldgen_site",
        "worldgen_region",
        "worldgen_layer",
        "worldgen_genetics",
    },
    "metaphysical_profilest": {"appearance_pform"},
    "historical_figure_info": {
        "kills",
        "wounds",
        "known_info",
        "curse",
        "books",
        "reputation",
        "relationships",
    },
}

# FUN_14070a090 returns after vague_relationships; later XML fields are
# runtime/worldgen state and are not emitted in this compressed save path.
HISTFIG_TAIL_FIELDS = (
    "entity_links",
    "site_links",
    "histfig_links",
    "info",
    "vague_relationships",
)

HISTFIG_LINKS_MAX_COUNT = 64


def omit_field(struct_name: str, field_name: str) -> bool:
    return field_name in SAVE_OMIT_FIELDS.get(struct_name, set())


def reference_pointer(struct_name: str, field_name: str) -> bool:
    return field_name in SAVE_REFERENCE_POINTERS.get(struct_name, set())


def vector_tail(struct_name: str | None, field_name: str) -> int:
    if struct_name is None:
        return 0
    return SAVE_VECTOR_TAIL.get((struct_name, field_name), 0)


def poly_vector_uses_bool(struct_name: str | None, field_name: str) -> bool:
    if struct_name is None:
        return False
    return (struct_name, field_name) in SAVE_POLY_VECTOR_BOOL


def poly_vector_is_dense(struct_name: str | None, field_name: str) -> bool:
    if struct_name is None:
        return False
    return (struct_name, field_name) in SAVE_POLY_VECTOR_DENSE


def empty_poly_tail(struct_name: str | None, field_name: str) -> int:
    if struct_name is None:
        return 0
    return SAVE_EMPTY_POLY_TAIL.get((struct_name, field_name), 0)


def strict_polymorphic_tags(base_type: str) -> bool:
    return base_type in SAVE_STRICT_POLYMORPHIC_TAGS


def align_histfig_links_start(reader: BinaryReader, payload: bytes, *, max_pad: int = 3) -> None:
    """Skip 0-3 padding bytes before ``histfig_links`` count when site_links misaligns."""
    start = reader.tell()
    for pad in range(max_pad + 1):
        off = reader.tell()
        if off + 4 > len(payload):
            break
        count = struct.unpack_from("<i", payload, off)[0]
        if 0 <= count <= HISTFIG_LINKS_MAX_COUNT:
            return
        if pad < max_pad:
            reader.read_uint8()
    reader.seek(start)


def read_worldgen_relationships(reader: BinaryReader) -> dict[str, Any]:
    present = reader.read_int32()
    out: dict[str, Any] = {"present": present}
    if present == 1:
        raw = reader.read_bytes(SAVE_WG_RELATIONSHIP_BODY_BYTES)
        out["body_b64"] = base64.b64encode(raw).decode("ascii")
    return out


def opaque_blob(reader: BinaryReader, size: int) -> dict[str, Any]:
    raw = reader.read_bytes(size)
    return {"size": size, "body_b64": base64.b64encode(raw).decode("ascii")}


def _read_int16_vector(reader: BinaryReader) -> list[int]:
    count = reader.read_int32()
    if count < 0 or count > 5_000_000:
        raise ValueError(f"implausible int16 vector count {count} at 0x{reader.tell() - 4:x}")
    return [reader.read_int16() for _ in range(count)]


def _read_int32_vector(reader: BinaryReader) -> list[int]:
    count = reader.read_int32()
    if count < 0 or count > 5_000_000:
        raise ValueError(f"implausible int32 vector count {count} at 0x{reader.tell() - 4:x}")
    return [reader.read_int32() for _ in range(count)]


def read_artistic_profile_save(reader: BinaryReader) -> dict[str, Any]:
    """On-disk ``artistic_profilest`` layout (differs from in-memory df-structures)."""
    ec = reader.read_int32()
    events: list[int] = []
    if ec:
        raw = reader.read_bytes(ec * 4)
        events = [int.from_bytes(raw[i : i + 4], "little") for i in range(0, len(raw), 4)]
        reader.read_bytes(3)
    lc = reader.read_int32()
    lost: list[int] = []
    if lc:
        raw = reader.read_bytes(lc * 4)
        lost = [int.from_bytes(raw[i : i + 4], "little") for i in range(0, len(raw), 4)]
    pc = reader.read_int32()
    chunks: list[int] = []
    if pc:
        raw = reader.read_bytes(pc * 4)
        chunks = [int.from_bytes(raw[i : i + 4], "little") for i in range(0, len(raw), 4)]
    pm = reader.read_int32()
    members: list[int] = []
    if pm:
        raw = reader.read_bytes(pm * 2)
        members = [int.from_bytes(raw[i : i + 2], "little") for i in range(0, len(raw), 2)]
    reader.read_bytes(8)
    return {
        "events": events,
        "lost_events": lost,
        "personal_art_image_chunk": chunks,
        "personal_art_image_chunk_member": members,
    }


def read_masterpieces_save(reader: BinaryReader) -> dict[str, Any] | None:
    """Save path: non-zero flag means inline ``artistic_profilest`` body follows."""
    flag = reader.read_int32()
    if flag == 0:
        return None
    body = read_artistic_profile_save(reader)
    body["__present_flag__"] = flag
    return body


def read_art_image_save(reader: BinaryReader) -> dict[str, Any]:
    """Inline ``art_image`` body on the compressed save path (bool posnull element vectors)."""
    from .record_reader import default_xml_dir, read_struct

    body, _ = read_struct(reader, "art_image", xml_dir=default_xml_dir(), payload=None)
    return body


def read_figure_post_tail_save(reader: BinaryReader, art_count: int) -> dict[str, Any]:
    """Bytes after ``defensive_skill_ip_sum``: ``art_count`` inline art images when present."""
    if art_count <= 0:
        return {}
    images: list[dict[str, Any]] = []
    for _ in range(art_count):
        images.append(read_art_image_save(reader))
    return {"art_images": images}


def read_historical_figure_info_save(reader: BinaryReader) -> dict[str, Any] | int | None:
    """Partial ``historical_figure_info`` save reader from FUN_14070a5d0.

    The outer histfig writer appears to enter this body directly; the first byte
    is the first optional subprofile flag. We parse the first writer-confirmed
    subprofile and let the caller preserve the rest as opaque until the remaining
    profile writers are mapped.
    """
    flag = reader.read_uint8()
    if flag == 0:
        return None
    if flag != 1:
        return flag

    # A byte flag immediately followed by a 4-byte vector count is padded to the
    # next local dword boundary in observed saves.
    reader.read_bytes(3)
    return {
        "__partial__": True,
        "metaphysical": {
            "unk_int16_vector": _read_int16_vector(reader),
            "unk_int32_vector": _read_int32_vector(reader),
        },
    }


def read_byte_flagged_struct(reader: BinaryReader, type_name: str) -> dict[str, Any] | int | None:
    """Optional owned pointer written as one byte followed by an inline struct."""
    flag = reader.read_uint8()
    if flag == 0:
        return None
    if flag != 1:
        return flag
    from .record_reader import default_xml_dir, read_struct

    body, _ = read_struct(reader, type_name, xml_dir=default_xml_dir(), payload=None)
    return body


@dataclass
class SaveProfile:
    """Hooks applied while reading/skipping one struct type on the save path."""

    struct_name: str
    before_field: dict[str, Callable[..., None]] = field(default_factory=dict)
    field_readers: dict[str, Callable[..., Any]] = field(default_factory=dict)
    tail_field_names: tuple[str, ...] | None = None
    post_body: Callable[..., dict[str, Any]] | None = None


_PROFILES: dict[str, SaveProfile] = {}


def register_profile(profile: SaveProfile) -> None:
    _PROFILES[profile.struct_name] = profile


def get_profile(struct_name: str) -> SaveProfile | None:
    return _PROFILES.get(struct_name)


def _register_defaults() -> None:
    register_profile(
        SaveProfile(
            struct_name="historical_figure",
            before_field={},
            field_readers={
                "worldgen_relationships": read_worldgen_relationships,
                "info": read_historical_figure_info_save,
                "vague_relationships": lambda reader: read_byte_flagged_struct(
                    reader, "relationship_quick_infost"
                ),
            },
            tail_field_names=HISTFIG_TAIL_FIELDS,
        )
    )
    register_profile(
        SaveProfile(
            struct_name="art_image",
        )
    )
    register_profile(
        SaveProfile(
            struct_name="historical_figure_info",
            field_readers={
                "masterpieces": read_masterpieces_save,
            },
        )
    )
    # Ghidra read_file targets (history_eventst, world_sitest, historical_entityst):
    # reference pointers and omitted fields shared across history layers.
    register_profile(
        SaveProfile(
            struct_name="world_site",
            field_readers={},
        )
    )
    register_profile(
        SaveProfile(
            struct_name="historical_entity",
            field_readers={},
        )
    )
    register_profile(
        SaveProfile(
            struct_name="history_event",
            field_readers={},
        )
    )
    register_profile(
        SaveProfile(
            struct_name="artifact_record",
            field_readers={},
        )
    )
    register_profile(
        SaveProfile(
            struct_name="written_content",
            field_readers={},
        )
    )
    register_profile(
        SaveProfile(
            struct_name="historical_event_collection",
            field_readers={},
        )
    )
    register_profile(
        SaveProfile(
            struct_name="history_era",
            field_readers={},
        )
    )


_register_defaults()
