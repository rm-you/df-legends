"""Per-layer engine walk integration tests (Namushul fixture).

Validates that the serialization engine is wired into extraction with
authoritative counts and honest, self-validating body-walk results.
"""

from __future__ import annotations

import pytest

from df_save_re.deserializers.world_header_ids import resolve_site_ceiling
from df_save_re.legends_extract import extract_legends_snapshot
from df_save_re.save_preamble import resolve_save_payload
from tests.fixture_paths import resolve_fixture


@pytest.fixture(scope="module")
def namushul_snapshot():
    path = resolve_fixture("small-retired", "world.dat")
    if path is None:
        pytest.skip("small-retired/world.dat fixture missing")
    resolved = resolve_save_payload(path)
    return extract_legends_snapshot(resolved.payload, preamble=resolved.preamble)


def _walk(snapshot, layer):
    for w in snapshot.engine_walks:
        if w.layer == layer:
            return w
    return None


def test_engine_walks_present(namushul_snapshot) -> None:
    layers = {w.layer for w in namushul_snapshot.engine_walks}
    assert {"figures", "events_death", "sites", "entities"} <= layers


def test_figures_authoritative_count(namushul_snapshot) -> None:
    walk = _walk(namushul_snapshot, "figures")
    assert walk is not None
    assert walk.result is not None
    # Authoritative figure count = vector present flags, not header max_ids[8] (declared slots).
    assert walk.authoritative_count == walk.result.present_count
    assert walk.authoritative_count == namushul_snapshot.historical_figure_catalog.anchor.present_count
    assert namushul_snapshot.header.max_ids[8] == walk.result.declared_count
    # Body landing is RE-blocked; the harness must report honestly, not fake it.
    if not walk.deterministic:
        assert walk.result.error is not None
        assert walk.result.error_offset is not None


def test_events_authoritative_count(namushul_snapshot) -> None:
    walk = _walk(namushul_snapshot, "events_death")
    assert walk is not None
    assert walk.result is not None
    # events_death covers only the death-event sub-vector, not all max_ids[9] events.
    assert walk.authoritative_count == walk.result.present_count
    assert walk.authoritative_count < namushul_snapshot.header.max_ids[9]


def test_sites_authoritative_count(namushul_snapshot) -> None:
    walk = _walk(namushul_snapshot, "sites")
    assert walk is not None
    assert walk.authoritative_count == resolve_site_ceiling(namushul_snapshot.header)


def test_layer_walk_dict_shape(namushul_snapshot) -> None:
    walk = _walk(namushul_snapshot, "figures")
    data = walk.to_dict()
    for key in (
        "layer",
        "element_type",
        "authoritative_count",
        "deterministic",
        "parsed_count",
        "note",
    ):
        assert key in data
