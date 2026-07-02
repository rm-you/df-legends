"""Slow integration tests for exact-landing layer walks (Namushul fixture)."""

from __future__ import annotations

import pytest

from df_save_re.deserializers.engine_layers import walk_figures_layer
from df_save_re.deserializers.historical_figures import locate_figures_vector
from df_save_re.deserializers.world_dat import parse_dat_preamble
from df_save_re.deserializers.world_layout import discover_layout_landmarks
from df_save_re.save_preamble import resolve_save_payload

FIXTURE = "tests/fixtures/small-retired/world.dat"


@pytest.fixture(scope="module")
def namushul():
    payload = resolve_save_payload(FIXTURE).payload
    pre = parse_dat_preamble(payload)
    layout = discover_layout_landmarks(payload, pre)
    return payload, pre.header, layout


@pytest.mark.slow
@pytest.mark.xfail(reason="figure bodies: save-path info/vague + 12747-slot stream not landing yet")
def test_figures_walk_lands_on_collections(namushul):
    payload, header, layout = namushul
    walk = walk_figures_layer(payload, header, layout)
    assert walk.result is not None
    assert walk.result.parsed_count == 4595
    assert walk.result.ok and walk.result.landed_on_anchor
