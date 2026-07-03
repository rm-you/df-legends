"""Tests for the legends explorer web UI."""

from __future__ import annotations

import time
from pathlib import Path

import pytest
from fastapi.testclient import TestClient

from df_save_re.db.store import import_world_dat
from df_save_re.web import create_app
from tests.fixture_paths import resolve_fixture


pytestmark = [pytest.mark.slow, pytest.mark.timeout(600)]


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
    overview = explorer_client.get("/world/namushul")
    assert overview.status_code == 200
    assert "Chronicle" in overview.text
    assert "Extraction debug" not in overview.text

    history = explorer_client.get("/world/namushul/history?debug=1")
    assert history.status_code == 200
    assert "Layer walk status" in history.text


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
    history = explorer_client.get("/world/namushul/history?debug=1")
    assert history.status_code == 200
    assert "Layer walk status" in history.text


def test_narrative_routes(explorer_client: TestClient) -> None:
    chronicle = explorer_client.get("/world/namushul/chronicle")
    assert chronicle.status_code == 200
    assert "World chronicle" in chronicle.text

    events = explorer_client.get("/world/namushul/events?event_type=hist_figure_died")
    assert events.status_code == 200
    assert "Summary" in events.text
    assert "died" in events.text

    search = explorer_client.get("/world/namushul/search?q=Namushul")
    assert search.status_code == 200
    assert "Search" in search.text

    event_detail = explorer_client.get("/world/namushul/events/1")
    if event_detail.status_code == 200:
        assert "lead-summary" in event_detail.text
        assert "Raw fields" not in event_detail.text
        assert "All fields" not in event_detail.text

    event_debug = explorer_client.get("/world/namushul/events/1?debug=1")
    if event_debug.status_code == 200:
        assert "Raw fields" in event_debug.text
        assert "All fields" in event_debug.text

    chronicle_page2 = explorer_client.get("/world/namushul/chronicle?page=2&year=")
    assert chronicle_page2.status_code == 200
    assert "World chronicle" in chronicle_page2.text


def test_unknown_world_404(explorer_client: TestClient) -> None:
    response = explorer_client.get("/world/does-not-exist")
    assert response.status_code == 404


@pytest.fixture
def saves_explorer_client(tmp_path: Path) -> TestClient:
    import shutil

    world_dat = resolve_fixture("small-retired", "world.dat")
    if world_dat is None:
        pytest.skip("small-retired/world.dat fixture not available")
    saves_dir = tmp_path / "saves"
    region_dir = saves_dir / "region-a"
    region_dir.mkdir(parents=True)
    shutil.copy(world_dat, region_dir / "world.dat")
    data_dir = tmp_path / "legends"
    data_dir.mkdir()
    app = create_app(data_dir=data_dir, saves_dir=saves_dir)
    return TestClient(app)


def test_index_shows_region_table(saves_explorer_client: TestClient) -> None:
    response = saves_explorer_client.get("/")
    assert response.status_code == 200
    assert "Import from save regions" in response.text

    api = saves_explorer_client.get("/api/regions")
    assert api.status_code == 200
    rows = api.json()
    assert len(rows) == 1
    assert rows[0]["region_name"] == "region-a"
    assert rows[0]["world_name"] == "Namushul"
    assert rows[0]["status"] == "importable"


@pytest.mark.timeout(600)
def test_api_import_region(saves_explorer_client: TestClient) -> None:
    start = saves_explorer_client.post("/api/regions/region-a/import")
    assert start.status_code == 202
    payload = start.json()
    assert payload["state"] == "running"

    job = payload
    for _ in range(180):
        time.sleep(1)
        status = saves_explorer_client.get("/api/regions/region-a/import")
        assert status.status_code == 200
        job = status.json()
        if job["state"] == "done":
            break
        if job["state"] == "error":
            pytest.fail(job.get("error", "import failed"))
    else:
        pytest.fail(f"import did not complete in time (last state: {job.get('state')})")

    assert job["slug"] == "namushul"
    overview = saves_explorer_client.get("/world/namushul")
    assert overview.status_code == 200
    assert "Namushul" in overview.text

    index = saves_explorer_client.get("/")
    assert "Ready" in index.text
    assert 'href="/world/namushul"' in index.text
