#!/usr/bin/env python3
"""Inspect fig5 structural tail end and next-header candidates."""

from io import BytesIO

from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.historical_figures import (
    _quick_histfig_header_check,
    _find_next_figure_start,
    try_read_historical_figure_header,
)
from df_save_re.deserializers.record_reader import read_struct
from df_save_re.deserializers.body_skipper import SkipError, skip_historical_figure_body
from df_save_re.deserializers.save_profiles import get_profile
from df_save_re.save_preamble import resolve_save_payload
from df_save_re.deserializers.body_skipper import default_xml_dir

payload = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
xml = default_xml_dir()
fig5 = 0x21673D6
death = 0x226009C

r = BinaryReader(BytesIO(payload))
r.seek(fig5)
h = try_read_historical_figure_header(r)
print(f"fig5 header id={h.figure_id if h else None} art={h.art_count if h else None} header_end={r.tell():#x}")

profile = get_profile("historical_figure")
tail_names = set(profile.tail_field_names)
tail_values, _ = read_struct(
    r,
    "historical_figure",
    xml_dir=xml,
    payload=payload,
    field_filter=tail_names,
)
tail_end = r.tell()
print(f"fig5 structural tail_end={tail_end:#x} span_to_tail={tail_end - fig5}")

print("candidate headers id 6..12 between fig5 start and death:")
for want in range(6, 13):
    hits = []
    for off in range(fig5, death, 2):
        rr = BinaryReader(BytesIO(payload))
        rr.seek(off)
        hh = try_read_historical_figure_header(rr)
        if hh and hh.figure_id == want:
            hits.append((off, hh.art_count))
            if len(hits) >= 3:
                break
    print(f"  id={want}: {[(hex(o), a, _quick_histfig_header_check(payload, o)) for o, a in hits]}")

print("candidate details:")
for off in (0x21E0C32, 0x220AE3E, 0x2192DDA):
    rr = BinaryReader(BytesIO(payload))
    rr.seek(off)
    hh = try_read_historical_figure_header(rr)
    if hh is None:
        print(f"  {off:#x}: no header")
        continue
    print(
        f"  {off:#x}: id={hh.figure_id} art={hh.art_count} race={hh.race} "
        f"civ={hh.civ_id} first_len={len(hh.name.first_name)} nick_len={len(hh.name.nickname)} "
        f"words={hh.name.words} lang={hh.name.language} quick={_quick_histfig_header_check(payload, off)}"
    )

found = _find_next_figure_start(
    payload,
    scan_start=tail_end,
    previous_id=5,
    stop_before=death,
    max_scan=2_000_000,
    xml_dir=xml,
)
print(f"_find_next_figure_start from tail_end -> {found:#x}" if found else "no found")

print("chain survival from candidate starts:")
for start in (0x21EDFF0, 0x220AE3E, 0x2192DDA, 0x21675D6):
    rr = BinaryReader(BytesIO(payload))
    rr.seek(start)
    chain = []
    for _ in range(6):
        off = rr.tell()
        hh = try_read_historical_figure_header(rr)
        if hh is None:
            chain.append((hex(off), None, "bad-header"))
            break
        rr.seek(off)
        try:
            skip_historical_figure_body(rr, payload, xml_dir=xml, scan_stop=death)
        except SkipError as exc:
            chain.append((hex(off), hh.figure_id, f"FAIL {exc}"))
            break
        chain.append((hex(off), hh.figure_id, hex(rr.tell())))
    print(f"  from {start:#x}: {chain}")
