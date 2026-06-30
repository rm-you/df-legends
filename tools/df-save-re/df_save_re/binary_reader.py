"""Binary readers matching DF's file_compressorst serialization (g_src/files.h)."""

from __future__ import annotations

import struct
from dataclasses import dataclass
from typing import BinaryIO


@dataclass
class BinaryReader:
    """Read primitive types from a decompressed save payload stream."""

    stream: BinaryIO
    offset: int = 0

    def read_bytes(self, size: int) -> bytes:
        data = self.stream.read(size)
        if len(data) != size:
            raise EOFError(f"expected {size} bytes at offset {self.offset}, got {len(data)}")
        self.offset += size
        return data

    def read_int8(self) -> int:
        return struct.unpack("b", self.read_bytes(1))[0]

    def read_uint8(self) -> int:
        return struct.unpack("B", self.read_bytes(1))[0]

    def read_int16(self) -> int:
        return struct.unpack("<h", self.read_bytes(2))[0]

    def read_uint16(self) -> int:
        return struct.unpack("<H", self.read_bytes(2))[0]

    def read_int32(self) -> int:
        return struct.unpack("<i", self.read_bytes(4))[0]

    def read_uint32(self) -> int:
        return struct.unpack("<I", self.read_bytes(4))[0]

    def read_int64(self) -> int:
        return struct.unpack("<q", self.read_bytes(8))[0]

    def read_uint64(self) -> int:
        return struct.unpack("<Q", self.read_bytes(8))[0]

    def read_float(self) -> float:
        return struct.unpack("<f", self.read_bytes(4))[0]

    def read_double(self) -> float:
        return struct.unpack("<d", self.read_bytes(8))[0]

    def read_bool(self) -> bool:
        return self.read_int8() != 0

    def read_fixed_string(self) -> str:
        """String: int16 length + bytes (no explicit null in file)."""
        length = self.read_int16()
        if length <= 0:
            return ""
        raw = self.read_bytes(length)
        return raw.decode("latin-1", errors="replace")

    def peek_bytes(self, size: int) -> bytes:
        pos = self.stream.tell()
        data = self.stream.read(size)
        self.stream.seek(pos)
        return data

    def tell(self) -> int:
        return self.offset

    def seek(self, offset: int) -> None:
        self.stream.seek(offset)
        self.offset = offset
