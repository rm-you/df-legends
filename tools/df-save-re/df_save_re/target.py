"""Canonical DF version target for df-legends save RE."""

TARGET_DF_VERSION = "0.47.05"
TARGET_SAVE_VERSION = 1716
# Andux documents 23 counters for pre-0.34 saves; 0.47.05 world.dat uses 50 (validated on Waterlures).
TARGET_WORLD_HEADER_ID_COUNT = 50
TARGET_PLATFORM = "linux"
TARGET_ARCH = "x86-64"


def world_header_id_count(save_version: int) -> int:
    """Number of int32 ID counters in world.dat header after leading int16."""
    if save_version >= TARGET_SAVE_VERSION:
        return TARGET_WORLD_HEADER_ID_COUNT
    return 23

# DF 0.47.05 Linux 64-bit binary (Bay12 tarball df_47_05_linux.tar.bz2)
TARGET_BINARY = "Dwarf_Fortress"
TARGET_DFHOCK_RELEASE = "0.47.05-r8"  # matching df-structures branch/tag
