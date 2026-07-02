#!/usr/bin/env python3
"""Hex dump around figure body boundary."""
from df_save_re.binary_reader import BinaryReader
from df_save_re.deserializers.historical_figures import locate_figures_vector, read_historical_figure_header
from df_save_re.deserializers.record_reader import read_historical_figure_record
from df_save_re.deserializers.world_dat import parse_dat_preamble
from df_save_re.deserializers.world_layout import discover_layout_landmarks
from df_save_re.deserializers.engine_walk import _read_presence_flags
from df_save_re.save_preamble import resolve_save_payload
from io import BytesIO

payload = resolve_save_payload("tests/fixtures/small-retired/world.dat").payload
pre = parse_dat_preamble(payload)
layout = discover_layout_landmarks(payload, pre)
anchor = locate_figures_vector(payload, pre.header, search_start=layout.history_stats)
reader = BinaryReader(BytesIO(payload))
reader.seek(anchor.vector_offset)
decl = reader.read_int32()
flags = _read_presence_flags(reader, decl)
present = [i for i, f in enumerate(flags) if f]
print("first present ids", present[:10])
reader.seek(anchor.bodies_start)
for n, fid in enumerate(present[:3]):
    off = reader.tell()
    try:
        h = read_historical_figure_header(reader, figure_id=fid)
        print(f"fig {fid} header at 0x{off:x} bytes={h.header_bytes} prof={h.profession} race={h.race} flags={len(h.flag_indices)}")
    except Exception as e:
        print(f"fig {fid} HEADER FAIL at 0x{off:x}: {e}")
        break
    reader.seek(off)
    rec, consumed = read_historical_figure_record(reader, payload, figure_id=fid)
    print(f"  full consumed={consumed} tail_err={rec.get('body_parse_error')} blob={bool(rec.get('body_blob'))}")
    print(f"  next off 0x{reader.tell():x}")
