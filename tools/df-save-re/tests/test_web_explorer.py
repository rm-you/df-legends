"""Tests for the legends explorer web UI."""

from __future__ import annotations

from pathlib import Path

import pytest
from fastapi.testclient import TestClient

from df_save_re.db.store import import_world_dat
from df_save_re.web import create_app
from tests.fixture_paths import resolve_fixture


@pytest.fixture
def explorer_client(tmp_path: Path) -> TestClient:
    world_dat = resolve_fixture("small-retired", "world.dat")
    if world_dat is None:
        pytest.skip("small-retired/world.dat fixture not available")
    data_dir = tmp_path / "legends"
    import_world_dat(world_dat, data_dir=data_dir)
    app = create_app(data_dir=data_dir)
    return TestClient(app)


def test_health(explorer_client: TestClient) -> None:
    response = explorer_client.get("/health")
    assert response.status_code == 200
    payload = response.json()
    assert payload["status"] == "ok"
    assert payload["worlds"] == 1


def test_index_lists_world(explorer_client: TestClient) -> None:
    response = explorer_client.get("/")
    assert response.status_code == 200
    assert "Namushul" in response.text


def test_world_overview(explorer_client: TestClient) -> None:
    response = explorer_client.get("/world/namushul")
    assert response.status_code == 200
    assert "Namushul" in response.text
    assert "Civilizations" in response.text


def test_world_overview_extraction_status(explorer_client: TestClient) -> None:
    response = explorer_client.get("/world/namushul")
    assert response.status_code == 200
    # Engine layer-status panel surfaces authoritative counts + walk status.
    assert "Extraction status" in response.text
    assert "events_death" in response.text
    assert "figures" in response.text
    assert ("deterministic" in response.text) or ("desync" in response.text)


def test_entities_and_cross_links(explorer_client: TestClient) -> None:
    response = explorer_client.get("/world/namushul/entities?named_only=true")
    assert response.status_code == 200
    assert "/world/namushul/entities/" in response.text

    list_response = explorer_client.get("/world/namushul/entities")
    assert list_response.status_code == 200
    # Follow first entity link from table
    assert 'href="/world/namushul/entities/' in list_response.text


def test_sites_filter_by_civ(explorer_client: TestClient) -> None:
    entities = explorer_client.get("/world/namushul/entities")
    assert entities.status_code == 200
    sites = explorer_client.get("/world/namushul/sites")
    assert sites.status_code == 200
    assert "/world/namushul/sites/" in sites.text


def test_figures_and_history(explorer_client: TestClient) -> None:
    figures = explorer_client.get("/world/namushul/figures")
    assert figures.status_code == 200
    history = explorer_client.get("/world/namushul/history")
    assert history.status_code == 200
    assert "History layer" in history.text


def test_unknown_world_404(explorer_client: TestClient) -> None:
    response = explorer_client.get("/world/does-not-exist")
    assert response.status_code == 404
