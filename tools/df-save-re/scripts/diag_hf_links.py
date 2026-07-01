#!/usr/bin/env python3
import struct
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.body_skipper import default_xml_dir, skip_struct
from df_save_re.save_preamble import resolve_save_payload
from df_save_re.structures.polymorph import build_registry

payload = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
xml_dir = default_xml_dir()
off = 0x2134E71  # histfig count after site empty tail
count = struct.unpack_from("<i", payload, off)[0]
print("count", count, "at", hex(off))
off += 4
flags = [struct.unpack_from("<i", payload, off + i * 4)[0] for i in range(count)]
print("flags", flags)
off += count * 4
reg = build_registry("histfig_hf_link", xml_dir)
for i, flag in enumerate(flags):
    if not flag:
        continue
    tag = struct.unpack_from("<h", payload, off)[0]
    sub = reg.subclass_for(tag) if reg else None
    print(f" link{i} @ {off:#x} tag={tag} sub={sub}")
    r = BinaryReader(BytesIO(payload))
    r.seek(off + 2)
    skip_struct(r, sub or "histfig_hf_link", xml_dir=xml_dir)
    print(f"   body bytes {r.tell() - off - 2}")
    off = r.tell()

print("end", hex(off), "target fig1", hex(0x2135412))
