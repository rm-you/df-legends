#!/usr/bin/env python3
from df_save_re.deserializers.world_dat import parse_dat_preamble
from df_save_re.deserializers.world_layout import discover_layout_landmarks
from df_save_re.save_preamble import resolve_save_payload
p=resolve_save_payload('tests/fixtures/small-retired/world.dat').payload
pre=parse_dat_preamble(p)
layout=discover_layout_landmarks(p, pre)
for k,v in layout.__dict__.items():
    print(k, hex(v) if isinstance(v,int) else v)
