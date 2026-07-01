#!/usr/bin/env python3
"""First tail-validated header in file order after fig10."""
from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.body_skipper import SkipError, default_xml_dir
from df_save_re.deserializers.historical_figures import (
    try_read_historical_figure_header,
    _quick_histfig_header_check,
)
from df_save_re.deserializers.record_reader import read_struct
from df_save_re.deserializers.save_profiles import get_profile
from df_save_re.save_preamble import resolve_save_payload

payload = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
xml = default_xml_dir()
TAIL_END = 0x2192EAA
PREV_ID = 10
DEATH = 0x226009C
profile = get_profile("historical_figure")
tail_names = set(profile.tail_field_names) if profile and profile.tail_field_names else None


def tail_validates(offset: int) -> int | None:
    try:
        r = BinaryReader(BytesIO(payload))
        r.seek(offset)
        h = try_read_historical_figure_header(r)
        if h is None or h.figure_id <= PREV_ID:
            return None
        read_struct(r, "historical_figure", xml_dir=xml, payload=payload, field_filter=tail_names)
        return h.figure_id
    except SkipError:
        return None


found = []
for off in range(TAIL_END, min(TAIL_END + 200_000, DEATH), 2):
    if not _quick_histfig_header_check(payload, off):
        continue
    fid = tail_validates(off)
    if fid is not None:
        found.append((off, fid, off - TAIL_END))
        if len(found) >= 8:
            break

print(f"first valid headers in file order after {TAIL_END:#x}:")
for off, fid, delta in found:
    print(f"  off={off:#x} id={fid} delta={delta}")
