#!/usr/bin/env python3
import struct
from io import BytesIO
from df_save_re.save_preamble import resolve_save_payload
from df_save_re.deserializers.world_history_walk import _verify_events_landmark

r = resolve_save_payload("tests/fixtures/small-retired/world.dat")
fig_off = 0x15BEB40
lo = 0
scan_back = 0x3000000
events_end = fig_off
header = r.preamble.header
save_version = r.save_version
ceiling = min(50_000_000, header.max_ids[9] + 1)
by_declared: dict[int, int] = {}
for off in range(lo, events_end - 3, 4):
    bodies_start = off + 4
    span = events_end - bodies_start
    if span < 8:
        continue
    max_decl = min(ceiling, span // 8)
    declared = struct.unpack_from("<i", r.payload, off)[0]
    if not (0 < declared <= max_decl):
        continue
    tag = struct.unpack_from("<i", r.payload, bodies_start)[0]
    if not (0 <= tag <= 0x85):
        continue
    prev = by_declared.get(declared)
    if prev is None or off < prev:
        by_declared[declared] = off
print("unique declared", len(by_declared))
print("87666 off", hex(by_declared.get(87666, -1)))
print("max declared", max(by_declared))
# verify top 5 declared
for declared in sorted(by_declared, reverse=True)[:10]:
    off = by_declared[declared]
    ok = _verify_events_landmark(r.payload, off, off+4, events_end, save_version=save_version)
    print(declared, hex(off), ok)
    if ok:
        break
