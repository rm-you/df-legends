"""Deterministic world_history walk: locate + full events/figures/collections/eras."""

from __future__ import annotations

import pytest

from df_save_re.deserializers.world_history_walk import (
    locate_world_history,
    walk_world_history,
)
from df_save_re.save_preamble import resolve_save_payload
from fixture_paths import resolve_fixture

pytestmark = [pytest.mark.slow, pytest.mark.timeout(900)]


def test_locate_without_ratio_guesses(monkeypatch):
    """Exhaustive fallback must locate when fixture-tuned ratio guesses are disabled."""
    path = resolve_fixture("small-retired", "world.dat")
    if path is None:
        pytest.skip("fixture missing: small-retired/world.dat")
    resolved = resolve_save_payload(path)
    monkeypatch.setattr(
        "df_save_re.deserializers.world_history_walk._event_count_guesses",
        lambda _header: [],
    )
    lm = locate_world_history(
        resolved.payload, resolved.preamble.header, save_version=resolved.save_version
    )
    assert lm is not None
    assert lm.event_count == 87666
    assert lm.figure_count == resolved.preamble.header.max_ids[8] + 1


def test_full_walk_namushul():
    path = resolve_fixture("small-retired", "world.dat")
    if path is None:
        pytest.skip("fixture missing: small-retired/world.dat — run scripts/fetch_fixtures.py")
    resolved = resolve_save_payload(path)
    payload = resolved.payload
    header = resolved.preamble.header
    sv = resolved.save_version

    lm = locate_world_history(payload, header, save_version=sv)
    assert lm is not None, "deterministic location failed"
    assert lm.figure_count == header.max_ids[8] + 1

    counts = {"events": 0, "figures": 0, "collections": 0, "eras": 0}
    event_ids: list[int] = []

    def on_event(idx, tag, body_off):
        counts["events"] += 1

    def on_figure(slot, fh, tail):
        counts["figures"] += 1

    def on_collection(idx, rec):
        counts["collections"] += 1
        event_ids.append(rec["id"])

    def on_era(idx, rec):
        counts["eras"] += 1

    final = walk_world_history(
        payload,
        header,
        save_version=sv,
        landmarks=lm,
        on_event=on_event,
        on_figure=on_figure,
        on_collection=on_collection,
        on_era=on_era,
    )

    assert counts["events"] == lm.event_count
    assert counts["figures"] == lm.figure_count
    assert counts["collections"] == final.collection_count
    assert counts["collections"] > 0
    assert counts["eras"] >= 1
    # Collection ids must be the dense 0..n-1 sequence (vector index == id).
    assert event_ids == list(range(len(event_ids)))
