"""Tests for web query helpers."""

from __future__ import annotations

from df_save_re.web.params import build_page_query


def test_build_page_query_omits_empty():
    assert build_page_query(page=2) == "?page=2"
    assert build_page_query(page=2, year=None, event_type="") == "?page=2"
    assert build_page_query(all_events=True, include_preworld=False) == "?all_events=1"


def test_build_page_query_includes_filters():
    qs = build_page_query(
        page=3,
        event_type="hist_figure_died",
        year=142,
        all_events=True,
    )
    assert "page=3" in qs
    assert "event_type=hist_figure_died" in qs
    assert "year=142" in qs
    assert "all_events=1" in qs
    assert qs.endswith("all_events=1") or "&year=&" not in qs
